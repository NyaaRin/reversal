// 0x1800fee30  FUN_1800fee30
// size=175 thunk=false
// signature: undefined FUN_1800fee30()
// status: ok


undefined8 FUN_1800fee30(undefined8 *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(byte **)param_3;
  }
  uVar5 = 0x14650fb0739d0383;
  for (; (param_3 != (byte *)0x0 && (*param_3 != 0)); param_3 = param_3 + 1) {
    uVar5 = (uVar5 ^ *param_3) * 0x100000001b3;
  }
  plVar2 = *(longlong **)*param_1;
  plVar4 = (longlong *)plVar2[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar3 = plVar2;
  while (cVar1 == '\0') {
    plVar6 = plVar4;
    if ((ulonglong)plVar4[4] < uVar5) {
      plVar4 = plVar4 + 2;
      plVar6 = plVar3;
    }
    plVar4 = (longlong *)*plVar4;
    plVar3 = plVar6;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar3 + 0x19) == '\0') && ((ulonglong)plVar3[4] <= uVar5)) &&
     (plVar3 != plVar2)) {
    param_4 = plVar3 + 5;
  }
  FUN_18016d4c0(param_2,param_4,plVar2,param_4,0,param_2);
  return param_2;
}


