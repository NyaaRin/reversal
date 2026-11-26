// 0x18029ba70  FUN_18029ba70
// size=585 thunk=false
// signature: undefined FUN_18029ba70()
// status: ok


int * FUN_18029ba70(int *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_2 + 0xac);
  uVar7 = (int)(param_2[3] - 1) >> 1 | param_2[3] - 1;
  uVar7 = (int)uVar7 >> 2 | uVar7;
  uVar7 = (int)uVar7 >> 4 | uVar7;
  uVar7 = (int)uVar7 >> 8 | uVar7;
  uVar7 = (int)uVar7 >> 0x10 | uVar7;
  uVar4 = (int)(param_2[4] - 1) >> 1 | param_2[4] - 1;
  iVar5 = uVar7 + 1;
  uVar4 = (int)uVar4 >> 2 | uVar4;
  uVar4 = (int)uVar4 >> 4 | uVar4;
  uVar4 = (int)uVar4 >> 8 | uVar4;
  uVar4 = (int)uVar4 >> 0x10 | uVar4;
  iVar6 = uVar4 + 1;
  if (((lVar1 != 0) && (*(longlong *)(param_2 + 0xe) != 0)) &&
     (*(int *)(*(longlong *)(param_2 + 0xe) + 4) != 4)) {
    uVar2 = *(int *)(lVar1 + 0xa8) - 1;
    uVar2 = (int)uVar2 >> 1 | uVar2;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    uVar2 = (int)uVar2 >> 0x10 | uVar2;
    if (iVar5 <= (int)(uVar2 + 1)) {
      uVar7 = uVar2;
    }
    uVar2 = *(int *)(lVar1 + 0xac) - 1;
    uVar2 = (int)uVar2 >> 1 | uVar2;
    iVar5 = uVar7 + 1;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    uVar2 = (int)uVar2 >> 0x10 | uVar2;
    if (iVar6 <= (int)(uVar2 + 1)) {
      uVar4 = uVar2;
    }
    iVar9 = *(int *)(lVar1 + 0x98) - *(int *)(lVar1 + 0xa0);
    iVar6 = uVar4 + 1;
    fVar10 = (float)iVar9;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    uVar2 = (int)((int)fVar10 - 1U) >> 1 | (int)fVar10 - 1U;
    uVar2 = (int)uVar2 >> 2 | uVar2;
    uVar2 = (int)uVar2 >> 4 | uVar2;
    uVar2 = (int)uVar2 >> 8 | uVar2;
    uVar2 = (int)uVar2 >> 0x10 | uVar2;
    if (iVar5 < iVar6) {
      if ((int)(uVar2 + 1) <= iVar6) {
        uVar2 = uVar4;
      }
      if ((*param_2 & 1) == 0) {
        uVar2 = (int)uVar2 >> 1 | uVar2;
        uVar2 = (int)uVar2 >> 2 | uVar2;
        uVar2 = (int)uVar2 >> 4 | uVar2;
        uVar2 = (int)uVar2 >> 8 | uVar2;
        uVar2 = (int)uVar2 >> 0x10 | uVar2;
      }
      iVar3 = uVar2 + 1;
      iVar8 = (iVar9 + -1 + iVar3) / iVar3;
      if (iVar8 <= iVar5) {
        iVar8 = iVar5;
      }
    }
    else {
      if ((int)(uVar2 + 1) <= iVar5) {
        uVar2 = uVar7;
      }
      iVar8 = uVar2 + 1;
      iVar3 = (iVar9 + -1 + iVar8) / iVar8;
      if (iVar3 <= iVar6) {
        iVar3 = iVar6;
      }
      if ((*param_2 & 1) == 0) {
        uVar7 = (int)(iVar3 - 1U) >> 1 | iVar3 - 1U;
        uVar7 = (int)uVar7 >> 2 | uVar7;
        uVar7 = (int)uVar7 >> 4 | uVar7;
        uVar7 = (int)uVar7 >> 8 | uVar7;
        iVar3 = ((int)uVar7 >> 0x10 | uVar7) + 1;
      }
    }
    *param_1 = iVar8;
    param_1[1] = iVar3;
    return param_1;
  }
  *param_1 = iVar5;
  param_1[1] = iVar6;
  return param_1;
}


