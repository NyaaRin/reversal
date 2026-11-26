// 0x180050f10  FUN_180050f10
// size=93 thunk=false
// signature: undefined FUN_180050f10()
// status: ok


undefined8 FUN_180050f10(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1802a5310();
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


