// 0x18005f920  FUN_18005f920
// size=191 thunk=false
// signature: undefined FUN_18005f920()
// status: ok


undefined8 FUN_18005f920(longlong param_1)

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
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (lVar4 != -0x1805b8908) {
        (**(code **)(lVar2 + 0xf0))(plVar1,(double)*(int *)(&DAT_1805b8918 + lVar4));
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


