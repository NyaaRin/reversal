// 0x18020a670  FUN_18020a670
// size=165 thunk=false
// signature: undefined FUN_18020a670()
// status: ok


void FUN_18020a670(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  lVar2 = *param_1;
  cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
  _Memory = *(longlong **)(lVar2 + 8);
  while (cVar1 == '\0') {
    FUN_1802167d0(param_1,param_1,_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    FUN_18020e450(_Memory + 0xc);
    FUN_18020e450(_Memory + 8);
    free(_Memory);
    _Memory = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[1] = 0;
  return;
}


