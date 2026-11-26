// 0x180021be0  FUN_180021be0
// size=848 thunk=false
// signature: undefined FUN_180021be0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180021be0(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [48];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_cc = 0x42b40000;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  FUN_1802d4780(local_118,&DAT_1805707c0);
  local_c8 = DAT_1803e7498;
  local_d8 = DAT_1805c7c00;
  local_d4 = DAT_1805c7c04;
  local_c4 = CONCAT11(DAT_1803fe650,DAT_180425428);
  local_d0 = DAT_1805c7c08;
  local_cc = DAT_1803da5c0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  if ((char)local_c4 == '\0') {
    return 0;
  }
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = fVar4 * local_e4 + fVar3 * local_e8 + fVar5 * local_e0 + local_dc;
  sVar2 = _fdclass(fVar6);
  if (sVar2 < 1) {
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar7 = fVar9 * local_e4 + fVar8 * local_e8 + fVar10 * local_e0 + local_dc;
    sVar2 = _fdclass(fVar7);
    if (sVar2 < 1) {
      if (fVar6 < DAT_180380980) {
        if (fVar7 < DAT_180380980) {
          return 0;
        }
        if ((float)((uint)(fVar7 - fVar6) & _DAT_1803817c0) < DAT_180380938) {
          return 0;
        }
        fVar6 = (DAT_180380980 - fVar6) / (fVar7 - fVar6);
        fVar3 = (fVar8 - fVar3) * fVar6 + fVar3;
        fVar4 = (fVar9 - fVar4) * fVar6 + fVar4;
        fVar5 = (fVar10 - fVar5) * fVar6 + fVar5;
      }
      else if (fVar7 < DAT_180380980) {
        if ((float)((uint)(fVar6 - fVar7) & _DAT_1803817c0) < DAT_180380938) {
          return 0;
        }
        fVar6 = (DAT_180380980 - fVar7) / (fVar6 - fVar7);
        fVar8 = (fVar3 - fVar8) * fVar6 + fVar8;
        fVar9 = (fVar4 - fVar9) * fVar6 + fVar9;
        fVar10 = (fVar5 - fVar10) * fVar6 + fVar10;
      }
      local_128 = fVar3;
      local_124 = fVar4;
      local_120 = fVar5;
      cVar1 = FUN_1800207e0(&local_128,param_3,local_118);
      if ((cVar1 != '\0') &&
         (local_128 = fVar8, local_124 = fVar9, local_120 = fVar10,
         cVar1 = FUN_1800207e0(&local_128,param_4,local_118), cVar1 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}


