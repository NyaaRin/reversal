// 0x180062e20  FUN_180062e20
// size=221 thunk=false
// signature: undefined FUN_180062e20()
// status: ok


undefined8 FUN_180062e20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019b40(&DAT_1805b8928 + lVar4,(longlong)dVar5);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


