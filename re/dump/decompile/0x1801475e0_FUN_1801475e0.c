// 0x1801475e0  FUN_1801475e0
// size=43 thunk=false
// signature: undefined FUN_1801475e0()
// status: ok


undefined8 FUN_1801475e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180147130();
  if ((param_1 == 0) || (*(char *)(lVar1 + 0x28) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *(longlong *)(lVar1 + 8));
  }
  return uVar2;
}


