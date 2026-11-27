// 0x18028a6d0  FUN_18028a6d0
// size=153 thunk=false
// signature: undefined FUN_18028a6d0()
// status: ok


void FUN_18028a6d0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
  iVar2 = param_1[1];
  if (-1 < iVar2) {
    *param_1 = 0;
    return;
  }
  iVar1 = iVar2 / 2 + iVar2;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  if (iVar2 < iVar3) {
    _Dst = (void *)FUN_18026f580((longlong)iVar3 << 2);
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 2);
      FUN_18026f680(*(undefined8 *)(param_1 + 2));
    }
    *(void **)(param_1 + 2) = _Dst;
    param_1[1] = iVar3;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}


