// 0x18022dc30  FUN_18022dc30
// size=381 thunk=false
// signature: undefined FUN_18022dc30()
// status: ok


longlong * FUN_18022dc30(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Memory;
  longlong *plVar5;
  
  plVar3 = DAT_1805b8898;
  if ((param_2 == (longlong *)*DAT_1805b8898) && (*(char *)((longlong)param_3 + 0x19) != '\0')) {
    plVar5 = (longlong *)DAT_1805b8898[1];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    while (cVar1 == '\0') {
      FUN_180227c20(&DAT_1805b8898,&DAT_1805b8898,plVar5[2]);
      plVar2 = (longlong *)*plVar5;
      FUN_18020e450(plVar5 + 4);
      free(plVar5);
      plVar5 = plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    plVar3[1] = (longlong)plVar3;
    *plVar3 = (longlong)plVar3;
    plVar3[2] = (longlong)plVar3;
    DAT_1805b88a0 = 0;
    return param_3;
  }
  while (param_2 != param_3) {
    plVar3 = (longlong *)param_2[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar5 = plVar3;
      plVar2 = (longlong *)*plVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar5 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
      plVar3 = (longlong *)*plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
      while (cVar1 == '\0') {
        plVar3 = (longlong *)*plVar3;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(param_2[1] + 0x19);
      plVar2 = (longlong *)param_2[1];
      plVar3 = param_2;
      while ((plVar5 = plVar2, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar2 = (longlong *)plVar5[1];
        plVar3 = plVar5;
      }
      cVar1 = *(char *)(param_2[1] + 0x19);
      plVar2 = (longlong *)param_2[1];
      plVar3 = param_2;
      while ((plVar4 = plVar2, cVar1 == '\0' && (plVar3 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar2 = (longlong *)plVar4[1];
        plVar3 = plVar4;
      }
    }
    _Memory = (void *)FUN_18022e0e0(&DAT_1805b8898,param_2);
    FUN_18020e450((longlong)_Memory + 0x20);
    free(_Memory);
    param_2 = plVar5;
  }
  return param_3;
}


