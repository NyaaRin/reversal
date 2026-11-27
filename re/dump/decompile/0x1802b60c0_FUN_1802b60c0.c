// 0x1802b60c0  FUN_1802b60c0
// size=399 thunk=false
// signature: undefined FUN_1802b60c0()
// status: ok


longlong FUN_1802b60c0(void *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined4 *puVar5;
  
  *(undefined2 *)((longlong)param_1 + 0xa1a) = 99;
  *(undefined4 *)((longlong)param_1 + 0xa20) = 999;
  if (*(short *)((longlong)param_1 + 0xa18) == 99) {
    FUN_1802b6010();
  }
  if (param_3 < 1000) {
    iVar3 = *(int *)((longlong)param_1 + 0xa1c);
    while (999 < iVar3 + param_3) {
      sVar4 = *(short *)((longlong)param_1 + 0xa18);
      if (0 < sVar4) {
        if (-1 < *(int *)((longlong)param_1 + 0xc)) {
          iVar1 = *(int *)((longlong)param_1 + 4);
          *(int *)((longlong)param_1 + 0xa1c) = iVar3 - iVar1;
          memmove((void *)((longlong)param_1 + 0x630),
                  (void *)((longlong)param_1 + (longlong)iVar1 + 0x630),(longlong)(iVar3 - iVar1));
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
      }
      iVar3 = *(int *)((longlong)param_1 + 0xa1c);
    }
    sVar4 = *(short *)((longlong)param_1 + 0xa18);
    *(short *)((longlong)param_1 + 0xa18) = sVar4 + 1;
    puVar5 = (undefined4 *)((longlong)sVar4 * 0x10 + (longlong)param_1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = param_2;
      puVar5[1] = param_3;
      puVar5[2] = param_4;
      if (param_3 != 0) {
        puVar5[3] = *(undefined4 *)((longlong)param_1 + 0xa1c);
        *(int *)((longlong)param_1 + 0xa1c) = *(int *)((longlong)param_1 + 0xa1c) + param_3;
        return (longlong)(int)puVar5[3] + 0x630 + (longlong)param_1;
      }
      puVar5[3] = 0xffffffff;
    }
  }
  else {
    *(undefined2 *)((longlong)param_1 + 0xa18) = 0;
    *(undefined4 *)((longlong)param_1 + 0xa1c) = 0;
  }
  return 0;
}


