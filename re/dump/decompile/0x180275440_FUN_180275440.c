// 0x180275440  FUN_180275440
// size=517 thunk=false
// signature: undefined FUN_180275440()
// status: ok


void FUN_180275440(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  lVar3 = (longlong)param_2;
  fVar1 = *(float *)(param_1 + 0x60);
  lVar4 = lVar3 * 0x1c;
  FUN_180274510(&local_78,param_1,param_2,fVar1,0);
  fVar2 = DAT_180380ac0;
  fVar5 = local_70 - local_78;
  fVar6 = local_6c - local_74;
  local_res8 = fVar5 * (float)(&DAT_1803312a8)[lVar3 * 7] + local_78 + DAT_180380ac0 +
               fVar1 * *(float *)(&DAT_1803312a0 + lVar4);
  local_resc = fVar6 * (float)(&DAT_1803312ac)[lVar3 * 7] + local_74 + DAT_180380ac0 +
               fVar1 * *(float *)(&DAT_1803312a4 + lVar4);
  FUN_1802941e0(*(undefined8 *)(param_1 + 0x2c8),&local_res8,fVar1,
                *(float *)(&DAT_1803312b8 + lVar4) - DAT_180380b38,
                *(float *)(&DAT_1803312b8 + lVar4),0);
  local_res8 = fVar5 * (float)(&DAT_1803312b0)[lVar3 * 7] + local_78 + fVar2 +
               fVar1 * *(float *)(&DAT_1803312a0 + lVar4);
  local_resc = fVar6 * (float)(&DAT_1803312b4)[lVar3 * 7] + local_74 + fVar2 +
               fVar1 * *(float *)(&DAT_1803312a4 + lVar4);
  FUN_1802941e0(*(undefined8 *)(param_1 + 0x2c8),&local_res8,fVar1,
                *(float *)(&DAT_1803312b8 + lVar4),
                *(float *)(&DAT_1803312b8 + lVar4) + DAT_180380b38,0);
  lVar3 = *(longlong *)(param_1 + 0x2c8);
  FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),param_3,param_4,0)
  ;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  return;
}


