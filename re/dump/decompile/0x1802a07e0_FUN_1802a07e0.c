// 0x1802a07e0  FUN_1802a07e0
// size=319 thunk=false
// signature: undefined FUN_1802a07e0()
// status: ok


void FUN_1802a07e0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
  iVar3 = param_1[1];
  if (iVar3 < param_2) {
    if (iVar3 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar3 / 2 + iVar3;
    }
    iVar7 = param_2;
    if (param_2 < iVar2) {
      iVar7 = iVar2;
    }
    if (iVar3 < iVar7) {
      _Dst = (void *)FUN_18026f580((longlong)iVar7 << 2);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 2);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar7;
    }
  }
  iVar3 = *param_1;
  uVar5 = (ulonglong)iVar3;
  if (iVar3 < param_2) {
    if (3 < (uint)(param_2 - iVar3)) {
      piVar8 = (int *)(*(longlong *)(param_1 + 2) + uVar5 * 4);
      piVar1 = (int *)(*(longlong *)(param_1 + 2) + (longlong)(param_2 + -1) * 4);
      if (((param_1 + 2 < piVar8) || (piVar1 < param_1 + 2)) &&
         ((param_3 < piVar8 || (piVar1 < param_3)))) {
        iVar2 = *param_3;
        uVar9 = param_2 - iVar3 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        do {
          uVar4 = (int)uVar5 + 4;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < (int)(param_2 - uVar9));
        iVar3 = ((param_2 - uVar9) - iVar3) + 3;
        for (lVar6 = ((longlong)((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) & 0xfffffffffffffffU) <<
                     2; lVar6 != 0; lVar6 = lVar6 + -1) {
          *piVar8 = iVar2;
          piVar8 = piVar8 + 1;
        }
        uVar5 = (ulonglong)uVar4;
        if (param_2 <= (int)uVar4) goto LAB_1802a0913;
      }
    }
    do {
      iVar3 = (int)uVar5;
      uVar9 = iVar3 + 1;
      uVar5 = (ulonglong)uVar9;
      *(int *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 4) = *param_3;
    } while ((int)uVar9 < param_2);
  }
LAB_1802a0913:
  *param_1 = param_2;
  return;
}


