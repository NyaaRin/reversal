// 0x18028a580  FUN_18028a580
// size=162 thunk=false
// signature: undefined FUN_18028a580()
// status: ok


void FUN_18028a580(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar5 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar2 < iVar5) {
      _Dst = (void *)FUN_18026f580((longlong)iVar5 << 4);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar5;
    }
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  *param_1 = *param_1 + 1;
  return;
}


