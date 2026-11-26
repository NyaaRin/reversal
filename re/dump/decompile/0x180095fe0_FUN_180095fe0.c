// 0x180095fe0  FUN_180095fe0
// size=270 thunk=false
// signature: undefined FUN_180095fe0()
// status: ok


ulonglong FUN_180095fe0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
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
    (*DAT_1803faee8)(lVar1,param_2,param_3);
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar2 == '\0') {
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar5 & 0xffffffffffffff00;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2);
  iVar4 = FUN_180023180(param_1[1],1,1);
  if (iVar4 == 0) {
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
    if (cVar2 != '\0') {
      uVar5 = 1;
      uVar3 = (**(code **)(*param_1 + 200))(param_1,0xffffffff);
      *param_4 = uVar3;
      goto LAB_1800960d1;
    }
  }
  uVar5 = 0;
LAB_1800960d1:
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar5;
}


