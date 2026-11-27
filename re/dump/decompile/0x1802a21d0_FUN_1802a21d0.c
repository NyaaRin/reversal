// 0x1802a21d0  FUN_1802a21d0
// size=209 thunk=false
// signature: undefined FUN_1802a21d0()
// status: ok


void FUN_1802a21d0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)((longlong)param_2 * 0x74 + 0x56 + *(longlong *)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x21c) = 0xffff;
  *(short *)(param_1 + 0x21a) = (short)param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c) + -1;
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
  }
  if (param_3 != iVar4) {
    iVar2 = (int)*(short *)(param_1 + 0x22c);
    iVar1 = param_3;
    if (0 < *(short *)(param_1 + 0x22c)) {
      if (iVar4 < iVar2) {
        iVar1 = iVar2 + -1;
        if (param_3 < iVar2 + -1) {
          iVar1 = param_3;
        }
      }
      else {
        iVar1 = iVar2;
        if (iVar2 <= param_3) {
          iVar1 = param_3;
        }
      }
    }
    iVar2 = iVar4;
    iVar3 = -1;
    if (iVar4 < iVar1) {
      iVar3 = 1;
    }
    while( true ) {
      if (((iVar1 <= iVar4) || (iVar1 < iVar2)) && ((iVar4 <= iVar1 || (iVar2 < iVar1))))
      goto LAB_1802a228e;
      if ((*(byte *)((longlong)*(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 2) *
                     0x74 + *(longlong *)(param_1 + 0x18)) & 0x40) != 0) break;
      iVar2 = iVar2 + iVar3;
    }
    iVar1 = iVar2 - iVar3;
    if (iVar2 == iVar4) {
      iVar1 = iVar4;
    }
LAB_1802a228e:
    if (iVar1 != iVar4) {
      *(short *)(param_1 + 0x21c) = (short)iVar1;
    }
  }
  return;
}


