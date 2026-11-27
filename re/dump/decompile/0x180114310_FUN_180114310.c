// 0x180114310  FUN_180114310
// size=193 thunk=false
// signature: undefined FUN_180114310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180114310(DWORD64 param_1)

{
  ushort uVar1;
  PRUNTIME_FUNCTION p_Var2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  ulonglong local_e8 [2];
  ulonglong local_d8 [24];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    local_e8[0] = 0;
    p_Var2 = RtlLookupFunctionEntry(param_1,local_e8,(PUNWIND_HISTORY_TABLE)0x0);
    if (p_Var2 != (PRUNTIME_FUNCTION)0x0) {
      uVar5 = p_Var2->BeginAddress + local_e8[0];
      uVar4 = p_Var2->EndAddress + local_e8[0];
      memset(local_d8,0,0xc0);
      uVar1 = RtlCaptureStackBackTrace(0,0x18,local_d8,0);
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          if ((uVar5 <= local_d8[uVar3]) && (local_d8[uVar3] < uVar4)) {
            return 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
    }
  }
  return 0;
}


