// 0x1802c3fa0  FUN_1802c3fa0
// size=630 thunk=false
// signature: undefined FUN_1802c3fa0()
// status: ok


void FUN_1802c3fa0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x1520);
  if (*(char *)(lVar5 + 0xd1) == '\0') {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar4 + 0xec0);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = *(longlong *)(lVar4 + 0xec0);
    if ((((*(char *)(lVar9 + 0x2111) == '\0') || (*(int *)(lVar9 + 0x2160) != 0)) ||
        (*(int *)(lVar9 + 0x21d0) != 0)) ||
       ((1 < *(uint *)(lVar6 + 0x2120) ||
        (lVar9 = *(longlong *)(lVar6 + 0x2070), (*(uint *)(lVar9 + 0x14) & 0x10000000) == 0)))) {
      FUN_180283c90(lVar5,4);
    }
    else {
      lVar7 = *(longlong *)(lVar9 + 0x3b0);
      while ((lVar7 != 0 &&
             (lVar8 = *(longlong *)(lVar9 + 0x3b0), (*(uint *)(lVar8 + 0x14) & 0x10000000) != 0))) {
        lVar7 = *(longlong *)(lVar8 + 0x3b0);
        lVar9 = lVar8;
      }
      if (((*(longlong *)(lVar9 + 0x3b0) == lVar5) && (*(int *)(lVar9 + 0x1d8) == 0)) &&
         ((*(byte *)(lVar6 + 0x2114) & 0x80) == 0)) {
        FUN_1802827b0(lVar5,0);
        FUN_180282d70(*(undefined4 *)(lVar5 + 0x3f4),1,0,lVar5 + 0x408);
        if (*(char *)(lVar6 + 0x2068) != '\0') {
          *(undefined1 *)(lVar6 + 0x2068) = 0;
          *(undefined1 *)(lVar6 + 0x20d0) = 2;
        }
        *(undefined2 *)(lVar6 + 0x2069) = 0x101;
        FUN_180283be0(*(undefined4 *)(lVar6 + 0x2120),*(undefined4 *)(lVar6 + 0x2128),
                      *(undefined4 *)(lVar6 + 0x2114),*(undefined4 *)(lVar6 + 0x2118));
      }
    }
    FUN_180271860();
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
    iVar3 = *(int *)(lVar4 + 0x108);
    if (iVar3 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar4 + 0x108) = iVar3 + -1;
    }
    *(float *)(lVar5 + 0x17c) = *(float *)(lVar5 + 0x118) - *(float *)(lVar5 + 0x28);
    lVar9 = (longlong)*(int *)(lVar6 + 0x2018) * 0x3c;
    lVar4 = *(longlong *)(lVar6 + 0x2020);
    uVar1 = *(undefined4 *)(lVar9 + -0x30 + lVar4);
    uVar2 = *(undefined4 *)(lVar9 + -0x2c + lVar4);
    *(undefined1 *)(lVar9 + -4 + lVar4) = 0;
    fVar11 = *(float *)(lVar5 + 0x130) - *(float *)(lVar5 + 0x98);
    fVar10 = *(float *)(lVar5 + 0x138);
    if (*(float *)(lVar5 + 0x138) <= fVar11) {
      fVar10 = fVar11;
    }
    *(float *)(lVar5 + 0x138) = fVar10;
    FUN_18027fda0();
    *(undefined4 *)(lVar5 + 0x130) = uVar1;
    *(undefined4 *)(lVar5 + 0x134) = uVar2;
    *(undefined4 *)(lVar5 + 0x1d4) = 1;
    *(undefined1 *)(lVar5 + 0x158) = 0;
    *(undefined4 *)(lVar5 + 0x170) = 0;
    *(undefined1 *)(lVar5 + 0x17b) = 0;
  }
  return;
}


