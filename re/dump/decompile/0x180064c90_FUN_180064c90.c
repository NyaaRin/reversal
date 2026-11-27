// 0x180064c90  FUN_180064c90
// size=203 thunk=false
// signature: undefined FUN_180064c90()
// status: ok


undefined8 FUN_180064c90(longlong param_1)

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
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] == '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8928) {
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)(*(int *)(&DAT_1805b8938 + lVar3) + 7 >> 3));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


