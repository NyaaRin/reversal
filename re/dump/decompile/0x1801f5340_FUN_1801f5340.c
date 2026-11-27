// 0x1801f5340  FUN_1801f5340
// size=1794 thunk=false
// signature: undefined FUN_1801f5340()
// status: ok


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1801f5340(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar16;
  
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803fa378 == 0) {
      return;
    }
    FUN_1801f3560(DAT_1803fa378,param_1,param_2,param_3,param_4);
    return;
  }
  if (DAT_1804258d4 != '\0') {
    FUN_1801f3560(DAT_1803fa378,param_1,param_2,param_3,param_4);
    return;
  }
  DAT_1804258d4 = '\x01';
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xf4a) != '\0') {
    FUN_1801f3560(DAT_1803fa378,param_1,param_2,param_3,param_4);
    DAT_1804258d4 = DAT_1804258d4 == '\0';
    return;
  }
  bVar3 = false;
  cVar5 = FUN_18003a090("PreDrawModelExecute");
  cVar6 = FUN_18003a090("PostDrawModelExecute");
  if (((cVar5 != '\0') || (cVar6 != '\0')) && (param_3 != 0)) {
    FUN_180057690(*(undefined8 *)(param_3 + 0x20));
    DAT_1803ff8b8 = 0;
    DAT_1803ff8d0 = 1;
    bVar3 = true;
    DAT_1803ff8b0 = param_2;
    DAT_1803ff8c0 = param_3;
    DAT_1803ff8d8 = param_4;
    DAT_1803ff8e0 = param_1;
    if ((cVar5 != '\0') && (cVar5 = FUN_18003a090("PreDrawModelExecute"), cVar5 != '\0')) {
      FUN_180200dc0("PreDrawModelExecute");
    }
  }
  lVar11 = DAT_1803fa608;
  piVar15 = (int *)(param_3 + 0x44);
  if ((*piVar15 - 1U < 0xff) && (DAT_1803fa608 != 0)) {
    (&DAT_1803ff300)[*piVar15] = (float)*(double *)(DAT_1803fa608 + 0x10);
  }
  iVar7 = FUN_180071b00(*piVar15);
  if ((iVar7 - 1U < 0xff) && (lVar11 != 0)) {
    (&DAT_1803ff300)[iVar7] = (float)*(double *)(lVar11 + 0x10);
  }
  iVar7 = *piVar15;
  if (((((0 < iVar7) && (DAT_1804235d1 == '\0')) && (DAT_1804236a5 == '\0')) &&
      ((DAT_180423650 == 0 && (DAT_1804236a0 == 0)))) &&
     ((((DAT_180423610 == '\0' && ((DAT_180423611 == '\0' && (DAT_180423600 == '\0')))) &&
       (DAT_1803fa668 != (longlong *)0x0)) &&
      ((((DAT_1803fa660 != 0 && (DAT_1803fa608 != 0)) && (*(char *)(DAT_1803fa660 + 0x91) == '\0'))
       && (iVar8 = (**(code **)(*DAT_1803fa668 + 0x60))(), iVar7 == iVar8)))))) {
    if (DAT_1803f9280 != (longlong *)0x0) {
      pcVar2 = *(code **)(*DAT_1803f9280 + 0xd8);
      iVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      iVar8 = (*pcVar2)(DAT_1803f9280);
      if (iVar8 != iVar7) goto LAB_1801f56ad;
    }
    iVar7 = *(int *)(DAT_1803fa608 + 4);
    if (iVar7 != DAT_1803e90c0) {
      LOCK();
      iVar8 = DAT_180423574 + 1;
      UNLOCK();
      iVar9 = DAT_180423574 + 1;
      DAT_1803e90c0 = iVar7;
      DAT_180423574 = iVar8;
      if (0x13 < iVar9) {
        DAT_1804235d1 = '\x01';
        FUN_180014410(
                     "[AntiSS] true first person detected (gamemode draws the local model in first person) -- clean passes keep the body/hands\n"
                     );
      }
    }
  }
