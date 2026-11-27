// 0x18023c230  FUN_18023c230
// size=101 thunk=false
// signature: undefined FUN_18023c230()
// status: ok


void FUN_18023c230(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *_Memory;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    cVar1 = *(char *)(param_1[2] + 0x19);
    _Memory = (longlong *)param_1[2];
    while (cVar1 == '\0') {
      FUN_180214c40(lVar2,lVar3,_Memory[2]);
      plVar4 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar4;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
  }
  return;
}


