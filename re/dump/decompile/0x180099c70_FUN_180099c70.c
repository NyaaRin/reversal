// 0x180099c70  FUN_180099c70
// size=440 thunk=false
// signature: undefined FUN_180099c70()
// status: ok


ulonglong FUN_180099c70(longlong *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_38,lVar4);
    (*DAT_1803faee8)(lVar4,param_2,"bullet");
    if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
  if (cVar5 == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar6 & 0xffffffffffffff00;
  }
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_38,lVar4);
    (*DAT_1803faee8)(lVar4,0xffffffff,&DAT_1803494e0);
    if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
    }
  }
  uVar6 = 0;
  cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
  if (cVar5 != '\0') {
    pfVar7 = (float *)(**(code **)(*param_1 + 0x178))(param_1,0xffffffff);
    fVar1 = *pfVar7;
    *param_3 = fVar1;
    fVar2 = pfVar7[1];
    param_3[1] = fVar2;
    fVar3 = pfVar7[2];
    param_3[2] = fVar3;
    if ((((((uint)fVar1 & 0x7f800000) != 0x7f800000) && (((uint)fVar2 & 0x7f800000) != 0x7f800000))
        && (((uint)fVar3 & 0x7f800000) != 0x7f800000)) &&
       (DAT_180380938 < fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
      uVar6 = 1;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,2);
  return uVar6;
}


