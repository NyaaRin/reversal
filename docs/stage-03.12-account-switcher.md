# Stage 3.12 — Account switcher (`Features::AccountSwitcher`, `[AS]`)

**Status: complete against the corpus.** The class, its 27 `[AS]` bodies, the
persistence layer, the Steam-client adaptor and the ImGui page are reconstructed.
Runtime execution against a live Steam client is not possible here: the flat
`Steam_CreateLocalUser` / `Steam_BGetCallback` exports are internal,
version-specific `steamclient64.dll` entry points, and `client.dll` is absent
from the workspace.

Evidence base: `re/dump/decompile/`, `re/dump/inventory.tsv`,
`re/dump/vtable_methods.tsv`, `re/dump/rtti_classes.tsv`. Addresses are full VAs
(image base `0x180000000`). The implementation is
`src/features/account/account_switcher.h`; the test is
`src/features/account/selftest.cpp`.

---

## 1. Class and construction

| Item | Address / value |
|---|---|
| RTTI class | `Features::AccountSwitcher::AccountSwitcherFeature` |
| vtable RVA | `0x33b6c0` |
| RTTI locator | `0x382990` |
| base | `Features::FeatureBase` |
| all 15 slots | `0x18001e3e0` (shared no-op) |
| constructor | `0x180206da0` (182 B) |

The class is a registration shell. `0x180206da0` allocates the object, clears
`DAT_180409ca0`, calls the account-file loader `0x180135f40`, the Steam-token
picker `0x180139540`, the previous-load adopter `0x18013a560`, and appends the
object to the feature vector at `0x1803fcc70`. Every virtual slot is the same
`ret`/no-op body, so there is no per-tick account logic in the vtable.

---

## 2. Runtime state

