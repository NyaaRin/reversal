// 0x1800a7210  FUN_1800a7210
// size=1090 thunk=false
// signature: undefined FUN_1800a7210()
// status: ok


void FUN_1800a7210(longlong *param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  
  cVar4 = FUN_1800a71c0();
  if (cVar4 == '\0') {
    return;
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (DAT_1803fb098 == 0) {
    return;
  }
  if (DAT_1803faee8 != (code *)0x0) {
    FUN_180023010(&local_78,lVar8);
    (*DAT_1803faee8)(lVar8,param_2,"VisualRecoilState");
    if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
    }
  }
  cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,10);
  lVar8 = *param_1;
  if (cVar4 != '\0') {
    puVar7 = (uint *)(**(code **)(lVar8 + 0x178))(param_1,0xffffffff);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    (**(code **)(*param_1 + 0x10))(param_1,1);
    if ((uVar1 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if ((uVar2 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if ((uVar3 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if (DAT_1803faee8 != (code *)0x0) {
      lVar8 = param_1[1];
      FUN_180023010(&local_78,lVar8);
      (*DAT_1803faee8)(lVar8,param_2,"UpdateVisualRecoil");
      if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
      }
    }
    cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    if (cVar4 == '\0') {
      return;
    }
    local_88 = 0;
    local_80 = 0;
    (**(code **)(*param_1 + 0x188))(param_1,&local_88);
    FUN_18002da40(param_1[1],param_2,"VisualRecoilState");
    cVar4 = FUN_18001e2b0(param_3,param_1);
    if (cVar4 == '\0') {
      return;
    }
    uVar5 = (**(code **)*param_1)(param_1);
    iVar6 = FUN_1800a70a0(param_1,uVar5,"ValveBiped.Bip01_R_Hand");
    if (-1 < iVar6) {
      if (DAT_1803faee8 != (code *)0x0) {
        lVar8 = param_1[1];
        FUN_180023010(&local_78,lVar8);
        (*DAT_1803faee8)(lVar8,uVar5,"ManipulateBoneAngles");
        if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
          (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
        }
      }
      cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
      else {
        (**(code **)(*param_1 + 8))(param_1,uVar5);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar6);
        local_88 = 0;
        local_80 = 0;
        (**(code **)(*param_1 + 0x180))(param_1,&local_88);
        (**(code **)(*param_1 + 0xf8))(param_1,0);
        iVar6 = FUN_180023180(param_1[1],4,0);
        if (iVar6 != 0) {
          (**(code **)(*param_1 + 0x10))(param_1,1);
        }
      }
    }
    iVar6 = FUN_1800a70a0(param_1,uVar5,"ValveBiped.Bip01_R_Clavicle");
    if (-1 < iVar6) {
      if (DAT_1803faee8 != (code *)0x0) {
        lVar8 = param_1[1];
        FUN_180023010(&local_78,lVar8);
        (*DAT_1803faee8)(lVar8,uVar5,"ManipulateBonePosition");
        if ((local_60 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
          (*DAT_1803fae90)(local_78,local_70,local_68,local_64);
        }
      }
      cVar4 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x10))(param_1,1);
      }
      else {
        (**(code **)(*param_1 + 8))(param_1,uVar5);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar6);
        local_88 = 0;
        local_80 = 0;
        (**(code **)(*param_1 + 0x188))(param_1,&local_88);
        (**(code **)(*param_1 + 0xf8))(param_1,0);
        iVar6 = FUN_180023180(param_1[1],4,0);
        if (iVar6 != 0) {
          (**(code **)(*param_1 + 0x10))(param_1,1);
        }
      }
    }
    lVar8 = *param_1;
  }
  (**(code **)(lVar8 + 0x10))(param_1,1);
  return;
}


