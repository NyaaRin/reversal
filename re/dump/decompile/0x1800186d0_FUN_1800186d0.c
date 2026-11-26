// 0x1800186d0  FUN_1800186d0
// size=146 thunk=false
// signature: undefined FUN_1800186d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800186d0(undefined8 *param_1,LPCVOID param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  puVar1 = (ulonglong *)*param_1;
  if (((LPCVOID)*puVar1 <= param_2) &&
     (puVar1 = (ulonglong *)param_1[1], param_2 < (LPCVOID)*puVar1)) {
    local_48.BaseAddress = (PVOID)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    puVar1 = (ulonglong *)VirtualQuery(param_2,&local_48,0x30);
    if ((puVar1 != (ulonglong *)0x0) && (local_48.State == 0x1000)) {
      puVar1 = (ulonglong *)((ulonglong)local_48._32_8_ >> 0x20);
      if ((local_48._32_8_ & 0x10100000000) == 0) {
        return (ulonglong)CONCAT31(local_48.Protect._1_3_,(local_48._32_8_ & 0xf000000000) != 0);
      }
    }
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}


