// 0x1801f0f50  FUN_1801f0f50
// size=430 thunk=false
// signature: undefined FUN_1801f0f50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f0f50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  LPCVOID lpAddress;
  LPCVOID lpAddress_00;
  SIZE_T SVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_98 [32];
  LPCVOID local_78;
  _MEMORY_BASIC_INFORMATION local_68;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (param_3 == (undefined8 *)0x0) {
    FUN_1800129b0(*(undefined8 *)*param_1,"\n=== %s: null ===\n",param_2);
  }
  else {
    lpAddress = (LPCVOID)*param_3;
    local_78 = lpAddress;
    FUN_1800129b0(*(undefined8 *)*param_1,"\n=== %s (ptr=%p, vt=%p) ===\n",param_2,param_3);
    if (lpAddress != (LPCVOID)0x0) {
      local_68.BaseAddress = (PVOID)0x0;
      local_68.AllocationBase = (PVOID)0x0;
      local_68.AllocationProtect = 0;
      local_68._20_4_ = 0;
      local_68.RegionSize = 0;
      local_68.State = 0;
      local_68.Protect = 0;
      local_68.Type = 0;
      local_68._44_4_ = 0;
      SVar2 = VirtualQuery(lpAddress,&local_68,0x30);
      if (((SVar2 != 0) && (local_68.State == 0x1000)) && ((local_68._32_8_ & 0xf000000000) != 0)) {
        iVar3 = 0;
        if (0 < param_4) {
          while( true ) {
            lpAddress_00 = *(LPCVOID *)((longlong)lpAddress + (longlong)iVar3 * 8);
            puVar1 = (undefined8 *)((longlong)lpAddress + (longlong)iVar3 * 8);
            if (lpAddress_00 == (LPCVOID)0x0) break;
            local_68.BaseAddress = (PVOID)0x0;
            local_68.AllocationBase = (PVOID)0x0;
            local_68.AllocationProtect = 0;
            local_68._20_4_ = 0;
            local_68.RegionSize = 0;
            local_68.State = 0;
            local_68.Protect = 0;
            local_68.Type = 0;
            local_68._44_4_ = 0;
            SVar2 = VirtualQuery(lpAddress_00,&local_68,0x30);
            if (((SVar2 == 0) || (local_68.State != 0x1000)) ||
               ((local_68._32_8_ & 0xf000000000) == 0)) break;
            local_78 = (LPCVOID)FUN_1801f0e10(param_1[2],*puVar1);
            FUN_1800129b0(*(undefined8 *)*param_1,"[%3d] = %p  %s\n",iVar3,*puVar1);
            iVar3 = iVar3 + 1;
            if (param_4 <= iVar3) break;
          }
        }
        pcVar4 = "";
        if (param_4 <= iVar3) {
          pcVar4 = "; HIT THE CAP, may be longer";
        }
        FUN_1800129b0(*(undefined8 *)*param_1,
                      "  -- %d entries (stopped at the first non-code slot%s)\n",iVar3,pcVar4);
        return;
      }
    }
    FUN_1800129b0(*(undefined8 *)*param_1,"  (vtable unreadable)\n");
  }
  return;
}


