// 0x1801f5f50  FUN_1801f5f50
// size=179 thunk=false
// signature: undefined FUN_1801f5f50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1801f5f50(void)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (DAT_180400a00 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180400a00);
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_1803fe540);
  }
  else {
    QueryPerformanceCounter(&local_18);
    lVar1 = local_18.QuadPart - (longlong)_DAT_1803fe540;
    _DAT_1803fe540 = local_18.s;
    fVar2 = (float)((double)lVar1 / (double)DAT_180400a00);
    if (0.0 < fVar2) {
      if (DAT_1803809ec <= fVar2) {
        fVar2 = DAT_1803809ec;
      }
      return fVar2;
    }
  }
  return DAT_180380990;
}


