// 0x1800d2dd0  FUN_1800d2dd0
// size=121 thunk=false
// signature: undefined FUN_1800d2dd0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d2dd0(int *param_1)

{
  char cVar1;
  
  if (*param_1 != 0) {
    cVar1 = FUN_1800d2cb0();
    if ((((cVar1 == '\0') && ((param_1[2] & 0x7f800000U) != 0x7f800000)) &&
        ((param_1[3] & 0x7f800000U) != 0x7f800000)) && ((param_1[4] & 0x7f800000U) != 0x7f800000)) {
      DAT_1803eb86c = param_1[3];
      _DAT_1803eb870 = param_1[4];
      DAT_18040a4b0 = 1;
      DAT_1803eb868 = param_1[2];
    }
  }
  return;
}


