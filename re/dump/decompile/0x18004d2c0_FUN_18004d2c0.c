// 0x18004d2c0  FUN_18004d2c0
// size=115 thunk=false
// signature: undefined FUN_18004d2c0()
// status: ok


undefined8 FUN_18004d2c0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,1);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 200))(plVar3,1);
    }
    FUN_180279170(uVar2);
    FUN_180049be0(0xb);
  }
  return 0;
}


