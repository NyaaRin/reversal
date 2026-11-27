// 0x1802972f0  FUN_1802972f0
// size=279 thunk=false
// signature: undefined FUN_1802972f0()
// status: ok


void FUN_1802972f0(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  
  iVar2 = *param_3;
  if ((iVar2 != 0) &&
     (((iVar2 != 1 || (*(int *)(*(longlong *)(param_3 + 2) + 0x28) != 0)) ||
      (*(longlong *)(*(longlong *)(param_3 + 2) + 0x30) != 0)))) {
    if (0 < param_3[0x30]) {
      lVar4 = *(longlong *)(param_3 + 2);
      lVar1 = lVar4 + (longlong)iVar2 * 0x48;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
        if (((*(longlong *)(lVar4 + 0x30) != 0) && (*(int *)(lVar4 + 0x44) != -1)) &&
           (0 < *(int *)(lVar4 + 0x40))) {
          *(longlong *)(lVar4 + 0x38) =
               (longlong)*(int *)(lVar4 + 0x44) + *(longlong *)(param_3 + 0x32);
        }
      }
    }
    iVar2 = param_2[1];
    if (*param_2 == iVar2) {
      iVar5 = *param_2 + 1;
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      if (iVar5 < iVar3) {
        iVar5 = iVar3;
      }
      if (iVar2 < iVar5) {
        _Dst = (void *)FUN_18026f580((longlong)iVar5 << 3);
        if (*(void **)(param_2 + 2) != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_2 + 2),(longlong)*param_2 << 3);
          FUN_18026f680(*(undefined8 *)(param_2 + 2));
        }
        *(void **)(param_2 + 2) = _Dst;
        param_2[1] = iVar5;
      }
    }
    *(int **)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 8) = param_3;
    *param_2 = *param_2 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[8];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3[4];
  }
  return;
}


