// 0x18002ecc0  FUN_18002ecc0
// size=90 thunk=false
// signature: undefined FUN_18002ecc0()
// status: ok


undefined1 FUN_18002ecc0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar1 = FUN_18002e100();
    if (cVar1 != '\0') {
      uVar2 = FUN_18002eb00(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


