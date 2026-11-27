// 0x180189e90  FUN_180189e90
// size=133 thunk=false
// signature: undefined FUN_180189e90()
// status: ok


longlong * FUN_180189e90(undefined8 *param_1,byte *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar4 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar4 = (uVar4 ^ *param_2) * 0x100000001b3;
  }
  plVar2 = *(longlong **)*param_1;
  plVar3 = (longlong *)plVar2[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar6 = plVar2;
  while (cVar1 == '\0') {
    plVar5 = plVar3;
    if ((ulonglong)plVar3[4] < uVar4) {
      plVar3 = plVar3 + 2;
      plVar5 = plVar6;
    }
    plVar3 = (longlong *)*plVar3;
    plVar6 = plVar5;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar4 < (ulonglong)plVar6[4])) {
    plVar6 = plVar2;
  }
  plVar3 = plVar6 + 5;
  if (plVar6 == plVar2) {
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}


