// 0x18007dbc0  FUN_18007dbc0
// size=330 thunk=false
// signature: undefined FUN_18007dbc0()
// status: ok


ulonglong FUN_18007dbc0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_48,lVar1);
    (*DAT_1803faee8)(lVar1,param_3,"GetNWBool");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar2 == '\0') {
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar5 & 0xffffffffffffff00;
  }
  cVar2 = FUN_18001e2b0(param_2,param_1);
  if (cVar2 == '\0') {
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar5 & 0xffffffffffffff00;
  }
  bVar3 = 0;
  (**(code **)(*param_1 + 0xe8))(param_1,"Ironsights",0);
  (**(code **)(*param_1 + 0xf8))(param_1,0);
  iVar4 = FUN_180023180(param_1[1],3,1);
  if (iVar4 == 0) {
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
    if (cVar2 != '\0') {
      bVar3 = (**(code **)(*param_1 + 200))(param_1,0xffffffff);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return (ulonglong)bVar3;
}


