// 0x1800a5380  FUN_1800a5380
// size=499 thunk=false
// signature: undefined FUN_1800a5380()
// status: ok


ulonglong FUN_1800a5380(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  char *_Str;
  size_t sVar3;
  longlong lVar4;
  double dVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_58,lVar4);
    (*DAT_1803faee8)(lVar4,param_2,"currentFireMode");
    if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
  lVar4 = *param_1;
  if (cVar1 != '\0') {
    dVar5 = (double)(**(code **)(lVar4 + 0xc0))(param_1,0xffffffff);
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,1);
    if ((int)dVar5 < 1) goto LAB_1800a5561;
    if (DAT_1803faee8 != (code *)0x0) {
      lVar4 = param_1[1];
      FUN_180023010(&local_58,lVar4);
      (*DAT_1803faee8)(lVar4,param_2,"FireModes");
      if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    lVar4 = *param_1;
    if (cVar1 != '\0') {
      (**(code **)(lVar4 + 0xf0))(param_1,(double)(int)dVar5);
      (**(code **)(*param_1 + 0xa8))(param_1,0xfffffffe);
      uVar2 = 0;
      cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,4);
      if (cVar1 != '\0') {
        _Str = (char *)(**(code **)(*param_1 + 0xb8))(param_1,0xffffffff,0);
        if (_Str != (char *)0x0) {
          sVar3 = strlen(_Str);
          FUN_180212700(param_3,_Str,sVar3);
          uVar2 = 1;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,2);
      return uVar2;
    }
  }
  uVar2 = (**(code **)(lVar4 + 0x10))(param_1,1);
LAB_1800a5561:
  return uVar2 & 0xffffffffffffff00;
}


