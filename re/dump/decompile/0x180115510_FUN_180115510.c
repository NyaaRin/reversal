// 0x180115510  FUN_180115510
// size=177 thunk=false
// signature: undefined FUN_180115510()
// status: ok


undefined8 FUN_180115510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x18))(param_2);
  uVar3 = FUN_1801154f0(param_2,DAT_18040a378);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  (**(code **)(param_1 + 8))(param_2,param_3);
  cVar1 = FUN_1801154f0(param_2,uVar2);
  if (cVar1 == '\0') {
    DAT_180426004 = DAT_180426004 + 1;
    if (DAT_180426004 < 6) {
      FUN_180014410("[SP] redirect15 restore failed #%d\n");
    }
    FUN_1801154f0(param_2,0);
    LOCK();
    DAT_18040a389 = 0;
    UNLOCK();
  }
  return 1;
}


