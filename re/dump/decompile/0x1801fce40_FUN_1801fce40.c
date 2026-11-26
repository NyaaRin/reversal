// 0x1801fce40  FUN_1801fce40
// size=218 thunk=false
// signature: undefined FUN_1801fce40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1801fce40(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Memory;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  void *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar4 = (longlong *)param_3[2];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar2 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_3[1] + 0x19);
    plVar3 = (longlong *)param_3[1];
    plVar2 = param_3;
    while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar3 = (longlong *)plVar4[1];
      plVar2 = plVar4;
    }
  }
  _Memory = (void *)FUN_18022e0e0(&DAT_1805ba360,param_3);
  local_28 = (longlong)_Memory + 0x20;
  local_20 = (void *)((longlong)_Memory + 0x28);
  _eh_vector_destructor_iterator_(local_20,0x48,4,FUN_180021090);
  free(_Memory);
  *param_2 = (longlong)plVar4;
  return param_2;
}