| Global | Type / role |
|---|---|
| `0x1803eb7b8` | `std::vector<Account>`, element stride `0x48` |
| `0x1803e9e48` | `std::vector<Session>`, element stride `0x38` |
| `0x180409c24` | session state (`0..5`) |
| `0x180409c29` | deployed flag |
| `0x180409c28` | code-submitted flag |
| `0x180409c58` | user-cancel request |
| `0x180409c59` | logon in progress / worker join latch |
| `0x180409c5c` | ticket sequence counter |
| `0x180409c30` | active session SteamID (the game's identity after deploy) |
| `0x180409c38` | engine's original game SteamID |
| `0x180409c50` | saved original game SteamID |
| `0x180409c74` | last EResult |
| `0x180409c80` | active `IClientUser*` |
| `0x180409c88` | `CSteam3Client` instance |
| `0x180409c90` | `m_cubTicket` offset inside `CSteam3Client` |
| `0x180409c98` | packed ticket ack: high 32 = handle, low 32 = EResult |
| `0x1803e85b4` | active pipe |
| `0x1803e9e20` | status string |
| `0x1803e9e60` | pending two-factor code |
| `0x1803e9718` | UI selection |

### State values

| Value | Meaning | Writer |
|---|---|---|
| `0` | off / cancelled | `0x18013cf00`, `0x18013eee0`, cancel path |
| `1` | logging in | `0x18013cf00`, code resubmission |
| `2` | mobile authenticator required | `0x18013bba0`, `0x18013c230` |
| `3` | e-mail Steam Guard required | `0x18013c230` |
| `4` | signed in | `0x18013aba0` adopt/reuse, `0x18013c230` success |
| `5` | failed | `0x18013c230`, token/password refusals |

`0x18013c230` switches on the EResult: `0x3f`/`0x41`/`0x42` set `3`,
`0x55`/`0x58` set `2`, accepted results set `4`, and the default branch sets `5`
then calls `0x18013a1e0`.

### Object layouts

`Account` (stride `0x48`):

```
+0x00  std::string name
+0x20  uint64_t steam_id
+0x28  std::string label
```

`Session` (stride `0x38`):

```
+0x00  std::string account
+0x20  int32 user
+0x24  int32 pipe
+0x28  IClientUser* iface
+0x30  uint64_t steam_id
```

The vector walks in `0x18013aba0`, `0x18013a300`, `0x18013eee0`, `0x1801368a0`,
`0x180136ab0`, `0x180139c90` and the UI loop in `0x1801d3b90` establish both
strides and every offset.

---

## 3. Lifecycle

### 3.1 Adopt the previous load

`0x18013a560` reads three environment variables written at unload:

```
MAYRR_AS_USER     local user handle (decimal)
MAYRR_AS_PIPE     pipe handle (decimal)
MAYRR_AS_ACCOUNT  account name
```

It validates `user > 0`, `pipe > 0`, resolves `IClientUser` for the pair and
checks `BLoggedOn`. On success it **clears the session pool**, installs the
adopted session (`user`, `pipe`, `iface`, `SteamID`), sets state `4` and logs
`[AS] adopted the local user from the previous load`. If the pair is gone it
logs `[AS] the local user left by the previous load ... is gone - starting
fresh` and clears the variables. This is why a reload does not spend a second
local user.

### 3.2 Unload

`0x18013a300` writes the first pooled session to the environment **without**
releasing it:

> `[AS] unload: leaving local user %d (pipe %d, '%s') SIGNED IN for the next load - a replacement would be this process's second user and Steam will not authorise one`

The process exit path is `0x1801fb3a0` → `0x18013a300`. `0x18013eee0` is the
explicit "Log off" action and does release/sign out every pooled session, but
keeps the user handle itself.

### 3.3 Session pool

`0x18013aba0` is the pool resolver. Given an account name:

1. If `steamclient64.dll`/`IClientEngine` is missing, return `0`.
2. Search the pool case-insensitively. A live entry (`BLoggedOn`) is reused:
   state `4`, status `[AS] reusing the live session ...`, return `2`.
3. A stale entry is **re-logged on the same user**, never replaced:
   `[AS] pooled session for '%s' is not signed in - re-logging the SAME user`.
4. Otherwise `Steam_CreateLocalUser` is called through the engine vtable slot 1.
   A refusal returns `0` with status `Steam refused to create a local user`.
5. `IClientUser` is resolved through the engine slot 8 and validated; a null
   result logs `[AS] GetIClientUser(user=%d, pipe=%d) did not validate` and
   releases the user/pipe.
6. A new session is appended and its slots are probed:
   `LogOn`, `SetLoginInformation`, `SetTwoFactorCode`, `Set2ndFactorAuthCode`,
   `GetSteamID`, `GetLogonState`, `BHasCachedCredentials`, `SetLoginToken`,
   `GetAccountName`, `BUpdateAppOwnershipTicket`,
   `BGameConnectTokensAvailable`, `BIsOtherSessionPlaying`.

Return values: `0` refused, `1` fresh user, `2` reused live session. The caller
therefore distinguishes "already signed in" from "created, needs logon".

### 3.4 Logon enter

`0x18013cf00` latches `DAT_180409c59` (`exchange`), joins the previous logon
worker if one exists, clears cancel/code flags, sets state `1`, and returns
whether the caller now owns the worker slot. All entry points (password, token,
code) call it before spawning.

### 3.5 Logon worker

`0x18013ca40`:

```
LogOn(...)
log "[AS] LogOn returned %d (%s); logonState=%d tryingToLogin=%d"
if EResult < 2: pump = 0x18013bba0(timeout)
if pump == 3: retry up to three times, draining callbacks 30 x 50 ms
if pump == -2 (cancelled): state 0, release worker, return
otherwise: 0x18013c230(result)
if autoDeploy && state == 4: 0x180137a90()
if state == 4: poll 0x1801355a0 up to 8 times / 500 ms to store Steam's token
```

The retry is specifically EResult `3` ("no connection to Steam"): the previous
session is still being released. Three attempts are allowed, each preceded by a
callback drain of up to 1.5 s.

### 3.6 Callback pump

`0x18013bba0` polls every 20 ms until the timeout:

- user cancel latch → `0xfffffffe`;
- pending two-factor code (`DAT_180409c28`) → `0x18013b850`, clear the latch;
- `Steam_BGetCallback` fault → return `2`;
- callback `101` (`LoggedOn`) → accept only when `GetSteamID` is non-zero;
- `0x66`/`0x67` → log EResult, clear worker, stop;
- logon state `3` (`LoggingOn`) for more than 5999 ms → set state `2`, status
  `Steam Guard: approve the login in the Steam app, or type the code here`;
- logon state `4`/non-zero SteamID → accept with status
  `[AS] logon state says we are on and SteamID is real (%llu) - accepting`;
- timeout → `0x10`.

Password waits `180000` ms (`0x18013d3d0`), token waits `45000` ms
(`0x18013dfa0`). The guard prompt is one-shot per attempt (`bVar2`).

### 3.7 Result handling

`0x18013c230` writes `DAT_180409c74`, then:

- error `1` (no account / guard): status `Steam connected but never signed the
  account in - use the password, not the cached login`;
- success: sets `SteamID` and state `4`, updates the session's SteamID, runs
  `0x180138cf0` (join readiness), prints diagnostics for both the active account
  and the game's account, clears the ticket-probe latch, status
  `logged in - SteamID64 %llu (press Deploy)`;
- `0x3f`/`0x41`/`0x42`: e-mail guard status, state `3`;
- `0x55`/`0x58`: mobile guard status, state `2`;
- default: `login failed: %s (EResult %d)`, state `5`, `0x18013a1e0`.

`0x18013a1e0` releases the `IClientUser` pointer but **keeps the local user and
pipe** and logs:

> `[AS] logon failed - keeping local user %d (pipe %d) for the next attempt; replacing it would cost us the only user Steam will authorise`

This is the central invariant: a process gets one authorisable local user per
launch; the code never releases it to retry.

### 3.8 Join readiness

`0x180138cf0` calls `BUpdateAppOwnershipTicket(app=4000)` then polls every 250 ms
for up to 20 s. Ready requires all of:

```
BLoggedOn
BIsSubscribedApp(4000)
GetAppOwnershipTicketLength(4000) > 0
BGameConnectTokensAvailable
```

If `BGameConnectTokensAvailable` does not resolve, the gate is reported OFF and
deploy is allowed to proceed. On timeout:

> `[AS] account did not become join-ready within %d ms (connectTokens=%d) - the deploy will refuse a session with no connect token rather than dead-end the launch`

### 3.9 Log off

`0x18013eee0` stops the service loop, signs every pooled session out through
`IClientUser`, keeps the user object, clears state/status/SteamID and logs
`[AS] signed '%s' out of local user %d (pipe %d) - the user itself is KEPT`.

---

## 4. Login paths

### 4.1 Password

`0x18013cfb0` is the UI/worker entry:

- rejects an empty username or password with
  `username and password are required`;
- resolves the Steam client's current account (`0x180138610`) and refuses if it
  equals the requested username:
  `Steam is already signed in as this account - a second session would sign the first one out (that is the "please start Steam" error)`;
- calls `0x18013cf00`, copies the username into the status, allocates a 0x48-byte
  worker record (`username`, `password`, `remember`, `autoDeploy`) and starts
  `0x180220fe0` → `0x18013d3d0`;
- zeroes the password buffer after the call.

`0x18013d3d0` calls the pool resolver `0x18013aba0`:

- `0` → state `5`, return;
- `2` (already signed in) → read SteamID, state `4`, set status
  `... (already signed in)`, optionally deploy;
- otherwise call `SetLoginInformation(username, <password>, remember)`; a
  missing slot logs `SetLoginInformation is missing from IClientUser`; a success
  logs `[AS] SetLoginInformation('%s', <password>, remember=%d) sent`, sets
  status `logging in...` and calls `0x18013ca40(autoDeploy, 180000, ...)`.

The password string is wiped before return.

### 4.2 Token

`0x18013d830` takes `(username, autoDeploy, token)`:

1. If the token is non-empty, `0x180133200` extracts its `sub` SteamID.
2. A malformed token returns the message:
   `that does not look like a Steam login token - it should be three dot-separated parts starting with "eyA"`.
3. If the subject equals the account the Steam client is already signed in as,
   it refuses:
   `that token belongs to the account Steam itself is signed in as - using it would sign the client out and the game would ask you to start Steam`;
   log `[AS] refused a token for %llu: that is the account the game is running as`.
4. It resolves the account name for the subject (`0x18013d750`). If Steam files
   the subject under a different name, it uses that name and logs
   `[AS] token names SteamID %llu, which Steam files as '%s' - using that instead of the typed '%s'`.
5. If the subject has no known account name it requires the typed username:
   `this token is for an account Steam has never signed in here - type its login name in the username box`.
6. It inserts/updates the account, then calls the same pool path. A live pool
   entry sets state `4` and status `... (already signed in)`.

`0x18013dfa0` is the token worker:

- source order `manual` > `vault` > `Steam ConnectCache`;
- log `[AS] token switch for '%s': savedID=%llu token=%s` with the source text;
- pool resolver results as above;
- no token → `no saved token for this account - sign in with the password once (Remember on)`;
- `SetLoginToken` missing → `this Steam build has no SetLoginToken - use the password`;
- send `SetLoginToken`, log
  `[AS] token login for '%s' (SetLoginToken slot=%d sent=%d, id=%llu)`, then
  `0x18013ca40(autoDeploy, 45000, token)`;
- on success, protect and store a manually typed token (`0x180134a00`) and log
  `[AS] the token typed in for '%s' worked and is now in the vault`;
- on failure: `0x19` → rate-limit message; `0x5`/`0x12` with a manual token →
  `Steam rejected that token - check it belongs to this username, and that it has not expired`;
  `0x5`/`0x12` with a vault token → drop it (`0x180134f10`) and say
  `the saved token for this account expired - sign in with the password once`,
  log `[AS] token for '%s' rejected (EResult %d) - dropped from the vault`.

### 4.3 Steam Guard

`0x18013e870` accepts the code string. If a logon worker is alive it stores the
code at `0x1803e9e60`, sets `DAT_180409c28`, status `submitting code...`; the
pump consumes it. Otherwise it calls `0x18013cf00` and spawns
`0x1802210a0` → `0x18013b850`.

`0x18013b850` chooses the setter by current state:

- state `3` (e-mail) → `SetTwoFactorCode(code, 0)`;
- otherwise → `Set2ndFactorAuthCode(code)`;
- missing setters log `this build of IClientUser has no code setter`;
- on success state returns to `1`, `LogOn` is retried with
  `0x110000100000000`, and both results are logged (`code submitted ...`,
  `[AS] LogOn (after code) returned %d (%s)`).

`0x18013ed20` is the out-of-band variant used when no worker exists; it writes
the code and logs `[AS] code submitted out of band (twoFactor=%d, accepted=%d)`.

---

## 5. Token vault and account files

### 5.1 Location

`0x180133bf0` / `0x180135860` build:

```
%USERPROFILE%\Documents\mayrrX64\settings\accounts.txt
%USERPROFILE%\Documents\mayrrX64\settings\tokens.dat
```

Documents comes from `SHGetFolderPathW(CSIDL_PERSONAL)`; a failure falls back to
`%USERPROFILE%\Documents\mayrrX64`. The directory is created if missing.

### 5.2 `accounts.txt`

Two header lines, then one record per line:

```
# mayrrX64 saved Steam accounts - account<TAB>steamid64<TAB>label
# passwords are NEVER stored here; passwordless switching uses Steam's own credential cache
name<TAB>7656119...<TAB>label
```

`0x180135f40` reads it, skipping `#` and empty lines, splitting on tabs, and
rejecting a zero SteamID. `0x1801365b0` writes it. `0x1801368a0` merges by
case-insensitive account name (a known SteamID/label is not erased by an empty
value); `0x180136ab0` removes one account. Both persist immediately.

### 5.3 `tokens.dat`

Two header lines, then:

```
name<TAB>7656119...<TAB>hex(DPAPI blob)
```

The blob is `CryptProtectData(token, L"mayrrX64 Steam token", entropy, NULL,
NULL, 0, &out)`. Entropy is the **lowercased account name**
(`0x180133a10` folds only A-Z). The output is hex-encoded lowercase and stored
by `0x180134830`; `0x1801342d0` reads it and `0x180133af0` decodes the hex.
`0x180134a00` is the save primitive; it also updates an existing record for the
same lowercased account and rewrites the file. `0x180134f10` drops a record.

`0x180135100` loads a token for an account, DPAPI-unprotects it, and applies the
token-shape check before returning it. `0x1801355a0` protects and stores a token
if the plaintext is non-empty. `0x180135620` selects the vault first, then Steam's
`local.vdf` ConnectCache (`0x1801338c0`).

### 5.4 Token shape and subject

`0x180135100` requires:

- length at least `0x28`;
- first two bytes `ey`;
- at least two `.`;
- only base64url (`A-Z a-z 0-9 - _`) plus `.`.

`0x180133200` base64url-decodes the payload (padding `-`→`+`, `_`→`/`, adds `=`),
searches for `"sub"`, skips `:`, spaces and quotes, and parses decimal digits.
A missing/empty claim returns `0`.

### 5.5 Steam ConnectCache migration

`0x180139540` scans the imported account list. For each account with no vault
token it calls `0x1801338c0` to read Steam's `local.vdf` ConnectCache. A non-empty
DPAPI blob is protected under the same account entropy and written to the vault,
logging:

> `[AS] token vault: picked up Steam's cached token for '%s'`

This is why "Import from Steam" gives passwordless switching for accounts Steam
still remembers.

---

## 6. Import from Steam

`0x180139c90`:

- reads `Steam/config/loginusers.vdf` via `0x180139640`;
- merges every `SteamID64` block into `accounts`, taking `PersonaName` as the
  label and the block key as the ID;
- persists `accounts.txt`, picks up ConnectCache tokens, then counts:
  added / already known / total / with token;
- on an empty file logs
  `[AS] import: loginusers.vdf gave nothing (SteamPath='%s')` and shows
  `Steam's loginusers.vdf could not be read - check that Steam is installed for this user`.

The parser `0x180139640` is a brace/quote scanner, not a full VDF library: it
tracks the `users` block, the SteamID64 key, `AccountName`, `PersonaName`,
`RememberPassword`, `AllowAutoLogin`/`AutoLogin`, `MostRecent`, `Timestamp`.
The label is `PersonaName`; the account key is the SteamID64.

---

## 7. Deploy

`0x180137a90` is the deploy body.

Preconditions, in order:

1. active `IClientUser` non-null and state `4`, else
   `log an account in first`;
2. `DAT_180409c30 != 0`, else `this session has no SteamID yet - not deploying it`;
3. already deployed → return `1` (no second deploy);
4. `BGameConnectTokensAvailable` resolves and is false → refuse:
   `Steam has not handed this account a connect token yet - wait a few seconds and press Deploy again (deploying now would break joining until the game restarts)`;
5. `steam_api64!SteamAPI_SteamUser_v023` / `GetHSteamUser` / `GetHSteamPipe` /
   `SteamClient` / `GetISteamUser` missing → `steam_api64 did not hand over ISteamUser`;
6. adapter layout changed → `ISteamUser adapter layout changed - re-run tools/analyze_steamclient.py`.

On success:

- saves the engine's current user pointer/SteamID (`DAT_180409c38`,
  `DAT_180409c50`);
