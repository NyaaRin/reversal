// 0x180054df0  FUN_180054df0
// size=123 thunk=false
// signature: undefined FUN_180054df0()
// status: ok


undefined8 FUN_180054df0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 != '\0') {
      lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      if ((lVar3 != 0) && (DAT_1803fa668 != (longlong *)0x0)) {
        (**(code **)(*DAT_1803fa668 + 0x350))(DAT_1803fa668,lVar3);
      }
    }
  }
  return 0;
}


