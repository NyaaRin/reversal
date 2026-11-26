// 0x18005be60  FUN_18005be60
// size=144 thunk=false
// signature: undefined FUN_18005be60()
// status: ok


undefined8 FUN_18005be60(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    lVar4 = *plVar2;
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa668 + 0x240))();
    lVar4 = *plVar2;
    if ((lVar3 != 0) && (DAT_1803ff940 != (code *)0x0)) {
      uVar1 = (*DAT_1803ff940)();
      (**(code **)(lVar4 + 0xf8))(plVar2,uVar1);
      return 1;
    }
  }
  (**(code **)(lVar4 + 0xe0))(plVar2);
  return 1;
}


