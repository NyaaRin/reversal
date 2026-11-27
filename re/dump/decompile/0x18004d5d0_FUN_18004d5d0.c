// 0x18004d5d0  FUN_18004d5d0
// size=225 thunk=false
// signature: undefined FUN_18004d5d0()
// status: ok


undefined8 FUN_18004d5d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_18033e5ea;
    }
    else {
      puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,2,0);
      puVar5 = &DAT_18033e5ea;
      if (puVar3 != (undefined1 *)0x0) {
        puVar5 = puVar3;
      }
    }
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,4);
    puVar3 = &DAT_18033e5ea;
    if (cVar1 != '\0') {
      puVar4 = (undefined1 *)(**(code **)(*plVar2 + 0xb8))(plVar2,1,0);
      if (puVar4 != (undefined1 *)0x0) {
        puVar3 = puVar4;
      }
    }
    FUN_1802aad20(puVar3,&DAT_1803431ac,puVar5);
  }
  return 0;
}


