// 0x1800d52c0  FUN_1800d52c0
// size=64 thunk=false
// signature: undefined FUN_1800d52c0()
// status: ok


undefined1 FUN_1800d52c0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_180076750();
    if (plVar3 == (longlong *)0x0) {
      iVar2 = FUN_18001e5b0(param_1);
      uVar1 = iVar2 != 0;
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1);
    }
  }
  return uVar1;
}


