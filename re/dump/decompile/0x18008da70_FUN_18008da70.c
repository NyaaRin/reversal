// 0x18008da70  FUN_18008da70
// size=211 thunk=false
// signature: undefined FUN_18008da70()
// status: ok


undefined1 FUN_18008da70(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
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
  if (param_1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,1);
      if (cVar2 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)(*param_1 + 200))(param_1,0xffffffff);
      }
      goto LAB_18008db29;
    }
  }
  uVar3 = 0;
LAB_18008db29:
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar3;
}


