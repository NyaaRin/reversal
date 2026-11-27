// 0x180095f10  FUN_180095f10
// size=206 thunk=false
// signature: undefined FUN_180095f10()
// status: ok


undefined8 FUN_180095f10(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_48,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,param_3);
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 200))(param_1,0xffffffff);
      if (cVar2 == '\0') goto LAB_180095fc1;
    }
    uVar3 = 1;
  }
  else {
LAB_180095fc1:
    uVar3 = 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar3;
}