- overwrites the adapter's user slot with the active `IClientUser`
  (`*adapter = DAT_180409c80`), sets deployed;
- starts the service loop if any pooled pipe or the active pipe exists;
- installs GET/cancel ticket hooks only when the engine's interface table has
  more than 17 slots (cap 512);
- installs the `ConnectionClosing` hook when exactly one candidate is found;
- calls `BUpdateAppOwnershipTicket(4000)` and logs post-deploy ownership-token
  length and connect-token availability.

The status becomes `deployed - the game now speaks as %llu`.

### Restore

`0x180138480` restores the saved game identity (`DAT_180409c50`) without signing
anything out; the UI's **Restore game account** calls it. `0x180138c70` stops the
service loop.

---

## 8. Engine ticket cache and service loop

### 8.1 CSteam3Client

`0x1801377f0` scans `engine.dll` for:

```
E8 ? ? ? ? 48 8B C8 44 88 74 24 30 48 8D 44 24 50
48 8D BB B4 00 00 00 83 3F 00 0F 87
```

The first match is the call site; the second is the `lea rdi,[rbx+0xB4]` gate.
It validates the resolved module range and the `m_cubTicket` offset
(`offset - 0x40 < 0x3fc1`, i.e. `[0x40, 0x4000)`), then stores the instance and
offset. `0x180137a30` clears the 4-byte cache (`m_cubTicket = 0`) and logs:

