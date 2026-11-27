// 0x1800e6510  FUN_1800e6510
// size=184 thunk=false
// signature: undefined FUN_1800e6510()
// status: ok


undefined8 FUN_1800e6510(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0xf8);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    pcVar5 = *(code **)(*plVar2 + 0xf8);
    if (lVar3 != 0) {
      lVar4 = FUN_1800b5800();
      if (lVar4 != 0) {
        uVar1 = FUN_1800e36b0(lVar4,lVar3);
        goto LAB_1800e659e;
      }
    }
  }
  uVar1 = 0;
LAB_1800e659e:
  (*pcVar5)(plVar2,uVar1);
  return 1;
}


