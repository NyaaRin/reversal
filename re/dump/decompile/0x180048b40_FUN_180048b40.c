// 0x180048b40  FUN_180048b40
// size=114 thunk=false
// signature: undefined FUN_180048b40()
// status: ok


undefined8 FUN_180048b40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      DAT_1803ff908 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      DAT_1803ff908 = FUN_1800474f0(uVar3);
    }
  }
  return 0;
}