> `[AS] engine auth-ticket cache cleared (%s): m_cubTicket %u -> 0`

This is the **only** way a second account can join without restarting: the
engine caches the first account's auth ticket and will otherwise reuse it.

### 8.2 Service loop

`0x180138760` drains every pooled pipe plus the active pipe every 50 ms. It
stops on the cancel/deploy flags or a missing engine. Per callback:

- `163` (`GetAuthSessionTicketResponse`): logs handle/EResult and packs them
  into `DAT_180409c98` for the waiting ticket wrapper;
- `113` (`ClientGameServerDeny`): logs reason, server IP/port, app, secure flag,
  and current logged-on/connect-token state. The reason switch is the
  `EDenyReason` table (below);
- `101`/`102`/`103`: connection callbacks;
- any other ISteamUser callback in `100..120`: logged once per id via a 32-bit
  bitmask at `0x1804258f0`.

### 8.3 Ticket trace

`0x180137380` wraps `ISteamUser::GetAuthSessionTicket`:

- calls the original, logs `[AS] TICKET #%d: handle=%u bytes=%u as %llu` or
  `REFUSED` with before/after source lines;
- if deployed and the service loop is running, waits up to 3000 ms for callback
  163 with the same handle;
- timeout logs
  `[AS] ticket %u NOT acknowledged within %u ms - letting the connect go out anyway; a kick with STEAM validation rejected right after the join is explained by this line`;
