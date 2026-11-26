// 0x1800c5c00  FUN_1800c5c00
// size=130 thunk=false
// signature: undefined FUN_1800c5c00()
// status: ok


double FUN_1800c5c00(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_1803ffc58 == 0) {
    if (DAT_1803fa340 != 0) {
      DAT_1803ffc58 = FUN_180016fb0("sv_maxunlag");
      if (DAT_1803ffc58 != 0) goto LAB_1800c5c36;
    }
  }
  else {
LAB_1800c5c36:
    fVar2 = (float)FUN_180019700(DAT_1803ffc58);
    if (0.0 < fVar2) goto LAB_1800c5c4e;
  }
  fVar2 = DAT_180380bb0;
LAB_1800c5c4e:
  fVar3 = (float)FUN_1800c5790();
  dVar1 = (double)FUN_1800c5aa0();
  dVar1 = ((double)fVar2 - (double)fVar3) - dVar1;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return dVar1;
}


