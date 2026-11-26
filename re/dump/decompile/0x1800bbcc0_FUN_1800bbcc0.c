// 0x1800bbcc0  FUN_1800bbcc0
// size=1093 thunk=false
// signature: undefined FUN_1800bbcc0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800bbcc0(int param_1,float param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar18;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  lVar10 = (longlong)param_1;
  if (0x7f < param_1 - 1U) {
    return;
  }
  lVar11 = lVar10 * 0x168;
  puVar9 = &DAT_1805610f0 + lVar10 * 0x5a;
  if (DAT_1803fa608 == 0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)*(double *)(DAT_1803fa608 + 0x10);
  }
  (&DAT_180561160)[lVar10 * 0x5a] = 0xffffffff;
  (&DAT_180561168)[lVar10 * 0x5a] = 0xc47a0000;
  if (param_3 == 0) {
    *(int *)(&DAT_1805610fc + lVar10 * 0x2d) = *(int *)(&DAT_1805610fc + lVar10 * 0x2d) + 1;
    uVar5 = *puVar9;
    uVar12 = *(undefined4 *)(&DAT_1805610fc + lVar10 * 0x2d);
    (&DAT_180561140)[lVar10 * 0x5a] = param_2;
    (&DAT_180561144)[lVar10 * 0x5a] = fVar15;
  }
  else {
    cVar4 = FUN_1800bab80();
    if (cVar4 != '\0') {
      lVar6 = FUN_1800bb650(param_3,param_1,0);
      if ((lVar6 != 0) && (*(int *)(&DAT_180561104 + lVar10 * 0x2d) < 3)) {
        fVar13 = fVar15 - _DAT_1803e7010;
        *(int *)(&DAT_180561104 + lVar10 * 0x2d) = *(int *)(&DAT_180561104 + lVar10 * 0x2d) + 1;
        DAT_180409cb0 = DAT_180409cb0 + 1;
        if (fVar13 <= DAT_180380bb0) {
          return;
        }
        _DAT_1803e7010 = fVar15;
        FUN_180014410("[RESOLVER] idx=%d miss NOT charged: %s (cov %d/%d, streak %d/%d, %d suppressed total)\n"
                      ,param_1,lVar6,*(undefined4 *)(param_3 + 0x40),
                      CONCAT44(uVar12,*(undefined4 *)(param_3 + 0x3c)),
                      CONCAT44(uVar16,*(undefined4 *)(&DAT_180561104 + lVar10 * 0x2d)),
                      CONCAT44(uVar17,3),CONCAT44(uVar18,DAT_180409cb0));
        return;
      }
      *(undefined4 *)(&DAT_180561104 + lVar10 * 0x2d) = 0;
    }
    *(int *)(&DAT_1805610fc + lVar10 * 0x2d) = *(int *)(&DAT_1805610fc + lVar10 * 0x2d) + 1;
    uVar12 = *(undefined4 *)(&DAT_1805610fc + lVar10 * 0x2d);
    (&DAT_180561140)[lVar10 * 0x5a] = param_2;
    (&DAT_180561144)[lVar10 * 0x5a] = fVar15;
    uVar5 = *(uint *)(param_3 + 0x24);
  }
  if ((((&DAT_18056110c)[lVar11] != '\0') && (fVar15 < *(float *)(&DAT_180561110 + lVar10 * 0x2d)))
     && (uVar5 == 0)) {
    uVar5 = FUN_1800bb7a0(puVar9,fVar15);
    if (-1 < (int)uVar5) {
      fVar13 = *(float *)((longlong)&DAT_180561104 + lVar11 + 4);
      fVar14 = fVar15 + DAT_180380fe4;
      *(uint *)((longlong)&DAT_180561138 + lVar11 + 4) =
           *(uint *)((longlong)&DAT_180561138 + lVar11 + 4) | 1 << (uVar5 & 0x1f);
      *(undefined4 *)((longlong)&DAT_180561104 + lVar11 + 4) =
           *(undefined4 *)(&DAT_180561118 + (longlong)(int)uVar5 * 4 + lVar11);
      *(float *)(&DAT_180561110 + lVar10 * 0x2d) = fVar14;
      (&DAT_1805610f4)[lVar10 * 0x2d] = 0;
      (&DAT_180561160)[lVar10 * 0x5a] = 0xffffffff;
      (&DAT_180561168)[lVar10 * 0x5a] = 0xc47a0000;
      *puVar9 = 0;
      uVar5 = FUN_1800bb7a0(puVar9,fVar15);
      FUN_180014410("[RESOLVER] idx=%d miss #%d (off %+.0f) -> FLIP: latch %+.0f -> %+.0f (pool %d, %d left)\n"
                    ,param_1,*(undefined4 *)(&DAT_1805610fc + lVar10 * 0x2d),(double)param_2,
                    (double)fVar13,(double)*(float *)((longlong)&DAT_180561104 + lVar11 + 4),
                    CONCAT44(uVar17,*(undefined4 *)(&DAT_180561138 + lVar10 * 0x2d)),
                    CONCAT44(uVar18,~uVar5 >> 0x1f));
      return;
    }
    piVar1 = (int *)((longlong)&DAT_180561110 + lVar11 + 4);
    *piVar1 = *piVar1 + 1;
    if (1 < *(int *)((longlong)&DAT_180561110 + lVar11 + 4)) {
      (&DAT_18056110c)[lVar11] = 0;
      *(undefined4 *)((longlong)&DAT_180561110 + lVar11 + 4) = 0;
      (&DAT_1805610f4)[lVar10 * 0x2d] = 0;
      *puVar9 = 0xffffffff;
      (&DAT_180561160)[lVar10 * 0x5a] = 0xffffffff;
      (&DAT_180561168)[lVar10 * 0x5a] = 0xc47a0000;
      FUN_180014410("[RESOLVER] idx=%d miss #%d (off %+.0f) -> latch DROPPED (2 strikes)\n",param_1,
                    *(undefined4 *)(&DAT_1805610fc + lVar10 * 0x2d),(double)param_2);
      return;
    }
    FUN_180014410("[RESOLVER] idx=%d miss #%d (off %+.0f) -> latch strike 1/2, keeping %+.0f\n",
                  param_1,uVar12,(double)param_2,
                  (double)*(float *)((longlong)&DAT_180561104 + lVar11 + 4));
    return;
  }
  (&DAT_18056110c)[lVar11] = 0;
  if ((param_3 == 0) || (uVar5 = *(uint *)(param_3 + 0x24), 0x15 < uVar5)) {
    uVar5 = *puVar9;
    if (uVar5 < 0x16) {
      uVar2 = *(uint *)(&DAT_1805610f4 + lVar10 * 0x2d);
      piVar1 = (int *)((longlong)&DAT_1805610f4 + lVar11 + 4);
      *piVar1 = *piVar1 + 1;
      *(uint *)(&DAT_1805610f4 + lVar10 * 0x2d) = uVar2 | 1 << (uVar5 & 0x1f);
    }
    uVar12 = *(undefined4 *)((longlong)&DAT_1805610f4 + lVar11 + 4);
  }
  else {
    uVar2 = *(uint *)(&DAT_1805610f4 + lVar10 * 0x2d);
    piVar1 = (int *)((longlong)&DAT_1805610f4 + lVar11 + 4);
    *piVar1 = *piVar1 + 1;
    uVar12 = *(undefined4 *)((longlong)&DAT_1805610f4 + lVar11 + 4);
    *(uint *)(&DAT_1805610f4 + lVar10 * 0x2d) = uVar2 | 1 << (uVar5 & 0x1f);
    if (*puVar9 != uVar5) goto LAB_1800bbfc8;
  }
  *puVar9 = 0xffffffff;
