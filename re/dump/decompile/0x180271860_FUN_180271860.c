// 0x180271860  FUN_180271860
// size=212 thunk=false
// signature: undefined FUN_180271860()
// status: ok


void FUN_180271860(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x1520);
  lVar6 = *(longlong *)(lVar5 + 0x2c8);
  piVar1 = (int *)(lVar6 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar7 = (undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x38);
  }
  else {
    puVar7 = (undefined4 *)
             ((longlong)(*(int *)(lVar6 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar6 + 0xa8));
  }
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)(lVar6 + 0x60) = *puVar7;
  *(undefined4 *)(lVar6 + 100) = uVar2;
  *(undefined4 *)(lVar6 + 0x68) = uVar3;
  *(undefined4 *)(lVar6 + 0x6c) = uVar4;
  FUN_180292360();
  lVar8 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0);
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
  uVar2 = *(undefined4 *)(lVar6 + -0xc + lVar8 * 0x10);
  uVar3 = *(undefined4 *)(lVar6 + -8 + lVar8 * 0x10);
  uVar4 = *(undefined4 *)(lVar6 + -4 + lVar8 * 0x10);
  *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(lVar6 + -0x10 + lVar8 * 0x10);
  *(undefined4 *)(lVar5 + 0x26c) = uVar2;
  *(undefined4 *)(lVar5 + 0x270) = uVar3;
  *(undefined4 *)(lVar5 + 0x274) = uVar4;
  return;
}


