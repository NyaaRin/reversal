// 0x1802795a0  FUN_1802795a0
// size=338 thunk=false
// signature: undefined FUN_1802795a0()
// status: ok


void FUN_1802795a0(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((param_3 == 0) || ((param_3 & (int)*(char *)(param_1 + 0xf1)) != 0)) {
    fVar4 = *(float *)(param_1 + 0x28);
    fVar3 = *(float *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xf4) = 0x7f7fffff;
    *(uint *)(param_1 + 0xf0) =
         (*(uint *)(param_1 + 0xf0) >> 8 & 0xf1) << 8 | *(uint *)(param_1 + 0xf0) & 0xffff00ff;
    *(undefined4 *)(param_1 + 0xf8) = 0x7f7fffff;
    fVar1 = *param_2;
    fVar2 = param_2[1];
    *(float *)(param_1 + 0x28) = (float)(int)fVar1;
    fVar4 = (float)(int)fVar1 - fVar4;
    *(float *)(param_1 + 0x2c) = (float)(int)fVar2;
    fVar3 = (float)(int)fVar2 - fVar3;
    if ((fVar4 != 0.0) || (fVar3 != 0.0)) {
      FUN_180287ee0();
      *(float *)(param_1 + 0x118) = fVar4 + *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x11c) = fVar3 + *(float *)(param_1 + 0x11c);
      *(float *)(param_1 + 0x130) = fVar4 + *(float *)(param_1 + 0x130);
      *(float *)(param_1 + 0x134) = fVar3 + *(float *)(param_1 + 0x134);
      *(float *)(param_1 + 0x138) = fVar4 + *(float *)(param_1 + 0x138);
      *(float *)(param_1 + 0x128) = fVar4 + *(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x13c) = fVar3 + *(float *)(param_1 + 0x13c);
      *(float *)(param_1 + 300) = fVar3 + *(float *)(param_1 + 300);
    }
  }
  return;
}


