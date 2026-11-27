// 0x1800607c0  FUN_1800607c0
// size=211 thunk=false
// signature: undefined FUN_1800607c0()
// status: ok


undefined8 FUN_1800607c0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8908) {
        uVar2 = FUN_18001b100();
        (**(code **)(lVar4 + 0xf0))
                  (plVar1,(double)(longlong)((ulonglong)(uVar2 >> 1) ^ -(ulonglong)(uVar2 & 1)));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


