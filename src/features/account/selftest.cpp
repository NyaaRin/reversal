// Self-test for the account switcher (Stage 3.12).
//
// Covers the recovered state machine, the EResult / EDenyReason tables, the
// token shape and "sub" parser, the two on-disk formats, account merge/drop,
// deployment admission and the service/ticket constants.  Addresses are
// asserted against the body set in docs/stage-03.12-account-switcher.md.

#include <cstdio>
#include <string>
#include <vector>

#include "account_switcher.h"

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

void CheckU64(unsigned long long actual, unsigned long long expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %llu, want %llu)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

using namespace sf::account;

} // namespace

int main()
{
    // ------------------------------------------------------------ state model
    {
        CheckInt(static_cast<int>(SessionState::Off), 0, "state 0 is off");
        CheckInt(static_cast<int>(SessionState::LoggingIn), 1, "state 1 is logging in");
        CheckInt(static_cast<int>(SessionState::GuardMobile), 2, "state 2 is the mobile guard");
        CheckInt(static_cast<int>(SessionState::GuardEmail), 3, "state 3 is the e-mail guard");
        CheckInt(static_cast<int>(SessionState::SignedIn), 4, "state 4 is signed in");
        CheckInt(static_cast<int>(SessionState::Failed), 5, "state 5 is failed");
        Check(StateOnCancel() == SessionState::Off, "cancelling returns to off");
    }

    // ---------------------------------------------------------- EResult table
    {
        Check(std::string(EResultText(1)) == "OK", "EResult 1 is OK");
        Check(std::string(EResultText(3)) == "no connection to Steam",
              "EResult 3 is no connection");
        Check(std::string(EResultText(5)) == "invalid password",
              "EResult 5 is invalid password");
        Check(std::string(EResultText(18)) == "account not found",
              "EResult 18 is account not found");
        Check(std::string(EResultText(25)) == "rate limited - wait a few minutes",
              "EResult 25 is rate limited");
        Check(std::string(EResultText(63)) == "Steam Guard e-mail code required",
              "EResult 63 asks for an e-mail code");
        Check(std::string(EResultText(66)) == "Steam Guard code required (no mail on file)",
              "EResult 66 asks for the no-mail guard path");
        Check(std::string(EResultText(85)) == "mobile authenticator code required",
              "EResult 85 asks for a mobile code");
        Check(std::string(EResultText(88)) == "wrong mobile authenticator code",
              "EResult 88 is a wrong mobile code");
        Check(std::string(EResultText(0x7fffffff)) == kUnknownResult,
              "an unlisted result falls back to unknown");
    }

    // ------------------------------------------------------ EDenyReason table
    {
        Check(std::string(DenyReasonText(1)) == "invalid version",
              "deny 1 is a version mismatch");
        Check(std::string(DenyReasonText(3)) ==
                  "not logged on - our session lost its Steam connection",
              "deny 3 is a lost Steam session");
        Check(std::string(DenyReasonText(4)) == "no licence for the app",
              "deny 4 is no licence");
        Check(std::string(DenyReasonText(6)) ==
                  "logged in elsewhere - the account signed in somewhere else",
              "deny 6 is logged in elsewhere");
        Check(std::string(DenyReasonText(8)) == "incompatible anticheat",
              "deny 8 is incompatible anticheat");
        Check(std::string(DenyReasonText(11)) == "Steam connection lost",
              "deny 11 is a lost Steam connection");
        Check(std::string(DenyReasonText(14)) == "Steam validation stalled",
              "deny 14 is stalled validation");
        Check(std::string(DenyReasonText(15)) == "owner left / guest user",
              "deny 15 is the family-sharing owner leaving");
        Check(std::string(DenyReasonText(0xffffffff)) == "unknown deny reason",
              "an unlisted deny reason is unknown");
    }

    // --------------------------------------------------------- logon dispatch
    {
        Check(IsLogonAccepted(0), "EResult 0 is accepted for the pump");
        Check(IsLogonAccepted(1), "EResult 1 is accepted for the pump");
        Check(!IsLogonAccepted(2), "EResult 2 is not accepted");
        Check(IsNoConnectionRetry(3), "EResult 3 is the retry path");
        Check(ClassifyLogon(0) == LoginAction::Pump, "0 pumps callbacks");
        Check(ClassifyLogon(3) == LoginAction::RetryNoConnection,
              "3 retries the logon");
        Check(ClassifyLogon(63) == LoginAction::GuardEmail,
              "63 is the e-mail guard");
        Check(ClassifyLogon(65) == LoginAction::GuardEmail,
              "65 is a wrong e-mail code");
        Check(ClassifyLogon(66) == LoginAction::GuardEmail,
              "66 is the e-mail/no-mail guard");
        Check(ClassifyLogon(85) == LoginAction::GuardMobile,
              "85 is the mobile guard");
        Check(ClassifyLogon(88) == LoginAction::GuardMobile,
              "88 is a wrong mobile code");
        Check(ClassifyLogon(5) == LoginAction::Failure, "5 is a failure");
        Check(ClassifyLogon(18) == LoginAction::Failure, "18 is a failure");

        Check(StateAfterResult(0) == SessionState::SignedIn,
              "an accepted logon moves to signed in");
        Check(StateAfterResult(63) == SessionState::GuardEmail,
              "an e-mail guard moves to state 3");
        Check(StateAfterResult(85) == SessionState::GuardMobile,
              "a mobile guard moves to state 2");
        Check(StateAfterResult(5) == SessionState::Failed,
              "a failure moves to state 5");
    }

    // ------------------------------------------------------------- readiness
    {
        Check(IsJoinReady(true, true, 1, true), "all four readiness inputs pass");
        Check(!IsJoinReady(false, true, 1, true), "logged-off is not ready");
        Check(!IsJoinReady(true, false, 1, true), "no ownership is not ready");
        Check(!IsJoinReady(true, true, 0, true), "a zero ticket is not ready");
        Check(!IsJoinReady(true, true, 1, false), "no connect token is not ready");
        Check(!CanDeploy(SessionState::GuardEmail, 1, false, true, true),
              "a guard state cannot deploy");
        Check(!CanDeploy(SessionState::SignedIn, 0, false, true, true),
              "no SteamID cannot deploy");
        Check(!CanDeploy(SessionState::SignedIn, 1, false, false, true),
              "no IClientUser cannot deploy");
        Check(!CanDeploy(SessionState::SignedIn, 1, false, true, false),
              "an empty connect-token pool cannot deploy");
        Check(CanDeploy(SessionState::SignedIn, 1, false, true, true),
              "a ready session can deploy");
        Check(CanDeploy(SessionState::SignedIn, 1, true, true, false),
              "an already-deployed session is idempotent");
        Check(DeployAlreadyActive(true), "the deployed flag short-circuits");
        Check(CanStealGameIdentity(true, true), "both adapter pointers are required");
        Check(!CanStealGameIdentity(true, false), "a missing adapter is refused");
    }

    // ------------------------------------------------------------ token rules
    {
        Check(ChooseTokenSource(true, true, true) == TokenSource::Manual,
              "a manual token wins");
        Check(ChooseTokenSource(false, true, true) == TokenSource::Vault,
              "the vault wins over Steam's cache");
        Check(ChooseTokenSource(false, false, true) == TokenSource::SteamConnectCache,
              "Steam's cache is the last source");
        Check(ChooseTokenSource(false, false, false) == TokenSource::None,
              "no source means no token");
        Check(std::string(TokenSourceText(TokenSource::Manual)) == "typed in by hand",
              "the manual source label is verbatim");
        Check(std::string(TokenSourceText(TokenSource::Vault)) == "from our vault",
              "the vault source label is verbatim");
        Check(std::string(TokenSourceText(TokenSource::SteamConnectCache)) ==
                  "from Steam's ConnectCache",
              "the ConnectCache source label is verbatim");
        Check(std::string(TokenSourceText(TokenSource::None)) ==
                  "NOT FOUND (neither our vault nor Steam's ConnectCache)",
              "the missing-token label is verbatim");

        Check(TokenWouldSignOutClient(76561198000000000ULL, 76561198000000000ULL),
              "a token for the current client account is refused");
        Check(!TokenWouldSignOutClient(76561198000000001ULL, 76561198000000000ULL),
              "a different account is allowed");
        Check(!TokenWouldSignOutClient(0, 76561198000000000ULL),
              "an empty subject is not treated as the client account");
    }

    // -------------------------------------------------------------- token parse
    {
        const std::string good =
            "eyAidHlwIjogIkpXVCIsICJhbGciOiAiSFMyNTYiIH0."
            "eyAic3ViIjogIjc2NTYxMTk4MDAwMDAwMDAwIiwgImV4cCI6IDE3MDAwMDAwMDAgfQ."
            "c2lnbmF0dXJlLXNpZ25hdHVyZS1zaWduYXR1cmU";
        Check(IsTokenShapeValid(good), "a three-part base64url token passes the shape check");
        Check(!IsTokenShapeValid("eyAidHlw"), "a short token is refused");
        Check(!IsTokenShapeValid("not-a-token-at-all-but-long-enough-to-pass-the-length-check-123456"),
              "a token that does not start ey is refused");
        Check(!IsTokenShapeValid("eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxIn0"),
              "a two-part token is refused");
        Check(!IsTokenShapeValid("eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxIn0.sig+plus"),
              "a plus is not in the base64url alphabet");
        Check(!IsTokenShapeValid("eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxIn0.sig=eq"),
              "padding is not accepted by the shape check");

        CheckU64(ParseSubClaim("{\"sub\":\"76561198000000000\"}"), 76561198000000000ULL,
                 "the quoted sub claim is parsed");
        CheckU64(ParseSubClaim("{ \"sub\" : \"42\" }"), 42ULL,
                 "spaces around the colon are skipped");
        CheckU64(ParseSubClaim("{\"iss\":\"x\"}"), 0ULL,
                 "a missing sub claim is zero");
        CheckU64(ParseSubClaim("{\"sub\":}"), 0ULL,
                 "an empty sub claim is zero");
    }

    // ------------------------------------------------------------- entropy
    {
        Check(std::string(TokenEntropy("MyAccount")) == "myaccount",
              "DPAPI entropy is the lowercased account name");
        Check(std::string(TokenEntropy("A1_b-Z")) == "a1_b-z",
              "only A-Z is folded");
        Check(std::string(LowerAscii("MiXeD 123")) == "mixed 123",
              "lowercasing preserves digits and spaces");
    }

    // ------------------------------------------------------------ on-disk text
    {
        Account a;
        a.name = "main";
        a.steamId = 76561198000000000ULL;
        a.label = "primary";
        const std::string line = FormatAccountLine(a);
        Check(line == "main\t76561198000000000\tprimary\n",
              "accounts.txt is account<TAB>steamid64<TAB>label");
        Check(std::string(kAccountsFile) == "accounts.txt", "accounts file name is verbatim");
        Check(std::string(kTokensFile) == "tokens.dat", "tokens file name is verbatim");
        Check(std::string(kAccountsHeader1).find("passwords are NEVER stored") ==
                  std::string::npos,
              "the password warning is on the second header line");
        Check(std::string(kAccountsHeader2).find("passwords are NEVER stored") !=
                  std::string::npos,
              "the second header says passwords are never stored");
        Check(std::string(kTokensHeader1).find("DPAPI blob") != std::string::npos,
              "the token header names the DPAPI blob");
        Check(std::string(kTokensHeader2).find("THIS Windows user") != std::string::npos,
              "the token header binds the blob to the Windows user");

        Account parsed;
        Check(ParseAccountLine("alt\t123\tsecondary\n", parsed),
              "a valid accounts line parses");
        Check(parsed.name == "alt" && parsed.steamId == 123 && parsed.label == "secondary",
              "the parsed account fields are exact");
        Check(!ParseAccountLine("# comment\t123\n", parsed), "a comment is skipped");
        Check(!ParseAccountLine("missing-tabs", parsed), "a line without tabs is refused");
        Check(!ParseAccountLine("zero\t0\tlabel", parsed), "a zero SteamID is refused");
        Check(!ParseAccountLine("bad\t12x\tlabel", parsed), "a non-numeric ID is refused");

        TokenRecord t;
        t.account = "alt";
        t.steamId = 123;
        t.blobHex = "00ff10";
        Check(FormatTokenLine(t) == "alt\t123\t00ff10\n",
              "tokens.dat is account<TAB>steamid64<TAB>hex");
        TokenRecord pt;
        Check(ParseTokenLine("alt\t123\t00ff10\n", pt), "a valid token line parses");
        Check(pt.account == "alt" && pt.steamId == 123 && pt.blobHex == "00ff10",
              "the parsed token fields are exact");
        Check(ParseTokenLine("alt\t123\t0f", pt), "an even-length blob parses");
        Check(!ParseTokenLine("alt\t123\tabc", pt), "an odd-length blob is refused");
        Check(!ParseTokenLine("alt\t123\tzz", pt), "a non-hex blob is refused");
    }

    // ---------------------------------------------------------- account merge
    {
        std::vector<Account> accounts;
        Account a;
        a.name = "Main";
        a.steamId = 1;
        a.label = "first";
        UpsertAccount(accounts, a);
        CheckInt(static_cast<int>(accounts.size()), 1, "the first account is inserted");

        Account update;
        update.name = "main";
        update.steamId = 2;
        update.label = "renamed";
        UpsertAccount(accounts, update);
        CheckInt(static_cast<int>(accounts.size()), 1,
                 "a case-insensitive duplicate updates in place");
        CheckU64(accounts[0].steamId, 2, "the new SteamID is kept");
        Check(accounts[0].label == "renamed", "the label is updated");

        Account zero;
        zero.name = "MAIN";
        zero.steamId = 0;
        zero.label = "";
        UpsertAccount(accounts, zero);
        CheckU64(accounts[0].steamId, 2, "a zero SteamID does not erase a known one");
        Check(accounts[0].label == "renamed", "an empty label does not erase a known one");
        Check(DropAccount(accounts, "main"), "dropping a known account succeeds");
        CheckInt(static_cast<int>(accounts.size()), 0, "the account is removed");
        Check(!DropAccount(accounts, "main"), "dropping it again fails");
        Check(!ShouldImportToken(true, true), "an existing vault token is not replaced");
        Check(ShouldImportToken(false, true), "a missing vault token is imported");
        Check(!ShouldImportToken(false, false), "no Steam token means nothing to import");
    }

    // -------------------------------------------------------------- deploy
    {
        ActiveState active;
        active.state = SessionState::SignedIn;
        active.iface = reinterpret_cast<void*>(static_cast<uintptr_t>(1));
        active.activeSteamId = 42;
        Check(EvaluateDeploy(active, true, true) == DeployRefusal::None,
              "a signed-in account with a token deploys");
        active.activeSteamId = 0;
        Check(EvaluateDeploy(active, true, true) == DeployRefusal::NoSteamId,
              "a zero SteamID is refused");
        active.activeSteamId = 42;
        Check(EvaluateDeploy(active, true, false) == DeployRefusal::EmptyConnectTokenPool,
              "an empty pool is refused");
        active.state = SessionState::Failed;
        Check(EvaluateDeploy(active, true, true) == DeployRefusal::NotSignedIn,
              "a failed session cannot deploy");
        active.state = SessionState::SignedIn;
        active.iface = nullptr;
        Check(EvaluateDeploy(active, true, true) == DeployRefusal::NotSignedIn,
              "a null IClientUser cannot deploy");
        active.iface = reinterpret_cast<void*>(static_cast<uintptr_t>(1));
        active.deployed = true;
        Check(EvaluateDeploy(active, false, false) == DeployRefusal::None,
              "an already-deployed session reports no refusal");
        CheckU64(DeployedSteamId(7, 42), 7, "the original game SteamID is preserved");
        CheckU64(DeployedSteamId(0, 42), 42, "a fresh deploy records the active SteamID");
        Check(ShouldStartServiceLoop(0, 3), "one active pipe starts the loop");
        Check(ShouldStartServiceLoop(1, -1), "one pooled pipe starts the loop");
        Check(!ShouldStartServiceLoop(0, -1), "no pipe means no loop");
        Check(ShouldAdoptPreviousLoad(true, true, true),
              "all three handoff pieces adopt the old user");
        Check(!ShouldAdoptPreviousLoad(true, true, false),
              "a missing IClientUser does not adopt");
    }

    // --------------------------------------------------------------- tickets
    {
        const uint64_t ack = (static_cast<uint64_t>(77) << 32) | 1;
        Check(TicketWasAcknowledged(ack, 77), "the packed handle matches");
        Check(!TicketWasAcknowledged(ack, 78), "a different handle does not match");
        CheckU64(TicketAckResult(ack), 1, "the packed EResult is the low word");
        Check(!TicketWasAcknowledged(0, 0), "an empty ack does not match a zero handle");
        Check(IsTicketOffsetPlausible(0x40), "offset 0x40 is plausible");
        Check(IsTicketOffsetPlausible(0x4000), "offset 0x4000 is plausible");
        Check(!IsTicketOffsetPlausible(0x3f), "offset 0x3f is below the range");
        Check(!IsTicketOffsetPlausible(0x4001), "offset 0x4001 is above the range");
    }

    // ----------------------------------------------------------- diagnostics
    {
        Diagnostics d;
        d.steamId = 100;
        d.licenceOwner = 0;
        Check(!IsBorrowedLicence(d) && !IsOwnedLicence(d),
              "an unknown licence owner is neither borrowed nor owned");
        d.licenceOwner = 100;
        Check(IsOwnedLicence(d), "the same owner is an owned licence");
        d.licenceOwner = 200;
        Check(IsBorrowedLicence(d), "a different owner is a borrowed licence");
        CheckInt(static_cast<int>(kDiagAppId), 4000, "the diagnostic app id is 4000");
        Check(std::string(kBuildDate) == "Sep  7 2026", "the build date is verbatim");
        Check(std::string(kBuildTime) == "21:33:34", "the build time is verbatim");
    }

    // ------------------------------------------------------------- constants
    {
        CheckInt(kAccountStride, 0x48, "an account is 0x48 bytes");
        CheckInt(kSessionStride, 0x38, "a session is 0x38 bytes");
        CheckInt(kAccountSteamIdOff, 0x20, "the account SteamID is +0x20");
        CheckInt(kAccountLabelOff, 0x28, "the account label is +0x28");
        CheckInt(kSessionUserOff, 0x20, "the session user is +0x20");
        CheckInt(kSessionPipeOff, 0x24, "the session pipe is +0x24");
        CheckInt(kSessionIfaceOff, 0x28, "the session IClientUser is +0x28");
        CheckInt(kSessionSteamIdOff, 0x30, "the session SteamID is +0x30");

        CheckInt(kPasswordLogonTimeoutMs, 180000, "password logons wait 180 s");
        CheckInt(kTokenLogonTimeoutMs, 45000, "token logons wait 45 s");
        CheckInt(kPumpPollMs, 20, "the logon pump polls every 20 ms");
        CheckInt(kGuardPromptAfterMs, 6000, "the guard prompt fires after 6 s");
        CheckInt(kRetryAttempts, 3, "EResult 3 is retried three times");
        CheckInt(kRetryDrainPolls, 30, "the retry drains 30 polls");
        CheckInt(kRetryDrainPollMs, 50, "the retry drains at 50 ms");
        CheckInt(kServicePollMs, 50, "the service loop polls every 50 ms");
        CheckInt(kJoinReadyPollMs, 250, "readiness polls every 250 ms");
        CheckInt(kJoinReadyTimeoutMs, 20000, "readiness times out after 20 s");
        CheckInt(kTicketAckTimeoutMs, 3000, "ticket acknowledgement waits 3 s");
        CheckInt(kTokenStoreAttempts, 8, "the token store polls eight times");
        CheckInt(kTokenStorePollMs, 500, "the token store polls every 500 ms");
        CheckInt(kTicketTraceMinSlots, 17, "the ticket trace needs more than 17 slots");
        CheckInt(kTicketTraceMaxSlots, 0x200, "the ticket trace scans 512 slots");

        CheckInt(kCallbackTicketResponse, 163, "callback 163 is GetAuthSessionTicketResponse");
        CheckInt(kCallbackServerDeny, 113, "callback 113 is ClientGameServerDeny");
        CheckInt(kCallbackLoggedOn, 101, "callback 101 is LoggedOn");
        CheckInt(kCallbackConnectFailed, 102, "callback 102 is ConnectFailed");
        CheckInt(kCallbackDisconnected, 103, "callback 103 is Disconnected");

        Check(kFeatureVtable == 0x33b6c0ULL, "the feature vtable is 0x33b6c0");
        Check(kFeatureCtor == 0x180206da0ULL, "the constructor is 0x180206da0");
        Check(kNoopVfunc == 0x18001e3e0ULL, "all fifteen slots use 0x18001e3e0");
        Check(kUiBody == 0x1801d3b90ULL, "the ImGui body is 0x1801d3b90");
        Check(kDiagBody == 0x180136d80ULL, "the diagnostic body is 0x180136d80");
        Check(kAccountsVector == 0x1803eb7b8ULL, "the account vector is 0x1803eb7b8");
        Check(kSessionsVector == 0x1803e9e48ULL, "the session vector is 0x1803e9e48");
        Check(kStateGlobal == 0x180409c24ULL, "the state global is 0x180409c24");
        Check(kDeployedGlobal == 0x180409c29ULL, "the deployed flag is 0x180409c29");
        Check(kCancelGlobal == 0x180409c58ULL, "the cancel flag is 0x180409c58");
        Check(kLoginLatch == 0x180409c59ULL, "the login latch is 0x180409c59");
        Check(kGameSteamId == 0x180409c30ULL, "the game SteamID is 0x180409c30");
        Check(kLastResult == 0x180409c74ULL, "the last result is 0x180409c74");
        Check(kTicketAck == 0x180409c98ULL, "the ticket ack is 0x180409c98");

        Check(std::string(kEnvUser) == "MAYRR_AS_USER", "the user handoff is MAYRR_AS_USER");
        Check(std::string(kEnvPipe) == "MAYRR_AS_PIPE", "the pipe handoff is MAYRR_AS_PIPE");
        Check(std::string(kEnvAccount) == "MAYRR_AS_ACCOUNT", "the account handoff is MAYRR_AS_ACCOUNT");
        Check(std::string(kNoDisconnectReason) == "(no reason given)",
              "the disconnect fallback is verbatim");
        Check(std::string(kSteam3ClientCallSiteSig).find("E8 ? ? ? ?") == 0,
              "the CSteam3Client call-site signature starts with E8");
        Check(std::string(kSteam3ClientGateSig).find("48 8D BB B4 00 00 00") == 0,
              "the CSteam3Client gate signature is the m_cubTicket accessor");
    }

    // ------------------------------------------------------------- UI labels
    {
        Check(std::string(kUiSavedAccounts) == "Saved accounts", "the UI section is Saved accounts");
        Check(std::string(kUiSwitch) == "Switch", "the row action is Switch");
        Check(std::string(kUiNoToken) == "no token", "a tokenless row says no token");
        Check(std::string(kUiRestore) == "Restore game account",
              "the reverse action is Restore game account");
        Check(std::string(kUiDeploy) == "Deploy to game", "the deploy action is Deploy to game");
        Check(std::string(kUiImport) == "Import from Steam",
              "the import action is Import from Steam");
        Check(std::string(kUiTokenPopup) == "Sign in with a token",
              "the token popup is Sign in with a token");
        Check(std::string(kUiRepair) == "Repair join", "the repair action is Repair join");
        Check(std::string(kUiDiagnose) == "Diagnose", "the diagnostic action is Diagnose");
        Check(std::string(kUiSubmitCode) == "Submit code", "the guard action is Submit code");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "ACCOUNT SELFTEST PASS" : "ACCOUNT SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
