// 0x180056b90  FUN_180056b90
// size=407 thunk=false
// signature: undefined FUN_180056b90()
// status: ok


undefined8 FUN_180056b90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar1 == '\0') {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);
    if (cVar1 == '\0') {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*plVar4 + 0xb8))(plVar4,2,0);
    }
    if ((lVar5 == 0) || (lVar6 == 0)) {
      lVar5 = *plVar4;
    }
    else {
      lVar6 = FUN_180016fb0(lVar5);
      lVar5 = *plVar4;
      if (lVar6 != 0) {
        cVar1 = (**(code **)(lVar5 + 0x138))(plVar4,3,1);
        if (((cVar1 == '\0') || (cVar1 = (**(code **)(*plVar4 + 200))(plVar4,3), cVar1 != '\0')) &&
           (cVar1 = FUN_1800170f0(lVar6), cVar1 == '\0')) {
          uVar3 = FUN_1800170a0(lVar6);
          uVar7 = uVar3 & 0x406012;
          if (uVar7 != 0) {
            FUN_1800170c0(lVar6,~uVar7 & uVar3);
          }
        }
        else {
          uVar7 = 0;
        }
        uVar2 = FUN_1801fcdc0(lVar6);
        if (uVar7 != 0) {
          uVar3 = FUN_1800170a0(lVar6);
          FUN_1800170c0(lVar6,uVar3 | uVar7);
        }
        (**(code **)(*plVar4 + 0xf8))(plVar4,uVar2);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xf8))(plVar4,0);
    return 1;
  }
  return 0;
}