- acknowledgement logs
  `[AS] ticket %u acknowledged by Steam after %u ms (EResult=%u %s)`.

`0x180137550` logs a cancel and forwards to the original. `0x180137590` logs
`[AS] *** SERVER CLOSED THE CONNECTION: "%s" [deployed=%d as %llu, our session loggedOn=%d]`
and forwards. `0x180137640` finds `Disconnect: %s.` and the unique call site that
references it; zero or multiple candidates are not hooked.

---

## 9. Repair

`0x180139010`:

1. no active session → `no session to repair - sign an account in first`;
2. drain callbacks;
3. require `BLoggedOn` and `BGameConnectTokensAvailable`, else
   `Steam has not handed this account a connect token back yet - wait a few seconds and press Repair again`;
4. clear the engine cache (`0x180137a30("repair")`); failure →
   `the engine's ticket cache could not be found - restart the game to clear it`;
5. success → `repaired - reconnect to the server and the game will ask Steam for a fresh ticket`.

---

## 10. Diagnostics

`0x1801393d0` prints the build banner, then `0x180136d80` twice: once for the
active account (`0x18035b304`, `our session`) and once for the game account
(`0x1803476ec`, `Game is presenting:`).

Per account:

```
[AS] diag %-6s: id=%llu name='%s' loggedOn=%d ownsApp%u=%d ownershipTicket=%d connectTokens=%d gamesRunning=%d runningGameID=%llu
[AS] diag %-6s: LICENCE IS BORROWED - app %u is family-shared from %llu. ...
[AS] diag %-6s: licence owner=%llu (this account owns the game)
[AS] diag %-6s: licence owner could not be read out of the ownership ticket (layout unknown) - family sharing not ruled out
[AS] diag %-6s: limited=%d lockedDown=%d communityBanned=%d vacBanned(app)=%d accountFlags=0x%08X securityPolicy=0x%08X twoFactor=%d
[AS] diag %-6s: otherSessionPlaying=%d(kind=%u)
```

