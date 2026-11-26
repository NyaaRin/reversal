// 0x1800dde30  FUN_1800dde30
// size=102 thunk=false
// signature: undefined FUN_1800dde30()
// status: ok


undefined1 FUN_1800dde30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_1800dd840();
  if (((DAT_18040a5d8 != '\0') && (DAT_18040a55d != '\0')) && (param_1 != 0)) {
    uVar2 = FUN_18001e4e0(param_1);
    if (0x10000 < uVar2) {
      local_20 = 0;
      local_18 = 0;
      uVar1 = FUN_1800ddaa0(uVar2,&local_20,param_3,param_4,uVar2);
      return uVar1;
    }
  }
  return 0;
}


