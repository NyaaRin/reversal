// 0x1800e60b0  FUN_1800e60b0
// size=225 thunk=false
// signature: undefined FUN_1800e60b0()
// status: ok


undefined8 FUN_1800e60b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if ((lVar3 != 0) && (0 < iVar1)) {
      (**(code **)(*plVar2 + 0xf8))(plVar2,*(undefined1 *)(iVar1 + lVar3));
      return 1;
    }
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


