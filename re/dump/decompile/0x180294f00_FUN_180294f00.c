// 0x180294f00  FUN_180294f00
// size=244 thunk=false
// signature: undefined FUN_180294f00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180294f00(longlong param_1,float *param_2,float *param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_4 & 0xff000000) != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      local_10 = *param_3 - _DAT_180380abc;
      local_c = param_3[1] - _DAT_180380abc;
      pfVar2 = &local_10;
      pfVar1 = &local_18;
      local_18 = *param_2 + DAT_180380ac0;
      local_14 = param_2[1] + DAT_180380ac0;
    }
    else {
      pfVar2 = &local_18;
      pfVar1 = &local_10;
      local_18 = *param_3 - DAT_180380ac0;
      local_14 = param_3[1] - DAT_180380ac0;
      local_10 = *param_2 + DAT_180380ac0;
      local_c = param_2[1] + DAT_180380ac0;
    }
    FUN_180294990(DAT_180380ac0,pfVar1,pfVar2,param_5,param_7);
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_6,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


