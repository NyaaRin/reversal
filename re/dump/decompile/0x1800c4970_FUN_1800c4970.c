// 0x1800c4970  FUN_1800c4970
// size=243 thunk=false
// signature: undefined FUN_1800c4970()
// status: ok


float * FUN_1800c4970(float *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float local_54;
  float local_50;
  
  FUN_18001daf0(param_2,&local_58);
  pfVar4 = (float *)FUN_18001bef0(param_2);
  pfVar5 = (float *)FUN_18001bfe0(param_2);
  fVar3 = DAT_180380ac0;
  fVar8 = (*pfVar4 + *pfVar5) * DAT_180380ac0;
  fVar7 = (pfVar5[1] + pfVar4[1]) * DAT_180380ac0;
  fVar6 = (pfVar5[2] + pfVar4[2]) * DAT_180380ac0;
  pfVar4 = (float *)FUN_18001c430(param_2,&local_58);
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  *param_1 = (fVar8 + local_58 + *pfVar4) * fVar3;
  param_1[1] = (fVar7 + local_54 + fVar1) * fVar3;
  param_1[2] = (fVar6 + local_50 + fVar2) * fVar3;
  return param_1;
}


