// 0x18008db50  FUN_18008db50
// size=183 thunk=false
// signature: undefined FUN_18008db50()
// status: ok


undefined8 FUN_18008db50(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
  uVar3 = 0;
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if ((cVar2 != '\0') && (DAT_1803fb030 != (code *)0x0)) {
    uVar3 = (*DAT_1803fb030)(param_1[1],0xffffffff);
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar3;
}


