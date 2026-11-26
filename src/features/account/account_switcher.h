#pragma once
// Features::AccountSwitcher::AccountSwitcherFeature  (Stage 3.12)
// RTTI: vtable 0x33b6c0, locator 0x382990, base Features::FeatureBase.
//
// The class itself has no behaviour: all fifteen slots point at the shared
// no-op 0x18001e3e0.  Construction (0x180206da0) only allocates the object and
// calls the persistence/adoption primitives, so the subsystem is modelled as
// free functions and four pieces of state:
//
//   accounts   std::vector<Account>, stride 0x48
//   session    std::vector<Session>, stride 0x38
//   active     user/pipe/IClientUser/SteamID globals around 0x180409c80
//   state      DAT_180409c24 (0..5), deployed DAT_180409c29,
//              cancel DAT_180409c58, login latch DAT_180409c59
//
// The real bodies are listed in docs/stage-03.12-account-switcher.md; every
// constant and address used here is cited there.  Steam's flat client exports
// are internal and version-specific, so this reconstruction is the recovered
// protocol/state machine, not a linkable client.

#include <algorithm>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace sf {
namespace account {

// ---------------------------------------------------------------- identity
inline constexpr uint64_t kFeatureVtable = 0x33b6c0;
inline constexpr uint64_t kFeatureCtor   = 0x180206da0;
inline constexpr uint64_t kNoopVfunc     = 0x18001e3e0;
inline constexpr uint64_t kUiBody        = 0x1801d3b90; // 9040 B, 61 strings
inline constexpr uint64_t kDiagBody      = 0x180136d80;

// Object layouts recovered from the vector walks and the UI row loop.
inline constexpr int kAccountStride      = 0x48;
inline constexpr int kAccountSteamIdOff  = 0x20;
inline constexpr int kAccountLabelOff    = 0x28;
inline constexpr int kSessionStride      = 0x38;
inline constexpr int kSessionUserOff     = 0x20;
inline constexpr int kSessionPipeOff     = 0x24;
inline constexpr int kSessionIfaceOff    = 0x28;
inline constexpr int kSessionSteamIdOff  = 0x30;

inline constexpr uint64_t kAccountsVector = 0x1803eb7b8;
inline constexpr uint64_t kSessionsVector = 0x1803e9e48;
inline constexpr uint64_t kStateGlobal    = 0x180409c24;
inline constexpr uint64_t kDeployedGlobal = 0x180409c29;
inline constexpr uint64_t kCancelGlobal   = 0x180409c58;
inline constexpr uint64_t kLoginLatch     = 0x180409c59;
inline constexpr uint64_t kGameSteamId    = 0x180409c30;
inline constexpr uint64_t kLastResult     = 0x180409c74;
inline constexpr uint64_t kTicketAck      = 0x180409c98;

// --------------------------------------------------------------- lifecycle
// 0x18013cf00 sets LoggingIn after joining any previous worker; 0x18013c230
// moves to SignedIn (4) or Failed (5); 0x18013bba0 sets GuardMobile (2);
// 0x18013c230's 0x3f/0x41/0x42 branch sets GuardEmail (3); 0x18013eee0 and
// the cancel path return to Off (0).
enum class SessionState : uint32_t
{
    Off = 0,
    LoggingIn = 1,
    GuardMobile = 2,
    GuardEmail = 3,
    SignedIn = 4,
    Failed = 5,
};

enum class GuardKind : uint32_t
{
    None = 0,
    Mobile = 1, // 0x55 / 0x58, and state 2
    Email = 2,  // 0x3f / 0x41 / 0x42, and state 3
};

enum class TokenSource : uint32_t
{
    None = 0,
    Manual = 1,
    Vault = 2,
    SteamConnectCache = 3,
};

enum class LoginAction : uint32_t
{
    Reject = 0,
    Pump = 1,
    RetryNoConnection = 2,
    GuardEmail = 3,
    GuardMobile = 4,
    Failure = 5,
};

// ------------------------------------------------------------- result tables
// 0x180132470, verbatim.  Any case not listed returns "unknown result".
inline constexpr const char* kUnknownResult = "unknown result";

inline constexpr const char* EResultText(uint32_t result)
{
    switch (result)
    {
    case 1:  return "OK";
    case 2:  return "generic failure";
    case 3:  return "no connection to Steam";
    case 5:  return "invalid password";
    case 6:  return "logged in elsewhere";
    case 8:  return "invalid parameter";
    case 10: return "Steam is busy";
    case 16: return "timed out";
    case 17: return "account banned";
    case 18: return "account not found";
    case 20: return "Steam service unavailable";
    case 21: return "not logged on";
    case 25: return "rate limited - wait a few minutes";
    case 63: return "Steam Guard e-mail code required";
    case 65: return "wrong Steam Guard e-mail code";
    case 66: return "Steam Guard code required (no mail on file)";
    case 71: return "IP banned";
    case 74: return "account locked down";
    case 75: return "verified e-mail required";
    case 85: return "mobile authenticator code required";
    case 88: return "wrong mobile authenticator code";
    case 89: return "wrong activation code";
    default: return kUnknownResult;
    }
}

// 0x180138760's switch over ClientGameServerDeny_t::m_uReason (EDenyReason).
inline constexpr const char* DenyReasonText(uint32_t reason)
{
    switch (reason)
    {
    case 0:  return "unknown deny reason";
    case 1:  return "invalid version";
    case 2:  return "generic";
    case 3:  return "not logged on - our session lost its Steam connection";
    case 4:  return "no licence for the app";
    case 5:  return "cheater (VAC)";
    case 6:  return "logged in elsewhere - the account signed in somewhere else";
    case 7:  return "unknown text";
    case 8:  return "incompatible anticheat";
    case 9:  return "memory corruption";
    case 10: return "incompatible software";
    case 11: return "Steam connection lost";
    case 12: return "Steam connection error";
    case 13: return "Steam response timed out";
    case 14: return "Steam validation stalled";
    case 15: return "owner left / guest user";
    default: return "unknown deny reason";
    }
}

// 0x18013ca40 accepts EResult 0 and 1 as "the logon is in flight" and then
// pumps callbacks.  3 means the previous session has not let go yet.
inline constexpr bool IsLogonAccepted(uint32_t result) { return result < 2; }
inline constexpr bool IsNoConnectionRetry(uint32_t result) { return result == 3; }

inline constexpr LoginAction ClassifyLogon(uint32_t result) noexcept
{
    if (result < 2) return LoginAction::Pump;
    if (result == 3) return LoginAction::RetryNoConnection;
    switch (result)
    {
    case 63: case 65: case 66: return LoginAction::GuardEmail;
    case 85: case 88:          return LoginAction::GuardMobile;
    default:                   return LoginAction::Failure;
    }
}

// 0x18013c230's state transition for the same EResult.  The Guard branches
// return the *old* state then set 3 or 2; the accepted branch writes 4.
inline constexpr SessionState StateAfterResult(uint32_t result) noexcept
{
    switch (ClassifyLogon(result))
    {
    case LoginAction::GuardEmail:  return SessionState::GuardEmail;
    case LoginAction::GuardMobile: return SessionState::GuardMobile;
    case LoginAction::Failure:     return SessionState::Failed;
    case LoginAction::Pump:        return SessionState::SignedIn;
    case LoginAction::RetryNoConnection:
    case LoginAction::Reject:
    default:                       return SessionState::LoggingIn;
    }
}

// 0x18013bba0 accepts only a non-zero GetSteamID after LoggedOn (callback 101)
// or logon state 4.  It returns 1 for accepted, 0x10 for timeout and
// 0xfffffffe for the user-cancel latch.
inline constexpr int kPumpAccepted = 1;
inline constexpr int kPumpTimeout = 0x10;
inline constexpr int kPumpCancelled = -2;

// ------------------------------------------------------------------- timing
inline constexpr int kPasswordLogonTimeoutMs = 180000; // 0x18013d3d0
inline constexpr int kTokenLogonTimeoutMs    = 45000;  // 0x18013dfa0
inline constexpr int kPumpPollMs             = 20;     // 0x18013bba0
inline constexpr int kGuardPromptAfterMs     = 6000;   // 5999 comparison
inline constexpr int kRetryAttempts          = 3;      // iVar10 < 2 -> third
inline constexpr int kRetryDrainPolls        = 30;     // 0x1e
inline constexpr int kRetryDrainPollMs       = 50;     // 0x32
inline constexpr int kServicePollMs          = 50;     // 0x180138760
inline constexpr int kJoinReadyPollMs        = 250;    // 0xfa
inline constexpr int kJoinReadyTimeoutMs     = 20000;  // 0x180138cf0
inline constexpr int kTicketAckTimeoutMs     = 3000;   // 0x180137380
inline constexpr int kTokenStoreAttempts     = 8;      // 0x18013ca40
inline constexpr int kTokenStorePollMs       = 500;
inline constexpr int kTicketTraceMinSlots    = 17;     // > 0x11
inline constexpr int kTicketTraceMaxSlots    = 0x200;

inline constexpr uint32_t kCallbackTicketResponse = 0xa3; // 163
inline constexpr uint32_t kCallbackServerDeny     = 0x71; // 113
inline constexpr uint32_t kCallbackLoggedOn       = 0x65; // 101
inline constexpr uint32_t kCallbackConnectFailed  = 0x66; // 102
inline constexpr uint32_t kCallbackDisconnected    = 0x67; // 103

inline constexpr uint64_t kTicketTraceGet = 0x180137380;
inline constexpr uint64_t kTicketTraceCancel = 0x180137550;
inline constexpr uint64_t kServerClosed = 0x180137590;
inline constexpr uint64_t kConnectionClosingScan = 0x180137640;
inline constexpr uint64_t kSteamClientResolve = 0x1801377f0;
inline constexpr uint64_t kClearTicketCache = 0x180137a30;

// Engine signatures recovered in 0x1801377f0.
inline constexpr const char* kSteam3ClientCallSiteSig =
    "E8 ? ? ? ? 48 8B C8 44 88 74 24 30 48 8D 44 24 50";
inline constexpr const char* kSteam3ClientGateSig =
    "48 8D BB B4 00 00 00 83 3F 00 0F 87";

// ---------------------------------------------------------------- data types
struct Account
{
    std::string name;          // +0x00, std::string
    uint64_t steamId = 0;      // +0x20
    std::string label;         // +0x28, std::string
};

struct TokenRecord
{
    std::string account;       // lowercased for DPAPI entropy
    uint64_t steamId = 0;
    std::string blobHex;       // DPAPI blob as lowercase hex
};

struct Session
{
    std::string account;       // +0x00
    int user = -1;             // +0x20
    int pipe = -1;             // +0x24
    void* iface = nullptr;     // +0x28, IClientUser*
    uint64_t steamId = 0;      // +0x30
};

struct ActiveState
{
    SessionState state = SessionState::Off;
    bool deployed = false;
    bool cancelRequested = false;
    bool loginLatched = false;
    bool codeSubmitted = false;
    int user = -1;
    int pipe = -1;
    void* iface = nullptr;
    uint64_t gameSteamId = 0;  // engine's own account
    uint64_t activeSteamId = 0;
    uint32_t lastResult = 0;
    uint64_t ticketAck = 0;    // high 32 = handle, low 32 = EResult
};

// ------------------------------------------------------------ state helpers
inline constexpr SessionState StateOnCancel() { return SessionState::Off; }

inline constexpr bool IsJoinReady(bool loggedOn, bool ownsApp,
                                  int ownershipTicketLength,
                                  bool connectTokensAvailable)
{
    return loggedOn && ownsApp && ownershipTicketLength > 0 &&
           connectTokensAvailable;
}

inline constexpr bool CanDeploy(SessionState state, uint64_t steamId,
                                bool deployed, bool haveIface,
                                bool connectTokensAvailable)
{
    if (state != SessionState::SignedIn || !haveIface)
        return false;
    if (steamId == 0)
        return false;
    if (deployed)
        return true; // idempotent: already deployed is a success
    return connectTokensAvailable;
}

// 0x180137a90 checks DAT_180409c29 first, so a second deploy is a no-op.
inline constexpr bool DeployAlreadyActive(bool deployed) { return deployed; }

// 0x180137a90 maps a null adapter / missing ISteamUser to a refusal before it
// writes the game SteamID.
inline constexpr bool CanStealGameIdentity(bool haveIface, bool haveAdapter)
{
    return haveIface && haveAdapter;
}

// 0x18013dfa0 picks manual first, then the vault, then Steam's ConnectCache.
inline constexpr TokenSource ChooseTokenSource(bool manual, bool vault,
                                               bool connectCache) noexcept
{
    if (manual) return TokenSource::Manual;
    if (vault) return TokenSource::Vault;
    if (connectCache) return TokenSource::SteamConnectCache;
    return TokenSource::None;
}

inline constexpr const char* TokenSourceText(TokenSource source) noexcept
{
    switch (source)
    {
    case TokenSource::Manual: return "typed in by hand";
    case TokenSource::Vault: return "from our vault";
    case TokenSource::SteamConnectCache: return "from Steam's ConnectCache";
    case TokenSource::None:
    default: return "NOT FOUND (neither our vault nor Steam's ConnectCache)";
    }
}

// 0x18013d830 refuses a token whose subject is the account the Steam client is
// already signed in as: using it would sign that client out.
inline constexpr bool TokenWouldSignOutClient(uint64_t tokenSteamId,
                                              uint64_t clientSteamId)
{
    return tokenSteamId != 0 && tokenSteamId == clientSteamId;
}

// The account name is used as DPAPI entropy, lowercased by 0x180133a10.
inline std::string LowerAscii(std::string_view text)
{
    std::string out(text);
    for (char& c : out)
        if (c >= 'A' && c <= 'Z')
            c = static_cast<char>(c + ('a' - 'A'));
    return out;
}

// 0x180133a10: only A-Z is folded; everything else is copied byte-for-byte.
inline std::string TokenEntropy(std::string_view account)
{
    return LowerAscii(account);
}

// --------------------------------------------------------- token validation
// 0x180135100 validates a Steam refresh token before it is sent to
// SetLoginToken: at least 0x28 bytes, starts with "ey", at least two '.',
// and only base64url characters plus the separators.  It then base64url
// decodes the payload and 0x180133200 extracts the decimal "sub" claim.
inline bool IsTokenShapeValid(std::string_view token)
{
    if (token.size() < 0x28 || token.size() < 2)
        return false;
    if (token[0] != 'e' || token[1] != 'y')
        return false;

    int dots = 0;
    for (char c : token)
    {
        if (c == '.')
        {
            ++dots;
            continue;
        }
        const bool alpha = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
        const bool digit = c >= '0' && c <= '9';
        if (!alpha && !digit && c != '-' && c != '_')
            return false;
    }
    return dots >= 2;
}

// 0x180133200 after base64url decode: find "sub", then ':', then skip
// ':'/' '/'"', then parse decimal digits into uint64.  A missing or empty
// claim yields 0.
inline uint64_t ParseSubClaim(std::string_view json)
{
    const std::size_t sub = json.find("\"sub\"");
    if (sub == std::string_view::npos)
        return 0;
    const std::size_t colon = json.find(':', sub + 5);
    if (colon == std::string_view::npos)
        return 0;

    std::size_t i = colon + 1;
    while (i < json.size() &&
           (json[i] == ':' || json[i] == ' ' || json[i] == '"'))
        ++i;

    uint64_t value = 0;
    bool any = false;
    while (i < json.size() && json[i] >= '0' && json[i] <= '9')
    {
        any = true;
        value = value * 10 + static_cast<uint64_t>(json[i] - '0');
        ++i;
    }
    return any ? value : 0;
}

// ------------------------------------------------------------ file formats
// 0x180133bf0: %USERPROFILE%\Documents\mayrrX64\settings\tokens.dat
// 0x180135860: %USERPROFILE%\Documents\mayrrX64\settings\accounts.txt
// SHGetFolderPathW(CSIDL_PERSONAL) supplies the Documents root; a failure
// falls back to %USERPROFILE%\Documents\mayrrX64.
inline constexpr const char* kDataFolder = "mayrrX64";
inline constexpr const char* kSettingsFolder = "settings";
inline constexpr const char* kAccountsFile = "accounts.txt";
inline constexpr const char* kTokensFile = "tokens.dat";

// Both writers emit two header lines when the stream opened cleanly.
inline constexpr const char* kAccountsHeader1 =
    "# mayrrX64 saved Steam accounts - account<TAB>steamid64<TAB>label\n";
inline constexpr const char* kAccountsHeader2 =
    "# passwords are NEVER stored here; passwordless switching uses Steam's own credential cache\n";
inline constexpr const char* kTokensHeader1 =
    "# mayrrX64 Steam refresh tokens - account<TAB>steamid64<TAB>DPAPI blob (hex)\n";
inline constexpr const char* kTokensHeader2 =
    "# encrypted for THIS Windows user on THIS machine; worthless if copied elsewhere\n";

inline constexpr char kFieldSeparator = '\t';

inline std::string FormatAccountLine(const Account& account)
{
    return account.name + kFieldSeparator + std::to_string(account.steamId) +
           kFieldSeparator + account.label + "\n";
}

inline std::string FormatTokenLine(const TokenRecord& token)
{
    return token.account + kFieldSeparator + std::to_string(token.steamId) +
           kFieldSeparator + token.blobHex + "\n";
}

// Parse one non-comment line of accounts.txt.  The reader (0x180135f40) uses
// tab positions, ignores '#' lines, and rejects a zero SteamID.
inline std::string_view TrimLineEnd(std::string_view line)
{
    while (!line.empty() && (line.back() == '\n' || line.back() == '\r'))
        line.remove_suffix(1);
    return line;
}

inline bool ParseAccountLine(std::string_view line, Account& out)
{
    line = TrimLineEnd(line);
    if (line.empty() || line.front() == '#')
        return false;
    const std::size_t first = line.find(kFieldSeparator);
    if (first == std::string_view::npos)
        return false;
    const std::size_t second = line.find(kFieldSeparator, first + 1);
    if (second == std::string_view::npos)
        return false;

    uint64_t id = 0;
    bool any = false;
    for (std::size_t i = first + 1; i < second; ++i)
    {
        const char c = line[i];
        if (c < '0' || c > '9')
            return false;
        any = true;
        id = id * 10 + static_cast<uint64_t>(c - '0');
    }
    if (!any || id == 0)
        return false;

    out.name = std::string(line.substr(0, first));
    out.steamId = id;
    out.label = std::string(line.substr(second + 1));
    return true;
}

// Parse one tokens.dat line.  The blob is stored as lowercase hex and is
// decoded with 0x180133af0; an odd-length or non-hex string is rejected.
inline bool ParseTokenLine(std::string_view line, TokenRecord& out)
{
    line = TrimLineEnd(line);
    if (line.empty() || line.front() == '#')
        return false;
    const std::size_t first = line.find(kFieldSeparator);
    if (first == std::string_view::npos)
        return false;
    const std::size_t second = line.find(kFieldSeparator, first + 1);
    if (second == std::string_view::npos)
        return false;

    uint64_t id = 0;
    bool any = false;
    for (std::size_t i = first + 1; i < second; ++i)
    {
        const char c = line[i];
        if (c < '0' || c > '9')
            return false;
        any = true;
        id = id * 10 + static_cast<uint64_t>(c - '0');
    }
    if (!any || id == 0)
        return false;

    const std::string_view hex = line.substr(second + 1);
    if (hex.empty() || (hex.size() & 1u) != 0)
        return false;
    for (char c : hex)
    {
        const bool digit = c >= '0' && c <= '9';
        const bool lower = c >= 'a' && c <= 'f';
        if (!digit && !lower)
            return false;
    }

    out.account = std::string(line.substr(0, first));
    out.steamId = id;
    out.blobHex = std::string(hex);
    return true;
}

// ------------------------------------------------------------ account list
// 0x1801368a0 inserts or updates by case-insensitive account name; a zero
// SteamID never overwrites a known one.
inline void UpsertAccount(std::vector<Account>& accounts, const Account& account)
{
    if (account.name.empty())
        return;
    for (Account& existing : accounts)
    {
        if (LowerAscii(existing.name) == LowerAscii(account.name))
        {
            if (account.steamId != 0)
                existing.steamId = account.steamId;
            if (!account.label.empty())
                existing.label = account.label;
            return;
        }
    }
    accounts.push_back(account);
}

// 0x180136ab0 erases one account by name and leaves the rest in order.
inline bool DropAccount(std::vector<Account>& accounts, std::string_view name)
{
    const std::string key = LowerAscii(name);
    const auto it = std::find_if(accounts.begin(), accounts.end(),
                                 [&](const Account& a) {
                                     return LowerAscii(a.name) == key;
                                 });
    if (it == accounts.end())
        return false;
    accounts.erase(it);
    return true;
}

// 0x1801368a0/0x180136ab0 persist immediately with 0x1801365b0.
inline constexpr bool kAccountMutationPersists = true;

// 0x180139540: import from loginusers.vdf, then adopt any Steam ConnectCache
// token whose account has no vault entry yet.  A new token record is DPAPI
// protected; a token already present is left alone.
inline bool ShouldImportToken(bool haveVaultToken, bool haveConnectCacheToken)
{
    return !haveVaultToken && haveConnectCacheToken;
}

// 0x180139c90 counts additions/known entries and reports the number with a
// token.  A missing/empty loginusers.vdf is not an error for the list.
struct ImportCounts
{
    int added = 0;
    int alreadyKnown = 0;
    int totalInVdf = 0;
    int withToken = 0;
};

// --------------------------------------------------------------- deployment
enum class DeployRefusal : uint32_t
{
    None = 0,
    NotSignedIn,
    NoSteamId,
    EmptyConnectTokenPool,
    NoIface,
    AdapterLayoutChanged,
};

inline constexpr const char* DeployRefusalText(DeployRefusal refusal)
{
    switch (refusal)
    {
    case DeployRefusal::NotSignedIn: return "log an account in first";
    case DeployRefusal::NoSteamId: return "this session has no SteamID yet - not deploying it";
    case DeployRefusal::EmptyConnectTokenPool:
        return "Steam has not handed this account a connect token yet - wait a few seconds and press Deploy again (deploying now would break joining until the game restarts)";
    case DeployRefusal::NoIface:
        return "steam_api64 did not hand over ISteamUser";
    case DeployRefusal::AdapterLayoutChanged:
        return "ISteamUser adapter layout changed - re-run tools/analyze_steamclient.py";
    case DeployRefusal::None:
    default: return "";
    }
}

inline DeployRefusal EvaluateDeploy(const ActiveState& active, bool haveAdapter,
                                    bool connectTokensAvailable)
{
    if (active.state != SessionState::SignedIn || active.iface == nullptr)
        return DeployRefusal::NotSignedIn;
    if (active.activeSteamId == 0)
        return DeployRefusal::NoSteamId;
    if (active.deployed)
        return DeployRefusal::None;
    if (!CanStealGameIdentity(true, haveAdapter))
        return DeployRefusal::AdapterLayoutChanged;
    if (!connectTokensAvailable)
        return DeployRefusal::EmptyConnectTokenPool;
    return DeployRefusal::None;
}

// 0x180137a90 records the game's original SteamID before overwriting the
// adapter's slot.  The active session's SteamID becomes the new game identity.
inline uint64_t DeployedSteamId(uint64_t previouslyDeployed,
                                uint64_t activeSteamId)
{
    return previouslyDeployed != 0 ? previouslyDeployed : activeSteamId;
}

// 0x180137a90 starts the service loop only when there is a pooled pipe or an
// active pipe to drain.
inline constexpr bool ShouldStartServiceLoop(int pooledPipes, int activePipe)
{
    return pooledPipes > 0 || activePipe != -1;
}

// 0x18013a300 leaves the local user signed in across unload.  The environment
// is the handoff: user, pipe, account.
inline constexpr const char* kEnvUser = "MAYRR_AS_USER";
inline constexpr const char* kEnvPipe = "MAYRR_AS_PIPE";
inline constexpr const char* kEnvAccount = "MAYRR_AS_ACCOUNT";

inline bool ShouldAdoptPreviousLoad(bool haveUser, bool havePipe,
                                    bool haveIface)
{
    return haveUser && havePipe && haveIface;
}

// 0x18013a1e0 keeps the local user on a failed logon: replacing it would
// spend the only user Steam authorises for this launch.
inline constexpr bool kKeepUserOnFailure = true;

// -------------------------------------------------------------- ticket trace
// 0x180137380 logs ticket handle/len and waits up to 3 s for callback 163
// before letting the connect proceed.
inline bool TicketWasAcknowledged(uint64_t ticketAck, uint32_t handle)
{
    return ticketAck != 0 && static_cast<uint32_t>(ticketAck >> 32) == handle;
}

inline constexpr uint32_t TicketAckResult(uint64_t ticketAck)
{
    return static_cast<uint32_t>(ticketAck & 0xffffffffu);
}

// 0x1801377f0 accepts the engine's m_cubTicket offset only when it is inside
// [0x40, 0x4000) as an unsigned value (compare `iVar1 - 0x40 < 0x3fc1`).
inline constexpr bool IsTicketOffsetPlausible(int offset)
{
    return offset >= 0x40 && offset < 0x4001;
}

// 0x180137590 logs the server's disconnect reason with the deployed state and
// current logged-on flag, then forwards to the original engine function.
inline constexpr const char* kNoDisconnectReason = "(no reason given)";

// ---------------------------------------------------------------- diagnostics
struct Diagnostics
{
    uint64_t steamId = 0;
    uint32_t appId = 4000;
    bool loggedOn = false;
    bool ownsApp = false;
    int ownershipTicketLength = 0;
    bool connectTokens = false;
    int gamesRunning = 0;
    uint64_t runningGameId = 0;
    uint64_t licenceOwner = 0;
};

inline constexpr bool IsBorrowedLicence(const Diagnostics& d)
{
    return d.licenceOwner != 0 && d.licenceOwner != d.steamId;
}

inline constexpr bool IsOwnedLicence(const Diagnostics& d)
{
    return d.licenceOwner != 0 && d.licenceOwner == d.steamId;
}

inline constexpr uint32_t kDiagAppId = 4000;
inline constexpr const char* kBuildDate = "Sep  7 2026";
inline constexpr const char* kBuildTime = "21:33:34";

// ------------------------------------------------------------------- UI ids
inline constexpr const char* kUiSavedAccounts = "Saved accounts";
inline constexpr const char* kUiNoneYet1 = "None yet - sign in once with";
inline constexpr const char* kUiNoneYet2 = "Remember on and it lands here.";
inline constexpr const char* kUiSwitch = "Switch";
inline constexpr const char* kUiNoToken = "no token";
inline constexpr const char* kUiLogin = "Login";
inline constexpr const char* kUiCancel = "Cancel";
inline constexpr const char* kUiLogOff = "Log off";
inline constexpr const char* kUiRestore = "Restore game account";
inline constexpr const char* kUiDeploy = "Deploy to game";
inline constexpr const char* kUiImport = "Import from Steam";
inline constexpr const char* kUiTokenPopup = "Sign in with a token";
inline constexpr const char* kUiRepair = "Repair join";
inline constexpr const char* kUiDiagnose = "Diagnose";
inline constexpr const char* kUiSubmitCode = "Submit code";

} // namespace account
} // namespace sf
