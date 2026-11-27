// 0x180099f60  FUN_180099f60
// size=899 thunk=false
// signature: undefined FUN_180099f60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180099f60(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *_Str;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  dVar6 = 0.0;
  if (DAT_1803fa608 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  if (DAT_1803faee8 != (code *)0x0) {
    lVar5 = param_1[1];
    FUN_180023010(&local_78,lVar5);
    (*DAT_1803faee8)(lVar5,param_3,"DrumLastPredicted");
    if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
  if (cVar2 != '\0') {
    dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  lVar5 = param_1[1];
  if (dVar6 < (double)CONCAT44(uVar8,uVar7)) {
    if (DAT_1803faee8 != (code *)0x0) {
      FUN_180023010(&local_78,lVar5);
      (*DAT_1803faee8)(lVar5,param_3,"GetNWString");
      if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
      return uVar4 & 0xffffffffffffff00;
    }
    cVar2 = FUN_18001e2b0(param_2,param_1);
    lVar5 = *param_1;
    if (cVar2 != '\0') {
      (**(code **)(lVar5 + 0xe8))(param_1,&DAT_180349504,0);
      (**(code **)(*param_1 + 0xe8))(param_1,"1 1 1 1 1 1",0);
      iVar3 = FUN_180023180(param_1[1],3,1);
      lVar5 = *param_1;
      if (iVar3 == 0) {
        uVar4 = 0;
        cVar2 = (**(code **)(lVar5 + 0x138))(param_1,0xffffffff,4);
        if ((cVar2 != '\0') &&
           (_Str = (char *)(**(code **)(*param_1 + 0xb8))(param_1,0xffffffff,0), _Str != (char *)0x0
           )) {
          local_58 = (char *)0x0;
          dVar6 = strtod(_Str,&local_58);
          if ((local_58 != _Str) && (dVar6 == DAT_180380d08)) {
            uVar4 = 1;
          }
        }
        goto LAB_18009a2af;
      }
    }
    uVar4 = (**(code **)(lVar5 + 0x10))(param_1,1);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar4 = 0;
    if (DAT_1803faee8 != (code *)0x0) {
      FUN_180023010(&local_78,lVar5);
      (*DAT_1803faee8)(lVar5,param_3,&DAT_1803494fc);
      if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    dVar6 = DAT_180380d08;
    if (cVar2 != '\0') {
      if (DAT_1803faf88 == (code *)0x0) {
        (**(code **)(*param_1 + 0xf0))(param_1,SUB84(DAT_180380d08,0));
        (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
      }
      else {
        (*DAT_1803faf88)(param_1[1],0xffffffff,1);
      }
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
      if ((cVar2 == '\0') ||
         (dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff), dVar1 != dVar6)) {
        uVar4 = 0;
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
      else {
        uVar4 = 1;
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
    }
LAB_18009a2af:
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  return uVar4;
}


