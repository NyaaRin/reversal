// 0x1802a7190  FUN_1802a7190
// size=795 thunk=false
// signature: undefined FUN_1802a7190()
// status: ok


void FUN_1802a7190(void)

{
  float fVar1;
  float fVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368);
  if (lVar5 == 0) {
    FUN_18027e9c0("Call should only be done while in BeginTable() scope!");
    return;
  }
  if (*(char *)(lVar5 + 0x239) == '\0') {
    FUN_1802a2470(lVar5);
  }
  fVar13 = (float)FUN_1802a6f80();
  FUN_1802a4950(1,fVar13);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar5 + 0x24c) == '\0') {
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x11c);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368);
    if (lVar6 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(lVar6 + 0x6c);
      iVar12 = 0;
      if (0 < iVar11) {
        do {
          cVar7 = FUN_1802a5270(iVar12);
          if ((cVar7 != '\0') || (*(short *)(lVar5 + 0x218) == iVar12)) {
            cVar7 = *(char *)(lVar4 + 0x10);
            if (cVar7 == '\0') {
              __dyn_tls_on_demand_init();
              cVar7 = *(char *)(lVar4 + 0x10);
            }
            lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368);
            if (lVar6 == 0) {
LAB_1802a7320:
              if (cVar7 == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368);
              if (lVar6 == 0) {
                puVar10 = (undefined1 *)0x0;
              }
              else {
                iVar8 = iVar12;
                if (iVar12 < 0) {
                  iVar8 = *(int *)(lVar6 + 0x74);
                }
                if ((*(char *)(lVar6 + 0x239) == '\0') && (*(short *)(lVar6 + 0x206) <= iVar8)) {
                  puVar10 = &DAT_18033e5ea;
                }
                else {
                  sVar3 = *(short *)((longlong)iVar8 * 0x74 + 0x54 + *(longlong *)(lVar6 + 0x18));
                  if (sVar3 == -1) {
                    puVar10 = &DAT_18033e5ea;
                  }
                  else {
                    puVar10 = (undefined1 *)((longlong)sVar3 + *(longlong *)(lVar6 + 0x198));
                  }
                }
              }
            }
            else {
              iVar8 = iVar12;
              if (iVar12 < 0) {
                iVar8 = *(int *)(lVar6 + 0x74);
              }
              if (iVar8 == *(int *)(lVar6 + 0x6c)) {
                uVar9 = 0;
                if (*(short *)(lVar6 + 0x20a) == iVar8) {
                  uVar9 = 0;
                }
              }
              else {
                uVar9 = *(uint *)((longlong)iVar8 * 0x74 + *(longlong *)(lVar6 + 0x18));
              }
              if ((uVar9 >> 0xc & 1) == 0) goto LAB_1802a7320;
              puVar10 = &DAT_18033e5ea;
            }
            FUN_18027ae00(iVar12);
            FUN_1802a74b0(puVar10);
            if (*(char *)(lVar4 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
            iVar8 = *(int *)(lVar6 + 0x108);
            if (iVar8 < 2) {
              FUN_18027e9c0("Calling PopID() too many times!");
            }
            else {
              *(int *)(lVar6 + 0x108) = iVar8 + -1;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar11);
      }
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar2 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x104);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(lVar4 + 0xec0) + 0xb4f) != '\0') {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)(lVar4 + 0xec0) + 0x1ce0) == '\0') {
        if (*(char *)(lVar4 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368);
        iVar12 = -1;
        if (lVar4 != 0) {
          iVar12 = (int)*(short *)(lVar4 + 0x20a);
        }
        if (((iVar12 == iVar11) && (fVar1 <= fVar2)) && (fVar2 < fVar1 + fVar13)) {
          FUN_1802a7e20(iVar11);
        }
      }
    }
  }
  return;
}


