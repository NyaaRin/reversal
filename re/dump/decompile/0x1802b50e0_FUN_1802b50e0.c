// 0x1802b50e0  FUN_1802b50e0
// size=215 thunk=false
// signature: undefined FUN_1802b50e0()
// status: ok


void FUN_1802b50e0(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *_Dst;
  longlong lVar3;
  void *_Dst_00;
  size_t _Size;
  longlong *plVar4;
  int iVar5;
  longlong *_Src;
  
  _Size = (size_t)(int)param_4;
  _Dst = (longlong *)FUN_1802b60c0(param_2 + 0x20,param_3,param_4,0);
  if ((_Dst != (longlong *)0x0) && (0 < (int)param_4)) {
    iVar5 = 0;
    if (0xf < param_4) {
      plVar1 = (longlong *)(param_1 + 0x20);
      _Src = (longlong *)((longlong)param_3 + *plVar1);
      plVar4 = (longlong *)((_Size - 1) + (longlong)_Dst);
      if ((((longlong *)((longlong)(int)((param_4 - 1) + param_3) + *plVar1) < _Dst) ||
          (plVar4 < _Src)) && ((plVar1 < _Dst || (iVar5 = 0, plVar4 < plVar1)))) {
        memcpy(_Dst,_Src,_Size);
        goto LAB_1802b5183;
      }
    }
    do {
      iVar2 = iVar5 + param_3;
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(lVar3 + (longlong)_Dst) =
           *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    } while (iVar5 < (int)param_4);
  }
LAB_1802b5183:
  _Dst_00 = (void *)((longlong)param_3 + *(longlong *)(param_1 + 0x30));
  memmove(_Dst_00,(void *)((longlong)_Dst_00 + _Size),
          (longlong)(int)(((*(int *)(param_1 + 0x18) - param_3) - param_4) + 1));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_4;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  *(undefined1 *)(param_2 + 0x16) = 0;
  return;
}


