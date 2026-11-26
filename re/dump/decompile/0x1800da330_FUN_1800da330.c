// 0x1800da330  FUN_1800da330
// size=196 thunk=false
// signature: undefined FUN_1800da330()
// status: ok


undefined8 FUN_1800da330(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_1[1];
    FUN_180023010(&local_28,lVar1);
    (*DAT_1803faee8)(lVar1,param_2,"ishgweapon");
    if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 200))(param_1,0xffffffff);
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_1800da3d2;
    }
  }
  uVar3 = 0;
LAB_1800da3d2:
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar3;
}


