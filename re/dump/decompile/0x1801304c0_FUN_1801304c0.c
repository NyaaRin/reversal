// 0x1801304c0  FUN_1801304c0
// size=110 thunk=false
// signature: undefined FUN_1801304c0()
// status: ok


void FUN_1801304c0(char param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  plVar2 = DAT_1803ea290;
  plVar1 = DAT_1803ea298;
  if ((param_1 != '\0') && (DAT_1803ea290 != DAT_1803ea298)) {
    uVar3 = FUN_180129c50();
    FUN_180130390(uVar3,uVar3,uVar3,1);
    plVar2 = DAT_1803ea290;
    plVar1 = DAT_1803ea298;
  }
  for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x68))();
    }
  }
  return;
}


