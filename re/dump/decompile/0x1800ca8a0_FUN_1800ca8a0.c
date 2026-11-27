// 0x1800ca8a0  FUN_1800ca8a0
// size=911 thunk=false
// signature: undefined FUN_1800ca8a0()
// status: ok


undefined1 * FUN_1800ca8a0(longlong *param_1,float *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_7c;
  undefined1 local_70 [88];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (param_1 == (longlong *)0x0) {
    return &stack0x00000000;
  }
  if (DAT_1803fa608 == (float *)0x0) {
    return &stack0x00000000;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar5 == (longlong *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
  lVar10 = (longlong)(int)(uint)uVar6;
  if (0xfff < (uint)uVar6) {
    return (undefined1 *)(uVar6 & 0xffffffffffffff00);
  }
  puVar7 = (undefined8 *)FUN_18001daf0(param_1,local_70);
  uVar2 = *puVar7;
  fVar13 = *(float *)(puVar7 + 1);
  if (((uint)(float)uVar2 & 0x7f800000) == 0x7f800000) {
    return (undefined1 *)0x7f800000;
  }
  fStack_7c = (float)((ulonglong)uVar2 >> 0x20);
  if (((uint)fStack_7c & 0x7f800000) == 0x7f800000) {
    return (undefined1 *)0x7f800000;
  }
  if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
    return (undefined1 *)0x7f800000;
  }
  fVar12 = DAT_1803fa608[8];
  if (((&DAT_180430214)[lVar10 * 0x28] != '\0') && ((float)(&DAT_1804301f8)[lVar10 * 10] == fVar12))
  {
    fVar13 = *(float *)(&DAT_180430208 + lVar10 * 0x28);
    *param_2 = fVar13;
    fVar12 = *(float *)(&DAT_18043020c + lVar10 * 0x28);
    param_2[1] = fVar12;
    fVar11 = *(float *)(&DAT_180430210 + lVar10 * 0x28);
    goto LAB_1800ca9cc;
  }
  fVar11 = *DAT_1803fa608;
  if (((&DAT_180430214)[lVar10 * 0x28] == '\0') ||
     ((((double)(&DAT_1804301f0)[lVar10 * 5] <= 0.0 ||
       (dVar3 = (double)fVar11 - (double)(&DAT_1804301f0)[lVar10 * 5], DAT_180380cb0 < dVar3)) ||
      (dVar3 < DAT_180380b40)))) {
LAB_1800cabb9:
    pfVar9 = (float *)(&DAT_180430208 + lVar10 * 0x28);
LAB_1800cabc1:
    pfVar9[2] = 0.0;
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
  }
  else {
    fVar15 = (float)uVar2 - *(float *)(&DAT_1804301fc + lVar10 * 0x28);
    fStack_7c = fStack_7c - *(float *)(&DAT_180430200 + lVar10 * 0x28);
    fVar17 = fVar13 - *(float *)(&DAT_180430204 + lVar10 * 0x28);
    if (DAT_1803812e0 < fStack_7c * fStack_7c + fVar15 * fVar15 + fVar17 * fVar17)
    goto LAB_1800cabb9;
    fVar14 = (float)(DAT_180380d08 / dVar3);
    if (((((uint)(fVar14 * fVar15) & 0x7f800000) != 0x7f800000) &&
        (((uint)(fVar14 * fStack_7c) & 0x7f800000) != 0x7f800000)) &&
       (((uint)(fVar14 * fVar17) & 0x7f800000) != 0x7f800000)) {
      lVar1 = lVar10 * 0x28;
      pfVar9 = (float *)(&DAT_180430208 + lVar1);
      fVar18 = fVar14 * fVar15 * DAT_180380a88 + *pfVar9 * DAT_180380afc;
      fVar16 = fVar14 * fStack_7c * DAT_180380a88 +
               *(float *)(&DAT_18043020c + lVar1) * DAT_180380afc;
      fVar15 = fVar14 * fVar17 * DAT_180380a88 + *(float *)(&DAT_180430210 + lVar1) * DAT_180380afc;
      *pfVar9 = fVar18;
      *(float *)(&DAT_18043020c + lVar1) = fVar16;
      *(float *)(&DAT_180430210 + lVar1) = fVar15;
      if (((((uint)fVar18 & 0x7f800000) != 0x7f800000) &&
          (((uint)fVar16 & 0x7f800000) != 0x7f800000)) &&
         (((uint)fVar15 & 0x7f800000) != 0x7f800000)) goto LAB_1800cabc8;
      goto LAB_1800cabc1;
    }
    pfVar9 = (float *)(&DAT_180430208 + lVar10 * 0x28);
  }
LAB_1800cabc8:
  *(undefined8 *)(&DAT_1804301fc + lVar10 * 0x28) = uVar2;
  *(float *)(&DAT_180430204 + lVar10 * 0x28) = fVar13;
  (&DAT_1804301f0)[lVar10 * 5] = (double)fVar11;
  (&DAT_1804301f8)[lVar10 * 10] = fVar12;
  (&DAT_180430214)[lVar10 * 0x28] = 1;
  fVar13 = *pfVar9;
  *param_2 = fVar13;
  fVar12 = pfVar9[1];
  param_2[1] = fVar12;
  fVar11 = pfVar9[2];
LAB_1800ca9cc:
  param_2[2] = fVar11;
  puVar8 = (undefined1 *)(ulonglong)((uint)fVar13 & 0x7f800000);
  if ((((uint)fVar13 & 0x7f800000) != 0x7f800000) &&
     (puVar8 = (undefined1 *)(ulonglong)((uint)fVar12 & 0x7f800000),
     ((uint)fVar12 & 0x7f800000) != 0x7f800000)) {
    uVar4 = (uint)fVar11 & 0x7f800000;
    puVar8 = (undefined1 *)(ulonglong)uVar4;
    if ((uVar4 != 0x7f800000) && (0.0 < fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11)) {
      puVar8 = (undefined1 *)CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
  }
  return puVar8;
}


