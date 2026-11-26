// 0x1802a9d60  FUN_1802a9d60
// size=221 thunk=false
// signature: undefined FUN_1802a9d60()
// status: ok


void FUN_1802a9d60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  lVar6 = *(longlong *)(lVar5 + 0x1c8);
  if (*(int *)(lVar6 + 0x10) != 1) {
    uVar8 = *(undefined4 *)(lVar6 + 0x40);
    uVar9 = *(undefined4 *)(lVar6 + 0x44);
    uVar10 = *(undefined4 *)(lVar6 + 0x48);
    lVar7 = *(longlong *)(lVar5 + 0x2c8);
    uVar1 = *(undefined4 *)(lVar6 + 0x3c);
    uVar2 = *(undefined4 *)(lVar6 + 0x40);
    uVar3 = *(undefined4 *)(lVar6 + 0x44);
    uVar4 = *(undefined4 *)(lVar6 + 0x48);
    *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(lVar6 + 0x3c);
    *(undefined4 *)(lVar5 + 0x26c) = uVar8;
    *(undefined4 *)(lVar5 + 0x270) = uVar9;
    *(undefined4 *)(lVar5 + 0x274) = uVar10;
    *(undefined4 *)(lVar7 + 0x60) = uVar1;
    *(undefined4 *)(lVar7 + 100) = uVar2;
    *(undefined4 *)(lVar7 + 0x68) = uVar3;
    *(undefined4 *)(lVar7 + 0x6c) = uVar4;
    lVar11 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0);
    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
    *(undefined4 *)(lVar7 + -0x10 + lVar11 * 0x10) = uVar1;
    *(undefined4 *)(lVar7 + -0xc + lVar11 * 0x10) = uVar2;
    *(undefined4 *)(lVar7 + -8 + lVar11 * 0x10) = uVar3;
    *(undefined4 *)(lVar7 + -4 + lVar11 * 0x10) = uVar4;
    FUN_180297210(lVar6 + 0x70,*(undefined8 *)(lVar5 + 0x2c8),*(int *)(lVar6 + 0xc) + 1);
    return;
  }
  return;
}


