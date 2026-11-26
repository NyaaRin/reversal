// 0x180014d70  FUN_180014d70
// size=551 thunk=false
// signature: undefined FUN_180014d70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180014d70(longlong *param_1)

{
  LPCSTR lpModuleName;
  int *piVar1;
  DWORD DVar2;
  BOOL BVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  undefined1 *local_2c0;
  DWORD local_2b8;
  int local_2b0;
  HMODULE local_2a8 [2];
  undefined1 local_298;
  undefined8 local_297;
  undefined8 uStack_28f;
  undefined8 local_287;
  undefined8 uStack_27f;
  undefined8 local_277;
  undefined8 uStack_26f;
  undefined8 local_267;
  undefined8 uStack_25f;
  undefined8 local_257;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  CHAR local_238;
  undefined1 local_237 [271];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_2e8;
  LOCK();
  UNLOCK();
  iVar5 = DAT_1804258dc + 1;
  DAT_1804258dc = DAT_1804258dc + 1;
  DVar2 = GetTickCount();
  if ((iVar5 < 9) || (1000 < DVar2 - _DAT_1803ff790)) {
    lpModuleName = *(LPCSTR *)(*param_1 + 0x10);
    local_128[0] = '?';
    local_128[1] = '\0';
    _DAT_1803ff790 = DVar2;
    memset(local_128 + 2,0,0x102);
    lVar6 = 0;
    local_2a8[0] = (HMODULE)0x0;
    BVar3 = GetModuleHandleExA(6,lpModuleName,local_2a8);
    if ((BVar3 != 0) && (local_2a8[0] != (HMODULE)0x0)) {
      local_238 = '\0';
      memset(local_237,0,0x103);
      DVar2 = GetModuleFileNameA(local_2a8[0],&local_238,0x104);
      if (DVar2 != 0) {
        pcVar4 = strrchr(&local_238,0x5c);
        pcVar7 = pcVar4 + 1;
        if (pcVar4 == (char *)0x0) {
          pcVar7 = &local_238;
        }
        strncpy_s(local_128,0x104,pcVar7,0xffffffffffffffff);
      }
      lVar6 = (longlong)lpModuleName - (longlong)local_2a8[0];
    }
    piVar1 = (int *)*param_1;
    local_257 = 0;
    uStack_24f = 0;
    local_298 = 0;
    local_297 = 0;
    uStack_28f = 0;
    local_287 = 0;
    uStack_27f = 0;
    local_277 = 0;
    uStack_26f = 0;
    local_267 = 0;
    uStack_25f = 0;
    uStack_248 = 0;
    uStack_247 = 0;
    uStack_240 = 0;
    if ((*piVar1 == -0x3ffffffb) && (1 < (uint)piVar1[6])) {
      if (*(longlong *)(piVar1 + 8) == 0) {
        pcVar7 = "reading";
      }
      else {
        pcVar7 = "executing";
        if (*(longlong *)(piVar1 + 8) == 1) {
          pcVar7 = "writing";
        }
      }
      FUN_1801fc620(&local_298," %s 0x%p",pcVar7,*(undefined8 *)(piVar1 + 10));
    }
    local_2b8 = GetCurrentThreadId();
    local_2c0 = &local_298;
    local_2c8 = lVar6;
    local_2b0 = iVar5;
    FUN_180014410("[UNHANDLED] 0x%x at 0x%p = %s+0x%llX%s (thread %lu, total: %d)\n",
                  *(undefined4 *)*param_1,lpModuleName,local_128);
  }
  return 0;
}


