// 0x180209a80  FUN_180209a80
// size=118 thunk=false
// signature: undefined FUN_180209a80()
// status: ok


void FUN_180209a80(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180222550(param_1,param_1,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    FUN_18020e450(_Memory + 5);
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}


