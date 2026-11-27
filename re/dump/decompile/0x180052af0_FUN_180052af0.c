// 0x180052af0  FUN_180052af0
// size=95 thunk=false
// signature: undefined FUN_180052af0()
// status: ok


undefined8 FUN_180052af0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 != 0) {
      (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined8 *)(DAT_1803fa608 + 0x28));
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,0);
    return 1;
  }
  return 0;
}


