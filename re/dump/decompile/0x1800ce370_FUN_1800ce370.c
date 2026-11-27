// 0x1800ce370  FUN_1800ce370
// size=701 thunk=false
// signature: undefined FUN_1800ce370()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1800ce370(float *param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4 [3];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  local_d4[0] = 0;
  if (((DAT_1803fa668 != (longlong *)0x0) &&
      ((**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_d8,local_d4), 1 < local_d8)) &&
     (1 < local_d4[0])) {
    fVar2 = (float)FUN_1800ce2c0();
    local_7c = 0x42b40000;
    local_78 = 0xffffffff;
    local_74 = 0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
    FUN_1802d4780(&local_c8,&DAT_1805707c0);
    local_78 = DAT_1803e7498;
    local_88 = DAT_1805c7c00;
    local_74 = CONCAT11(DAT_1803fe650,DAT_180425428);
    local_84 = DAT_1805c7c04;
    local_80 = DAT_1805c7c08;
    local_7c = DAT_1803da5c0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
    if ((char)local_74 == '\0') {
      fVar4 = 0.0;
      fVar3 = 0.0;
    }
    else {
      fVar3 = local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0;
      if (fVar3 < 0.0) {
        fVar3 = sqrtf(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar4 = local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
    }
    sVar1 = _fdclass();
    if (((0 < sVar1) || (sVar1 = _fdclass(), 0 < sVar1)) ||
       ((fVar3 <= DAT_180380964 || (fVar4 <= DAT_180380964)))) {
      fVar4 = (float)local_d8 / (float)local_d4[0];
      fVar3 = DAT_180380bb0;
    }
    fVar5 = DAT_180381108;
    if (fVar2 <= DAT_180381108) {
      fVar5 = fVar2;
    }
    fVar2 = tanf(fVar5 * DAT_180380994);
    fVar5 = (float)local_d8 * DAT_180380ac0 * fVar3 * fVar2;
    fVar3 = (float)local_d4[0] * DAT_180380ac0;
    sVar1 = _fdclass();
    if (sVar1 < 1) {
      fVar2 = fVar3 * fVar4 * fVar2;
      sVar1 = _fdclass();
      if (((sVar1 < 1) && (0.0 <= fVar5)) && (0.0 <= fVar2)) {
        *param_1 = fVar5;
        param_1[1] = fVar2;
        return param_1;
      }
    }
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  return param_1;
}


