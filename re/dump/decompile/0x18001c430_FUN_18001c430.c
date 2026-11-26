// 0x18001c430  FUN_18001c430
// size=294 thunk=false
// signature: undefined FUN_18001c430()
// status: ok


float * FUN_18001c430(longlong param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"DT_BaseFlex",0xb);
  uVar2 = FUN_18016d4c0(local_70,&local_c8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_c8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"m_vecViewOffset[0]",0x12);
  local_78 = &local_a8;
  local_88[0] = local_50;
  uVar3 = FUN_18016d4c0(local_50,&local_a8);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  lVar5 = (longlong)iVar1;
  FUN_18020e450(&local_a8);
  pfVar4 = (float *)FUN_18001daf0(param_1,local_88);
  *param_2 = *pfVar4 + *(float *)(lVar5 + param_1);
  param_2[1] = *(float *)(lVar5 + 4 + param_1) + pfVar4[1];
  param_2[2] = *(float *)(lVar5 + 8 + param_1) + pfVar4[2];
  return param_2;
}


