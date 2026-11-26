// 0x1800c60c0  FUN_1800c60c0
// size=163 thunk=false
// signature: undefined FUN_1800c60c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800c60c0(longlong param_1)

{
  double dVar1;
  int iVar2;
  char cVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  float fVar5;
  double dVar6;
  
  cVar3 = FUN_1800c5f70();
  if ((cVar3 == '\0') || (DAT_1803fa608 == 0)) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0x1854);
  dVar6 = *(double *)(DAT_1803fa608 + 0x10);
  dVar1 = *(double *)(DAT_1803fa608 + 0x28);
  if (3 < DAT_1803fb0dc) {
    if ((0.0 < DAT_1803fb248) && (fVar5 = DAT_1803fb248, DAT_1803fb248 < DAT_180380bb0))
    goto LAB_1800c612e;
  }
  fVar5 = 0.0;
LAB_1800c612e:
  dVar4 = (double)FUN_1800c5b20((double)fVar5);
  dVar4 = dVar4 - (dVar6 - (double)iVar2 * dVar1);
  dVar6 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_1803817d4,
                           SUB84(dVar4,0) & _DAT_1803817d0);
  FUN_1800c5c90();
  return dVar6 <= extraout_XMM0_Qa;
}


