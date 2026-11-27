// 0x180061540  FUN_180061540
// size=331 thunk=false
// signature: undefined FUN_180061540()
// status: ok


undefined8 FUN_180061540(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar3 = (uint)dVar7;
  if (((((int)uVar3 < 1) ||
       (lVar5 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar5] != '\0')) {
    lVar2 = *plVar1;
  }
  else {
    lVar2 = *plVar1;
    if (&DAT_1805b8908 + lVar5 != (undefined *)0x0) {
      dVar7 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
      iVar4 = 0;
      if (-1 < (int)dVar7) {
        iVar4 = (int)dVar7;
      }
      iVar6 = 0x10000;
      if ((iVar4 < 0x10001) && (iVar6 = iVar4, iVar4 < 1)) {
        (**(code **)(*plVar1 + 0xe8))(plVar1,&DAT_18033e5ea,0);
        return 1;
      }
      lVar2 = FUN_18005e2e0(iVar6);
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0xe0))(plVar1);
        return 1;
      }
      FUN_18001ad50(&DAT_1805b8908 + lVar5,lVar2,iVar6 * 8);
      (**(code **)(*plVar1 + 0xe8))(plVar1,lVar2,iVar6);
      return 1;
    }
  }
  (**(code **)(lVar2 + 0xe0))(plVar1);
  return 1;
}


