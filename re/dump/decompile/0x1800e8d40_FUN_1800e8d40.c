// 0x1800e8d40  FUN_1800e8d40
// size=128 thunk=false
// signature: undefined FUN_1800e8d40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e8d40(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    DAT_18040a4c0 = (int)dVar2;
    if (0x7f < DAT_18040a4c0 - 1U) {
      _DAT_1803e908c = 0xffffffff;
      DAT_18040a4c0 = 0;
      return 0;
    }
    if (DAT_1803fa608 != 0) {
      _DAT_1803e908c = *(undefined4 *)(DAT_1803fa608 + 4);
      return 0;
    }
    _DAT_1803e908c = 0;
  }
  return 0;
}


