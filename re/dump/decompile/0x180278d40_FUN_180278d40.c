// 0x180278d40  FUN_180278d40
// size=828 thunk=false
// signature: undefined FUN_180278d40()
// status: ok


void FUN_180278d40(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  undefined *puVar16;
  longlong lVar17;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  if ((*(int *)(lVar5 + 0x14f0) < 2) && (*(char *)(lVar5 + 2) != '\0')) {
    FUN_18027e9c0("Calling End() too many times!");
    return;
  }
  lVar6 = *(longlong *)(lVar5 + 0x1520);
  lVar17 = (longlong)*(int *)(lVar5 + 0x14f0) * 0x78;
  uVar15 = *(uint *)(lVar6 + 0x14);
  lVar7 = *(longlong *)(lVar5 + 0x14f8);
  if (((uVar15 >> 0x1a & 1) != 0) && (*(int *)(lVar5 + 0x148c) != *(int *)(lVar6 + 0x10))) {
    FUN_18027e9c0("Must call EndPopup() and not End()!");
    uVar15 = *(uint *)(lVar6 + 0x14);
  }
  if (((uVar15 >> 0x18 & 1) != 0) && (*(int *)(lVar5 + 0x1488) != *(int *)(lVar6 + 0x10))) {
    FUN_18027e9c0("Must call EndChild() and not End()!");
  }
  if (*(longlong *)(lVar6 + 0x1c8) != 0) {
    FUN_1802a9e40();
  }
  if (*(char *)(lVar6 + 0xd2) == '\0') {
    FUN_180271860();
  }
  FUN_180279af0();
  if ((*(char *)(lVar17 + -10 + lVar7) != '\0') && (*(longlong *)(lVar6 + 0x3c0) == lVar6)) {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = *(longlong *)(lVar4 + 0xec0);
    *(short *)(lVar8 + 0x26d4) = *(short *)(lVar8 + 0x26d4) + -1;
    iVar3 = *(int *)(lVar8 + 0x2008);
    *(int *)(lVar8 + 0x2008) = iVar3 + -1;
    *(undefined4 *)(lVar8 + 0x1eb8) =
         *(undefined4 *)(*(longlong *)(lVar8 + 0x2010) + -8 + (longlong)iVar3 * 4);
    *(undefined4 *)(lVar8 + 0xc84) =
         *(undefined4 *)
          ((longlong)*(int *)(lVar8 + 0x14f0) * 0x78 + -8 + *(longlong *)(lVar8 + 0x14f8));
  }
  if (*(char *)(lVar6 + 0xd2) != '\0') {
    *(longlong *)(lVar6 + 0x2c8) = lVar6 + 0x2d0;
  }
  if (*(longlong *)(lVar5 + 0x2860) == lVar6) {
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = *(longlong *)(lVar4 + 0xec0);
    if (*(char *)(lVar8 + 0x2858) != '\0') {
      FUN_180287bb0(&DAT_18033f5ac);
      uVar15 = *(uint *)(lVar8 + 0x285c) & 0xf;
      if (uVar15 == 1) {
        fflush(*(FILE **)(lVar8 + 0x2868));
      }
      else if (uVar15 == 2) {
        fclose(*(FILE **)(lVar8 + 0x2868));
      }
      else if ((uVar15 == 8) && (1 < *(int *)(lVar8 + 0x2870))) {
        puVar16 = &DAT_1803fa56f;
        if (*(undefined **)(lVar8 + 0x2878) != (undefined *)0x0) {
          puVar16 = *(undefined **)(lVar8 + 0x2878);
        }
        if (*(char *)(lVar4 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pcVar9 = *(code **)(*(longlong *)(lVar4 + 0xec0) + 0xc08);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(*(longlong *)(lVar4 + 0xec0),puVar16);
        }
      }
      *(undefined1 *)(lVar8 + 0x1592) = 0;
      *(undefined1 *)(lVar8 + 0x2858) = 0;
      *(undefined4 *)(lVar8 + 0x285c) = 0;
      *(undefined8 *)(lVar8 + 0x2868) = 0;
      if (*(longlong *)(lVar8 + 0x2878) != 0) {
        *(undefined8 *)(lVar8 + 0x2870) = 0;
        FUN_18026f680();
        *(undefined8 *)(lVar8 + 0x2878) = 0;
      }
    }
  }
  if (*(char *)(lVar6 + 0x159) != '\0') {
    FUN_18027e3b0();
  }
  puVar1 = (undefined8 *)(lVar17 + -0x70 + lVar7);
  uVar13 = puVar1[1];
  *(undefined8 *)(lVar5 + 0x1ef8) = *puVar1;
  *(undefined8 *)(lVar5 + 0x1f00) = uVar13;
  puVar1 = (undefined8 *)(lVar17 + -0x60 + lVar7);
  uVar13 = puVar1[1];
  *(undefined8 *)(lVar5 + 0x1f08) = *puVar1;
  *(undefined8 *)(lVar5 + 0x1f10) = uVar13;
  puVar1 = (undefined8 *)(lVar17 + -0x50 + lVar7);
  uVar13 = puVar1[1];
  *(undefined8 *)(lVar5 + 0x1f18) = *puVar1;
  *(undefined8 *)(lVar5 + 0x1f20) = uVar13;
  puVar2 = (undefined4 *)(lVar17 + -0x40 + lVar7);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(undefined4 *)(lVar5 + 0x1f28) = *puVar2;
  *(undefined4 *)(lVar5 + 0x1f2c) = uVar10;
  *(undefined4 *)(lVar5 + 0x1f30) = uVar11;
  *(undefined4 *)(lVar5 + 0x1f34) = uVar12;
  puVar2 = (undefined4 *)(lVar17 + -0x30 + lVar7);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(undefined4 *)(lVar5 + 0x1f38) = *puVar2;
  *(undefined4 *)(lVar5 + 0x1f3c) = uVar10;
  *(undefined4 *)(lVar5 + 8000) = uVar11;
  *(undefined4 *)(lVar5 + 0x1f44) = uVar12;
  if ((*(uint *)(lVar6 + 0x14) & 0x10000000) != 0) {
    *(int *)(lVar5 + 0x2644) = *(int *)(lVar5 + 0x2644) + -1;
  }
  if ((*(uint *)(lVar6 + 0x14) & 0x4000000) != 0) {
    *(int *)(lVar5 + 0x2038) = *(int *)(lVar5 + 0x2038) + -1;
  }
  if (*(char *)(lVar5 + 0x9c) != '\0') {
    FUN_18027e630(lVar7 + -0x20 + lVar17);
  }
  iVar3 = *(int *)(lVar5 + 0x14f0);
  iVar14 = iVar3 + -1;
  *(int *)(lVar5 + 0x14f0) = iVar14;
  if (iVar14 == 0) {
    FUN_18026e980(0);
    return;
  }
  FUN_18026e980(*(undefined8 *)(((longlong)iVar3 + -2) * 0x78 + *(longlong *)(lVar5 + 0x14f8)));
  return;
}


