// 0x180039a50  FUN_180039a50
// size=290 thunk=false
// signature: undefined FUN_180039a50()
// status: ok


void FUN_180039a50(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = (longlong *)*DAT_1805c7c10;
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar3 = DAT_1805c7c10;
  while (DAT_1805c7c10 = plVar3, cVar1 == '\0') {
    lVar2 = plVar7[9];
    for (lVar8 = plVar7[8]; lVar8 != lVar2; lVar8 = lVar8 + 0x30) {
      FUN_18002d8c0(param_1,*(undefined4 *)(lVar8 + 0x20));
    }
    plVar3 = (longlong *)plVar7[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar7 = plVar3;
      plVar3 = (longlong *)*plVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar7 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
    }
    else {
      cVar1 = *(char *)(plVar7[1] + 0x19);
      plVar4 = (longlong *)plVar7[1];
      plVar3 = plVar7;
      while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar4 = (longlong *)plVar7[1];
        plVar3 = plVar7;
      }
    }
    plVar3 = DAT_1805c7c10;
    cVar1 = *(char *)((longlong)plVar7 + 0x19);
  }
  FUN_180218640(&DAT_1805c7c10,&DAT_1805c7c10,plVar3[1]);
  plVar3[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
  plVar3[2] = (longlong)plVar3;
  DAT_1805c7c18 = 0;
  FUN_1800397e0();
  DAT_1803ff988 = 0;
  uVar6 = 0;
  do {
    if (0x1ff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d8348();
    }
    uVar5 = (int)uVar6 + 1;
    (&DAT_1803ff990)[uVar6] = 0;
    uVar6 = (ulonglong)uVar5;
  } while ((int)uVar5 < 0x200);
  return;
}


