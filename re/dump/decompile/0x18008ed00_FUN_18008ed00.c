// 0x18008ed00  FUN_18008ed00
// size=642 thunk=false
// signature: undefined FUN_18008ed00()
// status: ok


undefined8
FUN_18008ed00(longlong *param_1,undefined4 param_2,undefined8 param_3,float *param_4,float *param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_48,lVar4);
    (*DAT_1803faee8)(lVar4,param_2,param_3);
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar1 == '\0') {
    lVar4 = *param_1;
    uVar5 = 1;
  }
  else {
    if ((DAT_1803faf88 == (code *)0x0) || (DAT_1803fb088 == (code *)0x0)) {
      (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
      (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
    }
    else {
      lVar4 = param_1[1];
      uVar3 = (*DAT_1803fb088)(lVar4);
      (*DAT_1803faf88)(lVar4,uVar3,1);
    }
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar1 != '\0') {
      if ((DAT_1803faf88 == (code *)0x0) || (DAT_1803fb088 == (code *)0x0)) {
        (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d08);
        (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
      }
      else {
        lVar4 = param_1[1];
        uVar3 = (*DAT_1803fb088)(lVar4);
        (*DAT_1803faf88)(lVar4,uVar3,1);
      }
      cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
      if (cVar1 != '\0') {
        dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
        *param_4 = (float)dVar6;
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
      if ((DAT_1803faf88 == (code *)0x0) || (DAT_1803fb088 == (code *)0x0)) {
        (**(code **)(*param_1 + 0xf0))(param_1,DAT_180380d38);
        (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
      }
      else {
        lVar4 = param_1[1];
        uVar3 = (*DAT_1803fb088)(lVar4);
        (*DAT_1803faf88)(lVar4,uVar3,2);
      }
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
      if (cVar2 != '\0') {
        dVar6 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
        *param_5 = (float)dVar6;
      }
      (**(code **)(*param_1 + 0x10))(param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar2 == '\0') {
        return 0;
      }
      return 1;
    }
    lVar4 = *param_1;
    uVar5 = 2;
  }
  (**(code **)(lVar4 + 0x10))(param_1,uVar5);
  return 0;
}


