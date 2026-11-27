// 0x1800b3920  FUN_1800b3920
// size=608 thunk=false
// signature: undefined FUN_1800b3920()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b3920(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 local_38 [48];
  
  if ((-1 < DAT_1803e7ba4) && (DAT_1803e7ba4 = DAT_1803e7ba4 + -1, DAT_1803e7ba4 < 1)) {
    DAT_1803e7ba4 = -1;
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar4 = (*pcVar1)(DAT_1803fa360,uVar2);
    if ((lVar4 != 0) && (0 < DAT_1804096c8)) {
      pfVar5 = (float *)FUN_18001daf0(lVar4,local_38);
      fVar7 = (pfVar5[1] - _DAT_1803e9fdc) * (pfVar5[1] - _DAT_1803e9fdc) +
              (*pfVar5 - _DAT_1803e9fd8) * (*pfVar5 - _DAT_1803e9fd8);
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      fVar8 = DAT_180380988;
      if ((DAT_1803fa608 != 0) && (0.0 < *(double *)(DAT_1803fa608 + 0x28))) {
        fVar8 = (float)*(double *)(DAT_1803fa608 + 0x28);
      }
      fVar8 = fVar8 * _DAT_1804096d4 * (float)DAT_1804096c8;
      if (DAT_180380bb0 <= fVar8) {
        DAT_1803e7b9c = fVar7 / fVar8;
        if (DAT_1803e7b9c < DAT_180380ad4) {
          DAT_1804096e0 = DAT_1804096e0 + 1;
          DAT_1804096d8 = 0.0;
          FUN_180014410("[EXPLOIT] burst DISCARDED: asked %d ticks, travelled %.0fu of %.0fu expected (%.0f%%) - bank zeroed, rejections=%d\n"
                        ,DAT_1804096c8,(double)fVar7,(double)fVar8,
                        (double)(DAT_1803e7b9c * DAT_180381120),DAT_1804096e0);
          DAT_1804096c8 = 0;
          return;
        }
        uVar2 = FUN_1800b3740();
        iVar3 = FUN_1800b3740();
        iVar6 = 0;
        if (-1 < (int)DAT_1804096d8) {
          iVar6 = (int)DAT_1804096d8;
        }
        if (iVar3 < iVar6) {
          iVar6 = iVar3;
        }
        FUN_180014410("[EXPLOIT] burst ok: %d ticks, %.0fu of %.0fu (%.0f%%) bank=%d/%d\n",
                      DAT_1804096c8,(double)fVar7,(double)fVar8,
                      (double)(DAT_1803e7b9c * DAT_180381120),iVar6,uVar2);
      }
      DAT_1804096c8 = 0;
      return;
    }
  }
  return;
}


