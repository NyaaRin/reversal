// 0x180052cf0  FUN_180052cf0
// size=607 thunk=false
// signature: undefined FUN_180052cf0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180052cf0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  if (DAT_1803eb490 == '\0') {
    lVar4 = *plVar3;
  }
  else {
    DAT_1803eb4d0 = FUN_180052510(plVar3);
    DAT_1803eb4d4 = FUN_180052510(plVar3);
    DAT_1803eb4d8 = FUN_180052510(plVar3);
    uVar5 = FUN_180052510(plVar3);
    uVar6 = FUN_180052510(plVar3);
    uVar7 = FUN_180052510(plVar3);
    if ((((uVar7 & 0x7f800000) != 0x7f800000) && ((uVar6 & 0x7f800000) != 0x7f800000)) &&
       ((uVar5 & 0x7f800000) != 0x7f800000)) {
      DAT_1803eb4b0 = uVar7;
      DAT_1803eb4b4 = uVar6;
      DAT_1803eb4b8 = uVar5;
      _DAT_1803eb4bc = uVar7;
      _DAT_1803eb4c0 = uVar6;
      _DAT_1803eb4c4 = uVar5;
    }
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,5);
    if (cVar2 != '\0') {
      (**(code **)(*plVar3 + 0x20))(plVar3,1,"buttons");
      cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,0xffffffff,3);
      if (cVar2 != '\0') {
        dVar1 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,0xffffffff);
        _DAT_1803eb4c8 = (int)dVar1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
    cVar2 = FUN_180052340();
    lVar4 = *plVar3;
    if (cVar2 != '\0') {
      (**(code **)(lVar4 + 0xf0))(plVar3,(double)DAT_1803eb53c);
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb540);
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)DAT_1803eb544);
      return 3;
    }
  }
  (**(code **)(lVar4 + 0xe0))();
  return 1;
}


