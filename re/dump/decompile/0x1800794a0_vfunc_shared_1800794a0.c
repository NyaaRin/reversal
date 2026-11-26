// 0x1800794a0  vfunc_shared_1800794a0
// size=1533 thunk=false
// signature: undefined vfunc_shared_1800794a0()
// status: ok


void vfunc_shared_1800794a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  longlong *plVar4;
  undefined1 uVar5;
  float fVar6;
  char cVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 **ppuVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 *local_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined2 uStack_123;
  undefined1 uStack_121;
  undefined8 *local_120;
  undefined8 *local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  uint local_e8;
  float local_e0;
  uint local_d8;
  longlong *local_d0;
  undefined8 *puStack_c8;
  undefined8 *local_c0;
  undefined8 *local_b8 [2];
  undefined8 *local_a8;
  
  fVar19 = DAT_180381384;
  local_118 = param_1;
  local_10c = -1.0;
  local_110 = -1.0;
  bVar14 = DAT_1803fa678 == 0;
  if (bVar14) {
    local_130 = (undefined8 *)0x0;
    uStack_128 = 0;
    local_120 = (undefined8 *)0x0;
    ppuVar11 = &local_130;
  }
  else {
    ppuVar11 = (undefined8 **)FUN_18001bcd0(param_1,local_b8);
  }
  puVar13 = local_120;
  plVar4 = *ppuVar11;
  local_d0 = plVar4;
  puStack_c8 = ppuVar11[1];
  local_c0 = ppuVar11[2];
  if ((bVar14) && (local_130 != (undefined8 *)0x0)) {
    (**(code **)*local_130)();
    DAT_1803fa330 = puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      DAT_1803fa330 = local_118;
    }
    DAT_1803fa338 = puVar13 != (undefined8 *)0x0;
    DAT_1803fa339 = CONCAT13(uStack_124,uStack_128._1_3_);
    DAT_1803fa33d = uStack_123;
    DAT_1803fa33f = uStack_121;
  }
  if ((!bVar14) && (local_b8[0] != (undefined8 *)0x0)) {
    (**(code **)*local_b8[0])();
    DAT_1803fa338 = local_a8 != (undefined8 *)0x0;
    DAT_1803fa330 = local_118;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_a8;
    }
    DAT_1803fa339 = CONCAT13(uStack_124,uStack_128._1_3_);
    DAT_1803fa33d = uStack_123;
    DAT_1803fa33f = uStack_121;
  }
  if (plVar4 != (longlong *)0x0) {
    fVar8 = (float)(**(code **)*plVar4)(plVar4);
    local_108 = fVar8;
    if ((param_2 != 0) && (cVar7 = FUN_18001e2b0(param_2,plVar4), cVar7 != '\0')) {
      FUN_18002d9c0(plVar4[1],0xffffffff,"CurCone");
      cVar7 = (**(code **)(*plVar4 + 0x138))(plVar4,0xffffffff,3);
      if (cVar7 != '\0') {
        dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,0xffffffff);
        local_10c = (float)dVar3;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,1);
    }
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);
    if ((lVar12 != 0) && (cVar7 = FUN_18001e2b0(lVar12,plVar4), cVar7 != '\0')) {
      FUN_18002d9c0(plVar4[1],0xffffffff,"ViewAff");
      cVar7 = (**(code **)(*plVar4 + 0x138))(plVar4,0xffffffff,3);
      if (cVar7 != '\0') {
        dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,0xffffffff);
        local_110 = (float)dVar3;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,1);
    }
    while (iVar10 = (**(code **)*plVar4)(plVar4), (int)fVar8 < iVar10) {
      (**(code **)(*plVar4 + 0x10))(plVar4,1);
    }
  }
  local_f0 = 0.0;
  local_ec = 0.0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  if (DAT_1803db4c0 == DAT_1803db4e0) {
    local_108 = DAT_1803db4b4;
    if (((((uint)DAT_1803db4b4 & 0x7f800000) == 0x7f800000) ||
        (local_e0 = DAT_1803db4b8, ((uint)DAT_1803db4b8 & 0x7f800000) == 0x7f800000)) ||
       (local_d8 = DAT_1803db4bc, (DAT_1803db4bc & 0x7f800000) == 0x7f800000)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (bVar14) {
      uVar5 = 1;
      local_f0 = DAT_1803db4b4;
      local_ec = DAT_1803db4b8;
      local_e8 = DAT_1803db4bc;
      goto LAB_1800798f6;
    }
  }
  uVar5 = 0;
LAB_1800798f6:
  fVar6 = local_ec;
  fVar8 = local_f0;
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);
  fVar17 = 0.0;
  fVar18 = 0.0;
  if (lVar12 != 0) {
    puVar13 = (undefined8 *)FUN_18001f9d0(lVar12,&local_130);
    uVar1 = *puVar13;
    local_f8 = *(undefined4 *)(puVar13 + 1);
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_100._0_4_ = (float)uVar1;
    fVar17 = (float)local_100;
    fVar18 = local_100._4_4_;
    local_100 = uVar1;
  }
  fVar15 = (float)FUN_1802d3e00(fVar17 - fVar8);
  fVar16 = (float)FUN_1802d3e00(fVar18 - fVar6);
  if (*(char *)((longlong)param_1 + 0xc) != '\0') {
    fVar19 = *(float *)(param_1 + 2);
  }
  FUN_180014410("[CW20-DIAG] cone(cached=%.4f proj=%.4f live=%.4f) viewaff(cached=%.4f live=%.4f) maxinc=%.3f | rcs=%d nvr=(%.3f,%.3f) punchNow=(%.3f,%.3f) drift=(%.3f,%.3f)\n"
                ,(double)*(float *)(param_1 + 5),(double)*(float *)((longlong)param_1 + 0x2c),
                (double)local_10c,(double)fVar19,(double)local_110,
                (double)*(float *)((longlong)param_1 + 0x24),uVar5,(double)fVar8,(double)fVar6,
                (double)fVar17,(double)fVar18,(double)fVar15,(double)fVar16);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)*plVar4)(plVar4);
    DAT_1803fa338 = local_c0 != (undefined8 *)0x0;
    DAT_1803fa330 = local_118;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_c0;
    }
    DAT_1803fa339 = CONCAT13(uStack_124,uStack_128._1_3_);
    DAT_1803fa33d = uStack_123;
    DAT_1803fa33f = uStack_121;
  }
  return;
}


