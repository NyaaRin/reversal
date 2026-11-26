// 0x18012a100  FUN_18012a100
// size=270 thunk=false
// signature: undefined FUN_18012a100()
// status: ok


void FUN_18012a100(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_1803fa640 + 0x350))();
    plVar2 = DAT_1803e9f50;
    plVar5 = DAT_1803e9f48;
    uVar7 = uVar4;
    while (plVar1 = DAT_1803eb480, uVar3 = DAT_180380bb0, plVar6 = DAT_1803eb478, plVar5 != plVar2)
    {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 == (longlong *)0x0) {
        plVar5 = plVar5 + 1;
      }
      else {
        (**(code **)(*plVar1 + 0xe8))(plVar1,0x40,0);
        (**(code **)(*plVar1 + 0x80))(plVar1);
        plVar5 = plVar5 + 1;
      }
    }
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2,uVar3,uVar3,uVar3,plVar5,plVar6,uVar7);
      }
    }
    (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar4);
  }
  if (DAT_1803eb478 != DAT_1803eb480) {
    DAT_1803eb480 = DAT_1803eb478;
  }
  if (DAT_1803e9f48 != DAT_1803e9f50) {
    DAT_1803e9f50 = DAT_1803e9f48;
  }
  return;
}


