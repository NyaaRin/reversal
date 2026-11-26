// 0x180132470  FUN_180132470
// size=225 thunk=false
// signature: undefined FUN_180132470()
// status: ok


char * FUN_180132470(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "OK";
  case 2:
    return "generic failure";
  case 3:
    return "no connection to Steam";
  default:
    return "unknown result";
  case 5:
    return "invalid password";
  case 6:
    return "logged in elsewhere";
  case 8:
    return "invalid parameter";
  case 10:
    return "Steam is busy";
  case 0x10:
    return "timed out";
  case 0x11:
    return "account banned";
  case 0x12:
    return "account not found";
  case 0x14:
    return "Steam service unavailable";
  case 0x15:
    return "not logged on";
  case 0x19:
    return "rate limited - wait a few minutes";
  case 0x3f:
    return "Steam Guard e-mail code required";
  case 0x41:
    return "wrong Steam Guard e-mail code";
  case 0x42:
    return "Steam Guard code required (no mail on file)";
  case 0x47:
    return "IP banned";
  case 0x4a:
    return "account locked down";
  case 0x4b:
    return "verified e-mail required";
  case 0x55:
    return "mobile authenticator code required";
  case 0x58:
    return "wrong mobile authenticator code";
  case 0x59:
    return "wrong activation code";
  }
}


