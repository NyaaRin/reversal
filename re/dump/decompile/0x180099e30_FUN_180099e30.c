// 0x180099e30  FUN_180099e30
// size=292 thunk=false
// signature: undefined FUN_180099e30()
// status: ok


ulonglong FUN_180099e30(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined1 *param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  *param_5 = 0;
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_48,lVar1);
    (*DAT_1803faee8)(lVar1,param_3,"CanUse");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar2 == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar6 & 0xffffffffffffff00;
  }
  (**(code **)(*param_1 + 8))(param_1,param_3);
  iVar5 = FUN_180023180(param_1[1],1,1);
  if (iVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar6 & 0xffffffffffffff00;
  }
  bVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
  if (bVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 200))(param_1,0xffffffff);
    *param_5 = uVar4;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return (ulonglong)bVar3;
}


