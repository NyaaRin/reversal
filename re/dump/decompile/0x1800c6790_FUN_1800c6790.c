// 0x1800c6790  FUN_1800c6790
// size=221 thunk=false
// signature: undefined FUN_1800c6790()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800c6790(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  double dVar6;
  int local_res8 [8];
  
  iVar2 = FUN_1800c6530();
  local_res8[4] = iVar2;
  cVar1 = FUN_1800c6700();
  if ((((cVar1 != '\0') && (DAT_1803fb0d0 != (int *)0x0)) && (0 < DAT_1803fb0cc)) &&
     ((0 < DAT_1803fb0c0 && (*DAT_1803fb0d0 == DAT_1803fb0c0 + 1)))) {
    plVar3 = (longlong *)FUN_180014300(local_res8);
    dVar6 = (double)(*plVar3 - _DAT_1803fb0e0);
    if (dVar6 < DAT_180381050) {
LAB_1800c6825:
      local_res8[2] = (DAT_1803fb0d0[1] - DAT_1803fb0cc) + 3;
      local_res8[0] = 0;
      piVar5 = local_res8;
      if (-1 < local_res8[2]) {
        piVar5 = local_res8 + 2;
      }
      piVar4 = local_res8 + 4;
      if (local_res8[2] <= iVar2) {
        piVar4 = piVar5;
      }
      return *piVar4;
    }
    if (dVar6 <= DAT_180381050) {
      if (dVar6 == DAT_180381050) {
        cVar1 = '\0';
      }
      else {
        cVar1 = -0x80;
      }
      if (cVar1 < '\0') goto LAB_1800c6825;
    }
  }
  return iVar2;
}


