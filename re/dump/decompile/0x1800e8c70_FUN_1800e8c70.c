// 0x1800e8c70  FUN_1800e8c70
// size=198 thunk=false
// signature: undefined FUN_1800e8c70()
// status: ok


undefined8 FUN_1800e8c70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  iVar1 = 0;
  if (DAT_1803fa608 != 0) {
    iVar1 = *(int *)(DAT_1803fa608 + 4);
  }
  if ((-1 < DAT_1803e9078) && (iVar1 - DAT_1803e9078 < 2)) {
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd0);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd4);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd8);
    return 3;
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


