// 0x1800e6420  FUN_1800e6420
// size=225 thunk=false
// signature: undefined FUN_1800e6420()
// status: ok


undefined8 FUN_1800e6420(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
    }
    dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1800e35f0(uVar4,(float)dVar5,(float)dVar6);
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


