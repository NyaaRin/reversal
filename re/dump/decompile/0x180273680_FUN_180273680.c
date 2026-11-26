// 0x180273680  FUN_180273680
// size=59 thunk=false
// signature: undefined FUN_180273680()
// status: ok


longlong FUN_180273680(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  do {
    lVar2 = param_1;
    iVar1 = *(int *)(lVar2 + 0x1b0);
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return lVar2;
      }
      param_1 = *(longlong *)(*(longlong *)(lVar2 + 0x1b8) + (longlong)iVar1 * 8);
    } while ((*(char *)(param_1 + 0xcc) == '\0') || (*(char *)(param_1 + 0xd4) != '\0'));
  } while( true );
}


