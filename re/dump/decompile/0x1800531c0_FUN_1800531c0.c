// 0x1800531c0  FUN_1800531c0
// size=250 thunk=false
// signature: undefined FUN_1800531c0()
// status: ok


undefined8 FUN_1800531c0(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803eb490 != '\0')) {
    dVar3 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
    dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
    dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
    if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
        (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) &&
       (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000)) {
      DAT_1803eb4e4 = (float)dVar1;
      DAT_1803eb4e8 = (float)dVar2;
      DAT_1803eb4ec = (float)dVar3;
    }
    return 0;
  }
  return 0;
}


