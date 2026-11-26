// 0x180292550  FUN_180292550
// size=370 thunk=false
// signature: undefined FUN_180292550()
// status: ok


void FUN_180292550(longlong param_1,float *param_2,float *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = *param_3;
  fVar6 = param_3[1];
  fVar8 = param_2[1];
  fVar10 = *param_2;
  if (param_4 != '\0') {
    if (fVar10 < *(float *)(param_1 + 0x60)) {
      fVar10 = *(float *)(param_1 + 0x60);
    }
    if (fVar8 < *(float *)(param_1 + 100)) {
      fVar8 = *(float *)(param_1 + 100);
    }
    if (*(float *)(param_1 + 0x68) < fVar7) {
      fVar7 = *(float *)(param_1 + 0x68);
    }
    if (*(float *)(param_1 + 0x6c) < fVar6) {
      fVar6 = *(float *)(param_1 + 0x6c);
    }
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  fVar9 = fVar10;
  if (fVar10 <= fVar7) {
    fVar9 = fVar7;
  }
  fVar7 = fVar8;
  if (fVar8 <= fVar6) {
    fVar7 = fVar6;
  }
  if (*(int *)(param_1 + 0xa0) == iVar1) {
    iVar5 = *(int *)(param_1 + 0xa0) + 1;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    if (iVar1 < iVar5) {
      _Dst = (void *)FUN_18026f580((longlong)iVar5 << 4);
      if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 0xa8),(longlong)*(int *)(param_1 + 0xa0) << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 0xa8));
      }
      *(void **)(param_1 + 0xa8) = _Dst;
      *(int *)(param_1 + 0xa4) = iVar5;
    }
  }
  lVar4 = (longlong)*(int *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  *(float *)(lVar2 + lVar4 * 0x10) = fVar10;
  *(float *)(lVar2 + 4 + lVar4 * 0x10) = fVar8;
  *(float *)(lVar2 + 8 + lVar4 * 0x10) = fVar9;
  *(float *)(lVar2 + 0xc + lVar4 * 0x10) = fVar7;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(float *)(param_1 + 0x60) = fVar10;
  *(float *)(param_1 + 100) = fVar8;
  *(float *)(param_1 + 0x68) = fVar9;
  *(float *)(param_1 + 0x6c) = fVar7;
  FUN_180292360(param_1);
  return;
}


