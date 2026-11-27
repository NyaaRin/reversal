// 0x18018df20  FUN_18018df20
// size=857 thunk=false
// signature: undefined FUN_18018df20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18018df20(undefined8 *param_1,float *param_2,float *param_3,float *param_4,int param_5,
             int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_178 [32];
  int local_158;
  float local_148;
  float local_144;
  float local_140;
  undefined2 local_133;
  undefined1 local_131;
  undefined1 local_128 [64];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined2 local_d4;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  cVar3 = FUN_18018c550(param_2,param_3);
  if (((cVar3 != '\0') && (1 < param_5)) && (1 < param_6)) {
    local_dc = 0x42b40000;
    local_d8 = 0xffffffff;
    local_d4 = 0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
    FUN_1802d4780(local_128,&DAT_1805707c0);
    local_d8 = DAT_1803e7498;
    local_e8 = DAT_1805c7c00;
    local_e4 = DAT_1805c7c04;
    local_d4._0_1_ = DAT_180425428;
    local_d4._1_1_ = DAT_1803fe650;
    local_e0 = DAT_1805c7c08;
    local_dc = DAT_1803da5c0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
    if ((((char)local_d4 != '\0') && (local_d4._1_1_ != '\0')) &&
       ((DAT_1803fa608 != 0 && ((uint)(*(int *)(DAT_1803fa608 + 4) - local_d8) < 3)))) {
      cVar3 = FUN_18018c690(&local_e8,param_4,&local_148);
      if (cVar3 != '\0') {
        fVar5 = param_4[2] * param_4[2] + param_4[6] * param_4[6] + param_4[10] * param_4[10];
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        fVar6 = param_4[1] * param_4[1] + param_4[5] * param_4[5] + param_4[9] * param_4[9];
        if (fVar6 < 0.0) {
          fVar6 = sqrtf(fVar6);
        }
        else {
          fVar6 = SQRT(fVar6);
        }
        fVar7 = *param_4 * *param_4 + param_4[4] * param_4[4] + param_4[8] * param_4[8];
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        if (fVar7 <= DAT_180380930) {
          fVar7 = DAT_180380930;
        }
        if ((*param_2 - DAT_180380980 / fVar7 <= local_148) &&
           (local_148 <= DAT_180380980 / fVar7 + *param_3)) {
          if (fVar6 <= DAT_180380930) {
            fVar6 = DAT_180380930;
          }
          if ((param_2[1] - DAT_180380980 / fVar6 <= local_144) &&
             (local_144 <= DAT_180380980 / fVar6 + param_3[1])) {
            if (fVar5 <= DAT_180380930) {
              fVar5 = DAT_180380930;
            }
            if ((param_2[2] - DAT_180380980 / fVar5 <= local_140) &&
               (local_140 <= DAT_180380980 / fVar5 + param_3[2])) {
              *param_1 = 4;
              param_1[1] = 0;
              *(undefined4 *)(param_1 + 2) = 0;
              *(undefined1 *)((longlong)param_1 + 0x14) = 0;
              *(undefined2 *)((longlong)param_1 + 0x15) = local_133;
              *(undefined1 *)((longlong)param_1 + 0x17) = local_131;
              return param_1;
            }
          }
        }
      }
      FUN_18018d8b0(param_2,param_3,param_4,local_c8);
      local_158 = param_6;
      puVar4 = (undefined8 *)FUN_18018d9b0(&local_148,local_c8,local_128,param_5);
      uVar2 = puVar4[1];
      uVar1 = puVar4[2];
      *param_1 = *puVar4;
      param_1[1] = uVar2;
      param_1[2] = uVar1;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = local_133;
  *(undefined1 *)((longlong)param_1 + 0x17) = local_131;
  return param_1;
}


