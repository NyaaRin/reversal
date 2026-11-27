// 0x1802c1650  FUN_1802c1650
// size=497 thunk=false
// signature: undefined FUN_1802c1650()
// status: ok


void FUN_1802c1650(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  lVar5 = *(longlong *)(lVar4 + 0x1520);
  FUN_18027f7f0(0);
  *(int *)(lVar5 + 0x1a0) = *(int *)(lVar5 + 0x1a0) + -1;
  uVar10 = 1 << ((byte)*(undefined4 *)(lVar5 + 0x1a0) & 0x1f);
  if ((*(uint *)(lVar5 + 0x1a4) & uVar10) != 0) {
    lVar1 = *(longlong *)(lVar4 + 0x2050) + (longlong)*(int *)(lVar4 + 0x2048) * 0x28;
    if (((((*(uint *)(*(longlong *)(lVar4 + 0x2050) + -0x24 +
                     (longlong)*(int *)(lVar4 + 0x2048) * 0x28) & 0x20000) != 0) &&
         (*(char *)(lVar4 + 0x206b) != '\0')) && (*(int *)(lVar4 + 0x2120) == 0)) &&
       (*(longlong *)(lVar4 + 0x2070) == lVar5)) {
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar3 + 0xec0);
      if (((*(char *)(lVar6 + 0x2111) != '\0') && (*(int *)(lVar6 + 0x2160) == 0)) &&
         (*(int *)(lVar6 + 0x21d0) == 0)) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar6 = *(longlong *)(lVar3 + 0xec0);
        *(undefined1 *)(lVar6 + 0x2111) = 0;
        *(undefined4 *)(lVar6 + 0x1ef8) = *(undefined4 *)(lVar1 + -0x28);
        *(uint *)(lVar6 + 0x1efc) = *(uint *)(lVar1 + -0x20) & 0xffdfffff;
        uVar7 = *(undefined4 *)(lVar1 + -0x18);
        uVar8 = *(undefined4 *)(lVar1 + -0x14);
        uVar9 = *(undefined4 *)(lVar1 + -0x10);
        *(undefined4 *)(lVar6 + 0x1f14) = *(undefined4 *)(lVar1 + -0x1c);
        *(undefined4 *)(lVar6 + 0x1f18) = uVar7;
        *(undefined4 *)(lVar6 + 0x1f1c) = uVar8;
        *(undefined4 *)(lVar6 + 0x1f20) = uVar9;
        FUN_1802833f0(lVar4 + 0x2158);
        FUN_180282d00(1);
        FUN_180283e10();
      }
    }
    if ((*(float *)(lVar1 + -0xc) != DAT_180381308) &&
       (*(float *)(lVar5 + 0x26c) <= *(float *)(lVar5 + 0x11c))) {
      FUN_1802c12d0(lVar1 + -0x28);
    }
    *(int *)(lVar4 + 0x2048) = *(int *)(lVar4 + 0x2048) + -1;
    uVar10 = ~uVar10;
    *(uint *)(lVar5 + 0x1a4) = *(uint *)(lVar5 + 0x1a4) & uVar10;
    *(uint *)(lVar5 + 0x1a8) = *(uint *)(lVar5 + 0x1a8) & uVar10;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  iVar2 = *(int *)(lVar3 + 0x108);
  if (1 < iVar2) {
    *(int *)(lVar3 + 0x108) = iVar2 + -1;
    return;
  }
  FUN_18027e9c0("Calling PopID() too many times!");
  return;
}


