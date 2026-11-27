// 0x180297410  FUN_180297410
// size=1149 thunk=false
// signature: undefined FUN_180297410()
// status: ok


void FUN_180297410(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6,uint param_7)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStackX_c;
  
  fVar2 = DAT_180380bb0;
  fVar11 = (float)param_4;
  param_5._0_4_ = (float)param_5 - fVar11;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  param_5._4_4_ = param_5._4_4_ - fStackX_c;
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 0x14);
  pfVar6 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x14);
  if (pfVar6 < pfVar1) {
    uVar5 = param_6 >> 8 & 0xff;
    uVar3 = param_6 & 0xff;
    uVar4 = param_6 >> 0x10 & 0xff;
    iVar8 = (param_7 >> 8 & 0xff) - uVar5;
    iVar7 = (param_7 & 0xff) - uVar3;
    fVar12 = DAT_180380bb0 / (param_5._4_4_ * param_5._4_4_ + (float)param_5 * (float)param_5);
    fVar13 = (float)(int)((param_7 >> 0x10 & 0xff) - uVar4);
    if (0x4f < (ulonglong)((longlong)pfVar1 + (0x13 - (longlong)pfVar6))) {
      fVar14 = (float)uVar4;
      fVar15 = (float)iVar8;
      fVar16 = (float)uVar5;
      fVar17 = (float)iVar7;
      fVar18 = (float)uVar3;
      do {
        fVar9 = ((pfVar6[1] - fStackX_c) * param_5._4_4_ + (*pfVar6 - fVar11) * (float)param_5) *
                fVar12;
        if (0.0 <= fVar9) {
          fVar10 = fVar2;
          if (fVar9 <= fVar2) {
            fVar10 = fVar9;
          }
        }
        else {
          fVar10 = 0.0;
        }
        pfVar6[4] = (float)((uint)pfVar6[4] & 0xff000000);
        pfVar6[4] = (float)((uint)pfVar6[4] |
                           ((int)(fVar13 * fVar10 + fVar14) << 8 | (int)(fVar15 * fVar10 + fVar16))
                           << 8 | (int)(fVar17 * fVar10 + fVar18));
        fVar9 = ((pfVar6[5] - fVar11) * (float)param_5 + (pfVar6[6] - fStackX_c) * param_5._4_4_) *
                fVar12;
        if (0.0 <= fVar9) {
          fVar10 = fVar2;
          if (fVar9 <= fVar2) {
            fVar10 = fVar9;
          }
        }
        else {
          fVar10 = 0.0;
        }
        pfVar6[9] = (float)((uint)pfVar6[9] & 0xff000000);
        pfVar6[9] = (float)((uint)pfVar6[9] |
                           ((int)(fVar13 * fVar10 + fVar14) << 8 | (int)(fVar15 * fVar10 + fVar16))
                           << 8 | (int)(fVar17 * fVar10 + fVar18));
        fVar9 = ((pfVar6[10] - fVar11) * (float)param_5 + (pfVar6[0xb] - fStackX_c) * param_5._4_4_)
                * fVar12;
        if (0.0 <= fVar9) {
          fVar10 = fVar2;
          if (fVar9 <= fVar2) {
            fVar10 = fVar9;
          }
        }
        else {
          fVar10 = 0.0;
        }
        pfVar6[0xe] = (float)((uint)pfVar6[0xe] & 0xff000000);
        pfVar6[0xe] = (float)((uint)pfVar6[0xe] |
                             ((int)(fVar13 * fVar10 + fVar14) << 8 | (int)(fVar15 * fVar10 + fVar16)
                             ) << 8 | (int)(fVar17 * fVar10 + fVar18));
        fVar9 = ((pfVar6[0xf] - fVar11) * (float)param_5 +
                (pfVar6[0x10] - fStackX_c) * param_5._4_4_) * fVar12;
        if (0.0 <= fVar9) {
          fVar10 = fVar2;
          if (fVar9 <= fVar2) {
            fVar10 = fVar9;
          }
        }
        else {
          fVar10 = 0.0;
        }
        pfVar6[0x13] = (float)((uint)pfVar6[0x13] & 0xff000000);
        pfVar6[0x13] = (float)((uint)pfVar6[0x13] |
                              ((int)(fVar13 * fVar10 + fVar14) << 8 |
                              (int)(fVar15 * fVar10 + fVar16)) << 8 |
                              (int)(fVar17 * fVar10 + fVar18));
        pfVar6 = pfVar6 + 0x14;
      } while (pfVar6 < pfVar1 + -0xf);
      if (pfVar1 <= pfVar6) {
        return;
      }
    }
    do {
      fVar14 = ((pfVar6[1] - fStackX_c) * param_5._4_4_ + (*pfVar6 - fVar11) * (float)param_5) *
               fVar12;
      if (0.0 <= fVar14) {
        fVar15 = fVar2;
        if (fVar14 <= fVar2) {
          fVar15 = fVar14;
        }
      }
      else {
        fVar15 = 0.0;
      }
      pfVar6[4] = (float)((uint)pfVar6[4] & 0xff000000);
      pfVar6[4] = (float)((uint)pfVar6[4] |
                         ((int)(fVar13 * fVar15 + (float)uVar4) << 8 |
                         (int)((float)iVar8 * fVar15 + (float)uVar5)) << 8 |
                         (int)((float)iVar7 * fVar15 + (float)uVar3));
      pfVar6 = pfVar6 + 5;
    } while (pfVar6 < pfVar1);
  }
  return;
}


