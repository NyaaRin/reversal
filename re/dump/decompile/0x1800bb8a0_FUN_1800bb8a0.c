// 0x1800bb8a0  FUN_1800bb8a0
// size=1047 thunk=false
// signature: undefined FUN_1800bb8a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800bb8a0(int param_1,float param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar22;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar23;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  lVar13 = (longlong)param_1;
  if (param_1 - 1U < 0x80) {
    lVar14 = lVar13 * 0x168;
    piVar1 = (int *)((longlong)&DAT_1805610fc + lVar14 + 4);
    *piVar1 = *piVar1 + 1;
    *(undefined4 *)(&DAT_1805610fc + lVar13 * 0x2d) = 0;
    *(undefined4 *)((longlong)&DAT_180561110 + lVar14 + 4) = 0;
    (&DAT_180561160)[lVar13 * 0x5a] = 0xffffffff;
    (&DAT_180561168)[lVar13 * 0x5a] = 0xc47a0000;
    if ((param_3 != 0) && (cVar5 = FUN_1800bab80(), cVar5 != '\0')) {
      lVar6 = FUN_1800bb650(param_3,param_1,1);
      if ((lVar6 != 0) && (*(int *)(&DAT_180561104 + lVar13 * 0x2d) < 3)) {
        DAT_180409cb0 = DAT_180409cb0 + 1;
        *(int *)(&DAT_180561104 + lVar13 * 0x2d) = *(int *)(&DAT_180561104 + lVar13 * 0x2d) + 1;
        FUN_180014410("[RESOLVER] idx=%d HIT but NOT latched: %s (cov %d/%d, streak %d/%d)\n",
                      param_1,lVar6,*(undefined4 *)(param_3 + 0x40),
                      CONCAT44(uVar11,*(undefined4 *)(param_3 + 0x3c)),
                      CONCAT44(uVar22,*(undefined4 *)(&DAT_180561104 + lVar13 * 0x2d)),
                      CONCAT44(uVar23,3));
        return;
      }
      *(undefined4 *)(&DAT_180561104 + lVar13 * 0x2d) = 0;
    }
    lVar6 = DAT_1803fa608;
    *(float *)((longlong)&DAT_180561104 + lVar14 + 4) = param_2;
    (&DAT_18056110c)[lVar14] = 1;
    uVar9 = _DAT_1803817c0;
    fVar4 = DAT_180381420;
    fVar18 = DAT_18038120c;
    fVar19 = DAT_180381188;
    fVar17 = DAT_180380fd8;
    if (lVar6 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (float)*(double *)(lVar6 + 0x10);
    }
    iVar3 = *(int *)(&DAT_180561138 + lVar13 * 0x2d);
    uVar8 = 0;
    if (0 < iVar3) {
      do {
        uVar15 = (ulonglong)uVar8;
        fVar2 = *(float *)(&DAT_180561118 + uVar15 * 4 + lVar14);
        fVar16 = fmodf(fVar2 - param_2,fVar18);
        if (fVar2 <= param_2) {
          if (fVar16 <= fVar4) {
            fVar16 = fVar16 + fVar18;
          }
        }
        else if (fVar19 <= fVar16) {
          fVar16 = fVar16 - fVar18;
        }
        if ((float)((uint)fVar16 & uVar9) <= fVar17) {
          *(float *)(&DAT_180561118 + uVar15 * 4 + lVar14) = param_2;
          *(float *)(&DAT_180561128 + uVar15 * 4 + lVar14) = fVar21;
          goto LAB_1800bbaf1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar3);
    }
    if (iVar3 < 4) {
      *(float *)(&DAT_180561118 + (longlong)iVar3 * 4 + lVar14) = param_2;
      *(float *)(&DAT_180561128 + (longlong)*(int *)(&DAT_180561138 + lVar13 * 0x2d) * 4 + lVar14) =
           fVar21;
      *(int *)(&DAT_180561138 + lVar13 * 0x2d) = *(int *)(&DAT_180561138 + lVar13 * 0x2d) + 1;
    }
    else {
      lVar12 = 0;
      uVar9 = 1;
      do {
        uVar8 = uVar9;
        if (*(float *)(&DAT_180561128 + (longlong)(int)(uint)lVar12 * 4 + lVar14) <
            *(float *)(&DAT_180561128 + (ulonglong)uVar9 * 4 + lVar14) ||
            *(float *)(&DAT_180561128 + (longlong)(int)(uint)lVar12 * 4 + lVar14) ==
            *(float *)(&DAT_180561128 + (ulonglong)uVar9 * 4 + lVar14)) {
          uVar8 = (uint)lVar12;
        }
        uVar9 = uVar9 + 1;
        lVar12 = (longlong)(int)uVar8;
      } while ((int)uVar9 < iVar3);
      *(float *)(&DAT_180561118 + lVar12 * 4 + lVar14) = param_2;
      *(float *)(&DAT_180561128 + lVar12 * 4 + lVar14) = fVar21;
    }
LAB_1800bbaf1:
    *(undefined4 *)((longlong)&DAT_180561138 + lVar14 + 4) = 0;
    if (lVar6 == 0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)*(double *)(lVar6 + 0x10);
    }
    *(float *)(&DAT_180561110 + lVar13 * 0x2d) = fVar17 + DAT_180380fe4;
    (&DAT_1805610f4)[lVar13 * 0x2d] = 0;
    (&DAT_180561160)[lVar13 * 0x5a] = 0xffffffff;
    (&DAT_180561168)[lVar13 * 0x5a] = 0xc47a0000;
    uVar11 = *(undefined4 *)(&DAT_180561138 + lVar13 * 0x2d);
    iVar3 = *(int *)(&DAT_18040a958 + lVar13 * 0x318);
    fVar17 = *(float *)(&DAT_18040a960 + lVar13 * 0x318);
    (&DAT_1805610f0)[lVar13 * 0x5a] = 0;
    if (iVar3 == 1) {
      pcVar10 = "rotate";
    }
    else if (iVar3 == 2) {
      pcVar10 = "alternate";
    }
    else if (iVar3 == 3) {
      pcVar10 = "repeat";
    }
    else {
      pcVar10 = "none";
    }
    fVar19 = DAT_180381384;
    if (param_3 != 0) {
      fVar19 = *(float *)(param_3 + 0x34);
    }
    fVar18 = (float)(&DAT_18056115c)[lVar13 * 0x5a];
    if ((float)(&DAT_18056115c)[lVar13 * 0x5a] <= 0.0) {
      fVar18 = DAT_180381094;
    }
    fVar4 = DAT_180381024;
    if (DAT_180381024 <= fVar18) {
      fVar4 = fVar18;
    }
    fVar18 = DAT_18038110c;
    if (fVar4 <= DAT_18038110c) {
      fVar18 = fVar4;
    }
    dVar20 = (double)fVar18;
    if ((param_3 == 0) || (*(int *)(param_3 + 0x24) < 0)) {
      puVar7 = &DAT_18033e9cc;
    }
    else {
      puVar7 = (undefined1 *)FUN_1800b8460();
    }
    FUN_180014410("[RESOLVER] idx=%d HIT -> latched eye%+.0f via %s (clamp %.0f, pose %.0fms, aa=%s/%.0f%%, pool %d)\n"
                  ,param_1,(double)param_2,puVar7,dVar20,(double)fVar19,pcVar10,
                  (double)(fVar17 * DAT_180381120),uVar11);
  }
  return;
}


