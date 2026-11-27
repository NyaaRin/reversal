// 0x1802ce830  FUN_1802ce830
// size=617 thunk=false
// signature: undefined FUN_1802ce830()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1802ce830(int param_1,float param_2,undefined8 param_3,undefined8 param_4,float param_5,
             float param_6)

{
  uint uVar1;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = DAT_1803817f0;
  fVar10 = (float)param_4;
  fVar4 = (float)param_3;
  fVar5 = 0.0;
  uVar6 = 0;
  if ((param_2 <= 0.0) || (fVar4 == fVar10)) {
    return param_3;
  }
  if (DAT_180380bb0 <= param_2) {
    return param_4;
  }
  if (param_5 <= 0.0) {
    if (param_1 - 8U < 2) {
      param_2 = (fVar10 - fVar4) * param_2;
      uVar6 = (int)((ulonglong)param_4 >> 0x20);
    }
    else {
      if (DAT_180380bb0 <= param_2) goto LAB_1802cea67;
      dVar3 = DAT_180380cb0;
      if (fVar10 < fVar4) {
        dVar3 = DAT_1803813a8;
      }
      uVar6 = 0;
      param_2 = (float)dVar3 + (fVar10 - fVar4) * param_2;
    }
    fVar5 = param_2 + fVar4;
  }
  else {
    fVar2 = (float)((uint)param_5 ^ DAT_1803817f0);
    fVar9 = fVar4;
    if (((float)((uint)fVar4 & _DAT_1803817c0) < param_5) && (fVar9 = param_5, fVar4 < 0.0)) {
      fVar9 = fVar2;
    }
    fVar7 = fVar10;
    if (((float)((uint)fVar10 & _DAT_1803817c0) < param_5) && (fVar7 = param_5, fVar10 < 0.0)) {
      fVar7 = fVar2;
    }
    fVar8 = fVar7;
    if (fVar10 < fVar4) {
      fVar8 = fVar9;
      fVar9 = fVar7;
    }
    if ((fVar10 == 0.0) && (fVar4 < 0.0)) {
      fVar8 = fVar2;
    }
    if (fVar10 < fVar4) {
      param_2 = DAT_180380bb0 - param_2;
    }
    if (0.0 <= fVar4 * fVar10) {
      if ((fVar4 < 0.0) || (fVar10 < 0.0)) {
        fVar8 = (float)((uint)fVar8 ^ DAT_1803817f0);
        fVar5 = powf((float)((uint)fVar9 ^ DAT_1803817f0) / fVar8,DAT_180380bb0 - param_2);
        fVar5 = (float)((uint)(fVar5 * fVar8) ^ uVar1);
        uVar6 = extraout_XMM0_Db_02;
      }
      else {
        fVar5 = powf(fVar8 / fVar9,param_2);
        fVar5 = fVar5 * fVar9;
        uVar6 = extraout_XMM0_Db_01;
      }
    }
    else {
      fVar2 = fVar4;
      if (fVar10 <= fVar4) {
        fVar2 = fVar10;
      }
      fVar10 = (float)((uint)fVar2 ^ DAT_1803817f0) /
               (float)((uint)(fVar10 - fVar4) & _DAT_1803817c0);
      fVar4 = fVar10 + param_6;
      if ((param_2 < fVar10 - param_6) || (fVar4 < param_2)) {
        if (fVar10 <= param_2) {
          fVar5 = powf(fVar8 / param_5,(param_2 - fVar4) / (DAT_180380bb0 - fVar4));
          fVar5 = fVar5 * param_5;
          uVar6 = extraout_XMM0_Db_00;
        }
        else {
          fVar5 = powf((float)((uint)fVar9 ^ DAT_1803817f0) / param_5,
                       DAT_180380bb0 - param_2 / (fVar10 - param_6));
          fVar5 = (float)((uint)(fVar5 * param_5) ^ uVar1);
          uVar6 = extraout_XMM0_Db;
        }
      }
    }
  }
LAB_1802cea67:
  return CONCAT44(uVar6,fVar5);
}


