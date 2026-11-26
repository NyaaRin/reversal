// 0x1800e1c60  FUN_1800e1c60
// size=236 thunk=false
// signature: undefined FUN_1800e1c60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e1c60(longlong param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar4 = lroundf(param_2 / DAT_180381094);
  fVar8 = (float)iVar4 * DAT_180381094 * DAT_180380994;
  fVar5 = cosf(fVar8);
  fVar6 = sinf(fVar8);
  uVar3 = _DAT_1803817c0;
  uVar2 = DAT_18038143c;
  uVar1 = DAT_180381298;
  fVar8 = DAT_180380ac0;
  fVar6 = (float)((uint)fVar6 ^ DAT_1803817f0);
  if ((float)((uint)fVar5 & _DAT_1803817c0) <= DAT_180380ac0) {
    uVar7 = 0;
  }
  else {
    uVar7 = DAT_18038143c;
    if (0.0 < fVar5) {
      uVar7 = DAT_180381298;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  if ((float)((uint)fVar6 & uVar3) <= fVar8) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  if (fVar6 <= 0.0) {
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


