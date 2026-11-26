// 0x18027b0a0  FUN_18027b0a0
// size=112 thunk=false
// signature: undefined FUN_18027b0a0()
// status: ok


uint FUN_18027b0a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff0fff;
  if (7 < uVar2 - 0x20f) {
    return param_1;
  }
  if ((uVar2 - 0x20f & 0xfffffffb) == 0) {
    return param_1 | 0x1000;
  }
  if ((uVar2 - 0x210 & 0xfffffffb) == 0) {
    return param_1 | 0x2000;
  }
  if ((uVar2 - 0x211 & 0xfffffffb) != 0) {
    uVar1 = 0x8000;
    if ((uVar2 - 0x212 & 0xfffffffb) != 0) {
      uVar1 = 0;
    }
    return uVar1 | param_1;
  }
  return param_1 | 0x4000;
}


