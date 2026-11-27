// 0x180219580  FUN_180219580
// size=126 thunk=false
// signature: undefined FUN_180219580()
// status: ok


void FUN_180219580(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180219580(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    _eh_vector_destructor_iterator_(param_3 + 5,0x48,4,FUN_180021090);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


