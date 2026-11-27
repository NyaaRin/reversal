// 0x180241ba0  FUN_180241ba0
// size=167 thunk=false
// signature: undefined FUN_180241ba0()
// status: ok


void FUN_180241ba0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_180241ba0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    if ((*(uint *)(param_3 + 0xe) & 3) == 1) {
      plVar3 = (longlong *)param_3[0xc];
LAB_180241c13:
      (**(code **)param_3[0xd])(plVar3);
    }
    else if ((*(uint *)(param_3 + 0xe) & 3) == 2) {
      plVar3 = param_3 + 7;
      goto LAB_180241c13;
    }
    param_3[0xe] = 0;
    FUN_180241430(param_3 + 5);
    free(param_3);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}


