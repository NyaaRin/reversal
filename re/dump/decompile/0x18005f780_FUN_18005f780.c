// 0x18005f780  FUN_18005f780
// size=192 thunk=false
// signature: undefined FUN_18005f780()
// status: ok


undefined8 FUN_18005f780(longlong param_1)

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
  if (0 < (int)uVar2) {
    lVar4 = (ulonglong)(uVar2 & 0x3f) * 0x68;
    if (((&DAT_1805b88e0)[lVar4] != '\0') && (*(uint *)(&DAT_1805b88e4 + lVar4) == uVar2 >> 6)) {
      lVar3 = 0x5c;
      if ((&DAT_1805b88e1)[lVar4] == '\0') {
        lVar3 = 0x3c;
      }
      (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b88e0 + lVar4)[lVar3]);
      return 1;
    }
  }
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  return 1;
}