The `Ctrl+click` path also calls `GetAuthSessionTicket` once and logs handle and
byte count. A normal click deliberately skips it:

> `[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.`

It also reports `[AS] diag blob: ours=%d game=%d (one game connect token each)`.

---

## 11. UI (`0x1801d3b90`, 9040 B)

The account page is part of the same ImGui body as the rest of the menu and uses
these IDs:

| ID | Control |
|---|---|
| `##as_list` | saved-account list |
| `##as_row` | one account row |
| `##as_label` | label editor |
| `##as_user` | Steam username |
| `##as_pass` | password (password flag, cleared after Login) |
| `##as_token_popup` | token popup |
| `##as_token` | token input (`eyA...`) |
| `##as_code` | Steam Guard code (`XXXXX`) |

Actions map directly:

| Action | Body |
|---|---|
| Login | `0x18013cfb0` |
| Cancel | set `0x180409c58`, status `cancelling...` |
| Log off | `0x18013cf00` then thread `0x180221100` → `0x18013eee0` |
| Restore game account | `0x180138480` |
| Deploy to game | `0x180137a90` |
| Import from Steam | `0x180139c90` |
| Sign in with a token | `0x18013d830` |
| Repair join | `0x180139010` |
| Diagnose | `0x1801393d0(ctrl)` |
| Submit code | `0x18013e870` |
| Switch | `0x18013d830(account, autoDeploy, empty token)` |
| Drop | `0x180136ab0` |

The row shows `Switch` only when a token is available, otherwise `no token`;
`Switch` signs in with the saved refresh token. The status line is
`DAT_1803e9e20`; the SteamID is `DAT_180409c30`. The page also renders the
"Game is presenting" block from `DAT_180409c38`/`0x180409c50`.

---

## 12. Complete `[AS]` body table

`size` is the inventory extent in bytes; all bodies were read in full.

| Address | Size | Role |
|---|---:|---|
| `0x180136d80` | 1168 | per-account diagnostic block: base state, licence, flags, other session |
| `0x180137380` | 450 | GetAuthSessionTicket trace + 3 s acknowledgement wait |
| `0x180137550` | 49 | CancelAuthTicket trace |
| `0x180137590` | 170 | ConnectionClosing trace |
| `0x180137640` | 422 | engine `Disconnect: %s.` / call-site scanner |
| `0x1801377f0` | 563 | CSteam3Client + `m_cubTicket` resolver |
| `0x180137a30` | 74 | clear engine ticket cache |
| `0x180137a90` | 2266 | deploy / identity steal |
| `0x180138760` | 1223 | service loop (all pipes, callbacks 163/113/connection) |
| `0x180138cf0` | 787 | 20 s join-readiness wait |
| `0x180139010` | 959 | repair join |
| `0x1801393d0` | 358 | Diagnose command |
| `0x180139540` | 256 | pick up Steam ConnectCache tokens |
| `0x180139c90` | 1357 | import loginusers.vdf |
| `0x18013a1e0` | 278 | keep local user on failed logon |
| `0x18013a300` | 594 | unload environment handoff |
| `0x18013a560` | 1595 | adopt previous load |
| `0x18013aba0` | 3169 | session pool / CreateLocalUser / IClientUser slots |
| `0x18013b850` | 836 | submit Steam Guard code + retry LogOn |
| `0x18013bba0` | 1669 | logon callback pump |
| `0x18013c230` | 1949 | EResult -> state/status |
| `0x18013ca40` | 1203 | LogOn dispatch, EResult 3 retry, token-vault save |
| `0x18013d3d0` | 893 | password login worker |
| `0x18013d830` | 1888 | token login entry and subject reconciliation |
| `0x18013dfa0` | 2251 | token switch worker |
| `0x18013ed20` | 441 | out-of-band guard code |
| `0x18013eee0` | 470 | log off every pooled session |