LAB_1801f56ad:
  if (((((DAT_1804236a5 != '\0') || (DAT_180423650 != 0)) || (DAT_1804236a0 != 0)) &&
      ((DAT_1804235d1 == '\0' && ((DAT_180423611 != '\0' || (DAT_180423600 != '\0')))))) &&
     ((DAT_1803fa668 != (longlong *)0x0 &&
      ((cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 != '\0' &&
       (cVar5 = FUN_180121200(param_3), cVar5 == '\0')))))) {
    iVar7 = *piVar15;
    iVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
    if (iVar7 == iVar8) {
      if ((cVar6 != '\0') && (cVar5 = FUN_18003a090("PostDrawModelExecute"), cVar5 != '\0')) {
        FUN_180200dc0("PostDrawModelExecute");
      }
      if (bVar3) {
        DAT_1803ff8d0 = 0;
        DAT_1803ff8d8 = 0;
        DAT_1803ff8c0 = 0;
        DAT_1803ff8b0 = 0;
        DAT_1803ff8e0 = 0;
      }
      DAT_1804258d4 = DAT_1804258d4 == '\0';
      return;
    }
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar11 = (*pcVar2)(DAT_1803fa360,uVar10);
    if ((((lVar11 != 0) && (plVar12 = (longlong *)FUN_18001dbf0(lVar11), plVar12 != (longlong *)0x0)
         ) && (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12),
              plVar12 != (longlong *)0x0)) &&
       (iVar7 = *piVar15, iVar8 = (**(code **)(*plVar12 + 0x48))(plVar12), iVar8 == iVar7)) {
      if ((cVar6 != '\0') && (cVar5 = FUN_18003a090("PostDrawModelExecute"), cVar5 != '\0')) {
        FUN_180200dc0("PostDrawModelExecute");
      }
      if (bVar3) {
        DAT_1803ff8d0 = 0;
        DAT_1803ff8d8 = 0;
        DAT_1803ff8c0 = 0;
        DAT_1803ff8b0 = 0;
        DAT_1803ff8e0 = 0;
      }
      DAT_1804258d4 = DAT_1804258d4 == '\0';
      return;
    }
  }
  uVar13 = FUN_1801f4070(param_2,param_3,param_4);
  *(undefined1 *)(lVar1 + 0xf48) = 0;
  *(undefined1 *)(lVar1 + 0xf88) = 0;
  uVar16 = extraout_XMM0_Qa;
  if (((DAT_1804236a5 == '\0') && (DAT_180423650 == 0)) &&
     ((DAT_1804236a0 == 0 &&
      ((((DAT_1803fa668 != (longlong *)0x0 &&
         (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), puVar4 = DAT_1803fcc70,
         uVar16 = extraout_XMM0_Qa_00, cVar5 != '\0')) && (*(longlong *)(param_3 + 0x18) != 0)) &&
       (puVar14 = DAT_1803fcc68, DAT_1803fa46f == '\0')))))) {
    for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
      uVar16 = (**(code **)(*(longlong *)*puVar14 + 0x78))
                         ((longlong *)*puVar14,param_1,param_2,param_3,uVar13);
    }
  }
  uVar16 = FUN_18010c1b0(uVar16,param_1,param_2,param_3,uVar13);
  cVar5 = FUN_18010caa0(uVar16,param_1,param_2,param_3,uVar13);
  if (cVar5 == '\0') {
    FUN_1801f49a0(DAT_1803fa378,param_1,param_2,param_3,uVar13);
  }
  if ((cVar6 != '\0') && (cVar5 = FUN_18003a090("PostDrawModelExecute"), cVar5 != '\0')) {
    FUN_180200dc0("PostDrawModelExecute");
  }
  if (bVar3) {
    DAT_1803ff8d0 = 0;
    DAT_1803ff8d8 = 0;
    DAT_1803ff8c0 = 0;
    DAT_1803ff8b0 = 0;
    DAT_1803ff8e0 = 0;
  }
  DAT_1804258d4 = DAT_1804258d4 == '\0';
  return;
}


