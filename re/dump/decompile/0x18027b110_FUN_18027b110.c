// 0x18027b110  FUN_18027b110
// size=119 thunk=false
// signature: undefined FUN_18027b110()
// status: ok


char * FUN_18027b110(uint param_1)

{
  if (param_1 == 0) {
    return "None";
  }
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  if (0x9a < param_1 - 0x200) {
    return "Unknown";
  }
  return *(char **)(&UNK_180330790 + (longlong)(int)param_1 * 8);
}


