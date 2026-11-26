// 0x180062060  FUN_180062060
// size=213 thunk=false
// signature: undefined FUN_180062060()
// status: ok


undefined8 FUN_180062060(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar2 = (uint)dVar5;
  if (((((int)uVar2 < 1) ||
       (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
    lVar4 = *plVar1;
  }
  else {
    lVar4 = *plVar1;
    if ((&DAT_1805b8908 + lVar3 != (undefined *)0x0) &&
       (0x1f < *(int *)(&DAT_1805b8914 + lVar3) - *(int *)(&DAT_1805b8918 + lVar3))) {
      uVar2 = FUN_18001af40(&DAT_1805b8908 + lVar3,0x20);
      (**(code **)(lVar4 + 0xf0))(plVar1,(double)uVar2);
      return 1;
    }
  }
  (**(code **)(lVar4 + 0xe0))(plVar1);
  return 1;
}


