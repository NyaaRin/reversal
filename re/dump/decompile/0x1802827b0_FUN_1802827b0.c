// 0x1802827b0  FUN_1802827b0
// size=783 thunk=false
// signature: undefined FUN_1802827b0()
// status: ok


void FUN_1802827b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar12 = (char *)(lVar1 + 0x10);
  if (*pcVar12 == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar14 = (longlong *)(lVar1 + 0xec0);
  lVar1 = *plVar14;
  if (((param_2 & 2) != 0) && (*(longlong *)(lVar1 + 0x2070) != param_1)) {
    if (*pcVar12 == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar4 = *(int *)(*plVar14 + 0x2028);
    if (0 < iVar4) {
      lVar8 = *(longlong *)(*plVar14 + 0x2030);
      lVar10 = (longlong)iVar4 * 0x38 + lVar8;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x38) {
        lVar2 = *(longlong *)(lVar8 + 8);
        if (((lVar2 != 0) && ((*(uint *)(lVar2 + 0x14) & 0x8000000) != 0)) &&
           ((*(char *)(lVar2 + 0xcc) != '\0' || (*(char *)(lVar2 + 0xcd) != '\0')))) {
          if (param_1 == 0) {
LAB_180282886:
            if ((*(byte *)(lVar1 + 0x28e4) & 4) != 0) {
              if (param_1 == 0) {
                pcVar11 = "<NULL>";
              }
              else {
                pcVar11 = *(char **)(param_1 + 8);
              }
              FUN_180289170("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n",
                            pcVar11,*(undefined8 *)(lVar2 + 8));
            }
            if (((param_1 != 0) && (param_1 == *(longlong *)(param_1 + 0x3c0))) &&
               ((*(uint *)(param_1 + 0x14) & 0x2000) == 0)) {
              if (*pcVar12 == '\0') {
                __dyn_tls_on_demand_init();
              }
              uVar7 = *(undefined8 *)(param_1 + 0x3c0);
              lVar1 = *plVar14;
              uVar3 = *(undefined8 *)(lVar2 + 0x3c0);
              iVar4 = FUN_180282730(uVar7);
              iVar5 = FUN_180282730(uVar3);
              lVar8 = *(longlong *)(lVar1 + 0x14c8);
              if (iVar4 < iVar5) {
                memmove((void *)(lVar8 + (longlong)iVar4 * 8),
                        (void *)(lVar8 + (longlong)(iVar4 + 1) * 8),
                        (longlong)((iVar5 - iVar4) + -1) << 3);
                *(undefined8 *)(*(longlong *)(lVar1 + 0x14c8) + -8 + (longlong)iVar5 * 8) = uVar7;
                uVar7 = FUN_180280f50();
                FUN_180281320(uVar7,0);
                return;
              }
              lVar10 = (longlong)iVar5 * 8;
              memmove((void *)(lVar8 + (longlong)(iVar5 + 1) * 8),(void *)(lVar10 + lVar8),
                      (longlong)(iVar4 - iVar5) << 3);
              *(undefined8 *)(lVar10 + *(longlong *)(lVar1 + 0x14c8)) = uVar7;
            }
            uVar7 = FUN_180280f50();
            FUN_180281320(uVar7,0);
            return;
          }
          lVar6 = param_1;
          if (*(longlong *)(param_1 + 0x3c0) != lVar2) {
            while (lVar6 != lVar2) {
              lVar6 = *(longlong *)(lVar6 + 0x3b8);
              if (lVar6 == 0) goto LAB_180282886;
            }
          }
        }
      }
    }
  }
  if ((((param_2 & 1) != 0) && (param_1 != 0)) &&
     ((lVar8 = *(longlong *)(param_1 + 1000), lVar8 != 0 && (*(char *)(lVar8 + 0xcd) != '\0')))) {
    param_1 = lVar8;
  }
  uVar13 = 0;
  if (*(longlong *)(lVar1 + 0x2070) != param_1) {
    FUN_180282c60(param_1);
    if (param_1 == 0) {
      *(undefined4 *)(lVar1 + 0x206c) = 0;
      *(undefined4 *)(lVar1 + 0x207c) = 0;
      uVar9 = uVar13;
    }
    else {
      if (*(char *)(lVar1 + 0x2069) != '\0') {
        *(undefined1 *)(lVar1 + 0x206a) = 1;
      }
      *(undefined4 *)(lVar1 + 0x206c) = *(undefined4 *)(param_1 + 0x3f0);
      *(undefined4 *)(lVar1 + 0x207c) = 0;
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x428);
    }
    FUN_180279b90(uVar9);
    *(undefined1 *)(lVar1 + 0x206b) = 0;
    *(undefined8 *)(lVar1 + 0x20c8) = 0xffffffffffffffff;
    FUN_180281320(param_1,0);
  }
  if (param_1 != 0) {
    uVar13 = *(ulonglong *)(param_1 + 0x3c0);
  }
  if (((*(int *)(lVar1 + 0x1594) != 0) && (*(longlong *)(lVar1 + 0x15b8) != 0)) &&
     ((*(ulonglong *)(*(longlong *)(lVar1 + 0x15b8) + 0x3c0) != uVar13 &&
      (*(char *)(lVar1 + 0x15a2) == '\0')))) {
    FUN_18026ea90(0,0);
  }
  if ((param_1 != 0) &&
     (FUN_1802825a0(uVar13),
     ((*(uint *)(uVar13 + 0x14) | *(uint *)(param_1 + 0x14)) >> 0xd & 1) == 0)) {
    FUN_180282660(uVar13);
  }
  return;
}


