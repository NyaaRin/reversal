// 0x1800b6430  FUN_1800b6430
// size=114 thunk=false
// signature: undefined FUN_1800b6430()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double FUN_1800b6430(void)

{
  double dVar1;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (DAT_1803feb60 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803feb60);
  }
  local_18.QuadPart = 0;
  QueryPerformanceCounter(&local_18);
  dVar1 = 0.0;
  if (0 < DAT_1803feb60) {
    dVar1 = (double)local_18.QuadPart / (double)DAT_1803feb60;
  }
  return dVar1;
}


