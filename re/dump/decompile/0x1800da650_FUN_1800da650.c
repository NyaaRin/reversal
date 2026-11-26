// 0x1800da650  FUN_1800da650
// size=808 thunk=false
// signature: undefined FUN_1800da650()
// status: ok


void FUN_1800da650(longlong param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  char local_90;
  
  if ((param_4 == '\0') && (*(char *)(param_1 + 0x70) == '\0')) {
    return;
  }
  if (DAT_1803faee8 != (code *)0x0) {
    lVar1 = param_2[1];
    FUN_180023010(&local_a8,lVar1);
    (*DAT_1803faee8)(lVar1,param_3,"Primary");
    if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,5);
  if (cVar2 == '\0') {
    (*(code *)((undefined8 *)*param_2)[2])(param_2,1);
    return;
  }
  uVar4 = (**(code **)*param_2)(param_2);
  if (param_4 == '\0') {
    lVar1 = *param_2;
    if (*(int *)(param_1 + 0x78) == 1) {
      (**(code **)(lVar1 + 0x188))(param_2,param_1 + 0x7c);
    }
    else if (*(int *)(param_1 + 0x78) == 2) {
      (**(code **)(lVar1 + 0xf0))(param_2,*(undefined8 *)(param_1 + 0x88));
    }
    else {
      (**(code **)(lVar1 + 0xe0))();
    }
    FUN_18002da40(param_2[1],uVar4,"Spread");
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    if (DAT_1803faee8 != (code *)0x0) {
      lVar1 = param_2[1];
      FUN_180023010(&local_a8,lVar1);
      (*DAT_1803faee8)(lVar1,uVar4,"Spread");
      if ((local_90 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_a8,local_a0,local_98,local_94);
      }
    }
    cVar2 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,10);
    cVar3 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,3);
    dVar6 = 0.0;
    if (cVar2 == '\0') {
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      if (cVar3 != '\0') {
        dVar6 = (double)(**(code **)(*param_2 + 0xc0))(param_2,0xffffffff);
      }
    }
    else {
      pfVar5 = (float *)(**(code **)(*param_2 + 0x178))(param_2,0xffffffff);
      fVar7 = *pfVar5;
      fVar8 = pfVar5[1];
      fVar9 = pfVar5[2];
      dVar6 = 0.0;
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
    if (*(char *)(param_1 + 0x70) == '\0') {
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (cVar2 == '\0') {
        if (cVar3 != '\0') {
          *(undefined4 *)(param_1 + 0x78) = 2;
          *(double *)(param_1 + 0x88) = dVar6;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 1;
        *(float *)(param_1 + 0x7c) = fVar7;
        *(float *)(param_1 + 0x80) = fVar8;
        *(float *)(param_1 + 0x84) = fVar9;
      }
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
    if (cVar2 == '\0') {
      if ((cVar3 == '\0') || (dVar6 == 0.0)) goto LAB_1800da93a;
    }
    else if ((fVar7 == 0.0) && ((fVar8 == 0.0 && (fVar9 == 0.0)))) goto LAB_1800da93a;
    local_b8 = 0;
    local_b0 = 0;
    (**(code **)(*param_2 + 0x188))(param_2,&local_b8);
    FUN_18002da40(param_2[1],uVar4,"Spread");
  }
LAB_1800da93a:
  (**(code **)(*param_2 + 0x10))(param_2,1);
  return;
}


