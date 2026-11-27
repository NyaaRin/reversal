// 0x18018e680  FUN_18018e680
// size=646 thunk=false
// signature: undefined FUN_18018e680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18018e680(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  short sVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [64];
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_7c = 0x42b40000;
  local_78 = 0xffffffff;
  local_74 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  FUN_1802d4780(local_c8,&DAT_1805707c0);
  local_78 = DAT_1803e7498;
  local_88 = DAT_1805c7c00;
  local_84 = DAT_1805c7c04;
  local_74._0_1_ = DAT_180425428;
  local_74._1_1_ = DAT_1803fe650;
  local_80 = DAT_1805c7c08;
  local_7c = DAT_1803da5c0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  if (local_74._1_1_ == '\0') {
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    fVar6 = param_1[1] - local_84;
    fVar5 = *param_1 - local_88;
    if (param_3 != (float *)0x0) {
      fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + (param_1[2] - local_80) * (param_1[2] - local_80);
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      sVar2 = _fdclass(fVar4);
      if (0 < sVar2) {
        fVar4 = 0.0;
      }
      *param_3 = fVar4;
    }
    uVar1 = DAT_1803817f0;
    fVar5 = (float)((uint)fVar5 ^ DAT_1803817f0);
    fVar4 = fVar5 * fVar5 + fVar6 * fVar6;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    sVar2 = _fdclass(fVar4);
    if ((0 < sVar2) || (fVar4 < DAT_180380948)) {
      fVar6 = 0.0;
      fVar5 = DAT_180381384;
    }
    else {
      fVar6 = fVar6 / fVar4;
      fVar5 = fVar5 / fVar4;
    }
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    *param_2 = fVar6;
    param_2[1] = (float)((uint)fVar5 ^ uVar1);
    param_2[2] = 0.0;
    param_2[3] = *param_1;
    param_2[4] = fVar5;
    param_2[5] = fVar6;
    param_2[6] = 0.0;
    param_2[7] = param_1[1];
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 1.0;
    fVar5 = param_1[2];
    param_2[0xb] = fVar5;
    uVar3 = CONCAT71((uint7)(uint3)((uint)fVar5 >> 8),1);
  }
  return uVar3;
}


