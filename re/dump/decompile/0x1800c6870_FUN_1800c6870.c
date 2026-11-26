// 0x1800c6870  FUN_1800c6870
// size=185 thunk=false
// signature: undefined FUN_1800c6870()
// status: ok


int FUN_1800c6870(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  if (DAT_1803fa608 == 0) {
    return 1;
  }
  if (0.0 < *(double *)(DAT_1803fa608 + 0x28)) {
    if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
       (fVar5 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
      fVar5 = 0.0;
    }
    dVar2 = (double)FUN_1800c5b20((double)fVar5);
    dVar3 = (double)FUN_1800c5c90();
    dVar4 = (double)FUN_1800c5dd0();
    dVar4 = dVar4 + (dVar2 - dVar3);
    if (dVar4 <= 0.0) {
      return 1;
    }
    dVar2 = ceil(dVar4 / *(double *)(DAT_1803fa608 + 0x28));
    iVar1 = (int)dVar2;
    if ((int)dVar2 < 1) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 1;
}


