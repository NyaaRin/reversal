// 0x1802acbe0  FUN_1802acbe0
// size=364 thunk=false
// signature: undefined FUN_1802acbe0()
// status: ok


float * FUN_1802acbe0(float *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar2 = *(float *)(param_2 + 0xc0 + ((longlong)param_3 ^ 1U) * 4);
  fVar6 = (float)(int)(*(float *)(param_2 + 100) * DAT_180380ac0 + DAT_180380ac0);
  if ((*(uint *)(param_2 + 0x14) >> 10 & 1) == 0) {
    fVar7 = fVar6;
    if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
      fVar7 = 0.0;
    }
  }
  else {
    fVar7 = (float)(int)(*(float *)(*(longlong *)(lVar1 + 0xec0) + 0xcd0) * DAT_180380ac0 +
                        DAT_180380ac0);
  }
  if (param_3 == 0) {
    fVar7 = *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_2 + 0x230);
    fVar5 = *(float *)(param_2 + 0x34);
    fVar3 = fVar6 + fVar7;
    *param_1 = fVar6 + *(float *)(param_2 + 0x228);
    fVar5 = (fVar7 + fVar5) - fVar6;
    param_1[2] = fVar4 - fVar6;
    fVar2 = fVar5 - fVar2;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    param_1[1] = fVar3;
  }
  else {
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = *(float *)(param_2 + 0x234) - fVar6;
    fVar6 = (fVar4 + *(float *)(param_2 + 0x30)) - fVar6;
    param_1[1] = *(float *)(param_2 + 0x22c) + fVar7;
    param_1[2] = fVar6;
    fVar6 = fVar6 - fVar2;
    if (fVar4 <= fVar6) {
      fVar4 = fVar6;
    }
    *param_1 = fVar4;
  }
  param_1[3] = fVar5;
  return param_1;
}


