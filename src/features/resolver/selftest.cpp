// Self-test for the interface / pattern / netvar resolver (Stage 3.11).
//
// Covers the four recovered mechanics: VMT hook installation and its refusal
// paths, the beam and time pattern scans, the CViewRender RTTI verification, and
// the netvar-store manager/probe/compare logic. Addresses and constants are
// asserted from the dump.

#include <cstdint>
#include <cstdio>
#include <cstring>

#include "iface.h"
#include "netstore.h"
#include "netvars.h"
#include "patterns.h"
#include "../lua/luanet.h"
#include "../hvh/antiaim.h"
#include "../hvh/lagcomp.h"
#include "../hvh/resolver.h"
#include "../hvh/visualize.h"
#include "vmt.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckInt(int actual, int expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %d, want %d)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

using namespace sf::resolver;

} // namespace

int main()
{
    // ------------------------------------------------------------------- VMT
    {
        VmtHook hook;
        bool fail = false;

        Check(!hook.InstallChl(fail), "an absent CHLClient is not hooked");
        Check(fail, "the absent CHLClient logs a failure");

        hook.chl.present = true;
        Check(!hook.InstallChl(fail), "a non-code slot is not hooked");
        Check(fail, "a non-code slot logs a failure");

        hook.chl.isCode = true;
        Check(hook.InstallChl(fail) && !fail, "a code slot is hooked");
        Check(hook.chl.installed && hook.chl.original != nullptr,
              "the original slot pointer is stored");

        Check(!hook.InstallPred(fail) && fail, "an absent CPrediction fails");
        hook.pred.present = true;
        hook.pred.isCode = true;
        Check(hook.InstallPred(fail) && !fail, "CPrediction installs when valid");

        CheckInt(kChlSlot, 0x23, "CHLClient FrameStageNotify is slot 0x23");
        CheckInt(kPredSlot, 0x11, "CPrediction RunCommand is slot 0x11");
        CheckInt(kChlSlotOffset, 0x118, "the CHLClient vtable byte offset is 0x118");
        CheckInt(kPredSlotOffset, 0x88, "the CPrediction vtable byte offset is 0x88");
        CheckInt(static_cast<int>(VmtHook::ProtectFlag()), 0x40,
                 "the swap uses PAGE_EXECUTE_READWRITE (0x40)");
        CheckInt(kNodeSize, 0x30, "the hook node is 0x30 bytes");
        CheckInt(static_cast<int>(kNodeTag), 0x0101, "the node tag is 0x0101");
    }

    // -------------------------------------------------------------- patterns
    {
        BeamPatterns beam;
        Check(!beam.ready, "a fresh beam scan is not ready");
        beam.Set(true, true, true);
        Check(beam.ready && !beam.incompleteWarned, "all three signatures make it ready");
        beam.Set(true, true, false);
        Check(!beam.ready && beam.incompleteWarned, "a missing signature warns");

        TimePattern time;
        CheckInt(time.Collect(0), 0, "no copies is zero");
        CheckInt(time.Collect(6), 4, "the copy list is capped at four");
        CheckInt(TimePattern::HooksToInstall(6), 2, "at most two time hooks are installed");
        CheckInt(TimePattern::HooksToInstall(1), 1, "one copy installs one hook");
        CheckInt(TimePattern::HooksToInstall(0), 0, "no copies installs nothing");

        // ResolveNetTime: match + 8 + rel32(match + 4). The rel32 is 0x10, so the
        // result is match + 0x18.
        unsigned char buf[16] = {};
        const uint32_t rel = 0x10;
        std::memcpy(buf + 4, &rel, 4);
        const uint64_t base = reinterpret_cast<uint64_t>(buf);
        CheckInt(static_cast<int>(TimePattern::ResolveNetTime(base) - base), 0x18,
                 "the net-time pointer is match+8+rel32");
        Check(TimePattern::ResolveNetTime(0) == 0, "a null match resolves to zero");
    }

    // ------------------------------------------------------------------ iface
    {
        const uintptr_t base = 0x10000000;
        ViewRenderCheck good = ViewRenderCheck::Check(base + 0x2000, base, base + 0x100000,
                                                      true, true, true);
        Check(good.Verified(), "an in-range readable named object verifies");

        ViewRenderCheck out = ViewRenderCheck::Check(base - 0x10, base, base + 0x100000,
                                                     true, true, true);
        Check(!out.Verified(), "an object below the module is refused");

        ViewRenderCheck straddle = ViewRenderCheck::Check(base + 0x100000 - 0x40, base,
                                                          base + 0x100000, true, true, true);
        Check(!straddle.Verified(), "an object that overruns the module is refused");

        ViewRenderCheck wrongName = ViewRenderCheck::Check(base + 0x2000, base, base + 0x100000,
                                                           true, true, false);
        Check(!wrongName.Verified(), "a wrong RTTI name is refused");

        CheckInt(kObjectSize, 0x130, "the object read size is 0x130");
        CheckInt(kSlotRender, 0x28, "Render is at +0x28");
        CheckInt(kSlotRenderView, 0x30, "RenderView is at +0x30");
        CheckInt(kSlotPreHud, 0x128, "PreHUD is at +0x128");
        CheckInt(kRttiBackOffset, 8, "the RTTI locator is at object - 8");
    }

    // --------------------------------------------------------------- netstore
    {
        Check(NetStore::Accept(0) == NetStore::ManagerResult::NotFound,
              "zero candidates leaves the manager unresolved");
        Check(NetStore::Accept(1) == NetStore::ManagerResult::Resolved,
              "exactly one candidate resolves the manager");
        Check(NetStore::Accept(2) == NetStore::ManagerResult::NotUnique,
              "two candidates is not unique");

        NetStore::Stats stats;
        Check(!NetStore::Account(stats, 0, 0, 0), "an all-zero first pass is silent");
        Check(NetStore::Account(stats, 5, 0, 1), "a changed agree count logs");
        Check(!NetStore::Account(stats, 5, 0, 1), "an unchanged pass is silent");
        Check(NetStore::Account(stats, 5, 2, 1), "a mismatch always logs");
        CheckInt(stats.lastMismatch, 2, "the last mismatch count is stored");

        Check(NetStore::RowMatches(4, true, true), "a matching type-4 row agrees");
        Check(!NetStore::RowMatches(3, true, true), "a non-string row is n/a");
        Check(!NetStore::RowMatches(4, false, true), "a length mismatch disagrees");
        Check(!NetStore::RowMatches(4, true, false), "a byte mismatch disagrees");

        uint32_t deadline = 0;
        Check(NetStore::ProbeDue(1000, deadline), "a zero deadline fires immediately");
        CheckInt(static_cast<int>(deadline), 6000, "the deadline moves 5000 ms forward");
        Check(!NetStore::ProbeDue(2000, deadline), "inside the interval nothing fires");
        Check(NetStore::ProbeDue(6000, deadline), "the deadline firing re-arms");

        CheckInt(NetStore::PlayersToProbe(64), 2, "at most two players are probed");
        CheckInt(NetStore::PlayersToProbe(1), 1, "a single client probes one");

        CheckInt(kEntryCount, 0x81, "the cleared entry count is 0x81");
        CheckInt(kEntryStride, 0x50, "the entry stride is 0x50");
        CheckInt(kTypeString, 4, "string rows are type 4");
        CheckInt(kMaxCandidates, 8, "the scan keeps at most eight candidates");
        CheckInt(static_cast<int>(kProbeIntervalMs), 5000, "the probe interval is 5000 ms");
    }

    // -------------------------------------------------------------- addresses
    {
        Check(kInstallAddr == 0x1801ecae0ULL, "the VMT installer keeps 0x1801ecae0");
        Check(kChlStub == 0x1801ec910ULL, "the CHLClient stub keeps 0x1801ec910");
        Check(kPredStub == 0x1801ec9d0ULL, "the CPrediction stub keeps 0x1801ec9d0");
        Check(kBeamScanAddr == 0x1800200b0ULL, "the beam scan keeps 0x1800200b0");
        Check(kNetScanAddr == 0x1800713d0ULL, "the net scan keeps 0x1800713d0");
        Check(kTimeScanAddr == 0x1801f7a80ULL, "the time scan keeps 0x1801f7a80");
        Check(kViewRenderVerify == 0x180018770ULL, "the verifier keeps 0x180018770");
        Check(kManagerScan == 0x18006c9b0ULL, "the manager scan keeps 0x18006c9b0");
        Check(kEntityCompare == 0x18006d430ULL, "the compare keeps 0x18006d430");
        Check(kReadToggle == 0x180103c10ULL, "the read toggle keeps 0x180103c10");
        Check(kProbeTick == 0x180103d60ULL, "the probe keeps 0x180103d60");
        Check(kRoot == 0x93fd561a96ab0c67ULL, "the shared config root is unchanged");
        Check(kReadKey == 0x1efab65b168823bbULL, "the native-read key is unchanged");
        Check(kProbeKey == 0xf13ca7dd4fb3e293ULL, "the native-probe key is unchanged");
    }

    // ------------------------------------------------- new 3.11 bodies
    {
        // 0x1801f7d00 host-time scan
        HostTimeScan host;
        Check(!host.Ready(), "a fresh host-time scan is not ready");
        Check(HostTimeScan::Adjacent(0x1000, 0x1004), "globals four bytes apart pass");
        Check(!HostTimeScan::Adjacent(0x1000, 0x1008), "a wider gap is refused");
        Check(HostTimeScan::Adjacent(0, 0x1008), "a missing global skips the adjacency test");
        host.accumulate = true;
        host.frametime = true;
        host.unbounded = true;
        Check(host.Ready(), "all three signatures make the host-time scan ready");
        CheckInt(HostTimeScan::kGlobalGap, 4, "the frametime globals are checked at +4");

        // 0x1801f7fa0 fake-ping scan
        FakePingScan ping;
        Check(!ping.Apply(false, true), "one missing hook disables fake ping");
        Check(!ping.enabled, "fake ping stays disabled on a missing signature");
        Check(ping.Apply(true, true), "both hooks enable fake ping");
        Check(FakePingScan::kEnabledFlag == 0x1803facfaULL, "the fake-ping flag global keeps its address");

        // 0x1801f9180 hook table
        CheckInt(kHookTableCount, 21, "the setup pass installs 21 hook entries");
        Check(kHookTable[0].interfaceGlobal == 0x1803fa5e0ULL && kHookTable[0].slot == 0x25,
              "the first D3D entry is slot 0x25 on the device");
        Check(kHookTable[13].stub == 0x1801f1b80ULL,
              "the ViewRender slot-6 stub is 0x1801f1b80");
        Check(kHookTable[19].interfaceGlobal == 0x1803fa678ULL && kHookTable[19].slot == 5,
              "LuaShared slot 5 is the CloseLuaInterface hook");
        bool anyNegativeOffset = false;
        for (int i = 0; i < kHookTableCount; ++i)
            if (kHookTable[i].byteOffset < 0)
                anyNegativeOffset = true;
        Check(anyNegativeOffset, "the Engine slots are installed by index, not byte offset");

    }

    // ------------------------------------------------- netvars (0x18002b540)
    {
        CheckInt(static_cast<int>(Fnv1a64("")), static_cast<int>(kHashBasis),
                 "FNV-1a over an empty key is the basis");
        const uint64_t one = Fnv1a64("a");
        Check(one == ((kHashBasis ^ 0x61ULL) * kHashPrime), "FNV-1a matches the hand computation");
        Check(Fnv1a64("b") != Fnv1a64("a"), "different keys hash differently");

        CheckInt(NetvarsConfig::ClampSources(-1), 0, "a negative source count clamps to zero");
        CheckInt(NetvarsConfig::ClampSources(3), 3, "a normal source count is kept");
        CheckInt(NetvarsConfig::ClampSources(9), 8, "the source count clamps at eight");
        CheckInt(NetvarsConfig::ClampKeys(0x11), 0x10, "the key count clamps at 0x10");

        Check(NetvarsConfig::ParseBool("1"), "\"1\" parses true");
        Check(NetvarsConfig::ParseBool("true"), "\"true\" parses true");
        Check(!NetvarsConfig::ParseBool("0"), "\"0\" parses false");
        Check(!NetvarsConfig::ParseBool(nullptr), "a missing value parses false");

        NetvarsConfig v1;
        v1.version = 1;
        Check(v1.NeedsMigration(), "version 1 needs the v6 migration");
        NetvarsConfig v6;
        v6.version = 6;
        Check(!v6.NeedsMigration(), "version 6 passes the migration");
        Check(NetvarsConfig::ShouldReseed(true, true), "an empty valid row is re-seeded");
        Check(!NetvarsConfig::ShouldReseed(false, true), "a named row is left alone");
        Check(!NetvarsConfig::ShouldReseed(true, false), "an invalid row is skipped");

        CheckInt(kMutexSentinel, 0x7fffffff, "the recursion sentinel is 0x7fffffff");
        CheckInt(kCurrentVersion, 6, "the netvar schema version is 6");
        CheckInt(kMaxKeys, 0x10, "the per-source key cap is 0x10");
        Check(kNetvarsBuilder == 0x18002b540ULL, "the builder keeps 0x18002b540");
        Check(kNameContainer == 0x1803ebb90ULL, "the name container is 0x1803ebb90");
        Check(kGroupContainer == 0x1803e9ae8ULL, "the group container is 0x1803e9ae8");
        Check(kJobContainer == 0x1803ea258ULL, "the job container is 0x1803ea258");
        Check(kHostScan == 0x1801f7d00ULL, "the host-time scan keeps 0x1801f7d00");
        Check(kPingScan == 0x1801f7fa0ULL, "the fake-ping scan keeps 0x1801f7fa0");
        Check(kSetupPass == 0x1801f9180ULL, "the setup pass keeps 0x1801f9180");
        Check(kInterfaceDump == 0x180017150ULL, "the interface dump keeps 0x180017150");
    }

    // ------------------------------------------- Lua tag surfaces (3.10)
    {
        using namespace sf::lua;
        CheckInt(kLuaTagBodies, 40, "the Lua tags cover forty bodies");
        CheckInt(kLuaNetBodies, 35, "LUANET covers thirty-five bodies");
        CheckInt(kLuaEditorBodies, 4, "LUAEDITOR covers four bodies");
        CheckInt(kLuaFeatBodies, 1, "LUAFEAT covers one body");

        CheckInt(kSetterCount, 30, "the channel table exposes thirty tagged setters");
        Check(kSetters[0].address == 0x18005bcf0ULL,
              "SetRate is 0x18005bcf0");
        Check(kSetters[kSetterCount - 1].address == 0x18005dee0ULL,
              "SetLastCommandAck is 0x18005dee0");
        CheckInt(kSetters[kSetterCount - 1].offset, 0x20b8c,
                 "last_command_ack sits at +0x20b8c on BaseClientState");
        CheckInt(kSetters[0].offset, 0xd8, "SetRate uses netchan slot 0xd8");
        CheckInt(kSetters[20].offset, 0x1f0, "RequestFile uses slot 0x1f0");

        CheckInt(kLastOutgoingOffset, 0x20b84, "lastoutgoingcommand is +0x20b84");
        CheckInt(kChokedOffset, 0x20b88, "chokedcommands is +0x20b88");
        Check(kBaseClientState == 0x1803fa620ULL,
              "the setters read BaseClientState at 0x1803fa620");
        Check(kEngineClient == 0x1803fa668ULL,
              "the channel getter is on VEngineClient015 at +0x240");
        CheckInt(kBlockMutexSentinel, 0x7fffffff, "the block map sentinel is 0x7fffffff");
        CheckInt(kBlockEntryCount, 8, "BlockMessage seeds eight message names");
        Check(kBlockEntries[0].type == 1 && kBlockEntries[7].type == 14,
              "the block table spans types 1 through 14");
        Check(kBlockEntries[0].name != nullptr &&
              std::strcmp(kBlockEntries[0].name, "Disconnect") == 0,
              "the first blocked message is Disconnect");
        Check(kChannelTable == 0x1800594e0ULL, "the channel table is 0x1800594e0");
        Check(kSendMessage == 0x18005d280ULL, "SendMessage is 0x18005d280");
        Check(kNetShouldSend == 0x18006f280ULL, "Net_ShouldSend is 0x18006f280");
        Check(kClMoveTrampoline == 0x1801f84d0ULL, "the CL_Move trampoline is 0x1801f84d0");
        Check(kSetSendPacket == 0x1803ff938ULL, "the bSendPacket gate is 0x1803ff938");
        Check(kBlockMutex == 0x1803e7760ULL, "the block map mutex is 0x1803e7760");

        CheckInt(kFeatureTableCount, 8, "LUAFEAT opens eight tables");
        CheckInt(kFeatureApiCount, 20, "the recovered LUAFEAT API rows number twenty");
        Check(kFeatureTables == 0x1800e8340ULL, "feature registration keeps 0x1800e8340");
        Check(kFeatureApis[0].fn == 0x1800e8bf0ULL,
              "aimbot.IsActive is 0x1800e8bf0");

        Check(kEditorInit == 0x1800ef850ULL, "the state initialiser is 0x1800ef850");
        Check(kEditorRunScript == 0x1800ec770ULL, "RunScript is 0x1800ec770");
        Check(kEditorChunkFail == 0x1800f0ab0ULL, "the chunk-failure drain is 0x1800f0ab0");
        Check(kEditorWindow == 0x1800f1200ULL, "the editor window is 0x1800f1200");
        CheckInt(kMaxStateName, 3, "the editor offers three Lua states");

        // Registration-table readers and companions.
        CheckInt(kReaderCount, 46, "the channel table registers 46 reader callees");
        CheckInt(kCompanionThunkCount, 2, "two registration slots are thunks");
        CheckInt(kRegistrationCalleeCount, 48, "the untagged registration set has 48 callees");
        CheckInt(kStateReaderCount, 4, "four readers target BaseClientState");
        Check(kReaders[0].address == 0x18005a260ULL &&
              std::strcmp(kReaders[0].api, "GetName") == 0,
              "the reader order starts at GetName 0x18005a260");
        Check(kReaders[40].address == 0x18005bc20ULL,
              "the channel getter range ends at GetNumBitsWritten 0x18005bc20");
        Check(kReaders[41].address == 0x18005be60ULL &&
              kReaders[41].kind == ReaderKind::Trap,
              "GetSendPacket follows the range and uses the 0x1803ff940 trap");
        Check(kReaders[42].address == 0x18005dc00ULL,
              "the clientstate readers start at GetLastOutgoingCommand");
        Check(kReaders[45].address == 0x18005dd50ULL &&
              kReaders[45].target == 0x20b90,
              "GetCommandAck reads BaseClientState +0x20b90");
        CheckInt(kCommandAckOffset, 0x20b90, "the command-ack field is +0x20b90");

        bool monotonic = true;
        for (int i = 1; i < kReaderCount; ++i)
            if (kReaders[i].address <= kReaders[i - 1].address)
                monotonic = false;
        Check(monotonic, "the reader table preserves registration slot order");

        int kindCounts[7] = {};
        int inRange = 0;
        for (int i = 0; i < kReaderCount; ++i) {
            kindCounts[static_cast<int>(kReaders[i].kind)]++;
            if (kReaders[i].address >= 0x18005a260ULL &&
                kReaders[i].address <= 0x18005bc20ULL)
                ++inRange;
        }
        CheckInt(inRange, 41, "41 readers occupy 0x18005a260-0x18005bc20");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::String)], 2,
                 "two string readers");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::Bool)], 7,
                 "seven boolean readers");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::Float)], 5,
                 "five float readers");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::Int)], 16,
                 "sixteen integer readers");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::Raw)], 11,
                 "eleven raw-field readers");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::Trap)], 1,
                 "one trap reader");
        CheckInt(kindCounts[static_cast<int>(ReaderKind::State)], 4,
                 "four BaseClientState readers");

        Check(kCompanionThunks[0].address == 0x18005d160ULL &&
              kCompanionThunks[0].target == 0x18005cd20ULL &&
              kCompanionThunks[0].size == 7,
              "BlockMessage's slot is the 7-byte thunk to 0x18005cd20");
        Check(kCompanionThunks[1].address == 0x18005d610ULL &&
              kCompanionThunks[1].target == 0x18005d280ULL &&
              kCompanionThunks[1].size == 7,
              "SendMessage's slot is the 7-byte thunk to 0x18005d280");
    }

    // ------------------------------------------------ Visualize (3.8)
    {
        namespace viz = sf::hvh;
        CheckInt(viz::kRecoveredVisualizeBodies, 1,
                 "the Visualize open set is one render body");
        CheckInt(viz::kVisualizeBodySize, 5584, "the render body is 5584 bytes");
        Check(viz::kVisualizeVfunc06 == 0x1800bf160ULL,
              "the render body is 0x1800bf160");
        Check(viz::kPanicFlag == 0x1804236a5ULL,
              "the panic flag is 0x1804236a5");
        Check(viz::kBoxGate == 0x1800bf0b0ULL, "the box gate is 0x1800bf0b0");
        Check(viz::kLbyGate == 0x1800bf010ULL, "the LBY gate is 0x1800bf010");
        Check(viz::kPlayerGate == 0x1800bf060ULL, "the player gate is 0x1800bf060");
        Check(viz::kSkeletonGate == 0x1800bedb0ULL,
              "the skeleton gate is 0x1800bedb0");
        Check(viz::kSkeletonPred == 0x1800bed60ULL,
              "the skeleton predicate is 0x1800bed60");
        Check(viz::kProjection == 0x180021ac0ULL,
              "projection is the 0x180021ac0 wrapper");
        Check(viz::kProjectLock == 0x1804260d8ULL,
              "the projection lock is 0x1804260d8");
        CheckInt(viz::kMaxSlot, 0x81, "the player loop caps at 0x81");
        CheckInt(viz::kSlotStride, 0x168, "the per-slot stride is 0x168");
        Check(viz::kBoxColorActive == 0xeb82eb78u &&
              viz::kBoxColorInactive == 0x6e7d7d7du,
              "the box colors are 0xeb82eb78 / 0x6e7d7d7d");
        Check(viz::kSkeletonForward == 0xff00ff00u &&
              viz::kSkeletonRight == 0xff0000ffu,
              "the skeleton colors are 0xff00ff00 / 0xff0000ff");
        Check(viz::VisualizeFeature::SectionEnabled(true, false, false, false, 0) &&
              !viz::VisualizeFeature::SectionEnabled(true, false, false, false, 1),
              "the four Visualize sections are independently gated");
    }

    // ------------------------------------------- HVH 3.8 residuals
    {
        namespace aa = sf::hvh;
        namespace lc = sf::hvh;

        // The alive cache is a 0x80-record block; DAT_180561252 is field +0x162.
        Check(aa::kResolverCacheBase == 0x1805610f0ULL,
              "the resolver cache starts at 0x1805610f0");
        Check(aa::kResolverCacheEnd == 0x18056c658ULL,
              "the resolver cache ends at 0x18056c658");
        CheckInt(aa::kResolverCacheRecords, 0x81,
                 "the cache initializer lays out 0x81 records");
        CheckInt(aa::kResolverCacheBytes, 0xB568,
                 "0x81 records at 0x168 bytes is 0xB568");
        Check(aa::kResolverCacheEnd ==
                  aa::kResolverCacheBase + aa::kResolverCacheBytes,
              "the cache end is base + 0xB568");
        CheckInt(aa::kAliveFlagOffset, 0x162,
                 "the alive byte is at +0x162 inside a record");
        Check(aa::kAliveFlag == aa::kResolverCacheBase + aa::kAliveFlagOffset,
              "DAT_180561252 is cache base + 0x162");
        Check(aa::kCacheInitializer == 0x1800bc790ULL,
              "the initializer bounding the cache is 0x1800bc790");

        // Yaw modes 3/7/8/9 and the desync state block.
        Check(aa::kKeyBodyOffset == 0x423a90540ddbc421ULL,
              "the body-offset key is 0x423a90540ddbc421");
        Check(aa::kKeyDirectionToggle == 0x52e8e7a5c772ca6cULL,
              "the direction toggle key is 0x52e8e7a5c772ca6c");
        Check(aa::kKeyDirectionMode == 0x2e7b87382f9b768ULL,
              "the direction mode key is 0x2e7b87382f9b768");
        Check(aa::kDirectionToggle == 0x1800bd7e0ULL &&
                  aa::kDirectionCone == 0x1800bd570ULL &&
                  aa::kDirectionAlternate == 0x1800bd320ULL,
              "the direction helpers are 0x1800bd7e0 / 0x1800bd570 / 0x1800bd320");
        Check(aa::kDirectionStep == 45.f,
              "the direction step is 45 degrees");
        CheckInt(aa::kYawMode3Min, 1, "yaw mode 3 clamps its amplitude at 1");
        CheckInt(aa::kYawMode3Max, 18, "yaw mode 3 clamps its amplitude at 18");
        CheckInt(aa::kBodyJitterMin, 0, "the body jitter floor is 0");
        CheckInt(aa::kBodyJitterMax, 60, "the body jitter ceiling is 60");
        CheckInt(aa::kConfigJitterMin, 10, "modes 2/6 clamp configured jitter at 10");
        CheckInt(aa::kConfigJitterMax, 180, "modes 2/6 clamp configured jitter at 180");
        Check(aa::kBodyYawGate == 0x1803db430ULL,
              "the body-yaw gate pointer is 0x1803db430");
        Check(aa::kBodyYawGateByte == 0x1803da694ULL,
              "the body-yaw gate points at 0x1803da694");

        Check(aa::kDesyncBase == 0x180409cc8ULL,
              "the desync state block starts at 0x180409cc8");
        Check(aa::kDesyncBody == 0x180409ce8ULL,
              "the BodyDesync record is at 0x180409ce8");
        CheckInt(aa::kDesyncBodySize, 12, "BodyDesync is 12 bytes");
        CheckInt(aa::kOffSkips, 0x00, "skips is at +0x00");
        CheckInt(aa::kOffYawLatch, 0x04, "the latched yaw is at +0x04");
        CheckInt(aa::kOffSavedBody, 0x08, "the saved record is at +0x08");
        CheckInt(aa::kOffRetook, 0x14, "retook is at +0x14");
        CheckInt(aa::kOffMode, 0x18, "the desync mode is at +0x18");
        CheckInt(aa::kOffApplied, 0x1c, "the applied flag is at +0x1c");
        CheckInt(aa::kOffBody, 0x20, "BodyDesync is at +0x20");
        CheckInt(aa::kOffSteps, 0x2c, "steps is at +0x2c");
        CheckInt(aa::kOffFirstBody, 0x30, "the first-body flag is at +0x30");
        CheckInt(aa::kOffBodyLatch, 0x31, "the body latch is at +0x31");
        CheckInt(aa::kOffMirror, 0x32, "the mirror flag is at +0x32");
        CheckInt(aa::kOffAttackTicks, 0x34, "attack ticks is at +0x34");
        CheckInt(aa::kOffYawPending, 0x38, "the yaw latch is at +0x38");
        CheckInt(aa::kOffBodyTarget, 0x00, "BodyDesync target is at +0x00");
        CheckInt(aa::kOffBodyShown, 0x04, "BodyDesync shown is at +0x04");
        CheckInt(aa::kOffBodyInit, 0x08, "BodyDesync init is at +0x08");
        CheckInt(aa::kOffBodyNoClamp, 0x09, "BodyDesync no-clamp is at +0x09");
        Check(aa::kDesyncBase + aa::kOffBody == aa::kDesyncBody,
              "the record offset and absolute address agree");
        CheckInt(aa::kWidthSkips, 4, "skips is 4 bytes");
        CheckInt(aa::kWidthSavedBody, 12, "the saved record is 12 bytes");
        CheckInt(aa::kWidthMode, 4, "the desync mode is 4 bytes");
        CheckInt(aa::kWidthFirstBody, 1, "the first-body flag is 1 byte");
        CheckInt(aa::kWidthBodyLatch, 1, "the body latch is 1 byte");
        CheckInt(aa::kWidthMirror, 1, "the mirror flag is 1 byte");
        CheckInt(aa::kWidthAttackTicks, 4, "attack ticks is 4 bytes");
        CheckInt(aa::kWidthYawPending, 1, "the yaw latch is 1 byte");

        // LagComp's failure string: address, length, bytes and only reference.
        Check(lc::kFailureString == 0x18034c310ULL,
              "the LagComp failure string is 0x18034c310");
        CheckInt(lc::kFailureStringLen, 97,
                 "the failure string is 97 bytes before the NUL");
        CheckInt(static_cast<int>(std::strlen(lc::kFailureText)), 97,
                 "the recorded failure text is 97 bytes");
        Check(std::strstr(lc::kFailureText, "\xE2\x80\x94") != nullptr,
              "the failure string uses the UTF-8 en dash");
        Check(lc::kFailureSite == 0x1800c0db0ULL,
              "the failure string is owned by 0x1800c0db0");
        Check(lc::kFailureLea == 0x1800c1034ULL,
              "its only reference is the lea at 0x1800c1034");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "RESOLVER SELFTEST PASS" : "RESOLVER SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
