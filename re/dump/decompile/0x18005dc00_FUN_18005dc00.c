// 0x18005dc00  FUN_18005dc00
// size=100 thunk=false
// signature: undefined FUN_18005dc00()
// status: ok


undefined8 FUN_18005dc00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa620 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803fa620 + 0x20b84));
    return 1;
  }
  return 0;
}