LAB_1800bbfc8:
  if ((int)uVar5 < 0) {
    pcVar7 = "nothing";
  }
  else {
    pcVar7 = (char *)FUN_1800b8460();
  }
  iVar3 = *(int *)(&DAT_18040a958 + lVar10 * 0x318);
  if (iVar3 == 1) {
    pcVar8 = "rotate";
  }
  else if (iVar3 == 2) {
    pcVar8 = "alternate";
  }
  else if (iVar3 == 3) {
    pcVar8 = "repeat";
  }
  else {
    pcVar8 = "none";
  }
  fVar15 = DAT_180381384;
  if (param_3 != 0) {
    fVar15 = *(float *)(param_3 + 0x34);
  }
  fVar13 = (float)(&DAT_18056115c)[lVar10 * 0x5a];
  if ((float)(&DAT_18056115c)[lVar10 * 0x5a] <= 0.0) {
    fVar13 = DAT_180381094;
  }
  fVar14 = DAT_180381024;
  if (DAT_180381024 <= fVar13) {
    fVar14 = fVar13;
  }
  fVar13 = DAT_18038110c;
  if (fVar14 <= DAT_18038110c) {
    fVar13 = fVar14;
  }
  FUN_180014410("[RESOLVER] idx=%d miss #%d (eye%+.0f, clamp %.0f, pose %.0fms, aa=%s/%.0f%%) -> spent %s, %d tried\n"
                ,param_1,*(undefined4 *)(&DAT_1805610fc + lVar10 * 0x2d),(double)param_2,
                (double)fVar13,(double)fVar15,pcVar8,
                (double)(*(float *)(&DAT_18040a960 + lVar10 * 0x318) * DAT_180381120),pcVar7,uVar12)
  ;
  return;
}


