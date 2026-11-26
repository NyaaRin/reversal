// 0x18020bf70  FUN_18020bf70
// size=134 thunk=false
// signature: undefined FUN_18020bf70()
// status: ok


undefined1 FUN_18020bf70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)DAT_1803fa8b0[1];
  cVar3 = *(char *)((longlong)plVar1 + 0x19);
  plVar2 = DAT_1803fa8b0;
  while (cVar3 == '\0') {
    cVar3 = FUN_180201cf0(plVar1 + 4,param_2);
    plVar4 = plVar1 + 2;
    if (-1 < cVar3) {
      plVar4 = plVar1;
      plVar2 = plVar1;
    }
    plVar1 = (longlong *)*plVar4;
    cVar3 = *(char *)((longlong)plVar1 + 0x19);
  }
  if ((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
     (cVar3 = FUN_180201cf0(param_2,plVar2 + 4), -1 < cVar3)) {
    return 1;
  }
  return 0;
}


