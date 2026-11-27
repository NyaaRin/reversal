// 0x1800234d0  FUN_1800234d0
// size=158 thunk=false
// signature: undefined FUN_1800234d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800234d0(LPCVOID param_1)

{
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (param_1 != (LPCVOID)0x0) {
    local_48.BaseAddress = (PVOID)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    local_18 = VirtualQuery(param_1,&local_48,0x30);
    if ((local_18 != 0) && (local_48.State == 0x1000)) {
      local_18 = (ulonglong)local_48.Protect;
      if (((local_48.Protect >> 8 & 1) == 0) &&
         (((local_48._32_8_ & 0xee00000000) != 0 &&
          ((char *)((longlong)param_1 + 9) <
           (char *)((longlong)local_48.BaseAddress + local_48.RegionSize))))) {
        return (ulonglong)CONCAT31(local_48.Protect._1_3_,*(char *)((longlong)param_1 + 9) == '\v');
      }
    }
  }
  return local_18 & 0xffffffffffffff00;
}


