#pragma once
// Lua scripting surface (Stages 3.10 / 3.11 follow-up) — [LUANET], [LUAEDITOR],
// [LUAFEAT].
//
// Every [LUANET] registration thunk in 0x1800594e0 follows the same shape:
//
//   plVar = FUN_180039770();                  // 0x180039770, current Lua interface
//   if (plVar && plVar[1] == state) {         // state must match the hook state
//     if (!DAT_1803fa668) vtable = *plVar;    // EngineClient015 (0x1803fa668)
//     else net = (*(DAT_1803fa668 + 0x240))();// GetNetChannel
//     value = (*(lua + 0x160))(lua, 1);       // lua_tonumber
//     ++DAT_1803ff928;                        // attempted-write counter
//     log("[LUANET] ...");
//     ... apply to `net` or its vtable ...
//   }
//
// Failure paths call vtable +0xe0 (push nil) or +0xf8 (push boolean) and return
// 1; a state mismatch returns 0. Setters that cannot reach the channel push nil.
//
// Shared globals:
//   DAT_1803fa620  BaseClientState (resolved by 0x180017150); +0x20b84
//                  lastoutgoingcommand, +0x20b88 chokedcommands,
//                  +0x20b8c last_command_ack.
//   DAT_1803fa668  VEngineClient015; slot +0x240 returns CNetChan*.
//   DAT_1803ff928  attempted-write counter, incremented by every setter.
//   DAT_1803ff938  SetSendPacket trampoline; 0x1803ff948 SendDisconnect;
//                  0x1803ff930 Disconnect; 0x1803ff920 SendMessage;
//                  0x1803ff918 SendVoice; 0x1803ff910 FileCRC;
//                  0x1803ff018 original Net_ShouldSend.
//
// CNetChan fields used raw: +0x0c out sequence, +0x10 in sequence,
// +0x14 out-seq ack, +0x18 OUT_RELIABLE state, +0x1c IN_RELIABLE state,
// +0x20 choked packets, +0x273c packet drop, +0x2798 queued packets.
// CNetChan vtable slots: 0xd8 SetRate, 0xf8 SetTimeout, 0x108 SetChallengeNr,
// 0x150 SendFile, 0x178 Transmit, 0x1e8 SetCompressionMode,
// 0x1f0 RequestFile, 0x210 SetInterpolationAmount,
// 0x218 SetRemoteFramerate, 0x220 SetMaxRoutablePayloadSize.

#include <cstdint>
#include <cstddef>

