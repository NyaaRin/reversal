// 0x1802694a0  FUN_1802694a0
// size=216 thunk=false
// signature: undefined FUN_1802694a0()
// status: ok


void FUN_1802694a0(int *param_1,char *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    sVar3 = strlen(param_2);
    iVar5 = (int)sVar3;
  }
  else {
    iVar5 = (int)param_3 - (int)param_2;
  }
  iVar6 = 1;
  if (*param_1 != 0) {
    iVar6 = *param_1;
  }
  iVar2 = param_1[1];
  iVar1 = iVar6 + iVar5;
  if (iVar2 <= iVar1) {
    iVar4 = iVar2 * 2;
    if (iVar2 * 2 < iVar1) {
      iVar4 = iVar1;
    }
    if (iVar2 < iVar4) {
      _Dst = (void *)FUN_18026f580((longlong)iVar4);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar4;
    }
  }
  FUN_18028a8d0(param_1,iVar1);
  memcpy((void *)((longlong)(iVar6 + -1) + *(longlong *)(param_1 + 2)),param_2,(longlong)iVar5);
  *(undefined1 *)((longlong)iVar1 + -1 + *(longlong *)(param_1 + 2)) = 0;
  return;
}


