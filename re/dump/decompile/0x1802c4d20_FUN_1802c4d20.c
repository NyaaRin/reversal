// 0x1802c4d20  FUN_1802c4d20
// size=444 thunk=false
// signature: undefined FUN_1802c4d20()
// status: ok


void FUN_1802c4d20(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar8 = (ulonglong)_tls_index;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if (*(char *)(lVar3 + 0xd1) == '\0') {
    lVar4 = *(longlong *)(lVar2 + 0x23d0);
    if (lVar4 == 0) {
      FUN_18027e9c0("Mismatched BeginTabBar()/EndTabBar()!");
    }
    else {
      if (*(char *)(lVar4 + 0x83) != '\0') {
        FUN_1802c4ee0(lVar4);
      }
      if (((*(char *)(lVar4 + 0x84) == '\0') && (*(int *)(lVar4 + 0x2c) != 0)) &&
         (*(int *)(lVar2 + 4) <= *(int *)(lVar4 + 0x34) + 1)) {
        fVar9 = *(float *)(lVar4 + 0x50);
      }
      else {
        fVar9 = *(float *)(lVar3 + 0x11c) - *(float *)(lVar4 + 0x44);
        if (fVar9 <= *(float *)(lVar4 + 0x4c)) {
          fVar9 = *(float *)(lVar4 + 0x4c);
        }
        *(float *)(lVar4 + 0x4c) = fVar9;
      }
      *(float *)(lVar3 + 0x11c) = fVar9 + *(float *)(lVar4 + 0x44);
      if ('\x01' < *(char *)(lVar4 + 0x82)) {
        *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(lVar4 + 0x98);
      }
      *(undefined2 *)(lVar4 + 0x8a) = 0xffff;
      if ((*(uint *)(lVar4 + 0x18) & 0x100000) == 0) {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
        iVar1 = *(int *)(lVar3 + 0x108);
        if (iVar1 < 2) {
          FUN_18027e9c0("Calling PopID() too many times!");
        }
        else {
          *(int *)(lVar3 + 0x108) = iVar1 + -1;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x2400);
      iVar6 = iVar1 + -1;
      *(int *)(lVar2 + 0x2400) = iVar6;
      if (iVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 + -2;
        lVar4 = *(longlong *)(lVar2 + 0x2408);
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar7 = *(longlong *)(lVar4 + lVar3 * 0x10);
        if (lVar7 == 0) {
          lVar7 = (longlong)*(int *)(lVar4 + 8 + lVar3 * 0x10) * 0xb0 +
                  *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x23e0);
        }
      }
      *(longlong *)(lVar2 + 0x23d0) = lVar7;
    }
  }
  return;
}


