// 0x1800e4a00  FUN_1800e4a00
// size=164 thunk=false
// signature: undefined FUN_1800e4a00()
// status: ok


undefined8 FUN_1800e4a00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
  }
  lVar3 = FUN_1800e3700(uVar2);
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0xe0))();
    return 1;
  }
  (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);
  return 1;
}


