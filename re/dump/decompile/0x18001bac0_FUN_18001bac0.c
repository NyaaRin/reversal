// 0x18001bac0  FUN_18001bac0
// size=229 thunk=false
// signature: undefined FUN_18001bac0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_18001bac0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  float fVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x7fff) == 0x7c00) {
    if (-1 < (short)uVar1) {
      return DAT_180380bb0 * _DAT_1803812d8;
    }
    return DAT_180381384 * _DAT_1803812d8;
  }
  uVar3 = uVar1 & 0x3ff;
  if ((uVar1 & 0x7c00) != 0x7c00 || uVar3 == 0) {
    if (((uVar1 & 0x7c00) == 0) && (uVar3 != 0)) {
      fVar4 = DAT_180380bb0;
      if ((short)uVar1 < 0) {
        fVar4 = DAT_180381384;
      }
      return (float)uVar3 * _DAT_180380960 * fVar4 * DAT_180380944;
    }
    iVar2 = 0;
    if ((uVar1 >> 10 & 0x1f) != 0) {
      iVar2 = (uVar1 >> 10 & 0x1f) + 0x70;
    }
    return (float)(((iVar2 << 7 | uVar1 & 0xffff8000) << 3 | uVar1 & 0x3ff) << 0xd);
  }
  return 0.0;
}


