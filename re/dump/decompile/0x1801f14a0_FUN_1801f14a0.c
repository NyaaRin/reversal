// 0x1801f14a0  FUN_1801f14a0
// size=479 thunk=false
// signature: undefined FUN_1801f14a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801f14a0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  LPCSTR lpModuleName;
  BOOL BVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_2a8 [32];
  char *local_288;
  undefined8 local_280;
  int local_278;
  HMODULE local_268 [2];
  undefined1 local_258 [304];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  if (((param_1 != (undefined8 *)0x0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) &&
     (DAT_1803fe4c0 = DAT_1803fe4c0 + 1, DAT_1803fe4c0 < 0xb)) {
    memset(local_258,0,0x124);
    lpModuleName = *(LPCSTR *)(piVar1 + 4);
    local_268[0] = (HMODULE)0x0;
    if (((lpModuleName == (LPCSTR)0x0) ||
        (BVar2 = GetModuleHandleExA(6,lpModuleName,local_268), BVar2 == 0)) ||
       (local_268[0] == (HMODULE)0x0)) {
      FUN_180012a60(local_258,0x124,"%p <no module>",lpModuleName);
    }
    else {
      memset(local_128,0,0x104);
      GetModuleFileNameA(local_268[0],local_128,0x104);
      pcVar3 = strrchr(local_128,0x5c);
      local_288 = (char *)((longlong)lpModuleName - (longlong)local_268[0]);
      pcVar4 = pcVar3 + 1;
      if (pcVar3 == (char *)0x0) {
        pcVar4 = local_128;
      }
      FUN_180012a60(local_258,0x124,"%s+0x%llX",pcVar4);
    }
    if ((*piVar1 == -0x3ffffffb) && (1 < (uint)piVar1[6])) {
      local_280 = *(undefined8 *)(piVar1 + 10);
      if (*(longlong *)(piVar1 + 8) == 0) {
        local_288 = "read";
      }
      else {
        local_288 = "execute";
        if (*(longlong *)(piVar1 + 8) == 1) {
          local_288 = "write";
        }
      }
      local_278 = DAT_1803fe4c0;
      FUN_180014410("[FAULT] %s: 0x%08X at %s -- %s 0x%llX (#%d, NOT handled)\n",param_2,0xc0000005,
                    local_258);
    }
    else {
      local_288 = (char *)CONCAT44(local_288._4_4_,DAT_1803fe4c0);
      FUN_180014410("[FAULT] %s: 0x%08X at %s (#%d, NOT handled)\n",param_2,*piVar1,local_258);
    }
  }
  return 0;
}


