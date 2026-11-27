// 0x180294990  FUN_180294990
// size=767 thunk=false
// signature: undefined FUN_180294990()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180294990(longlong param_1,float *param_2,float *param_3,float param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float local_54;
  
  fVar3 = DAT_180380ac0;
  uVar1 = param_5;
  if (DAT_180380ac0 <= param_4) {
    uVar1 = param_5 | 0xf0;
    if ((param_5 & 0x1f0) != 0) {
      uVar1 = param_5;
    }
    bVar2 = (byte)uVar1;
    fVar4 = DAT_180380ac0;
    if ((bVar2 & 0x30) != 0x30 && (bVar2 & 0xc0) != 0xc0) {
      fVar4 = DAT_180380bb0;
    }
    fVar4 = (float)((uint)(*param_3 - *param_2) & _DAT_1803817c0) * fVar4 - DAT_180380bb0;
    if (fVar4 <= param_4) {
      param_4 = fVar4;
    }
    fVar4 = DAT_180380ac0;
    if ((bVar2 & 0x50) != 0x50 && (bVar2 & 0xa0) != 0xa0) {
      fVar4 = DAT_180380bb0;
    }
    fVar4 = (float)((uint)(param_3[1] - param_2[1]) & _DAT_1803817c0) * fVar4 - DAT_180380bb0;
    if (fVar4 <= param_4) {
      param_4 = fVar4;
    }
  }
  if ((param_4 < DAT_180380ac0) || ((uVar1 & 0x1f0) == 0x100)) {
    FUN_18020dc30(param_1 + 0x50);
    local_58 = *param_3;
    local_54 = param_2[1];
    FUN_18020dc30(param_1 + 0x50,&local_58);
    FUN_18020dc30(param_1 + 0x50,param_3);
    local_58 = *param_2;
    local_54 = param_3[1];
  }
  else {
    fVar4 = param_4;
    if ((uVar1 & 0x10) == 0) {
      fVar4 = 0.0;
    }
    fVar6 = param_4;
    if ((uVar1 & 0x20) == 0) {
      fVar6 = 0.0;
    }
    fVar5 = param_4;
    if (-1 < (char)uVar1) {
      fVar5 = 0.0;
    }
    if ((uVar1 & 0x40) == 0) {
      param_4 = 0.0;
    }
    local_58 = fVar4 + *param_2;
    local_54 = fVar4 + param_2[1];
    if (DAT_180380ac0 <= fVar4) {
      FUN_180293e00(param_1,&local_58,fVar4,0x18,0x24);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    local_54 = fVar6 + param_2[1];
    local_58 = *param_3 - fVar6;
    if (fVar3 <= fVar6) {
      FUN_180293e00(param_1,&local_58,fVar6,0x24,0x30);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    local_58 = *param_3 - fVar5;
    local_54 = param_3[1] - fVar5;
    if (fVar3 <= fVar5) {
      FUN_180293e00(param_1,&local_58,fVar5,0,0xc);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    local_58 = param_4 + *param_2;
    local_54 = param_3[1] - param_4;
    if (fVar3 <= param_4) {
      FUN_180293e00(param_1,&local_58,param_4,0xc,0x18);
      return;
    }
  }
  FUN_18020dc30(param_1 + 0x50,&local_58);
  return;
}


