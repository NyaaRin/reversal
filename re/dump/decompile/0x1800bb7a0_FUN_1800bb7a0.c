// 0x1800bb7a0  FUN_1800bb7a0
// size=250 thunk=false
// signature: undefined FUN_1800bb7a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800bb7a0(longlong param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = _DAT_1803817c0;
  fVar6 = DAT_1803810c8;
  fVar5 = DAT_180380fd8;
  iVar3 = *(int *)(param_1 + 0x48);
  iVar9 = -1;
  if (0 < iVar3) {
    uVar8 = 0;
    uVar10 = 1;
    uVar4 = *(uint *)(param_1 + 0x4c);
    do {
      if (((((uVar10 & uVar4) == 0) &&
           (fVar2 = *(float *)(param_1 + 0x38 + uVar8 * 4), param_2 - fVar2 <= fVar6)) &&
          (uVar11 = FUN_180022110(*(undefined4 *)(param_1 + 0x28 + uVar8 * 4),
                                  *(undefined4 *)(param_1 + 0x18)), fVar5 < (float)(uVar11 & uVar7))
          ) && ((iVar9 < 0 ||
                (pfVar1 = (float *)(param_1 + 0x38 + (longlong)iVar9 * 4),
                *pfVar1 <= fVar2 && fVar2 != *pfVar1)))) {
        iVar9 = (int)uVar8;
      }
      uVar11 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar11;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
    } while ((int)uVar11 < iVar3);
  }
  return iVar9;
}


