// 0x1800413c0  FUN_1800413c0
// size=81 thunk=false
// signature: undefined FUN_1800413c0()
// status: ok


undefined8 FUN_1800413c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    FUN_18003b280();
    (**(code **)(*plVar1 + 0xf8))(plVar1,1);
    return 1;
  }
  return 0;
}


