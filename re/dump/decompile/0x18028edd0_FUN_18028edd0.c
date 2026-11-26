// 0x18028edd0  FUN_18028edd0
// size=1561 thunk=false
// signature: undefined FUN_18028edd0()
// status: ok


void FUN_18028edd0(longlong param_1,longlong param_2,int param_3,longlong *param_4,float param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  float fVar8;
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
  float fVar19;
  float fVar20;
  ulonglong uVar7;
  
  if (param_4 != (longlong *)0x0) {
    fVar20 = param_5 + DAT_180380bb0;
    fVar13 = DAT_180380bb0;
    do {
      fVar15 = DAT_180380ac0;
      fVar12 = *(float *)((longlong)param_4 + 0xc);
      fVar9 = *(float *)(param_4 + 1);
      if (fVar12 == 0.0) {
        if (fVar9 < (float)param_3) {
          if (fVar9 < 0.0) {
            FUN_18028ec90(param_2 + -4,0,param_4,fVar9,param_5,fVar9,fVar20);
            fVar13 = DAT_180380bb0;
          }
          else {
            FUN_18028ec90(param_1,(int)fVar9,param_4,fVar9,param_5,fVar9,fVar20);
            FUN_18028ec90(param_2 + -4);
            fVar13 = DAT_180380bb0;
          }
        }
      }
      else {
        fVar17 = *(float *)(param_4 + 3);
        fVar18 = fVar12 + fVar9;
        fVar16 = fVar9;
        fVar14 = param_5;
        if (param_5 < fVar17) {
          fVar16 = (fVar17 - param_5) * fVar12 + fVar9;
          fVar14 = fVar17;
        }
        fVar17 = *(float *)((longlong)param_4 + 0x1c);
        fVar11 = fVar18;
        fVar8 = fVar20;
        if (fVar17 < fVar20) {
          fVar11 = (fVar17 - param_5) * fVar12 + fVar9;
          fVar8 = fVar17;
        }
        if ((((fVar16 < 0.0) || (fVar11 < 0.0)) || ((float)param_3 <= fVar16)) ||
           ((float)param_3 <= fVar11)) {
          uVar4 = 0;
          if (0 < param_3) {
            do {
              uVar6 = (int)uVar4 + 1;
              uVar7 = (ulonglong)uVar6;
              fVar17 = (float)(int)uVar4;
              fVar13 = (float)(int)uVar6;
              fVar16 = (fVar17 - fVar9) / fVar12 + param_5;
              fVar15 = (fVar13 - fVar9) / fVar12 + param_5;
              if ((fVar17 <= fVar9) || (fVar18 <= fVar13)) {
                if ((fVar17 <= fVar18) || (fVar9 <= fVar13)) {
                  if (((fVar9 < fVar17) && (fVar17 < fVar18)) ||
                     ((fVar18 < fVar17 && (fVar17 < fVar9)))) {
                    FUN_18028ec90(param_1,uVar4,param_4,fVar9,param_5,fVar17,fVar16);
                  }
                  else if ((fVar13 <= fVar9) || (fVar18 <= fVar13)) {
                    if ((fVar18 < fVar13) && (fVar13 < fVar9)) {
                      FUN_18028ec90(param_1,uVar4,param_4,fVar9,param_5,fVar13,fVar15);
                    }
                  }
                  else {
                    FUN_18028ec90(param_1,uVar4,param_4,fVar9,param_5,fVar13,fVar15);
                  }
                }
                else {
                  FUN_18028ec90(param_1,uVar4,param_4,fVar9,param_5,fVar13,fVar15);
                  FUN_18028ec90();
                }
              }
              else {
                FUN_18028ec90(param_1,uVar4,param_4,fVar9,param_5,fVar17,fVar16);
                FUN_18028ec90();
              }
              FUN_18028ec90(param_1);
              uVar4 = uVar7 & 0xffffffff;
              fVar13 = DAT_180380bb0;
            } while ((int)uVar7 < param_3);
          }
        }
        else {
          iVar2 = (int)fVar16;
          if (iVar2 == (int)fVar11) {
            lVar1 = (longlong)iVar2;
            fVar12 = (fVar8 - fVar14) * *(float *)((longlong)param_4 + 0x14);
            *(float *)(param_1 + lVar1 * 4) =
                 ((((float)iVar2 + fVar13) - fVar11) + (((float)iVar2 + fVar13) - fVar16)) *
                 DAT_180380ac0 * fVar12 + *(float *)(param_1 + lVar1 * 4);
            *(float *)(param_2 + lVar1 * 4) = fVar12 + *(float *)(param_2 + lVar1 * 4);
            fVar13 = DAT_180380bb0;
          }
          else {
            fVar13 = *(float *)(param_4 + 2);
            fVar12 = fVar16;
            if (fVar11 < fVar16) {
              fVar13 = (float)((uint)fVar13 ^ DAT_1803817f0);
              fVar12 = fVar8 - param_5;
              fVar8 = fVar20 - (fVar14 - param_5);
              fVar14 = fVar20 - fVar12;
              fVar12 = fVar11;
              fVar11 = fVar16;
              fVar9 = fVar18;
            }
            fVar17 = *(float *)((longlong)param_4 + 0x14);
            iVar5 = (int)fVar12;
            iVar3 = (int)fVar11;
            iVar2 = iVar5 + 1;
            fVar19 = (float)iVar3;
            fVar18 = ((float)iVar2 - fVar9) * fVar13 + param_5;
            fVar16 = (fVar19 - fVar9) * fVar13 + param_5;
            fVar9 = fVar20;
            if (fVar18 <= fVar20) {
              fVar9 = fVar18;
            }
            fVar18 = (fVar9 - fVar14) * fVar17;
            *(float *)(param_1 + (longlong)iVar5 * 4) =
                 ((float)iVar2 - fVar12) * fVar18 * DAT_180380ac0 +
                 *(float *)(param_1 + (longlong)iVar5 * 4);
            if ((fVar20 < fVar16) && (iVar5 = (iVar3 - iVar5) + -1, fVar16 = fVar20, iVar5 != 0)) {
              fVar13 = (fVar20 - fVar9) / (float)iVar5;
            }
            if (iVar2 < iVar3) {
              fVar13 = fVar17 * fVar13;
              fVar12 = fVar13 * fVar15;
              if (3 < iVar3 - iVar2) {
                do {
                  lVar1 = (longlong)iVar2;
                  iVar2 = iVar2 + 4;
                  *(float *)(param_1 + lVar1 * 4) =
                       fVar12 + fVar18 + *(float *)(param_1 + lVar1 * 4);
                  fVar9 = fVar18 + fVar13 + fVar13;
                  *(float *)(param_1 + 4 + lVar1 * 4) =
                       fVar12 + fVar18 + fVar13 + *(float *)(param_1 + 4 + lVar1 * 4);
                  fVar10 = fVar9 + fVar13;
                  *(float *)(param_1 + 8 + lVar1 * 4) =
                       fVar12 + fVar9 + *(float *)(param_1 + 8 + lVar1 * 4);
                  fVar18 = fVar10 + fVar13;
                  *(float *)(param_1 + 0xc + lVar1 * 4) =
                       fVar12 + fVar10 + *(float *)(param_1 + 0xc + lVar1 * 4);
                } while (iVar2 < iVar3 + -3);
              }
              for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
                fVar9 = fVar12 + fVar18;
                fVar18 = fVar18 + fVar13;
                *(float *)(param_1 + (longlong)iVar2 * 4) =
                     fVar9 + *(float *)(param_1 + (longlong)iVar2 * 4);
              }
            }
            lVar1 = (longlong)iVar3;
            *(float *)(param_1 + lVar1 * 4) =
                 (((fVar19 + DAT_180380bb0) - fVar19) + ((fVar19 + DAT_180380bb0) - fVar11)) *
                 fVar15 * (fVar8 - fVar16) * fVar17 + fVar18 + *(float *)(param_1 + lVar1 * 4);
            *(float *)(param_2 + lVar1 * 4) =
                 (fVar8 - fVar14) * fVar17 + *(float *)(param_2 + lVar1 * 4);
            fVar13 = DAT_180380bb0;
          }
        }
      }
      param_4 = (longlong *)*param_4;
    } while (param_4 != (longlong *)0x0);
  }
  return;
}


