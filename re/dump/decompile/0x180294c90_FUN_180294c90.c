// 0x180294c90  FUN_180294c90
// size=207 thunk=false
// signature: undefined FUN_180294c90()
// status: ok


void FUN_180294c90(longlong param_1,float *param_2,float *param_3,uint param_4,undefined4 param_5)

{
  float fVar1;
  float local_28;
  float local_24;
  
  fVar1 = DAT_180380ac0;
  if ((param_4 & 0xff000000) != 0) {
    local_28 = *param_2 + DAT_180380ac0;
    local_24 = param_2[1] + DAT_180380ac0;
    FUN_18020dc30(param_1 + 0x50,&local_28);
    local_28 = *param_3 + fVar1;
    local_24 = param_3[1] + fVar1;
    FUN_18020dc30(param_1 + 0x50,&local_28);
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_5,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


