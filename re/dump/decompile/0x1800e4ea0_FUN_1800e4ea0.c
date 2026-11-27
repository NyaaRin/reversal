// 0x1800e4ea0  FUN_1800e4ea0
// size=77 thunk=false
// signature: undefined FUN_1800e4ea0()
// status: ok


undefined8 FUN_1800e4ea0(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((int)dVar2 - 1U < 0x80) {
      (&DAT_18040a4d0)[(int)dVar2] = 1;
    }
  }
  return 0;
}


