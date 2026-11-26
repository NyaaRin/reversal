// 0x18012a210  FUN_18012a210
// size=205 thunk=false
// signature: undefined FUN_18012a210()
// status: ok


void FUN_18012a210(char param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  plVar2 = DAT_1803e9f50;
  if (DAT_1803fa640 != 0) {
    plVar3 = DAT_1803e9f48;
    uVar5 = DAT_180380bb0;
    if (param_1 != '\0') {
      uVar5 = DAT_1803e7cec;
    }
    while (plVar1 = DAT_1803eb480, plVar4 = DAT_1803eb478, plVar3 != plVar2) {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = plVar3 + 1;
      }
      else {
        (**(code **)(*plVar1 + 0xe8))(plVar1,0x40,param_1);
        (**(code **)(*plVar1 + 0x80))(plVar1);
        plVar3 = plVar3 + 1;
      }
    }
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2,uVar5,uVar5,uVar5,plVar3,plVar4);
      }
    }
  }
  return;
}


