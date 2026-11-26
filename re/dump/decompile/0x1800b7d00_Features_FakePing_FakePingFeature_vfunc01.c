// 0x1800b7d00  Features_FakePing_FakePingFeature_vfunc01
// size=1095 thunk=false
// signature: undefined Features_FakePing_FakePingFeature_vfunc01()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_FakePing_FakePingFeature_vfunc01(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined1 *puVar11;
  longlong **pplVar12;
  longlong *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  double dVar17;
  longlong *local_40 [2];
  
  local_40[0]._0_4_ = 300;
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar8 = FUN_180241610(uVar8,0x758f1875f440310a);
  pcVar9 = (char *)FUN_1801fcfc0(uVar8);
  cVar5 = *pcVar9;
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar8 = FUN_180241610(uVar8,0x1fdde58283cebf32);
  piVar10 = (int *)FUN_1802029c0(uVar8);
  iVar14 = *piVar10;
  local_40[0] = (longlong *)CONCAT44(local_40[0]._4_4_,iVar14);
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar8 = FUN_180241610(uVar8,0x1d9ceb5d1400d87);
  puVar11 = (undefined1 *)FUN_1801fcfc0(uVar8);
  uVar1 = *puVar11;
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar8 = FUN_180241610(uVar8,0xdfb199559e5fc2fa);
  puVar11 = (undefined1 *)FUN_1801fcfc0(uVar8);
  DAT_1803db384 = *puVar11;
  pplVar12 = local_40;
  if (iVar14 < 200) {
    pplVar12 = (longlong **)&DAT_1803310a8;
  }
  if (0x37a < iVar14) {
    pplVar12 = (longlong **)&DAT_180330f3c;
  }
  DAT_1803db424 = *(undefined4 *)pplVar12;
  DAT_1803facf8 = cVar5;
  DAT_1803facf9 = uVar1;
  if (cVar5 == '\0') {
    if ((DAT_1803fb230 != (longlong *)0x0) || (DAT_1803fb244 != 0)) {
      FUN_1800b64b0();
    }
    DAT_1803fb0dc = 0;
    return;
  }
  if (DAT_1803facfa == '\0') {
    DAT_1803fb0dc = 1;
    if (DAT_1803fd0f0 != '\0') {
      DAT_1803fb0dc = 1;
      return;
    }
    DAT_1803fd0f0 = 1;
    FUN_180014410(&DAT_18034b7e0);
    return;
  }
  if ((((DAT_1803fa668 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')) ||
      (plVar13 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), local_40[0] = plVar13,
      plVar13 == (longlong *)0x0)) || (BVar6 = IsBadReadPtr(plVar13,8), BVar6 != 0)) {
    if ((DAT_1803fb230 != (longlong *)0x0) || (DAT_1803fb244 != 0)) {
      FUN_1800b64b0();
    }
    DAT_1803fb0dc = 2;
    return;
  }
  if ((DAT_1803fb230 != (longlong *)0x0) && (DAT_1803fb230 != plVar13)) {
    FUN_1800b64b0();
    DAT_1803fb0dc = 5;
  }
  cVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*plVar13 + 0x40))(plVar13), cVar5 == '\0')) {
    cVar5 = (**(code **)(*DAT_1803fa668 + 0x260))();
    bVar2 = false;
    if (cVar5 == '\0') goto LAB_1800b7f63;
  }
  bVar2 = true;
LAB_1800b7f63:
  if (bVar2) {
    if (DAT_1803fb244 != 0) {
      FUN_1800b64b0();
    }
    DAT_1803fb230 = plVar13;
    DAT_1803fb0dc = 3;
    DAT_1803facfb = 0;
    return;
  }
  cVar5 = FUN_1800b7530(plVar13);
  if ((cVar5 == '\0') || (fVar15 = (float)FUN_1800b7350(1), fVar15 <= DAT_180380964)) {
    DAT_1803facfb = 0;
  }
  else {
    DAT_1803facfb = 1;
  }
  uVar4 = DAT_1803fb0dc;
  if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
     (fVar15 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
    fVar15 = 0.0;
  }
  iVar14 = (int)(fVar15 * DAT_180381278 + DAT_180380ac0);
  fVar15 = (float)FUN_1800b7350(1);
  if (DAT_1803fa608 == 0) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = *(double *)(DAT_1803fa608 + 0x10);
  }
  if (DAT_1803e9470 < iVar14) {
    iVar7 = iVar14 - DAT_1803e9470;
  }
  else {
    iVar7 = DAT_1803e9470 - iVar14;
  }
  if ((DAT_180380c90 < dVar17 - _DAT_1803ff2e0) &&
     (((uVar4 != DAT_1803e749c || (0xf < iVar7)) || (DAT_180380d80 < dVar17 - _DAT_1803ff2e0)))) {
    fVar16 = fVar15 * DAT_180381278 + DAT_180380ac0;
    DAT_1803e749c = uVar4;
    DAT_1803e9470 = iVar14;
    _DAT_1803ff2e0 = dVar17;
    plVar13 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    iVar7 = DAT_1803fb244;
    uVar1 = DAT_1803facfb;
    uVar3 = DAT_1803db424;
    fVar15 = DAT_180381384;
    if (plVar13 != (longlong *)0x0) {
      fVar15 = (float)(**(code **)(*plVar13 + 0x50))(plVar13,0);
      fVar15 = fVar15 * DAT_180381278;
    }
    uVar8 = FUN_1800b6c60((double)fVar15);
    FUN_180014410("[FAKEPING] %s: +%dms achieved of %dms wanted, real %.0fms (target total %dms) -> band centres at cmd age %dms, records=%d armed=%d\n"
                  ,uVar8,iVar14,(int)fVar16,extraout_XMM0_Qa,uVar3,iVar14,iVar7,uVar1);
    return;
  }
  return;
}


