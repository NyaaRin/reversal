// 0x1800c6ab0  FUN_1800c6ab0
// size=408 thunk=false
// signature: undefined FUN_1800c6ab0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1800c6ab0(int param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  double local_res10 [3];
  
  iVar5 = *(int *)(param_2 + 0x1854);
  if (iVar5 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1800c64b0();
    iVar3 = iVar3 + iVar5;
  }
  param_1 = param_1 - iVar3;
  if (0 < param_1) {
    cVar2 = FUN_1800b8200();
    fVar1 = DAT_180380bb0;
    if (cVar2 == '\0') {
      if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
         (fVar7 = DAT_1803fb248, DAT_180380bb0 <= DAT_1803fb248)) {
        fVar7 = 0.0;
      }
      if (fVar7 <= DAT_180380964) {
        return (float)param_1 * DAT_180380a58;
      }
    }
    if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
      iVar5 = 0;
    }
    else {
      dVar8 = (double)FUN_1800c5e70();
      local_res10[0] = 0.0;
      if (((DAT_1803fb0dc < 4) || (DAT_1803fb248 <= 0.0)) ||
         (fVar7 = DAT_1803fb248, fVar1 <= DAT_1803fb248)) {
        fVar7 = 0.0;
      }
      local_res10[2] = dVar8;
      local_res10[1] = (double)FUN_1800c5b20((double)fVar7);
      pdVar6 = local_res10;
      if (0.0 <= local_res10[1]) {
        pdVar6 = local_res10 + 1;
      }
      pdVar4 = local_res10 + 2;
      if (local_res10[1] <= dVar8) {
        pdVar4 = pdVar6;
      }
      iVar5 = (int)(*pdVar4 / *(double *)(DAT_1803fa608 + 0x28) + DAT_180380cb0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
    return (float)((uint)(float)(param_1 - iVar5) & _DAT_1803817c0) * DAT_180380a58;
  }
  return 0.0;
}


