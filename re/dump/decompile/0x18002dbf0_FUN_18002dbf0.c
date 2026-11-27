// 0x18002dbf0  FUN_18002dbf0
// size=61 thunk=false
// signature: undefined FUN_18002dbf0()
// status: ok


undefined8 FUN_18002dbf0(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_1803faef0 != (code *)0x0) && (DAT_1803fb088 != (code *)0x0)) {
    iVar1 = (*DAT_1803fb088)();
    (*DAT_1803faef0)(param_1,iVar1 + -1);
    return 1;
  }
  return 0;
}


