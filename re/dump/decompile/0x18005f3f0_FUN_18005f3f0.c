// 0x18005f3f0  FUN_18005f3f0
// size=101 thunk=false
// signature: undefined FUN_18005f3f0()
// status: ok


undefined8 FUN_18005f3f0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    lVar1 = *plVar3;
    dVar4 = (double)(**(code **)(lVar1 + 0x160))(plVar3,1);
    uVar2 = FUN_18005e190((int)dVar4,1);
    (**(code **)(lVar1 + 0xf8))(plVar3,uVar2);
    return 1;
  }
  return 0;
}


