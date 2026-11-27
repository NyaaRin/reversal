// 0x18027a5f0  FUN_18027a5f0
// size=285 thunk=false
// signature: undefined FUN_18027a5f0()
// status: ok


void FUN_18027a5f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  *(undefined4 *)(lVar3 + 0x123c) = param_2;
  *(longlong *)(lVar3 + 0x1228) = param_1;
  FUN_18027a710(param_3);
  if (param_1 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar3 + 0x1260) = lVar4;
    *(longlong *)(lVar3 + 0x1268) = param_1;
    puVar7 = *(undefined8 **)(lVar4 + 0x2a8);
    puVar1 = puVar7 + *(int *)(lVar4 + 0x2a0);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      puVar5 = (undefined8 *)*puVar7;
      if (puVar5[2] == lVar4) {
        *puVar5 = *(undefined8 *)(lVar4 + 0x5c);
        puVar5[1] = lVar4 + 0x88;
      }
    }
    if (*(longlong *)(lVar3 + 0x1520) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1520) + 0x2c8);
      lVar6 = *(longlong *)(lVar4 + 0x30);
      lVar4 = *(longlong *)(lVar4 + 0x28);
      if ((*(longlong *)(lVar3 + 0x78) != lVar6) || (*(longlong *)(lVar3 + 0x70) != lVar4)) {
        *(longlong *)(lVar3 + 0x70) = lVar4;
        *(longlong *)(lVar3 + 0x78) = lVar6;
        iVar2 = *(int *)(lVar3 + 0xb0);
        lVar3 = *(longlong *)(lVar3 + 0xb8);
        *(longlong *)(lVar3 + -0x10 + (longlong)iVar2 * 0x10) = lVar4;
        *(longlong *)(lVar3 + -8 + (longlong)iVar2 * 0x10) = lVar6;
        FUN_180292400();
      }
    }
  }
  return;
}


