// 0x1802b6640  FUN_1802b6640
// size=180 thunk=false
// signature: undefined FUN_1802b6640()
// status: ok


void FUN_1802b6640(longlong param_1,longlong param_2,int param_3,uint param_4,undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong *_Dst;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  _Dst = (longlong *)FUN_1802b60c0(param_2 + 0x20,param_3,param_4,param_5);
  if ((_Dst != (longlong *)0x0) && (0 < (int)param_4)) {
    iVar3 = 0;
    if (0xf < param_4) {
      plVar1 = (longlong *)(param_1 + 0x20);
      plVar5 = (longlong *)(((longlong)(int)param_4 - 1U) + (longlong)_Dst);
      if ((((longlong *)((longlong)(int)((param_4 - 1) + param_3) + *plVar1) < _Dst) ||
          (plVar5 < (longlong *)((longlong)param_3 + *plVar1))) &&
         ((plVar1 < _Dst || (iVar3 = 0, plVar5 < plVar1)))) {
        memcpy(_Dst,(longlong *)((longlong)param_3 + *plVar1),(longlong)(int)param_4);
        return;
      }
    }
    do {
      iVar2 = iVar3 + param_3;
      lVar4 = (longlong)iVar3;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(lVar4 + (longlong)_Dst) =
           *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    } while (iVar3 < (int)param_4);
  }
  return;
}