## 13. Direct support bodies

| Address | Size | Role |
|---|---:|---|
| `0x180133200` | 1077 | base64url decode + JWT `sub` extraction |
| `0x1801338c0` | 322 | Steam `local.vdf` ConnectCache lookup |
| `0x180133a10` | 222 | ASCII lowercase (DPAPI entropy) |
| `0x180133af0` | 249 | hex decode |
| `0x180133bf0` | 1751 | `tokens.dat` path |
| `0x1801342d0` | 1372 | `tokens.dat` read |
| `0x180134830` | 458 | `tokens.dat` write |
| `0x180134a00` | 1291 | DPAPI protect + vault update |
| `0x180134f10` | 496 | drop vault record |
| `0x180135100` | 1171 | load/unprotect/validate token |
| `0x1801355a0` | 116 | store token if non-empty |
| `0x180135620` | 132 | vault then ConnectCache selection |
| `0x180135740` | 143 | status copy |
| `0x180135860` | 1751 | `accounts.txt` path |
| `0x180135f40` | 1642 | `accounts.txt` read |
| `0x1801365b0` | 541 | `accounts.txt` write |
| `0x1801367d0` | 194 | snapshot account vector |
| `0x1801368a0` | 522 | upsert account + persist |
| `0x180136ab0` | 470 | drop account + persist |
| `0x180138480` | 91 | restore game identity |
| `0x180138610` | 95 | resolve the Steam client's current account name |
| `0x180138c70` | 124 | stop service loop |
| `0x180139640` | 1604 | `loginusers.vdf` parser |
| `0x18013cf00` | 166 | join previous worker, set state 1 |
| `0x18013cfb0` | 1046 | password login entry |
| `0x18013d750` | 213 | SteamID64 -> account-name lookup |
| `0x18013e870` | 1198 | code submission entry |
| `0x1801d3b90` | 9040 | ImGui page |
| `0x1801fb3a0` | 2457 | process-exit call to `0x18013a300` |
| `0x180206da0` | 182 | constructor |
| `0x180220fe0` | 94 | password worker thunk |
| `0x180221040` | 94 | token worker thunk |
| `0x180221100` | 61 | logoff worker thunk |
| `0x1802210a0` | — | code worker thunk (called from `0x18013e870`) |

---

## 14. Constants

| Constant | Value | Source |
|---|---:|---|
| session stride | `0x38` | vector walks |
| account stride | `0x48` | vector walks |
| password logon timeout | 180 000 ms | `0x18013d3d0` |
| token logon timeout | 45 000 ms | `0x18013dfa0` |
| pump poll | 20 ms | `0x18013bba0` |
| guard prompt delay | 6 000 ms | `0x18013bba0` |
| EResult 3 retries | 3 | `0x18013ca40` |
| retry drain | 30 × 50 ms | `0x18013ca40` |
| service poll | 50 ms | `0x180138760` |
| join-ready poll | 250 ms | `0x180138cf0` |
| join-ready timeout | 20 000 ms | `0x180138cf0` |
| ticket ack timeout | 3 000 ms | `0x180137380` |
| token store attempts | 8 × 500 ms | `0x18013ca40` |
| ticket trace slots | 17..512 | `0x180137a90` |
| app id | 4000 | diagnostics / ownership |
| `m_cubTicket` range | `[0x40, 0x4000)` | `0x1801377f0` |
| `BGetCallback` callbacks | 101/102/103/113/163 | `0x180138760` |

---

## 15. Verbatim strings used by the implementation

The header carries the full EResult and EDenyReason tables and the UI labels.
The following are the operational strings that define behaviour:

