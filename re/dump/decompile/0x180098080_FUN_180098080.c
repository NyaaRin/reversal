// 0x180098080  FUN_180098080
// size=881 thunk=false
// signature: undefined FUN_180098080()
// status: ok


ulonglong FUN_180098080(longlong *param_1,undefined8 param_2,undefined4 param_3,uint *param_4,
                       float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  if (param_5 != (float *)0x0) {
    *param_5 = -1.0;
  }
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_58,lVar4);
    (*DAT_1803faee8)(lVar4,param_3,"GetOwner");
    if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar6 == '\0') {
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar9 & 0xffffffffffffff00;
  }
  cVar6 = FUN_18001e2b0(param_2,param_1);
  if (cVar6 == '\0') {
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
    return uVar9 & 0xffffffffffffff00;
  }
  iVar7 = FUN_180023180(param_1[1],1,1);
  if (iVar7 != 0) {
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1,1);
    return uVar9 & 0xffffffffffffff00;
  }
  uVar9 = 0;
  cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,9);
  if (cVar6 == '\0') goto LAB_1800983d1;
  uVar8 = (**(code **)*param_1)(param_1);
  if (DAT_1803faee8 != (code *)0x0) {
    lVar4 = param_1[1];
    FUN_180023010(&local_58,lVar4);
    (*DAT_1803faee8)(lVar4,uVar8,"EyeAngles");
    if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  if (cVar6 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,uVar8);
    iVar7 = FUN_180023180(param_1[1],1,1);
    if (iVar7 == 0) {
      cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb);
      if (cVar6 != '\0') {
        puVar10 = (uint *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
        uVar1 = *puVar10;
        *param_4 = uVar1;
        uVar2 = puVar10[1];
        param_4[1] = uVar2;
        uVar3 = puVar10[2];
        param_4[2] = uVar3;
        if ((((uVar1 & 0x7f800000) != 0x7f800000) && ((uVar2 & 0x7f800000) != 0x7f800000)) &&
           ((uVar3 & 0x7f800000) != 0x7f800000)) {
          uVar9 = 1;
          (**(code **)(*param_1 + 0x10))(param_1,1);
          goto LAB_180098312;
        }
      }
      uVar9 = 0;
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
  }
LAB_180098312:
  if (param_5 != (float *)0x0) {
    if (DAT_1803faee8 != (code *)0x0) {
      lVar4 = param_1[1];
      FUN_180023010(&local_58,lVar4);
      (*DAT_1803faee8)(lVar4,uVar8,"posture");
      if ((local_40 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_58,local_50,local_48,local_44);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
    if (cVar6 == '\0') {
      cVar6 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0);
      if (cVar6 != '\0') {
        *param_5 = 0.0;
      }
    }
    else {
      dVar5 = (double)(**(code **)(*param_1 + 0xc0))();
      *param_5 = (float)dVar5;
    }
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
LAB_1800983d1:
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return uVar9;
}


