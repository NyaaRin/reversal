// 0x1800606c0  FUN_1800606c0
// size=250 thunk=false
// signature: undefined FUN_1800606c0()
// status: ok


undefined8 FUN_1800606c0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar6;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar1;
    }
    else {
      lVar5 = *plVar1;
      if (lVar4 != -0x1805b8908) {
        uVar2 = FUN_18001b100();
        if (-1 < (longlong)uVar2) {
          (**(code **)(lVar5 + 0xf0))(plVar1,(double)(longlong)uVar2);
          return 1;
        }
        (**(code **)(lVar5 + 0xf0))(plVar1,(double)uVar2);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


