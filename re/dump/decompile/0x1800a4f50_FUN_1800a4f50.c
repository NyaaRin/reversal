// 0x1800a4f50  FUN_1800a4f50
// size=219 thunk=false
// signature: undefined FUN_1800a4f50()
// status: ok


undefined8 FUN_1800a4f50(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  char *_Str;
  size_t sVar3;
  undefined8 uVar4;
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
  uVar4 = 0;
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,4);
  if (cVar2 != '\0') {
    _Str = (char *)(**(code **)(*param_1 + 0xb8))(param_1,0xffffffff,0);
    if (_Str != (char *)0x0) {
      sVar3 = strlen(_Str);
      FUN_180212700(param_4,_Str,sVar3);
      uVar4 = 1;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar4;
}


