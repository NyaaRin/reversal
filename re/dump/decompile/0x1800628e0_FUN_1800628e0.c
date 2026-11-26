// 0x1800628e0  FUN_1800628e0
// size=266 thunk=false
// signature: undefined FUN_1800628e0()
// status: ok


undefined8 FUN_1800628e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar3 = (uint)dVar7;
  if (((((int)uVar3 < 1) ||
       (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
    lVar2 = *plVar1;
  }
  else {
    lVar2 = *plVar1;
    if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
      dVar7 = (double)(**(code **)(lVar2 + 0x160))(plVar1,3);
      iVar5 = (int)dVar7;
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      else if (0x20 < iVar5) {
        iVar5 = 0x20;
      }
      dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);
      FUN_180019830(&DAT_1805b8928 + lVar4,(longlong)dVar7,iVar5);
      bVar6 = (&DAT_1805b893c)[lVar4] == '\0';
      lVar2 = *plVar1;
      goto LAB_1800629b8;
    }
  }
  bVar6 = false;
LAB_1800629b8:
  (**(code **)(lVar2 + 0xf8))(plVar1,bVar6);
  return 1;
}


