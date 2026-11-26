// 0x1800da980  FUN_1800da980
// size=1769 thunk=false
// signature: undefined FUN_1800da980()
// status: ok


undefined1 *
FUN_1800da980(longlong param_1,longlong *param_2,int param_3,char param_4,char param_5,
             undefined1 param_6)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  char *pcVar12;
  longlong *local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  if (param_2 == (longlong *)0x0) {
    return &stack0x00000000;
  }
  plVar1 = param_2 + 1;
  if (*plVar1 == 0) {
    return &stack0x00000000;
  }
  if (param_3 < 1) {
    return &stack0x00000000;
  }
  if (DAT_1803faee8 == 0) {
    return &stack0x00000000;
  }
  if (DAT_1803fb098 == 0) {
    return &stack0x00000000;
  }
  local_a0 = plVar1;
  local_90 = param_1;
  iVar5 = (**(code **)*param_2)(param_2);
  FUN_18002dc30(&local_80,*plVar1);
  cVar2 = FUN_18002eb00(*plVar1,param_2,param_3);
  if (cVar2 == '\0') {
    uVar8 = (**(code **)*param_2)();
    if (iVar5 < (int)uVar8) {
      uVar8 = (**(code **)(*param_2 + 0x10))(param_2,(int)uVar8 - iVar5);
    }
    if ((local_68 != '\0') && (uVar8 = 0, DAT_1803faf78 != (code *)0x0)) {
      uVar8 = (*DAT_1803faf78)(local_80,local_78,local_70,local_6c);
    }
    return (undefined1 *)(uVar8 & 0xffffffffffffff00);
  }
  uVar6 = (**(code **)*param_2)(param_2);
  cVar2 = FUN_1800da330(param_2,uVar6);
  if (cVar2 == '\0') {
    uVar8 = (**(code **)*param_2)(param_2);
    if (iVar5 < (int)uVar8) {
      uVar8 = (**(code **)(*param_2 + 0x10))(param_2,(int)uVar8 - iVar5);
    }
    if ((local_68 != '\0') && (uVar8 = 0, DAT_1803faf78 != (code *)0x0)) {
      uVar8 = (*DAT_1803faf78)(local_80,local_78,local_70,local_6c);
    }
    return (undefined1 *)(uVar8 & 0xffffffffffffff00);
  }
  FUN_1800da650(param_1,param_2,uVar6,param_6);
  cVar2 = FUN_1800da0a0();
  if (cVar2 == '\0') {
LAB_1800dab41:
    cVar2 = '\0';
  }
  else {
    uVar9 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar9 = FUN_180241610(uVar9,0x8e62cf1c230948fa);
    piVar10 = (int *)FUN_1802029c0(uVar9);
    if (*piVar10 != 3) goto LAB_1800dab41;
    cVar2 = '\x01';
  }
  cVar3 = cVar2;
  iVar7 = FUN_1800da280();
  if ((iVar7 == 2) || ((iVar7 == 1 && (cVar2 == '\0')))) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x27) = cVar2;
  if ((param_4 == '\0') && (param_5 == '\0')) {
LAB_1800dabc3:
    (**(code **)(*param_2 + 0xe0))(param_2);
    FUN_18002da40(param_2[1],uVar6,"norecoil");
    if (param_4 == '\0') {
      pcVar12 = (char *)(param_1 + 0x29);
      if (*pcVar12 != '\0') {
        if (*(char *)(param_1 + 0x30) == '\0') {
          (**(code **)(*param_2 + 0xe0))(param_2);
        }
        else {
          (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x38));
        }
        FUN_18002da40(param_2[1],uVar6,"addSprayMul");
        if (*(char *)(param_1 + 0x40) == '\0') {
          (**(code **)(*param_2 + 0xe0))(param_2);
        }
        else {
          (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x48));
        }
        FUN_18002da40(param_2[1],uVar6,"randmul");
        if (*(char *)(param_1 + 0x50) == '\0') {
          (**(code **)(*param_2 + 0xe0))(param_2);
        }
        else {
          (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x58));
        }
        FUN_18002da40(param_2[1],uVar6,"cameraShakeMul");
      }
    }
    else {
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      FUN_18002da40(param_2[1],uVar6,"addSprayMul");
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      FUN_18002da40(param_2[1],uVar6,"randmul");
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      FUN_18002da40(param_2[1],uVar6,"cameraShakeMul");
      pcVar12 = (char *)(local_90 + 0x29);
    }
    if (param_5 == '\0') {
      pcVar12 = (char *)(param_1 + 0x29);
      if (*pcVar12 != '\0') {
        if (*(char *)(param_1 + 0x60) == '\0') {
          (**(code **)(*param_2 + 0xe0))(param_2);
        }
        else {
          (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x68));
        }
        lVar11 = *plVar1;
        goto LAB_1800db002;
      }
    }
    else {
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      lVar11 = param_2[1];
LAB_1800db002:
      FUN_18002da40(lVar11,uVar6,"RecoilMul");
    }
    if ((param_4 == '\0') && (param_5 == '\0')) {
      *pcVar12 = '\0';
      goto LAB_1800daf16;
    }
  }
  else {
    if (*(char *)(param_1 + 0x29) == '\0') {
      local_a0 = (longlong *)(param_1 + 0x30);
      cVar3 = FUN_1800da400(param_2,uVar6,"addSprayMul",param_1 + 0x38,cVar3);
      *(char *)(param_1 + 0x30) = cVar3;
      uVar4 = FUN_1800da400(param_2,uVar6,"randmul",param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x40) = uVar4;
      uVar4 = FUN_1800da400(param_2,uVar6,"cameraShakeMul",param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x50) = uVar4;
      uVar4 = FUN_1800da400(param_2,uVar6,"RecoilMul",param_1 + 0x68);
      *(undefined1 *)(param_1 + 0x60) = uVar4;
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    else {
      local_a0 = (longlong *)(local_90 + 0x30);
    }
    if (((param_4 == '\0') || (param_5 == '\0')) || (cVar2 == '\0')) goto LAB_1800dabc3;
    (**(code **)(*param_2 + 0xf8))(param_2,1);
    FUN_18002da40(*plVar1,uVar6,"norecoil");
    if (*(char *)(param_1 + 0x29) != '\0') {
      if ((char)*local_a0 == '\0') {
        (**(code **)(*param_2 + 0xe0))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0xf0))(param_2,local_a0[1]);
      }
      FUN_18002da40(param_2[1],uVar6,"addSprayMul");
      if (*(char *)(param_1 + 0x40) == '\0') {
        (**(code **)(*param_2 + 0xe0))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x48));
      }
      FUN_18002da40(param_2[1],uVar6,"randmul");
      if (*(char *)(param_1 + 0x50) == '\0') {
        (**(code **)(*param_2 + 0xe0))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x58));
      }
      FUN_18002da40(param_2[1],uVar6,"cameraShakeMul");
      if (*(char *)(param_1 + 0x60) == '\0') {
        (**(code **)(*param_2 + 0xe0))(param_2);
      }
      else {
        (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x68));
      }
      FUN_18002da40(param_2[1],uVar6,"RecoilMul");
    }
  }
  local_90 = 0;
  local_88 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_90);
  FUN_18002da40(*plVar1,uVar6,"EyeSpray");
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_a0);
  FUN_18002da40(*plVar1,uVar6,"EyeSprayVel");
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  (**(code **)(*param_2 + 0x180))(param_2,&local_60);
  FUN_18002da40(*plVar1,uVar6,"sprayAngles");
  if (param_4 != '\0') {
    (**(code **)(*param_2 + 0xf0))(param_2,0);
    FUN_18002da40(*plVar1,uVar6,"SprayI");
    (**(code **)(*param_2 + 0xf0))(param_2,0);
    FUN_18002da40(*plVar1,uVar6,"dmgStack");
    (**(code **)(*param_2 + 0xf0))(param_2,0);
    FUN_18002da40(*plVar1,uVar6,"dmgStack2");
  }
LAB_1800daf16:
  iVar7 = (**(code **)*param_2)(param_2);
  if (iVar5 < iVar7) {
    (**(code **)(*param_2 + 0x10))(param_2,iVar7 - iVar5);
  }
  if ((local_68 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_80,local_78,local_70,local_6c);
  }
  return (undefined1 *)0x1;
}


