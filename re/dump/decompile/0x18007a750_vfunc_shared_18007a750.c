// 0x18007a750  vfunc_shared_18007a750
// size=1458 thunk=false
// signature: undefined vfunc_shared_18007a750()
// status: ok


void vfunc_shared_18007a750(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 **ppuVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_12f;
  undefined2 local_12b;
  undefined1 local_129;
  float local_120;
  undefined8 *local_110;
  undefined4 uStack_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 *puStack_f0;
  longlong *local_e8;
  undefined8 *local_e0 [2];
  longlong *local_d0;
  
  uVar15 = vfunc_shared_1800794a0();
  fVar22 = DAT_180381384;
  local_120 = -1.0;
  bVar13 = DAT_1803fa678 == 0;
  if (bVar13) {
    local_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    local_100 = (longlong *)0x0;
    ppuVar11 = &local_110;
  }
  else {
    ppuVar11 = (undefined8 **)FUN_18001bcd0(uVar15,local_e0);
  }
  plVar17 = local_100;
  plVar6 = *ppuVar11;
  local_f8 = plVar6;
  puStack_f0 = ppuVar11[1];
  local_e8 = ppuVar11[2];
  if ((bVar13) && (local_110 != (undefined8 *)0x0)) {
    (**(code **)*local_110)();
    DAT_1803fa338 = plVar17 != (longlong *)0x0;
    DAT_1803fa330 = param_1;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = plVar17;
    }
    DAT_1803fa339 = local_12f;
    DAT_1803fa33d = local_12b;
    DAT_1803fa33f = local_129;
  }
  if ((!bVar13) && (local_e0[0] != (undefined8 *)0x0)) {
    (**(code **)*local_e0[0])();
    DAT_1803fa338 = local_d0 != (longlong *)0x0;
    DAT_1803fa330 = param_1;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_d0;
    }
    DAT_1803fa339 = local_12f;
    DAT_1803fa33d = local_12b;
    DAT_1803fa33f = local_129;
  }
  fVar21 = fVar22;
  if (plVar6 != (longlong *)0x0) {
    iVar8 = (**(code **)*plVar6)(plVar6);
    if ((param_2 != 0) && (cVar7 = FUN_18001e2b0(param_2,plVar6), cVar7 != '\0')) {
      FUN_18002d9c0(plVar6[1],0xffffffff,"AddSpread");
      cVar7 = (**(code **)(*plVar6 + 0x138))(plVar6,0xffffffff,3);
      if (cVar7 != '\0') {
        dVar16 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,0xffffffff);
        local_120 = (float)dVar16;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
    }
    pcVar5 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar12 = (*pcVar5)(DAT_1803fa360,uVar9);
    if ((lVar12 != 0) && (cVar7 = FUN_18001e2b0(lVar12,plVar6), cVar7 != '\0')) {
      FUN_18002d9c0(plVar6[1],0xffffffff,"ViewAff");
      cVar7 = (**(code **)(*plVar6 + 0x138))(plVar6,0xffffffff,3);
      if (cVar7 != '\0') {
        dVar16 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,0xffffffff);
        fVar21 = (float)dVar16;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
    }
    while (iVar10 = (**(code **)*plVar6)(plVar6), iVar8 < iVar10) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
    }
  }
  fVar14 = (float)(**(code **)(*param_1 + 0x110))(param_1);
  fVar23 = 0.0;
  fVar20 = fVar22;
  if (((0.0 <= fVar21) && ((char)param_1[6] != '\0')) && (0.0 < fVar14)) {
    fVar20 = (fVar21 - *(float *)((longlong)param_1 + 0x34)) / fVar14 +
             *(float *)((longlong)param_1 + 0x34);
  }
  cVar7 = *(char *)((longlong)param_1 + 0x69);
  plVar17 = (longlong *)(double)*(float *)(param_1 + 0x10);
  fVar24 = fVar22;
  if ((char)param_1[9] != '\0') {
    fVar24 = *(float *)((longlong)param_1 + 0x4c);
  }
  fVar19 = fVar22;
  if ((char)param_1[10] != '\0') {
    fVar19 = *(float *)((longlong)param_1 + 0x54);
  }
  fVar1 = *(float *)(param_1 + 0xf);
  fVar2 = *(float *)((longlong)param_1 + 0x7c);
  if ((char)param_1[6] != '\0') {
    fVar22 = *(float *)((longlong)param_1 + 0x34);
  }
  fVar3 = *(float *)((longlong)param_1 + 0x5c);
  if ((DAT_1803fa608 != 0) && (0.0 < *(double *)(DAT_1803fa608 + 0x28))) {
    fVar23 = (float)*(double *)(DAT_1803fa608 + 0x28) * DAT_180380fcc;
  }
  fVar4 = *(float *)(param_1 + 0xb);
  uVar15 = (**(code **)(*param_1 + 0x120))(param_1);
  fVar18 = DAT_180380bb0;
  if (fVar23 <= DAT_180380bb0) {
    fVar18 = fVar23;
  }
  fVar23 = DAT_1803809a0;
  if (DAT_1803809a0 <= fVar18) {
    fVar23 = fVar18;
  }
  FUN_180014410("[%s-DIAG] lerp(measured=%.4f default=%.4f used=%.4f) snapscale=%.3f viewaff(cached=%.5f proj=%.5f live=%.5f snap=%.5f needed=%.5f) addspread(prev=%.5f cached=%.5f live=%.5f step=%.5f) seen=%d\n"
                ,uVar15,(double)fVar4,(double)fVar23,(double)fVar14,(double)fVar3,(double)fVar22,
                (double)fVar2,(double)fVar21,(double)fVar1,(double)fVar20,(double)fVar19,
                (double)fVar24,(double)local_120,plVar17,cVar7 != '\0');
  if (plVar6 != (longlong *)0x0) {
    (**(code **)*plVar6)(plVar6);
    DAT_1803fa338 = local_e8 != (longlong *)0x0;
    if ((bool)DAT_1803fa338) {
      plVar17 = local_e8;
    }
    DAT_1803fa339 = local_12f;
    DAT_1803fa33d = local_12b;
    DAT_1803fa33f = local_129;
    DAT_1803fa330 = plVar17;
  }
  return;
}


