// 0x18005e2e0  FUN_18005e2e0
// size=107 thunk=false
// signature: undefined FUN_18005e2e0()
// status: ok


void * FUN_18005e2e0(uint param_1)

{
  ulonglong uVar1;
  
  if (param_1 < 0x10009) {
    uVar1 = (longlong)((int)(param_1 + 3 + ((int)(param_1 + 3) >> 0x1f & 3U)) >> 2) + 1;
    if ((ulonglong)(DAT_1803eb418 - (longlong)DAT_1803eb410 >> 2) < uVar1) {
      FUN_18021a080();
    }
    memset(DAT_1803eb410,0,uVar1 * 4);
    return DAT_1803eb410;
  }
  return (void *)0x0;
}


