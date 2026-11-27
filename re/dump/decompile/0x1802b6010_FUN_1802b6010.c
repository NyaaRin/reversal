// 0x1802b6010  FUN_1802b6010
// size=175 thunk=false
// signature: undefined FUN_1802b6010()
// status: ok


void FUN_1802b6010(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  sVar4 = *(short *)((longlong)param_1 + 0xa18);
  if (sVar4 < 1) {
    return;
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    iVar1 = *(int *)((longlong)param_1 + 4);
    *(int *)((longlong)param_1 + 0xa1c) = *(int *)((longlong)param_1 + 0xa1c) - iVar1;
    memmove((void *)((longlong)param_1 + 0x630),
            (void *)((longlong)iVar1 + 0x630 + (longlong)param_1),
            (longlong)*(int *)((longlong)param_1 + 0xa1c));
    sVar4 = *(short *)((longlong)param_1 + 0xa18);
    iVar3 = 0;
    if (0 < sVar4) {
      do {
        iVar2 = *(int *)((longlong)param_1 + (longlong)iVar3 * 0x10 + 0xc);
        if (-1 < iVar2) {
          *(int *)((longlong)param_1 + (longlong)iVar3 * 0x10 + 0xc) = iVar2 - iVar1;
        }
        sVar4 = *(short *)((longlong)param_1 + 0xa18);
        iVar3 = iVar3 + 1;
      } while (iVar3 < sVar4);
    }
  }
  *(short *)((longlong)param_1 + 0xa18) = sVar4 + -1;
  memmove(param_1,(void *)((longlong)param_1 + 0x10),(longlong)(short)(sVar4 + -1) << 4);
  return;
}


