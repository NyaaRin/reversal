// 0x18028a0b0  FUN_18028a0b0
// size=176 thunk=false
// signature: undefined FUN_18028a0b0()
// status: ok


void FUN_18028a0b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
  iVar1 = param_1[1];
  if (param_2 <= iVar1) {
    *param_1 = param_2;
    return;
  }
  if (iVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1 / 2 + iVar1;
  }
  iVar3 = param_2;
  if (param_2 < iVar2) {
    iVar3 = iVar2;
  }
  if (iVar1 < iVar3) {
    _Dst = (void *)FUN_18026f580((longlong)iVar3 * 0x3c);
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 * 0x3c);
      FUN_18026f680(*(undefined8 *)(param_1 + 2));
    }
    *(void **)(param_1 + 2) = _Dst;
    param_1[1] = iVar3;
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}


