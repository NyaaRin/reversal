// 0x1800aced0  FUN_1800aced0
// size=111 thunk=false
// signature: undefined FUN_1800aced0()
// status: ok


char * FUN_1800aced0(void)

{
  switch(DAT_1804236b8) {
  case 0:
    return "ok";
  case 1:
    return "pack has no autowall";
  case 2:
    return "pack penetration unavailable";
  case 3:
    return "no penetration budget";
  case 4:
    return "no surface between us";
  case 5:
    return "another body in the way";
  case 6:
    return "wall limit reached";
  case 7:
    return "pack refused this surface";
  case 8:
    return "out of range";
  default:
    return "damage floor";
  }
}


