// 0x18004d420  FUN_18004d420
// size=137 thunk=false
// signature: undefined FUN_18004d420()
// status: ok


undefined8 FUN_18004d420(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    if (cVar1 == '\0') {
      puVar4 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      puVar4 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = puVar3;
      }
    }
    FUN_1802aac00(&DAT_1803431ac,puVar4);
  }
  return 0;
}


