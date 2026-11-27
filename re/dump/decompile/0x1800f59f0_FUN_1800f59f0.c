// 0x1800f59f0  FUN_1800f59f0
// size=64 thunk=false
// signature: undefined FUN_1800f59f0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f59f0(undefined8 param_1,ulonglong param_2)

{
  undefined4 uStackX_1c;
  
  _DAT_1803e7b70 = param_1;
  uStackX_1c = (float)(param_2 >> 0x20);
  if (uStackX_1c <= DAT_180381070) {
    uStackX_1c = DAT_180381070;
  }
  if ((float)param_2 <= DAT_180381138) {
    param_2 = (ulonglong)(uint)DAT_180381138;
  }
  DAT_1804015c8 = 1;
  DAT_1803e7b84 = uStackX_1c;
  DAT_1803e7b80 = (int)param_2;
  return;
}


