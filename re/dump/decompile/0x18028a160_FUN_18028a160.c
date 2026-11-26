// 0x18028a160  FUN_18028a160
// size=183 thunk=false
// signature: undefined FUN_18028a160()
// status: ok


void FUN_18028a160(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar4 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar1 < iVar4) {
      _Dst = (void *)FUN_18026f580((longlong)iVar4 * 0xc);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 * 0xc);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar4;
    }
  }
  iVar1 = *param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_1 + 1;
  return;
}


