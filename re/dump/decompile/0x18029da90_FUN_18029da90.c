// 0x18029da90  FUN_18029da90
// size=148 thunk=false
// signature: undefined FUN_18029da90()
// status: ok


undefined8 FUN_18029da90(longlong param_1,undefined2 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x38) != 0) {
    param_2 = FUN_180269200((int *)(param_1 + 0x38),param_2,param_2);
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar5 + *(int *)(param_1 + 0x20);
  while( true ) {
    if (plVar5 == plVar1) {
      return 0;
    }
    lVar4 = *(longlong *)(*plVar5 + 0x88);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(lVar2 + 0x2b8);
    }
    if ((*(code **)(lVar4 + 0x28) != (code *)0x0) &&
       (cVar3 = (**(code **)(lVar4 + 0x28))(lVar2,*plVar5,param_2), cVar3 != '\0')) break;
    plVar5 = plVar5 + 1;
  }
  return 1;
}


