// 0x1800bdcb0  FUN_1800bdcb0
// size=182 thunk=false
// signature: undefined FUN_1800bdcb0()
// status: ok


int FUN_1800bdcb0(void)

{
  int iVar1;
  float fVar2;
  
  if ((DAT_180425768 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180425768 = FUN_180016fb0("cl_updaterate");
  }
  if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
    return 2;
  }
  if (DAT_180425768 != 0) {
    fVar2 = (float)FUN_180019700(DAT_180425768);
    if (0.0 < fVar2) goto LAB_1800bdd19;
  }
  fVar2 = DAT_180381074;
LAB_1800bdd19:
  iVar1 = (int)((DAT_180380bb0 / (float)*(double *)(DAT_1803fa608 + 0x28)) / fVar2 + DAT_180380ac0);
  if (iVar1 < 1) {
    return 1;
  }
  if (0x10 < iVar1) {
    iVar1 = 0x10;
  }
  return iVar1;
}


