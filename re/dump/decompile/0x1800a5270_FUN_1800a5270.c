// 0x1800a5270  FUN_1800a5270
// size=270 thunk=false
// signature: undefined FUN_1800a5270()
// status: ok


undefined8 FUN_1800a5270(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_48,lVar1);
    (*DAT_1803faee8)(lVar1,param_3,"GetNetVar");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar2 != '\0') {
    cVar2 = FUN_18001e2b0(param_2,param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,1);
      return 0;
    }
    (**(code **)(*param_1 + 0xe8))(param_1,param_4,0);
    (**(code **)(*param_1 + 0xe0))(param_1);
    iVar3 = FUN_180023180(param_1[1],3,1);
    if (iVar3 == 0) {
      return 1;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return 0;
}


