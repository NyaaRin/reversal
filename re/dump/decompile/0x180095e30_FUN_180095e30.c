// 0x180095e30  FUN_180095e30
// size=220 thunk=false
// signature: undefined FUN_180095e30()
// status: ok


undefined4 FUN_180095e30(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_68,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,param_3);
    if ((local_50 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_68,local_60,local_58,local_54);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
  uVar4 = param_4;
  if (cVar2 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  sVar3 = _dclass(uVar4);
  if (sVar3 < 1) {
    param_4 = uVar4;
  }
  return param_4;
}


