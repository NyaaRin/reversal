// 0x180147750  FUN_180147750
// size=88 thunk=false
// signature: undefined FUN_180147750()
// status: ok


undefined8 FUN_180147750(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180147650();
  if (plVar1 == (longlong *)0x0) {
    if (DAT_1803f9204 == '\0') {
      DAT_1803f9204 = '\x01';
      FUN_180014410("[Toolbox] AnimState reset skipped: state unavailable (further skips silent)\n")
      ;
    }
    return 0;
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  FUN_180014410("[Toolbox] AnimState ClearAnimationState state=%p\n",plVar1);
  return 1;
}


