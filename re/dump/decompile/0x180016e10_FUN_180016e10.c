// 0x180016e10  FUN_180016e10
// size=407 thunk=false
// signature: undefined FUN_180016e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180016e10(undefined8 *param_1,LPCVOID param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  uVar3 = local_18;
  if ((((LPCVOID)0xffff < param_2) && (((ulonglong)param_2 & 7) == 0)) &&
     (uVar3 = 0x7fffffffffff, param_2 < (LPCVOID)0x800000000000)) {
    if (0 < *(int *)*param_1) {
      uVar3 = 0;
      do {
        if ((*(LPCVOID *)(param_1[1] + uVar3 * 0x10) <= param_2) &&
           ((longlong)param_2 + 8U <= *(ulonglong *)(param_1[1] + 8 + uVar3 * 0x10)))
        goto LAB_180016f4b;
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)*param_1);
    }
    if (0 < *(int *)param_1[2]) {
      uVar4 = 0;
      do {
        if ((*(LPCVOID *)(param_1[3] + (ulonglong)uVar4 * 0x10) <= param_2) &&
           ((longlong)param_2 + 8U <= *(ulonglong *)(param_1[3] + 8 + (ulonglong)uVar4 * 0x10))) {
LAB_180016f4b:
          return CONCAT71((int7)((ulonglong)((longlong)param_2 + 8) >> 8),1);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)param_1[2]);
    }
    local_48.BaseAddress = (PVOID)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    uVar3 = VirtualQuery(param_2,&local_48,0x30);
    if ((((uVar3 != 0) && (local_48.State == 0x1000)) &&
        (uVar3 = (ulonglong)local_48._32_8_ >> 0x20, (local_48._32_8_ & 0x10100000000) == 0)) &&
       ((local_48._32_8_ & 0xee00000000) != 0)) {
      uVar3 = local_48.RegionSize + (longlong)local_48.BaseAddress;
      iVar1 = *(int *)param_1[2];
      if (iVar1 < 8) {
        lVar2 = param_1[3];
        *(PVOID *)(lVar2 + (longlong)iVar1 * 0x10) = local_48.BaseAddress;
        *(ulonglong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = uVar3;
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
        return CONCAT71((int7)((longlong)param_2 + 8U >> 8),(longlong)param_2 + 8U <= uVar3);
      }
      iVar1 = *(int *)param_1[4];
      lVar2 = param_1[3];
      *(PVOID *)(lVar2 + (longlong)iVar1 * 0x10) = local_48.BaseAddress;
      *(ulonglong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = uVar3;
      uVar4 = *(uint *)param_1[4] + 1 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      *(uint *)param_1[4] = uVar4;
      return CONCAT71((int7)((longlong)param_2 + 8U >> 8),(longlong)param_2 + 8U <= uVar3);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


