// 0x18029f350  FUN_18029f350
// size=332 thunk=false
// signature: undefined FUN_18029f350()
// status: ok


void FUN_18029f350(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float fStack_64;
  
  fVar4 = param_4 / DAT_180380f00;
  if (param_4 / DAT_180380f00 <= DAT_180380bb0) {
    fVar4 = DAT_180380bb0;
  }
  param_4 = param_4 - fVar4 * DAT_180380ac0;
  fStack_64 = (float)((ulonglong)param_2 >> 0x20);
  fVar2 = param_4 / DAT_180380e28;
  fVar1 = fVar4 * DAT_180380a58 + (float)param_2 + fVar2;
  fVar3 = (fVar4 * DAT_180380a58 + fStack_64 + param_4) - fVar2 * DAT_180380ac0;
  _local_68 = CONCAT44(fVar3 - fVar2,fVar1 - fVar2);
  FUN_18020dc30(param_1 + 0x50,&local_68);
  _local_68 = CONCAT44(fVar3,fVar1);
  FUN_18020dc30(param_1 + 0x50,&local_68);
  _local_68 = CONCAT44(fVar3 - (fVar2 + fVar2),fVar2 + fVar2 + fVar1);
  FUN_18020dc30(param_1 + 0x50,&local_68);
  FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3,
                fVar4,0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


