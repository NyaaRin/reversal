// 0x18004d0f0  FUN_18004d0f0
// size=263 thunk=false
// signature: undefined FUN_18004d0f0()
// status: ok


undefined8 FUN_18004d0f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
      if (cVar1 != '\0') {
        dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
        FUN_18027ae00((int)dVar5);
        DAT_1803ff7b4 = DAT_1803ff7b4 + 1;
        return 0;
      }
      FUN_18027ae00(0);
      DAT_1803ff7b4 = DAT_1803ff7b4 + 1;
      return 0;
    }
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
    FUN_18027abf0(puVar4);
    DAT_1803ff7b4 = DAT_1803ff7b4 + 1;
  }
  return 0;
}


