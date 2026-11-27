// 0x180061690  FUN_180061690
// size=351 thunk=false
// signature: undefined FUN_180061690()
// status: ok


undefined8 FUN_180061690(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar7;
  if (((((int)uVar4 < 1) ||
       (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] != '\0')) {
    lVar3 = *plVar2;
  }
  else {
    lVar3 = *plVar2;
    if (&DAT_1805b8908 + lVar5 != (undefined *)0x0) {
      dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
      iVar1 = 0;
      if (-1 < (int)dVar7) {
        iVar1 = (int)dVar7;
      }
      iVar6 = 0x80000;
      if ((iVar1 < 0x80001) && (iVar6 = iVar1, iVar1 < 1)) {
        (**(code **)(*plVar2 + 0xe8))(plVar2,&DAT_18033e5ea,0);
        return 1;
      }
      iVar1 = (int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3;
      lVar3 = FUN_18005e2e0(iVar1);
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2);
        return 1;
      }
      FUN_18001ad50(&DAT_1805b8908 + lVar5,lVar3,iVar6);
      (**(code **)(*plVar2 + 0xe8))(plVar2,lVar3,iVar1);
      return 1;
    }
  }
  (**(code **)(lVar3 + 0xe0))(plVar2);
  return 1;
}


