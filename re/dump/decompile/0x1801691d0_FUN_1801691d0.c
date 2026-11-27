// 0x1801691d0  FUN_1801691d0
// size=129 thunk=false
// signature: undefined FUN_1801691d0()
// status: ok


ulonglong FUN_1801691d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (((*(char *)(param_1 + 0x1d) == '\0') && (DAT_1803fcb80 == '\0')) &&
     (DAT_1803fcb60 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_1803fcb60 + 0x420))();
    if (cVar1 != '\0') {
      plVar3 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))();
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
        if ((iVar2 - 1U < 0x80) && (DAT_1803fe3b8 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180169246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*DAT_1803fe3b8)(iVar2);
          return uVar4;
        }
      }
    }
  }
  return (ulonglong)DAT_180380bb0;
}


