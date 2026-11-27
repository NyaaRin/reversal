// 0x180219500  FUN_180219500
// size=115 thunk=false
// signature: undefined FUN_180219500()
// status: ok


void FUN_180219500(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180222550(param_1,param_2,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    FUN_18020e450(_Memory + 5);
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}


