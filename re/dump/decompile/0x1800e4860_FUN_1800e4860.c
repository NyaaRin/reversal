// 0x1800e4860  FUN_1800e4860
// size=127 thunk=false
// signature: undefined FUN_1800e4860()
// status: ok


undefined8 FUN_1800e4860(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    lVar1 = *plVar3;
    if (DAT_1803fa360 == (longlong *)0x0) {
      (**(code **)(lVar1 + 0xf0))(plVar3);
      return 1;
    }
    iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))();
    (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
    return 1;
  }
  return 0;
}


