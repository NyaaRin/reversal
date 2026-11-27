// 0x1802095f0  FUN_1802095f0
// size=92 thunk=false
// signature: undefined FUN_1802095f0()
// status: ok


void FUN_1802095f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180214c40(param_1,param_1,_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}


