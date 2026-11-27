// 0x1800c2820  FUN_1800c2820
// size=336 thunk=false
// signature: undefined FUN_1800c2820()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800c2820(longlong param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float _Y;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  uint extraout_XMM0_Db;
  float fVar11;
  float fVar12;
  uint uVar13;
  
  uVar6 = _UNK_1803817c4;
  uVar5 = _DAT_1803817c0;
  fVar4 = DAT_180381420;
  _Y = DAT_18038120c;
  fVar3 = DAT_180381188;
  if ((*(char *)(param_1 + 0x40) != '\0') && (iVar2 = *(int *)(param_1 + 0xc), 1 < iVar2)) {
    fVar11 = 0.0;
    uVar13 = 0;
    iVar7 = 0;
    while (iVar8 = iVar7 + 1, iVar8 < iVar2) {
      fVar1 = *(float *)(param_1 + 0x28 + (longlong)iVar7 * 4);
      fVar12 = fVar11;
      iVar9 = iVar8;
      do {
        fVar11 = *(float *)(param_1 + 0x28 + (longlong)iVar9 * 4);
        fVar10 = fmodf(fVar1 - fVar11,_Y);
        if (fVar1 <= fVar11) {
          if (fVar10 <= fVar4) {
            fVar10 = fVar10 + _Y;
          }
        }
        else if (fVar3 <= fVar10) {
          fVar10 = fVar10 - _Y;
        }
        uVar13 = extraout_XMM0_Db & uVar6;
        iVar9 = iVar9 + 1;
        fVar11 = (float)((uint)fVar10 & uVar5);
        if ((float)((uint)fVar10 & uVar5) <= fVar12) {
          fVar11 = fVar12;
        }
        fVar12 = fVar11;
        iVar7 = iVar8;
      } while (iVar9 < iVar2);
    }
    return CONCAT44(uVar13,fVar11);
  }
  return 0;
}


