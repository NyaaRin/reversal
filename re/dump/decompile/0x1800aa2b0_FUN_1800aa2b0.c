// 0x1800aa2b0  FUN_1800aa2b0
// size=54 thunk=false
// signature: undefined FUN_1800aa2b0()
// status: ok


undefined2 FUN_1800aa2b0(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if ((DAT_1803fa650 == (longlong *)0x0) || (*(short *)(param_1 + 0x48) < 0)) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*DAT_1803fa650 + 0x28))(DAT_1803fa650,(int)*(short *)(param_1 + 0x48));
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(undefined2 *)(lVar2 + 0x60);
    }
  }
  return uVar1;
}


