// 0x180294d60  FUN_180294d60
// size=203 thunk=false
// signature: undefined FUN_180294d60()
// status: ok


void FUN_180294d60(longlong param_1,float param_2,float param_3,float param_4,uint param_5,
                  undefined4 param_6)

{
  float local_38;
  float local_34;
  
  if ((param_5 & 0xff000000) != 0) {
    local_38 = param_2 + DAT_180380ac0;
    param_4 = param_4 + DAT_180380ac0;
    local_34 = param_4;
    FUN_18020dc30(param_1 + 0x50,&local_38);
    local_38 = param_3 + DAT_180380ac0;
    local_34 = param_4;
    FUN_18020dc30(param_1 + 0x50,&local_38);
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5,
                  param_6,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


