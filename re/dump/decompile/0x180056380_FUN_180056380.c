// 0x180056380  FUN_180056380
// size=93 thunk=false
// signature: undefined FUN_180056380()
// status: ok


undefined8 FUN_180056380(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x28));
    return 1;
  }
  return 0;
}


