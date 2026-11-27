// 0x1802b6ee0  FUN_1802b6ee0
// size=288 thunk=false
// signature: undefined FUN_1802b6ee0()
// status: ok


void FUN_1802b6ee0(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar4 = param_5;
  if (param_3 < param_5) {
    iVar4 = param_3;
  }
  uVar5 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)(param_2 + uVar5) != *(char *)(uVar5 + param_4)) break;
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar4);
  }
  iVar4 = (int)uVar5;
  if ((iVar4 != param_3) || (iVar4 != param_5)) {
    while( true ) {
      param_3 = param_3 + -1;
      param_5 = param_5 + -1;
      if (param_3 < iVar4) break;
      if ((param_5 < iVar4) || (*(char *)(param_3 + param_2) != *(char *)(param_5 + param_4)))
      break;
    }
    iVar6 = param_3 - iVar4;
    uVar3 = iVar6 + 1;
    if (((0 < (param_5 - iVar4) + 1) || (0 < (int)uVar3)) &&
       ((_Dst = (void *)FUN_1802b60c0(*(longlong *)(param_1 + 8) + 0x20,uVar5,uVar3),
        _Dst != (void *)0x0 && (0 < (int)uVar3)))) {
      iVar2 = 0;
      if ((uVar3 < 0x10) ||
         ((_Dst <= (void *)(param_3 + param_2) &&
          ((void *)(iVar4 + param_2) <= (void *)((longlong)iVar6 + (longlong)_Dst))))) {
        if (0 < (int)uVar3) {
          do {
            iVar6 = iVar2 + iVar4;
            lVar1 = (longlong)iVar2;
            iVar2 = iVar2 + 1;
            *(undefined1 *)(lVar1 + (longlong)_Dst) = *(undefined1 *)(iVar6 + param_2);
          } while (iVar2 < (int)uVar3);
        }
      }
      else {
        memcpy(_Dst,(void *)(iVar4 + param_2),(longlong)iVar6 + 1);
      }
    }
  }
  return;
}


