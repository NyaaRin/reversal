// 0x1800e7240  FUN_1800e7240
// size=120 thunk=false
// signature: undefined FUN_1800e7240()
// status: ok


undefined8 FUN_1800e7240(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
      *(undefined1 *)(lVar1 + 0x3e) = uVar3;
      return 0;
    }
    *(undefined1 *)(lVar1 + 0x3e) = 1;
  }
  return 0;
}


