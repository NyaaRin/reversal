// 0x180115780  FUN_180115780
// size=229 thunk=false
// signature: undefined FUN_180115780()
// status: ok


undefined8
FUN_180115780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x18))(param_2);
  uVar3 = FUN_1801154f0(param_2,DAT_18040a378);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  (**(code **)(param_1 + 0x10))(param_2,param_3,param_4,param_5,param_6);
  cVar1 = FUN_1801154f0(param_2,uVar2);
  if (cVar1 == '\0') {
    DAT_1803fea08 = DAT_1803fea08 + 1;
    if (DAT_1803fea08 < 6) {
      FUN_180014410("[SP] redirectEx restore failed #%d\n");
    }
    FUN_1801154f0(param_2,0);
    LOCK();
    DAT_18040a389 = 0;
    UNLOCK();
  }
  return 1;
}


