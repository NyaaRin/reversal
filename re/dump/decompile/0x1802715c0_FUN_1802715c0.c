// 0x1802715c0  FUN_1802715c0
// size=239 thunk=false
// signature: undefined FUN_1802715c0()
// status: ok


void FUN_1802715c0(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar3 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar1 / 2 + iVar1;
    }
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar1 < iVar3) {
      _Dst = (void *)FUN_18026f580((longlong)iVar3 << 3);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 3);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar3;
    }
  }
  *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0xcc) != '\0') {
    iVar1 = *(int *)(param_2 + 0x1b0);
    if (1 < (ulonglong)(longlong)iVar1) {
      qsort(*(void **)(param_2 + 0x1b8),(longlong)iVar1,8,(_PtFuncCompare *)&LAB_180271570);
    }
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x1b8) + uVar5 * 8) + 0xcc) != '\0') {
          FUN_1802715c0(param_1);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}


