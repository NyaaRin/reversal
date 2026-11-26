// 0x1800c5c90  FUN_1800c5c90
// size=131 thunk=false
// signature: undefined FUN_1800c5c90()
// status: ok


double FUN_1800c5c90(void)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  if ((DAT_1803fa608 == 0) ||
     (dVar1 = *(double *)(DAT_1803fa608 + 0x28), *(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
    dVar1 = DAT_180380bd0;
  }
  if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
     (fVar2 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
    fVar2 = 0.0;
  }
  dVar3 = DAT_180380d38;
  if (DAT_180380964 < fVar2) {
    dVar3 = DAT_180380d68;
  }
  dVar1 = DAT_180380c80 - dVar3 * dVar1;
  if (dVar1 <= DAT_180380c48) {
    dVar1 = DAT_180380c48;
  }
  return dVar1;
}


