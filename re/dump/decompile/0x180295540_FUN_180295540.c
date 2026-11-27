// 0x180295540  FUN_180295540
// size=187 thunk=false
// signature: undefined FUN_180295540()
// status: ok


void FUN_180295540(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5)

{
  undefined8 in_R8;
  float fVar1;
  
  if (((param_4 & 0xff000000) != 0) && (DAT_180380ac0 <= param_3)) {
    if (param_5 < 1) {
      FUN_180293e00(param_1,param_2,in_R8,0,0x30);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    }
    else {
      if (param_5 < 3) {
        param_5 = 3;
      }
      else if (0x200 < param_5) {
        param_5 = 0x200;
      }
      fVar1 = (((float)param_5 - DAT_180380bb0) * DAT_180380f70) / (float)param_5;
      FUN_1802941e0(param_1,fVar1,in_R8,0,fVar1,param_5 + -1);
    }
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


