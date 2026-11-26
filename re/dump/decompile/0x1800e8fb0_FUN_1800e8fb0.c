// 0x1800e8fb0  FUN_1800e8fb0
// size=99 thunk=false
// signature: undefined FUN_1800e8fb0()
// status: ok


undefined8 FUN_1800e8fb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar2 = FUN_180039770();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
    cVar1 = FUN_1800e7ad0(lVar2);
    if (cVar1 != '\0') {
      DAT_1803db630 = local_18;
      DAT_1803db638 = local_10;
      DAT_1803db634 = local_14;
      DAT_1803db62c = 1;
    }
  }
  return 0;
}


