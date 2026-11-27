// 0x180272510  FUN_180272510
// size=1471 thunk=false
// signature: undefined FUN_180272510()
// status: ok


void FUN_180272510(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar11 + 0xec0);
  if (*(int *)(lVar4 + 8) != *(int *)(lVar4 + 4)) {
    FUN_180272030();
  }
  if (*(int *)(lVar4 + 0xc) != *(int *)(lVar4 + 4)) {
    *(undefined4 *)(lVar4 + 0xe4) = 0;
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 4);
    lVar10 = *(longlong *)(lVar4 + 0x27f0);
    lVar12 = (longlong)*(int *)(lVar4 + 0x27e8) * 0x20 + lVar10;
    for (; lVar10 != lVar12; lVar10 = lVar10 + 0x20) {
      if (*(int *)(lVar10 + 4) == 4) {
        (**(code **)(lVar10 + 0x10))(lVar4,lVar10);
      }
    }
    plVar15 = *(longlong **)(lVar4 + 0x2060);
    plVar1 = plVar15 + *(int *)(lVar4 + 0x2058);
    for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
      lVar10 = *plVar15;
      if (*(char *)(lVar11 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar12 = *(longlong *)(lVar11 + 0xec0);
      *(longlong *)(lVar10 + 0xa0) = lVar10 + 0x68;
      *(longlong *)(lVar10 + 0xa8) = lVar10 + 0xb0;
      FUN_18028a820(lVar10 + 0x68,0);
      FUN_18028a820(*(undefined8 *)(lVar10 + 0xa8));
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(undefined8 *)(lVar10 + 0x5c) = 0;
      *(undefined4 *)(lVar10 + 100) = 0;
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 8);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x10);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar12 + 0x38);
      *(longlong *)(lVar10 + 0x90) = lVar10;
      if (*(char *)(lVar11 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(longlong *)(lVar10 + 0x98) = *(longlong *)(lVar11 + 0xec0) + 0xc68;
      if ((*(longlong *)(lVar10 + 0x48) != 0) &&
         (*(float *)(lVar10 + 0x40) == (float)*(double *)(lVar4 + 0x10))) {
        uVar8 = FUN_18026f7d0(lVar10,0,"##Background");
        FUN_1802972f0(lVar10 + 0x58,*(undefined8 *)(lVar10 + 0xa0),uVar8);
      }
    }
    FUN_180271bd0();
    lVar10 = *(longlong *)(lVar4 + 0x2258);
    if ((lVar10 == 0) || ((*(uint *)(lVar10 + 0x14) & 0x2000) != 0)) {
      lVar12 = 0;
      if (lVar10 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(lVar4 + 0x2268);
        lVar12 = 0;
      }
    }
    else {
      lVar13 = *(longlong *)(lVar4 + 0x2268);
      lVar12 = *(longlong *)(lVar10 + 0x3c0);
    }
    plVar15 = *(longlong **)(lVar4 + 0x14c8);
    plVar1 = plVar15 + *(int *)(lVar4 + 0x14c0);
    for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
      lVar10 = *plVar15;
      if ((((*(char *)(lVar10 + 0xcc) != '\0') && (*(char *)(lVar10 + 0xd4) == '\0')) &&
          ((*(uint *)(lVar10 + 0x14) >> 0x18 & 1) == 0)) &&
         ((lVar10 != lVar12 && (lVar10 != lVar13)))) {
        FUN_1802716b0(lVar10,*(uint *)(lVar10 + 0x14) >> 0x19 & 1);
      }
    }
    if (((lVar12 != 0) && (*(char *)(lVar12 + 0xcc) != '\0')) && (*(char *)(lVar12 + 0xd4) == '\0'))
    {
      FUN_1802716b0(lVar12,*(uint *)(lVar12 + 0x14) >> 0x19 & 1);
    }
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0xcc) != '\0')) && (*(char *)(lVar13 + 0xd4) == '\0'))
    {
      FUN_1802716b0(lVar13,*(uint *)(lVar13 + 0x14) >> 0x19 & 1);
    }
    if ((*(char *)(lVar4 + 0x78) != '\0') && (*(int *)(lVar4 + 0x2508) != -1)) {
      FUN_18026c700(*(undefined8 *)(lVar4 + 0x100),*(undefined4 *)(lVar4 + 0xda0));
    }
    *(undefined8 *)(lVar4 + 0xdc) = 0;
    plVar15 = *(longlong **)(lVar4 + 0x2060);
    plVar1 = plVar15 + *(int *)(lVar4 + 0x2058);
    for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
      lVar10 = *plVar15;
      iVar3 = **(int **)(lVar10 + 0xa0);
      FUN_18028a820(*(int **)(lVar10 + 0xa0),**(int **)(lVar10 + 0xa8) + iVar3);
      piVar5 = *(int **)(lVar10 + 0xa8);
      if (*piVar5 != 0) {
        memcpy((void *)(*(longlong *)(*(longlong *)(lVar10 + 0xa0) + 8) + (longlong)iVar3 * 8),
               *(void **)(piVar5 + 2),(longlong)*piVar5 << 3);
        FUN_18028a820(piVar5,0);
      }
      if ((*(longlong *)(lVar10 + 0x50) != 0) &&
         (*(float *)(lVar10 + 0x44) == (float)*(double *)(lVar4 + 0x10))) {
        uVar8 = FUN_18026f7d0(lVar10,1,"##Foreground");
        FUN_1802972f0(lVar10 + 0x58,*(undefined8 *)(lVar10 + 0xa0),uVar8);
      }
      puVar14 = *(undefined8 **)(lVar10 + 0x70);
      puVar2 = puVar14 + *(int *)(lVar10 + 0x68);
      for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
        puVar6 = (uint *)*puVar14;
        uVar9 = *puVar6;
        while (0 < (int)uVar9) {
          if ((*(int *)(*(longlong *)(puVar6 + 2) + -0x20 + (ulonglong)uVar9 * 0x48) != 0) ||
             (*(longlong *)(*(longlong *)(puVar6 + 2) + -0x18 + (ulonglong)uVar9 * 0x48) != 0))
          break;
          uVar9 = uVar9 - 1;
          *puVar6 = uVar9;
        }
      }
      *(int *)(lVar4 + 0xdc) = *(int *)(lVar4 + 0xdc) + *(int *)(lVar10 + 100);
      *(int *)(lVar4 + 0xe0) = *(int *)(lVar4 + 0xe0) + *(int *)(lVar10 + 0x60);
    }
    if ((*(byte *)(lVar4 + 0x2c) & 0x10) != 0) {
      plVar15 = *(longlong **)(lVar4 + 0x1220);
      plVar1 = plVar15 + *(int *)(lVar4 + 0x1218);
      for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
        lVar10 = *plVar15;
        if (*(char *)(lVar11 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        puVar14 = *(undefined8 **)(lVar10 + 0x48);
        puVar2 = puVar14 + *(int *)(lVar10 + 0x40);
        for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
          puVar7 = (undefined4 *)*puVar14;
          iVar3 = puVar7[1];
          if (iVar3 == 2) {
            if (*(char *)(lVar11 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if ((*(longlong *)(lVar11 + 0xec0) != 0) &&
               ((*(uint *)(*(longlong *)(lVar11 + 0xec0) + 0x28e4) & 0x100) != 0)) {
              FUN_180289170("[font] Texture #%03d: create %dx%d\n",*puVar7,puVar7[7],puVar7[8]);
            }
          }
          else if (iVar3 == 4) {
            if (*(char *)(lVar11 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if ((*(longlong *)(lVar11 + 0xec0) != 0) &&
               ((*(uint *)(*(longlong *)(lVar11 + 0xec0) + 0x28e4) & 0x100) != 0)) {
              FUN_180289170("[font] Texture #%03d: destroy %dx%d, texid=0x%I64X, backend_data=%p\n",
                            *puVar7,puVar7[7],puVar7[8],*(undefined8 *)(puVar7 + 4),
                            *(undefined8 *)(puVar7 + 2));
            }
          }
          else if (iVar3 == 3) {
            if (*(char *)(lVar11 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if ((*(longlong *)(lVar11 + 0xec0) != 0) &&
               ((*(uint *)(*(longlong *)(lVar11 + 0xec0) + 0x28e4) & 0x100) != 0)) {
              FUN_180289170("[font] Texture #%03d: update %d regions, texid=0x%I64X, backend_data=0x%I64X\n"
                            ,*puVar7,puVar7[0x10],*(undefined8 *)(puVar7 + 4),
                            *(undefined8 *)(puVar7 + 2));
            }
          }
        }
      }
    }
    lVar11 = *(longlong *)(lVar4 + 0x27f0);
    lVar10 = (longlong)*(int *)(lVar4 + 0x27e8) * 0x20 + lVar11;
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x20) {
      if (*(int *)(lVar11 + 4) == 5) {
        (**(code **)(lVar11 + 0x10))(lVar4,lVar11);
      }
    }
  }
  return;
}


