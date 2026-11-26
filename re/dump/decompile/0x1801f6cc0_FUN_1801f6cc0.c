// 0x1801f6cc0  FUN_1801f6cc0
// size=186 thunk=false
// signature: undefined FUN_1801f6cc0()
// status: ok


void FUN_1801f6cc0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar2 = DAT_1803fcc70;
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803fa3e0 == (code *)0x0) {
      return;
    }
  }
  else {
    lVar4 = 0;
    do {
      lVar5 = lVar4 + 1;
      if (*(char *)(param_1 + lVar4) != "Impact"[lVar4]) goto LAB_1801f6d51;
      lVar4 = lVar5;
      puVar1 = DAT_1803fcc68;
    } while (lVar5 != 7);
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,param_1,param_2);
    }
LAB_1801f6d51:
    cVar3 = FUN_180057740(param_1,param_2);
    if (cVar3 != '\0') {
      return;
    }
  }
  (*DAT_1803fa3e0)(param_1,param_2);
  return;
}


