// 0x180119420  FUN_180119420
// size=286 thunk=false
// signature: undefined FUN_180119420()
// status: ok


undefined8
FUN_180119420(code *param_1,longlong *param_2,longlong param_3,undefined4 param_4,undefined4 param_5
             ,undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((param_1 != (code *)0x0) && (param_2 != (longlong *)0x0)) && (param_3 != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    cVar1 = FUN_1801154f0(param_2,param_3);
    if (cVar1 != '\0') {
      (*param_1)(param_2,param_4,param_5,param_6,param_7,param_8,param_9);
      cVar1 = FUN_1801154f0(param_2,uVar2);
      if (cVar1 == '\0') {
        FUN_1801154f0(param_2,0);
        LOCK();
        DAT_18040a389 = 0;
        UNLOCK();
        DAT_18042542c = DAT_18042542c + 1;
        if (DAT_18042542c < 6) {
          FUN_180014410("[AntiSS] ReadPixels RT restore failed #%d\n");
        }
      }
      if (cVar1 != '\0') {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


