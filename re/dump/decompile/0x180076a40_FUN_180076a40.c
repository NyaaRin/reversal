// 0x180076a40  FUN_180076a40
// size=190 thunk=false
// signature: undefined FUN_180076a40()
// status: ok


undefined4 FUN_180076a40(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  plVar2 = DAT_1803fa8a0;
  puVar7 = &DAT_1803e9f78;
  if (DAT_1803eb468 != 0) {
    puVar7 = &DAT_1803eb458;
  }
  if (puVar7[2] == 0) {
    return 0;
  }
  cVar4 = *(char *)(DAT_1803fa8a0[1] + 0x19);
  plVar3 = (longlong *)DAT_1803fa8a0[1];
  plVar6 = DAT_1803fa8a0;
  while (plVar5 = plVar3, cVar4 == '\0') {
    cVar4 = FUN_180201cf0(plVar5 + 4,puVar7);
    plVar3 = plVar5 + 2;
    plVar1 = plVar5;
    if (cVar4 < '\0') {
      plVar5 = plVar6;
      plVar1 = plVar3;
    }
    plVar3 = (longlong *)*plVar1;
    plVar6 = plVar5;
    cVar4 = *(char *)(*plVar1 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') ||
     (cVar4 = FUN_180201cf0(puVar7,plVar6 + 4), cVar4 < '\0')) {
    plVar6 = plVar2;
  }
  if (plVar6 != plVar2) {
    return (int)plVar6[8];
  }
  return 0;
}


