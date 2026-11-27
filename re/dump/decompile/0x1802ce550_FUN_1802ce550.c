// 0x1802ce550  FUN_1802ce550
// size=727 thunk=false
// signature: undefined FUN_1802ce550()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1802ce550(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,float param_5,
             float param_6)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = DAT_1803817f0;
  fVar2 = DAT_180380bb0;
  uVar11 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar9 = (float)param_4;
  uVar8 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar7 = (float)param_3;
  if (fVar7 == fVar9) {
    return 0;
  }
  fVar13 = fVar7;
  uVar1 = uVar8;
  fVar4 = fVar9;
  uVar6 = uVar11;
  if (fVar7 < fVar9) {
    fVar13 = fVar9;
    uVar1 = uVar11;
    fVar4 = fVar7;
    uVar6 = uVar8;
  }
  if ((fVar4 <= param_2) && (fVar4 = fVar13, uVar6 = uVar1, param_2 <= fVar13)) {
    fVar4 = param_2;
  }
  if (param_5 <= 0.0) {
    fVar13 = (fVar4 - fVar7) / (fVar9 - fVar7);
  }
  else {
    fVar5 = fVar7;
    fVar10 = fVar9;
    if (fVar9 < fVar7) {
      fVar5 = fVar9;
      uVar8 = uVar11;
      fVar10 = fVar7;
    }
    fVar12 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar13 = fVar5;
    if (((float)((uint)fVar5 & _DAT_1803817c0) < param_5) && (fVar13 = param_5, fVar5 < 0.0)) {
      fVar13 = fVar12;
    }
    fVar14 = fVar10;
    if (((float)((uint)fVar10 & _DAT_1803817c0) < param_5) && (fVar14 = param_5, fVar10 < 0.0)) {
      fVar14 = fVar12;
    }
    if ((((fVar5 != 0.0) || (fVar15 = fVar12, 0.0 <= fVar10)) && (fVar15 = fVar13, fVar10 == 0.0))
       && (fVar5 < 0.0)) {
      fVar14 = fVar12;
    }
    fVar13 = 0.0;
    uVar6 = 0;
    if (fVar15 < fVar4) {
      if (fVar4 < fVar14) {
        if (0.0 <= fVar5 * fVar10) {
          if ((fVar5 < 0.0) || (fVar10 < 0.0)) {
            fVar14 = (float)((uint)fVar14 ^ DAT_1803817f0);
            fVar13 = logf((float)((uint)fVar4 ^ DAT_1803817f0) / fVar14);
            fVar4 = logf((float)((uint)fVar15 ^ uVar3) / fVar14);
            fVar13 = fVar2 - fVar13 / fVar4;
            uVar6 = 0;
          }
          else {
            fVar13 = logf(fVar4 / fVar15);
            fVar4 = logf(fVar14 / fVar15);
            fVar13 = fVar13 / fVar4;
            uVar6 = extraout_XMM0_Db_00;
          }
        }
        else {
          fVar13 = (float)((uint)fVar5 ^ DAT_1803817f0) / (fVar10 - fVar5);
          uVar6 = uVar8;
          if (param_2 != 0.0) {
            if (0.0 <= param_2) {
              fVar4 = logf(fVar4 / param_5);
              fVar5 = logf(fVar14 / param_5);
              fVar13 = (fVar4 / fVar5) * (fVar2 - (fVar13 + param_6)) + fVar13 + param_6;
              uVar6 = extraout_XMM0_Db;
            }
            else {
              fVar4 = logf((float)((uint)fVar4 ^ DAT_1803817f0) / param_5);
              fVar5 = logf((float)((uint)fVar15 ^ uVar3) / param_5);
              fVar13 = (fVar2 - fVar4 / fVar5) * (fVar13 - param_6);
              uVar6 = 0;
            }
          }
        }
      }
      else {
        fVar13 = DAT_180380bb0;
        uVar6 = 0;
      }
    }
    if (fVar9 < fVar7) {
      fVar13 = fVar2 - fVar13;
      uVar6 = 0;
    }
  }
  return CONCAT44(uVar6,fVar13);
}


