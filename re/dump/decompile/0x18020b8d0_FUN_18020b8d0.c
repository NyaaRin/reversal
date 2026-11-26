// 0x18020b8d0  FUN_18020b8d0
// size=92 thunk=false
// signature: undefined FUN_18020b8d0()
// status: ok


void FUN_18020b8d0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180226320(param_1,param_1,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}


