// 0x1800d65d0  FUN_1800d65d0
// size=324 thunk=false
// signature: undefined FUN_1800d65d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800d65d0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong lVar8;
  float *pfVar9;
  
  if ((param_1 != 0) && (DAT_1803fa608 != (float *)0x0)) {
    fVar1 = *DAT_1803fa608;
    bVar6 = false;
    if ((*(uint *)(param_1 + 0x20) >> 0x11 & 1) != 0) {
      pcVar5 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar8 = (*pcVar5)(DAT_1803fa360,uVar7);
      if (lVar8 != 0) {
        pfVar9 = (float *)FUN_18001d530(lVar8);
        fVar2 = *pfVar9;
        if ((((uint)fVar2 & 0x7f800000) != 0x7f800000) &&
           (fVar3 = pfVar9[1], ((uint)fVar3 & 0x7f800000) != 0x7f800000)) {
          fVar4 = pfVar9[2];
          if (((uint)fVar4 & 0x7f800000) != 0x7f800000) {
            bVar6 = _DAT_1803812bc < fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
          }
        }
      }
    }
    if (bVar6) {
      DAT_1803e6ef0 = (double)fVar1;
    }
    if ((0.0 < DAT_1803e6ef0) && ((double)fVar1 < DAT_1803e6ef0 + _DAT_180380c98)) {
      return 1;
    }
  }
  return 0;
}