- `steamclient64.dll is not loaded in this process`
- `Steam refused to create a local user`
- `IClientEngine layout changed - re-run tools/analyze_steamclient.py`
- `IClientUser did not validate - re-run tools/analyze_steamclient.py`
- `[AS] reusing the live session for '%s' (user=%d pipe=%d, SteamID %llu) - no logon needed`
- `[AS] pooled session for '%s' is not signed in - re-logging the SAME user (never replacing it: only the first local user of a launch can authorise)`
- `[AS] logon failed - keeping local user %d (pipe %d) for the next attempt; replacing it would cost us the only user Steam will authorise`
- `[AS] the local user left by the previous load (user=%d pipe=%d) is gone - starting fresh`
- `[AS] adopted the local user from the previous load: user=%d pipe=%d '%s' SteamID=%llu loggedOn=%d`
- `[AS] unload: leaving local user %d (pipe %d, '%s') SIGNED IN for the next load - a replacement would be this process's second user and Steam will not authorise one`
- `[AS] signed '%s' out of local user %d (pipe %d) - the user itself is KEPT`
- `[AS] deploy refused: SteamID is %llu`
- `[AS] deploy refused for %llu: connect-token pool is empty`
- `[AS] deploy: adapter=%p slot=%p was=%p now=%p (game SteamID -> %llu)`
- `[AS] post-deploy: ownershipTicket=%d connectTokens=%d (no ticket probe - a probe spends a connect token, and an empty pool dead-ends the launch)`
- `[AS] CSteam3Client: signature miss (callSite=%p gate=%p) - the engine's ticket cache will NOT be reset, so only the first account will join`
- `[AS] CSteam3Client resolved: instance=%p m_cubTicket=+0x%X (engine+0x%llX)`
- `[AS] engine auth-ticket cache cleared (%s): m_cubTicket %u -> 0`
- `[AS] repair: connect tokens are back and the engine ticket cache is cleared (account %llu, deployed=%d)`
- `[AS] repair: CSteam3Client did not resolve, m_cubTicket left alone`
- `[AS] repair: connect-token pool still empty for %llu - nothing to repair yet`
- `[AS] token vault: picked up Steam's cached token for '%s'`
- `[AS] token vault: stored a refresh token for '%s' (try %d) - this account can now be switched to with no password`
- `[AS] token vault: Steam wrote no token for '%s' - switching to it will need the password again (was "Remember" on?)`
- `[AS] token switch for '%s': savedID=%llu token=%s`
- `[AS] token login for '%s' (SetLoginToken slot=%d sent=%d, id=%llu)`
- `[AS] token for '%s' rejected (EResult %d) - dropped from the vault`
- `[AS] import: %d added, %d already known, %zu in loginusers.vdf, %d have a token`
- `[AS] this account was already playing in another session (kind=%u) - kick %s`
- `[AS] service loop started - draining %zu pooled pipe(s), active pipe %d`
- `[AS] service loop stopped`
- `[AS] *** callback 163 GetAuthSessionTicketResponse on pipe %d: handle=%u EResult=%u (%s)`
- `[AS] *** callback 113 ClientGameServerDeny: reason=%u (%s) server=%u.%u.%u.%u:%u app=%u secure=%u [our session now: loggedOn=%d connectTokens=%d]`
- `[AS] ticket %u acknowledged by Steam after %u ms (EResult=%u %s)`
- `[AS] ticket %u NOT acknowledged within %u ms - letting the connect go out anyway; a kick with STEAM validation rejected right after the join is explained by this line`
- `[AS] TICKET cancel: handle=%u (if a server is validating this one, it will kick with STEAM validation rejected)`
- `[AS] *** SERVER CLOSED THE CONNECTION: "%s" [deployed=%d as %llu, our session loggedOn=%d]`

---

## 16. External boundaries (honest limits)

These are dependencies, not unreconstructed code:

- **Steam flat client API.** `Steam_CreateLocalUser`, `Steam_BGetCallback`,
  `Steam_FreeLastCallback`, `Steam_ReleaseUser`, `Steam_BReleaseSteamPipe` are
  internal `steamclient64.dll` exports, not public Steamworks SDK functions.
  Their signatures and lifetime rules are documented by Open Steamworks and
  Valve's Proton shim, and the binary's call sites match those shapes. They are
  version-specific and cannot be exercised without a live client.
- **`IClientUser` vtable slots.** The binary resolves slots by name through
  `0x1801318c0`; the reconstructed code names the operations, not fixed slot
  numbers, because the slot map is client-build-dependent.
- **DPAPI.** Per-user protection; the blob is worthless if copied to another
  Windows user/machine, as the file header says. Entropy is the lowercased
  account name.
- **Engine `CSteam3Client`.** Resolved by two byte signatures; the layout is
  validated before use and degrades to "do not clear" with a loud log.
- **Live Steam login.** No Steam client/account is available in this workspace,
  so password, token, guard, deploy and ticket acknowledgement are verified
  structurally and by self-test, not against Steam's servers.

No `[AS]` body remains unread. The class vtable is entirely the shared no-op,
which is why the feature is implemented as free functions rather than a tick
method.
