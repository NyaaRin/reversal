// 0x1802716b0  FUN_1802716b0
// size=213 thunk=false
// signature: undefined FUN_1802716b0()
// status: ok


void FUN_1802716b0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar4 = **(longlong **)(lVar3 + 0x2060);
  piVar1 = (int *)(lVar3 + 0xe4);
  *piVar1 = *piVar1 + 1;
  if (1 < *(int *)(*(longlong *)(param_1 + 0x2c8) + 0x8c)) {
    FUN_180296e30();
  }
  FUN_1802972f0(lVar4 + 0x58,*(undefined8 *)(lVar4 + 0xa0 + (longlong)param_2 * 8),
                *(undefined8 *)(param_1 + 0x2c8));
  plVar5 = *(longlong **)(param_1 + 0x1b8);
  plVar2 = plVar5 + *(int *)(param_1 + 0x1b0);
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    lVar3 = *plVar5;
    if ((*(char *)(lVar3 + 0xcc) != '\0') && (*(char *)(lVar3 + 0xd4) == '\0')) {
      FUN_1802716b0(lVar3,param_2);
    }
  }
  return;
}


