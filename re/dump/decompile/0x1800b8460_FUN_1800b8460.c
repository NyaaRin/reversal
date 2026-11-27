// 0x1800b8460  FUN_1800b8460
// size=215 thunk=false
// signature: undefined FUN_1800b8460()
// status: ok


char * FUN_1800b8460(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "latch";
  case 1:
    return "move";
  case 2:
    return "move+180";
  case 3:
    return "goal";
  case 4:
    return "twist";
  case 5:
    return "feet";
  case 6:
    return "180";
  case 7:
    return "zero";
  case 8:
    return "desync:L";
  case 9:
    return "desync:R";
  case 10:
    return "+45";
  case 0xb:
    return "-45";
  case 0xc:
    return "+90";
  case 0xd:
    return "-90";
  case 0xe:
    return "+135";
  case 0xf:
    return "-135";
  case 0x10:
    return "sim:legit";
  case 0x11:
    return "sim:opposite";
  case 0x12:
    return "sim:left";
  case 0x13:
    return "sim:right";
  case 0x14:
    return "sim:jitter";
  case 0x15:
    return "sim:pattern";
  default:
    return "?";
  }
}


