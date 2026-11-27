// 0x180280db0  FUN_180280db0
// size=243 thunk=false
// signature: undefined FUN_180280db0()
// status: ok


ulonglong FUN_180280db0(int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined3 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = (ulonglong)(param_2 & 0x800);
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar2 + 0x2028);
  if ((param_2 >> 10 & 1) != 0) {
    uVar3 = (undefined3)((param_2 & 0x800) >> 8);
    if ((param_2 & 0x800) != 0) {
      return (ulonglong)CONCAT31(uVar3,0 < iVar1);
    }
    return (ulonglong)CONCAT31(uVar3,*(int *)(lVar2 + 0x2038) < iVar1);
  }
  if ((param_2 & 0x800) == 0) {
    uVar5 = (ulonglong)*(int *)(lVar2 + 0x2038);
    if ((*(int *)(lVar2 + 0x2038) < iVar1) &&
       (lVar6 = uVar5 * 0x38, uVar5 = *(ulonglong *)(lVar2 + 0x2030),
       *(int *)(lVar6 + uVar5) == param_1)) {
LAB_180280e91:
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  else if (0 < iVar1) {
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if (*(int *)(uVar5 * 0x38 + *(longlong *)(lVar2 + 0x2030)) == param_1) goto LAB_180280e91;
      uVar7 = (int)uVar5 + 1;
      uVar4 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar1);
  }
  return uVar5 & 0xffffffffffffff00;
}


