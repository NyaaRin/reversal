// 0x180298e70  FUN_180298e70
// size=405 thunk=false
// signature: undefined FUN_180298e70()
// status: ok


void FUN_180298e70(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong *plVar9;
  
  plVar9 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar9 + *(int *)(param_1 + 0x2a0);
  if (plVar9 != plVar1) {
    uVar6 = (ulonglong)_tls_index;
    pvVar8 = ThreadLocalStoragePointer;
    do {
      lVar2 = *plVar9;
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        *(longlong *)(lVar2 + 0x18) = param_3;
      }
      lVar2 = *(longlong *)(lVar2 + 0x68);
      if ((lVar2 != 0) &&
         ((*(longlong *)(lVar2 + 0x1228) != 0 || (*(float *)(lVar2 + 0x123c) != 0.0)))) {
        if (*(longlong *)(lVar2 + 0x68) == 0) {
          *(longlong *)(lVar2 + 0x68) = param_3;
        }
        if (*(longlong *)(lVar2 + 0x1228) == 0) {
          lVar3 = *(longlong *)((longlong)pvVar8 + uVar6 * 8);
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar3 + 0xec0);
          if (lVar2 == lVar4) {
            FUN_18027a5f0(param_3,*(undefined4 *)(lVar2 + 0x123c),*(undefined4 *)(lVar2 + 0x1238));
            pvVar8 = ThreadLocalStoragePointer;
          }
          else {
            if (*(char *)(lVar3 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            *(longlong *)(lVar3 + 0xec0) = lVar2;
            FUN_18027a5f0(param_3,*(undefined4 *)(lVar2 + 0x123c),*(undefined4 *)(lVar2 + 0x1238));
            if (*(char *)(lVar3 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            *(longlong *)(lVar3 + 0xec0) = lVar4;
            pvVar8 = ThreadLocalStoragePointer;
          }
        }
        plVar5 = *(longlong **)(lVar2 + 0x1ff0);
        plVar7 = plVar5 + (longlong)*(int *)(lVar2 + 0x1fe8) * 2;
        for (; plVar5 != plVar7; plVar5 = plVar5 + 2) {
          if (*plVar5 == 0) {
            *plVar5 = param_3;
          }
        }
        uVar6 = (ulonglong)_tls_index;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return;
}


