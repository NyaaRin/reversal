// 0x18005f4f0  FUN_18005f4f0
// size=223 thunk=false
// signature: undefined FUN_18005f4f0()
// status: ok


undefined8 FUN_18005f4f0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if ((int)uVar2 < 1) {
      (**(code **)(*plVar1 + 0xf8))(plVar1,0);
      return 1;
    }
    lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68;
    if (((&DAT_1805b88e0)[lVar3] == '\0') || (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) {
      pcVar4 = *(code **)(*plVar1 + 0xf8);
    }
    else {
      pcVar4 = *(code **)(*plVar1 + 0xf8);
      if ((&DAT_1805b88e1)[lVar3] == '\0') {
        (*pcVar4)(plVar1,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
        return 1;
      }
    }
    (*pcVar4)(plVar1,0);
    return 1;
  }
  return 0;
}


