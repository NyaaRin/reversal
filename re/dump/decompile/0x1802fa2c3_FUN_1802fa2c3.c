// 0x1802fa2c3  FUN_1802fa2c3
// size=106 thunk=false
// signature: undefined FUN_1802fa2c3()
// status: ok


undefined8 FUN_1802fa2c3(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = DAT_18042587c + 1;
  DAT_18042587c = iVar2;
  if ((iVar2 < 0xb) || (iVar2 == (iVar2 / 300) * 300)) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x70) + 8))();
    FUN_180014410("[SAFE] menu frame exception \'%s\' #%d\n",uVar1,iVar2);
  }
  return 0;
}