namespace sf {
namespace lua {

inline constexpr int kLuaNetBodies    = 35;
inline constexpr int kLuaEditorBodies = 4;
inline constexpr int kLuaFeatBodies   = 1;
inline constexpr int kLuaTagBodies    = kLuaNetBodies + kLuaEditorBodies + kLuaFeatBodies;

inline constexpr uint64_t kLuaIface          = 0x180039770; // current Lua interface
inline constexpr uint64_t kEngineClient      = 0x1803fa668; // VEngineClient015
inline constexpr uint64_t kBaseClientState   = 0x1803fa620;
inline constexpr uint64_t kWriteCounter      = 0x1803ff928;
inline constexpr uint64_t kNetChanGetterSlot = 0x240;

inline constexpr int kLastOutgoingOffset = 0x20b84;
inline constexpr int kChokedOffset       = 0x20b88;
inline constexpr int kLastAckOffset      = 0x20b8c;

inline constexpr uint64_t kSetSendPacket    = 0x1803ff938;
inline constexpr uint64_t kDisconnectTrap   = 0x1803ff930;
inline constexpr uint64_t kSendDisconnect   = 0x1803ff948;
inline constexpr uint64_t kSendMessageTrap  = 0x1803ff920;
inline constexpr uint64_t kSendVoiceTrap    = 0x1803ff918;
inline constexpr uint64_t kFileCrcTrap      = 0x1803ff910;

inline constexpr uint64_t kBlockedMap       = 0x1805b8898;
inline constexpr uint64_t kBlockMutex       = 0x1803e7760;
inline constexpr int      kBlockMutexSentinel = 0x7fffffff;
inline constexpr uint64_t kBlockNameDefault = 0x180345374;
inline constexpr uint64_t kBlockTailName    = 0x1803453e8;

// 0x18005cd20 (BlockMessage) seeds these once; type values are the second half
// of each pair. "channel" is registered after them.
struct BlockEntry { const char* name; int type; };
inline constexpr BlockEntry kBlockEntries[] = {
    { "Disconnect", 1 },
    { nullptr, 2 },           // 0x180345374, resolved in the dump as the second literal
    { "StringCmd", 4 },
    { "SetConVar", 5 },
    { "VoiceData", 10 },
    { "BaselineAck", 11 },
    { "RespondCvarValue", 13 },
    { "FileCRCCheck", 14 },
};
inline constexpr int kBlockEntryCount = 8;

// Registration body 0x1800594e0 (3448 bytes): starts the "channel" table,
// registers readers (0x18004a5*-0x18005bc20 range) and the tagged setters below,
// then the net-message sub-table and the "clientstate" table. Log:
//   "[LUANET] channel table registered\n"
//   "[LUANET] api table unavailable -- persist not ready\n"
inline constexpr uint64_t kChannelTable = 0x1800594e0;

struct Setter { uint64_t address; const char* api; const char* log; int offset; };
inline constexpr Setter kSetters[] = {
    { 0x18005bcf0, "SetRate", "[LUANET] script set data rate -> %.0f\n", 0xd8 },
    { 0x18005bdb0, "SetSendPacket", "[LUANET] script set bSendPacket -> %s\n", -1 },
    { 0x18005bef0, "SetSequenceNr", "[LUANET] script set out sequence %d -> %d\n", 0x0c },
    { 0x18005bf90, "SetInSequenceNr", "[LUANET] script set in sequence %d -> %d\n", 0x10 },
    { 0x18005c030, "SetOutSequenceNrAck", "[LUANET] script set out sequence ack %d -> %d\n", 0x14 },
    { 0x18005c0d0, "SetChokedPackets", "[LUANET] script set choked packets %d -> %d\n", 0x20 },
    { 0x18005c170, "SetPacketDrop", "[LUANET] script set packet drop %d -> %d\n", 0x273c },
    { 0x18005c210, "SetOutReliableState", "[LUANET] script set OUT RELIABLE state %d -> %d (stalls the reliable stream if this disagrees with the server)\n", 0x18 },
    { 0x18005c2b0, "SetInReliableState", "[LUANET] script set IN RELIABLE state %d -> %d (stalls the reliable stream if this disagrees with the server)\n", 0x1c },
    { 0x18005c350, "SetChallengeNr", "[LUANET] script set challenge nr -> %u\n", 0x108 },
    { 0x18005c3f0, "SetTimeout", "[LUANET] script set timeout -> %.1fs\n", 0xf8 },
    { 0x18005c4b0, "SetMaxRoutablePayloadSize", "[LUANET] script set max routable payload -> %d\n", 0x220 },
    { 0x18005c550, "SetCompressionMode", "[LUANET] script set compression -> %s\n", 0x1e8 },
    { 0x18005c630, "SetRemoteFramerate", "[LUANET] script set remote framerate -> %.4f (dev %.4f)\n", 0x218 },
    { 0x18005c730, "SetInterpolationAmount", "[LUANET] script set interpolation amount -> %.4f\n", 0x210 },
    { 0x18005c7f0, "SetClearTime", "[LUANET] script set clear time -> %.3f (now %.3f)\n", 0x1e },
    { 0x18005c8b0, "SetTimeConnected", "[LUANET] script set connect time -> %.3f (now %.3f)\n", 0x1c },
    { 0x18005c970, "SetLastReceived", "[LUANET] script set last received -> %.3f (now %.3f)\n", 0x1b },
    { 0x18005ca40, "SetQueuedPackets", "[LUANET] script set queued packets -> %d (was %d)\n", 0x2798 },
    { 0x18005caf0, "SendFile", "[LUANET] script SendFile '%s' (id %u)\n", 0x150 },
    { 0x18005cc20, "RequestFile", "[LUANET] script RequestFile '%s'\n", 0x1f0 },
    { 0x18005d170, "SendStringCmd", "[LUANET] script SENT string cmd (%s): %s\n", -1 },
    { 0x18005d620, "SendVoice", "[LUANET] script sent voice: %u bytes -> %s\n", -1 },
    { 0x18005d760, "SendFileCRC", "[LUANET] script sent file CRC for '%s'\n", -1 },
    { 0x18005d870, "SendDisconnect", "[LUANET] script sent net_Disconnect: %s\n", -1 },
    { 0x18005d9b0, "Transmit", "[LUANET] script forced a transmit (onlyReliable=%s)\n", 0x178 },
    { 0x18005dad0, "Disconnect", "[LUANET] script REQUESTED disconnect: %s\n", -1 },
    { 0x18005ddc0, "SetLastOutgoingCommand", "[LUANET] script set lastoutgoingcommand %d -> %d\n", kLastOutgoingOffset },
    { 0x18005de50, "SetChokedCommands", "[LUANET] script set chokedcommands %d -> %d\n", kChokedOffset },
    { 0x18005dee0, "SetLastCommandAck", "[LUANET] script set last_command_ack %d -> %d\n", kLastAckOffset },
};
inline constexpr int kSetterCount =
    static_cast<int>(sizeof(kSetters) / sizeof(kSetters[0]));

// --------------------------------------------------------- registered readers
// 0x1800594e0 registers 46 distinct reader callees in this order. Each has the
// same three exit paths as the setters: state mismatch -> 0, missing channel or
// slot -> push nil and return 1, success -> push value and return 1. None of
// them emits a log line; results travel through the Lua stack only.
//
// Kind:
//   String  net slot +0x00 / +0x08, string pushed via +0xe8 (empty-string
//           fallback at 0x18033e5ea)
//   Bool    net slot +0x30/+0x38/+0x40/+0x88/+0x1c0/+0x1c8/+0x1d8, +0xf8
//   Float   net slot +0x10/+0x18/+0xa8/+0xc8/+0x90, +0xf0
//   Int     net slot +0x20/+0x28/+0x48..+0x80/+0x98/+0x190/+0x198/+0x1a0/
//           +0x208/+0x228, +0xf0
//   Raw     CNetChan field at +offset, +0xf0
//   State   BaseClientState field at +offset, +0xf0
//   Trap    0x1803ff940 callback, +0xf8
enum class ReaderKind : uint8_t { String, Bool, Float, Int, Raw, State, Trap };

struct ReaderEntry {
    uint64_t address;
    const char* api;
    int size;
    int target;          // vtable byte offset, raw field, or state field
    ReaderKind kind;
};

inline constexpr ReaderEntry kReaders[] = {
    { 0x18005a260, "GetName", 153, 0x00, ReaderKind::String },
    { 0x18005a300, "GetAddress", 154, 0x08, ReaderKind::String },
    { 0x18005a3a0, "IsLoopback", 139, 0x30, ReaderKind::Bool },
    { 0x18005a430, "IsTimingOut", 139, 0x38, ReaderKind::Bool },
    { 0x18005a4c0, "IsPlayback", 139, 0x40, ReaderKind::Bool },
    { 0x18005a550, "GetTime", 143, 0x10, ReaderKind::Float },
    { 0x18005a5e0, "GetTimeConnected", 143, 0x18, ReaderKind::Float },
    { 0x18005a670, "GetTimeSinceLastReceived", 146, 0xa8, ReaderKind::Float },
    { 0x18005a710, "GetTimeoutSeconds", 146, 0xc8, ReaderKind::Float },
    { 0x18005a7b0, "GetClearTime", 135, 0xf0, ReaderKind::Raw },
    { 0x18005a840, "GetQueuedPackets", 139, 0x2798, ReaderKind::Raw },
    { 0x18005a8d0, "GetRemoteFrameTime", 138, 0x27a0, ReaderKind::Raw },
    { 0x18005a960, "GetRemoteFrameTimeStdDeviation", 138, 0x27a4, ReaderKind::Raw },
    { 0x18005a9f0, "GetLatency", 181, 0x48, ReaderKind::Int },
    { 0x18005aab0, "GetAvgLatency", 181, 0x50, ReaderKind::Int },
    { 0x18005ab70, "GetAvgLoss", 181, 0x58, ReaderKind::Int },
    { 0x18005ac30, "GetAvgChoke", 181, 0x60, ReaderKind::Int },
    { 0x18005acf0, "GetAvgData", 181, 0x68, ReaderKind::Int },
    { 0x18005adb0, "GetAvgPackets", 181, 0x70, ReaderKind::Int },
    { 0x18005ae70, "GetTotalData", 182, 0x78, ReaderKind::Int },
    { 0x18005af30, "GetSequenceNr", 185, 0x80, ReaderKind::Int },
    { 0x18005aff0, "GetBufferSize", 144, 0x20, ReaderKind::Int },
    { 0x18005b080, "GetDataRate", 144, 0x28, ReaderKind::Int },
    { 0x18005b110, "IsValidPacket", 220, 0x88, ReaderKind::Bool },
    { 0x18005b1f0, "GetPacketTime", 228, 0x90, ReaderKind::Float },
    { 0x18005b2e0, "GetPacketBytes", 275, 0x98, ReaderKind::Int },
    { 0x18005b400, "GetOutSequenceNr", 136, 0x0c, ReaderKind::Raw },
    { 0x18005b490, "GetInSequenceNr", 136, 0x10, ReaderKind::Raw },
    { 0x18005b520, "GetOutSequenceNrAck", 136, 0x14, ReaderKind::Raw },
    { 0x18005b5b0, "GetChokedPackets", 136, 0x20, ReaderKind::Raw },
    { 0x18005b640, "GetPacketDrop", 139, 0x273c, ReaderKind::Raw },
    { 0x18005b6d0, "GetOutReliableState", 136, 0x18, ReaderKind::Raw },
    { 0x18005b760, "GetInReliableState", 136, 0x1c, ReaderKind::Raw },
    { 0x18005b7f0, "GetChallengeNr", 149, 0x1a0, ReaderKind::Int },
    { 0x18005b890, "GetDropNumber", 147, 0x190, ReaderKind::Int },
    { 0x18005b930, "GetSocket", 147, 0x198, ReaderKind::Int },
    { 0x18005b9d0, "IsOverflowed", 142, 0x1c8, ReaderKind::Bool },
    { 0x18005ba60, "CanPacket", 142, 0x1c0, ReaderKind::Bool },
    { 0x18005baf0, "HasPendingReliableData", 142, 0x1d8, ReaderKind::Bool },
    { 0x18005bb80, "GetMaxRoutablePayloadSize", 147, 0x228, ReaderKind::Int },
    { 0x18005bc20, "GetNumBitsWritten", 208, 0x208, ReaderKind::Int },
    { 0x18005be60, "GetSendPacket", 144, 0, ReaderKind::Trap },
    { 0x18005dc00, "GetLastOutgoingCommand", 100, 0x20b84, ReaderKind::State },
    { 0x18005dc70, "GetChokedCommands", 100, 0x20b88, ReaderKind::State },
    { 0x18005dce0, "GetLastCommandAck", 100, 0x20b8c, ReaderKind::State },
    { 0x18005dd50, "GetCommandAck", 100, 0x20b90, ReaderKind::State },
};
inline constexpr int kReaderCount =
    static_cast<int>(sizeof(kReaders) / sizeof(kReaders[0]));
inline constexpr uint64_t kReaderRangeBegin = 0x18005a260;
inline constexpr uint64_t kReaderRangeEnd   = 0x18005bc20;
inline constexpr int kStateReaderCount = 4;

// The registration table's BlockMessage and SendMessage slots do not point at
// the recovered cores: they point at 7-byte thunks that move the Lua state into
// arg2 and tail-jump. Both were read from m64.dll with objdump.
struct CompanionThunk { uint64_t address; uint64_t target; int size; const char* api; };
inline constexpr CompanionThunk kCompanionThunks[] = {
    { 0x18005d160, 0x18005cd20, 7, "BlockMessage" },
    { 0x18005d610, 0x18005d280, 7, "SendMessage" },
};
inline constexpr int kCompanionThunkCount =
    static_cast<int>(sizeof(kCompanionThunks) / sizeof(kCompanionThunks[0]));
inline constexpr int kRegistrationCalleeCount =
    kReaderCount + kCompanionThunkCount;

// GetCommandAck reads the field immediately after the three known setters.
inline constexpr int kCommandAckOffset = 0x20b90;

// 0x18005d280 SendMessage (901 bytes): reads a table {cookie, reliable, voice}
// (keys at 0x180344c24/28/2c plus "cookie"/"reliable"/"voice") and calls
// 0x1803ff920. Log:
//   "[LUANET] script sent message type %d (%s) -> %s\n"
// 0x18006f280 (268 bytes) intercepts Net_ShouldSend: while DAT_1803ffc48 is 0
// it probes the convar (0x18003a090) and blocks with
//   "[LUANET] script blocked outgoing net message '%s'\n"
//   "[LUANET] type=%d name=%s (GetName idx %d)\n"  (labelled [CLCMOVE])
// 0x1801f84d0 (772 bytes) is the CL_Move trampoline: dropped-name gate via
// 0x1801f81f0/0x180059340, 16-byte dump of 0x60 bytes, freeze window
// DAT_1804099b0 until GetTickCount64, and the [CLCMOVE] dump path.
inline constexpr uint64_t kSendMessage     = 0x18005d280;
inline constexpr uint64_t kNetShouldSend   = 0x18006f280;
inline constexpr uint64_t kClMoveTrampoline = 0x1801f84d0;

// ---------------------------------------------------------------- [LUAFEAT]
// 0x1800e8340 (2217 bytes) opens eight tables and registers the API entries,
// then logs:
//   "[LUAFEAT] api table unavailable -- persist not ready\n"
//   "[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\n"
inline constexpr uint64_t kFeatureTables = 0x1800e8340;

inline constexpr const char* kFeatureTableNames[] = {
    "aimbot", "triggerbot", "freecam", "thirdperson",
    "backtrack", "tick_anims", "esp", "menu",
};
inline constexpr int kFeatureTableCount = 8;

struct FeatureApi { const char* table; const char* name; uint64_t fn; };
inline constexpr FeatureApi kFeatureApis[] = {
    { "aimbot", "IsActive", 0x1800e8bf0 },
    { "aimbot", "HasTarget", 0x1800e8c30 },
    { "aimbot", "GetTarget", 0x1800e4340 },
    { "aimbot", "GetPosition", 0x1800e8c70 },
    { "aimbot", "SetTarget", 0x1800e8d40 },
    { "aimbot", "SetPosition", 0x1800e8dc0 },
    { "aimbot", "ClearForced", 0x1800e8e60 },
    { "triggerbot", "IsActive", 0x1800e8ea0 },
    { "freecam", "GetActive", 0x1800e8f00 },
    { "freecam", "SetActive", 0x1800e8f60 },
    { "freecam", "SetPosition", 0x1800e8fb0 },
    { "freecam", "SetAngle", 0x1800e9020 },
    { "freecam", "GetSpeed", 0x1800e9120 },
    { "freecam", "SetSpeed", 0x1800e9200 },
    { "thirdperson", "GetDistance", 0x1800e9330 },
    { "thirdperson", "SetDistance", 0x1800e9410 },
    { "backtrack", "GetRecords", 0x1800e9780 },
    { "tick_anims", "SetText", 0x1800e9d50 },
    { "esp", "IsVisible", 0x1800516a0 },
    { "menu", "InPanic", 0x1800ea170 },
};
inline constexpr int kFeatureApiCount =
    static_cast<int>(sizeof(kFeatureApis) / sizeof(kFeatureApis[0]));

// --------------------------------------------------------------- [LUAEDITOR]
// Four bodies. 0x1800ef850 (855) is the per-state initialiser; it resolves
// lua_gettop/lua_settop from lua_shared.dll, hooks the API table, registers
// DrawModelExecute through 0x180057f20 and calls 0x1800e8340. It refuses when
// DAT_1803fa5e8 already equals the state. Logs:
//   "[LUAEDITOR] %s Lua state ready\n"          ("Client/shared"/"Server"/"Menu"/"Unknown")
//   "[LUAHOOKS] api table unavailable -- persist not ready\n"
//   "[LUAHOOKS] DrawModelExecute registered\n"
//
// 0x1800ec770 (961) is RunScript: scans states 2,0,1; luaL_loadbufferx; optional
// sandbox (FUN_180026890); pcall via FUN_180023180; errors through
// 0x1803faee0; results 0 not found, 1 ok, 2 empty/compile/runtime error.
//   "[LUAEDITOR] RunScript: sandbox not applied\n"
//
// 0x1800f0ab0 (451) drains failed external chunks under mutex 0x1803e8550
// (sentinel 0x1803e859c) from DAT_1803e9ea0/0x1803e9ea8/0x1803e9eb0, stride
// 0x68, and logs "[LUAEDITOR] external %s chunk failed: %s\n".
//
// 0x1800f1200 (15758) is LuaLoaderFeature vfunc03: the ImGui window. It locks
// 0x1803e8500 (sentinel 0x1803e854c), renders the title "Lua editor##AOS"
// (0x12d), the "LUA EDITOR" header, the script list ("##lua_script_list",
// stride 0x20 entries at param+0x9d8), the "##lua_editor_surface" text editor
// (flags 0x800), the state combo "##lua_state" over {Client/shared, Server,
// Menu}, "Run the buffer on the selected state  (Ctrl+Enter)", "Find / replace
// (Ctrl+F)", "Minimap", "Blanks", "Close", "Refresh", "SCRIPTS", and the
// status jump. Run queues through 0x1800efd50 and logs
//   "[LUAEDITOR] queued %d bytes for %s\n"
// New buffer resets name to "script.lua", index -1, state 0.
inline constexpr uint64_t kEditorInit       = 0x1800ef850;
inline constexpr uint64_t kEditorRunScript  = 0x1800ec770;
inline constexpr uint64_t kEditorChunkFail  = 0x1800f0ab0;
inline constexpr uint64_t kEditorWindow     = 0x1800f1200;

inline constexpr int kMaxStateName = 3;
inline constexpr const char* kStateNames[] = { "Client/shared", "Server", "Menu" };

} // namespace lua
} // namespace sf
