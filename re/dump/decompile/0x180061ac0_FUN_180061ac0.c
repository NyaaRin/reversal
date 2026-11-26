// 0x180061ac0  FUN_180061ac0
// size=194 thunk=false
// signature: undefined FUN_180061ac0()
// status: ok


undefined8 FUN_180061ac0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar3 = (uint)dVar1;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar2;
    }
    else {
      lVar5 = *plVar2;
      if (lVar4 != -0x1805b8908) {
        fVar6 = (float)FUN_18001b1a0();
        (**(code **)(lVar5 + 0xf0))(plVar2,(double)fVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


