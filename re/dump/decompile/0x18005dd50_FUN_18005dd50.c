// 0x18005dd50  FUN_18005dd50
// size=100 thunk=false
// signature: undefined FUN_18005dd50()
// status: ok


undefined8 FUN_18005dd50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa620 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa620 + 0x20b90));
    return 1;
  }
  return 0;
}


