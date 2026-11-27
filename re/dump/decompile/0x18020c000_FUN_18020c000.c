// 0x18020c000  FUN_18020c000
// size=145 thunk=false
// signature: undefined FUN_18020c000()
// status: ok


undefined8 * FUN_18020c000(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  
  plVar3 = DAT_1803fa8b0;
  plVar1 = (longlong *)DAT_1803fa8b0[1];
  cVar4 = *(char *)((longlong)plVar1 + 0x19);
  plVar2 = DAT_1803fa8b0;
  while (cVar4 == '\0') {
    cVar4 = FUN_180201cf0(plVar1 + 4,param_3);
    plVar5 = plVar1 + 2;
    if (-1 < cVar4) {
      plVar5 = plVar1;
      plVar2 = plVar1;
    }
    plVar1 = (longlong *)*plVar5;
    cVar4 = *(char *)((longlong)plVar1 + 0x19);
  }
  if ((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
     (cVar4 = FUN_180201cf0(param_3,plVar2 + 4), -1 < cVar4)) {
    *param_2 = plVar2;
    return param_2;
  }
  *param_2 = plVar3;
  return param_2;
}


