// 0x180241930  FUN_180241930
// size=245 thunk=false
// signature: undefined FUN_180241930()
// status: ok


longlong * FUN_180241930(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = param_1;
  plVar5 = param_1;
  plVar6 = param_1;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *param_1 = lVar2;
  uVar3 = FUN_180241d20(param_1,*(undefined8 *)(*param_2 + 8),*param_1,param_4,plVar4,plVar5,plVar6)
  ;
  *(undefined8 *)(*param_1 + 8) = uVar3;
  param_1[1] = param_2[1];
  plVar4 = (longlong *)*param_1;
  plVar5 = (longlong *)plVar4[1];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar6 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar5 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar4 = (longlong)plVar5;
    lVar2 = *(longlong *)(*param_1 + 8);
    cVar1 = *(char *)(*(longlong *)(lVar2 + 0x10) + 0x19);
    while (cVar1 == '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      cVar1 = *(char *)(*(longlong *)(lVar2 + 0x10) + 0x19);
    }
    *(longlong *)(*param_1 + 0x10) = lVar2;
  }
  else {
    *plVar4 = (longlong)plVar4;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}


