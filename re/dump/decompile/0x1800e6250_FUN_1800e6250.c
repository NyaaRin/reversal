// 0x1800e6250  FUN_1800e6250
// size=157 thunk=false
// signature: undefined FUN_1800e6250()
// status: ok


undefined8 FUN_1800e6250(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar5) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar3 != 0) {
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
        if (cVar1 != '\0') {
          dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
          piVar4 = (int *)FUN_18001dfb0(lVar3);
          *piVar4 = (int)dVar5;
        }
      }
    }
  }
  return 0;
}


