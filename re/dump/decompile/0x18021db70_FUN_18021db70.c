// 0x18021db70  FUN_18021db70
// size=113 thunk=false
// signature: undefined FUN_18021db70()
// status: ok


longlong * FUN_18021db70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *_Memory;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_2[2];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar2 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar3 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar2 = (longlong *)param_2[1];
    while ((plVar3 = plVar2, cVar1 == '\0' && (param_2 == (longlong *)plVar3[2]))) {
      cVar1 = *(char *)(plVar3[1] + 0x19);
      plVar2 = (longlong *)plVar3[1];
      param_2 = plVar3;
    }
  }
  _Memory = (void *)FUN_18022e0e0(&DAT_1803fa7f0);
  free(_Memory);
  return plVar3;
}


