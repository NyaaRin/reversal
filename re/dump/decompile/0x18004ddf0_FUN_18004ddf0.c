// 0x18004ddf0  FUN_18004ddf0
// size=254 thunk=false
// signature: undefined FUN_18004ddf0()
// status: ok


undefined8 FUN_18004ddf0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,2);
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      puVar6 = &DAT_18033e5ea;
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar6 = &DAT_18033e5ea;
      if (puVar5 != (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
    }
    uVar3 = FUN_1802adc80(puVar6,uVar3);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


