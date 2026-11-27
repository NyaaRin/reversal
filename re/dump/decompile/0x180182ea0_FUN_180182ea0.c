// 0x180182ea0  FUN_180182ea0
// size=160 thunk=false
// signature: undefined FUN_180182ea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180182ea0(longlong param_1)

{
  uint uVar1;
  longlong *_Dst;
  int iVar2;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  uVar1 = 0;
  iVar2 = (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249;
  if (0 < iVar2) {
    while (_Dst = (longlong *)((ulonglong)uVar1 * 0x38 + DAT_1803edce0), *_Dst != param_1) {
      uVar1 = uVar1 + 1;
      if (iVar2 <= (int)uVar1) {
        return;
      }
    }
    memmove(_Dst,_Dst + 7,DAT_1803edce8 - (longlong)(_Dst + 7));
    DAT_1803edce8 = DAT_1803edce8 + -0x38;
  }
  return;
}


