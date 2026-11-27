// 0x180227c20  FUN_180227c20
// size=94 thunk=false
// signature: undefined FUN_180227c20()
// status: ok


void FUN_180227c20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180227c20(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18020e450(param_3 + 4);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


