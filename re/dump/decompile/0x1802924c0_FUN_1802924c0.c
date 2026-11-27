// 0x1802924c0  FUN_1802924c0
// size=139 thunk=false
// signature: undefined FUN_1802924c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1802924c0(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  
  if ((uint)(int)(param_2 + _DAT_180380bac) < 0x40) {
    return (uint)*(byte *)((longlong)(int)(param_2 + _DAT_180380bac) + 500 +
                          *(longlong *)(param_1 + 0x38));
  }
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x2c);
  if (param_2 <= fVar2) {
    fVar2 = param_2;
  }
  fVar2 = acosf(DAT_180380bb0 - fVar2 / param_2);
  fVar2 = ceilf(DAT_180380e48 / fVar2);
  uVar1 = (((int)fVar2 + 1) / 2) * 2;
  if ((int)uVar1 < 4) {
    return 4;
  }
  if (0x200 < (int)uVar1) {
    uVar1 = 0x200;
  }
  return uVar1;
}


