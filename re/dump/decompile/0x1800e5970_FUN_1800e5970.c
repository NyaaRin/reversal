// 0x1800e5970  FUN_1800e5970
// size=166 thunk=false
// signature: undefined FUN_1800e5970()
// status: ok


undefined8 FUN_1800e5970(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar4 = *plVar2;
    }
    else {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      lVar4 = *plVar2;
      if (lVar3 != 0) {
        iVar1 = FUN_18001c680(lVar3);
        (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


