// 0x1800e8dc0  FUN_1800e8dc0
// size=145 thunk=false
// signature: undefined FUN_1800e8dc0()
// status: ok


undefined8 FUN_1800e8dc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar2 = FUN_180039770();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
    cVar1 = FUN_1800e7ad0(lVar2);
    if (cVar1 == '\0') {
      DAT_1803e8a10 = 0xffffffff;
      return 0;
    }
    DAT_1803e9be0 = local_18;
    DAT_1803e9be8 = local_10;
    DAT_1803e9be4 = local_14;
    if (DAT_1803fa608 != 0) {
      DAT_1803e8a10 = *(undefined4 *)(DAT_1803fa608 + 4);
      return 0;
    }
    DAT_1803e8a10 = 0;
  }
  return 0;
}


