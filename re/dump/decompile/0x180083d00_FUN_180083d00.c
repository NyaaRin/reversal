// 0x180083d00  FUN_180083d00
// size=491 thunk=false
// signature: undefined FUN_180083d00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180083d00(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  iVar1 = *param_1;
  if (iVar1 < 1) {
    iVar1 = -iVar1;
    uVar2 = 0x27;
    lVar4 = 0x27;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    do {
      iVar1 = iVar1 * 0x41a7 + (iVar1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar2 < 0x20) {
        param_1[lVar4 + 2] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar2 < 0x21) {
        param_1[lVar4 + 1] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar2 < 0x22) {
        param_1[lVar4] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar2 < 0x23) {
        param_1[lVar4 + -1] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar2 < 0x24) {
        param_1[lVar4 + -2] = iVar1;
        iVar1 = *param_1;
      }
      lVar4 = lVar4 + -5;
      uVar2 = uVar2 - 5;
    } while (-1 < (int)uVar2);
    iVar3 = param_1[2];
    param_1[1] = iVar3;
  }
  else {
    iVar3 = param_1[1];
  }
  iVar1 = iVar1 * 0x41a7 + (iVar1 / 0x1f31d) * -0x7fffffff;
  *param_1 = iVar1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7fffffff;
    *param_1 = iVar1;
  }
  dVar5 = floor((double)iVar3 / _DAT_180381010);
  uVar2 = (uint)dVar5;
  if ((0x1f < (int)uVar2) || ((int)uVar2 < 0)) {
    uVar2 = uVar2 & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    uVar2 = uVar2 & 0x7fffffff;
  }
  param_1[1] = param_1[(longlong)(int)uVar2 + 2];
  param_1[(longlong)(int)uVar2 + 2] = iVar1;
  return param_1[1];
}


