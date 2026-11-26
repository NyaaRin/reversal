// 0x1801f6010  FUN_1801f6010
// size=179 thunk=false
// signature: undefined FUN_1801f6010()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1801f6010(void)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (DAT_1803fcf48 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803fcf48);
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_1804260d0);
  }
  else {
    QueryPerformanceCounter(&local_18);
    lVar1 = local_18.QuadPart - (longlong)_DAT_1804260d0;
    _DAT_1804260d0 = local_18.s;
    fVar2 = (float)((double)lVar1 / (double)DAT_1803fcf48);
    if (0.0 < fVar2) {
      if (DAT_1803809ec <= fVar2) {
        fVar2 = DAT_1803809ec;
      }
      return fVar2;
    }
  }
  return DAT_180380990;
}


