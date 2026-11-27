// 0x1802b49e0  FUN_1802b49e0
// size=264 thunk=false
// signature: undefined FUN_1802b49e0()
// status: ok


int FUN_1802b49e0(longlong param_1,uint param_2,void *param_3,int param_4)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x10) & 0x400000;
  if (uVar4 == 0) {
    iVar3 = *(int *)(param_1 + 0x58) + ~uVar1;
    if (iVar3 < param_4) {
      param_4 = FUN_180268e60(param_3,(longlong)param_3 + (longlong)param_4,
                              (longlong)iVar3 + (longlong)param_3);
      param_4 = param_4 - (int)param_3;
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28) < (int)(uVar1 + 1 + param_4)) && (uVar4 != 0)) {
    iVar3 = param_4;
    if (param_4 < 0x101) {
      iVar3 = 0x100;
    }
    if (param_4 < 0x20) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = param_4;
      if (iVar3 < param_4) {
        iVar2 = iVar3;
      }
    }
    FUN_18028a8d0(param_1 + 0x28,uVar1 + 1 + iVar2);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  }
  _Src = (void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 0x30));
  if (param_2 != uVar1) {
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 0x30) + (longlong)param_4),
            _Src,(longlong)(int)(uVar1 - param_2));
  }
  memcpy(_Src,param_3,(longlong)param_4);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_4;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  *(undefined1 *)((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x30)) = 0;
  return param_4;
}


