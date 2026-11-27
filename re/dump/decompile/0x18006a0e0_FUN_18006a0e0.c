// 0x18006a0e0  FUN_18006a0e0
// size=101 thunk=false
// signature: undefined FUN_18006a0e0()
// status: ok


undefined8 FUN_18006a0e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    lVar1 = *plVar2;
    uVar3 = (**(code **)(lVar1 + 0x158))(plVar2,1);
    lVar4 = FUN_180068950(uVar3);
    (**(code **)(lVar1 + 0xf8))(plVar2,lVar4 != 0);
    return 1;
  }
  return 0;
}


