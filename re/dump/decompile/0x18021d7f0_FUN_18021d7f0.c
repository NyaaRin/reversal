// 0x18021d7f0  FUN_18021d7f0
// size=439 thunk=false
// signature: undefined FUN_18021d7f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18021d7f0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  void *_Memory;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  puVar6 = DAT_1803fac68;
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)*param_2;
  lVar9 = 0;
  plVar3 = (longlong *)param_2[1];
  plVar4 = plVar2;
  while (plVar4 != plVar3) {
    plVar8 = (longlong *)plVar4[2];
    lVar9 = lVar9 + 1;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar4 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar7 = (longlong *)plVar4[1];
      plVar8 = plVar4;
      while ((plVar4 = plVar7, cVar1 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar7 = (longlong *)plVar4[1];
        plVar8 = plVar4;
      }
    }
  }
  if ((plVar2 == (longlong *)*DAT_1803fac68) && (*(char *)((longlong)plVar3 + 0x19) != '\0')) {
    cVar1 = *(char *)((longlong)DAT_1803fac68[1] + 0x19);
    plVar2 = (longlong *)DAT_1803fac68[1];
    while (cVar1 == '\0') {
      FUN_180214c40(&DAT_1803fac68,&DAT_1803fac68,plVar2[2]);
      plVar3 = (longlong *)*plVar2;
      free(plVar2);
      plVar2 = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    puVar6[1] = puVar6;
    *puVar6 = puVar6;
    puVar6[2] = puVar6;
    DAT_1803fac70 = 0;
  }
  else {
    while (plVar2 != plVar3) {
      plVar4 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar7 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        while (cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar7 = (longlong *)plVar2[1];
        plVar4 = plVar2;
        while ((plVar8 = plVar7, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar7 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar7 = (longlong *)plVar2[1];
        plVar4 = plVar2;
        while ((plVar5 = plVar7, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar7 = (longlong *)plVar5[1];
          plVar4 = plVar5;
        }
      }
      _Memory = (void *)FUN_18022e0e0(&DAT_1803fac68,plVar2);
      free(_Memory);
      plVar2 = plVar8;
    }
  }
  return lVar9;
}


