// 0x1800e5890  FUN_1800e5890
// size=213 thunk=false
// signature: undefined FUN_1800e5890()
// status: ok


undefined8 FUN_1800e5890(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar5 = *plVar3;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
      lVar5 = *plVar3;
      if (plVar4 != (longlong *)0x0) {
        pcVar1 = *(code **)(lVar5 + 0xf8);
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        if (plVar4 == (longlong *)0x0) {
          (*pcVar1)(plVar3,1);
          return 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
        (*pcVar1)(plVar3,uVar2);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


