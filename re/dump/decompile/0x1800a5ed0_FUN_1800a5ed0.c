// 0x1800a5ed0  FUN_1800a5ed0
// size=700 thunk=false
// signature: undefined FUN_1800a5ed0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800a5ed0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  
  if (DAT_1803faee8 != (code *)0x0) {
    lVar6 = param_1[1];
    FUN_180023010(&local_38,lVar6);
    (*DAT_1803faee8)(lVar6,param_2,"LookupBone");
    if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
  lVar6 = *param_1;
  if (cVar2 == '\0') {
LAB_1800a5f5d:
    uVar4 = (**(code **)(lVar6 + 0x10))(param_1,1);
    return uVar4 & 0xffffffffffffff00;
  }
  (**(code **)(lVar6 + 8))(param_1,param_2);
  (**(code **)(*param_1 + 0xe8))(param_1,param_3,0);
  iVar3 = FUN_180023180(param_1[1],2,1);
  lVar6 = *param_1;
  if (iVar3 != 0) {
LAB_1800a5fab:
    uVar4 = (**(code **)(lVar6 + 0x10))(param_1,1);
    return uVar4 & 0xffffffffffffff00;
  }
  cVar2 = (**(code **)(lVar6 + 0x138))(param_1,0xffffffff,3);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  else {
    dVar1 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,1);
    if (-1 < (int)dVar1) {
      if (DAT_1803faee8 != (code *)0x0) {
        lVar6 = param_1[1];
        FUN_180023010(&local_38,lVar6);
        (*DAT_1803faee8)(lVar6,param_2,"GetManipulateBoneAngles");
        if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
          (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
        }
      }
      cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      lVar6 = *param_1;
      if (cVar2 == '\0') goto LAB_1800a5f5d;
      (**(code **)(lVar6 + 8))(param_1,param_2);
      (**(code **)(*param_1 + 0xf0))(param_1,(double)(int)dVar1);
      iVar3 = FUN_180023180(param_1[1],2,1);
      lVar6 = *param_1;
      if (iVar3 == 0) {
        uVar4 = 0;
        cVar2 = (**(code **)(lVar6 + 0x138))(param_1,0xffffffff,0xb);
        if (cVar2 != '\0') {
          puVar5 = (uint *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
          if ((((*puVar5 & 0x7f800000) != 0x7f800000) && ((puVar5[1] & 0x7f800000) != 0x7f800000))
             && ((puVar5[2] & 0x7f800000) != 0x7f800000)) {
            if (((DAT_180380bb0 < (float)(*puVar5 & _DAT_1803817c0)) ||
                (DAT_180380bb0 < (float)(puVar5[1] & _DAT_1803817c0))) ||
               (DAT_180380bb0 < (float)(puVar5[2] & _DAT_1803817c0))) {
              uVar4 = 1;
            }
          }
        }
        (**(code **)(*param_1 + 0x10))(param_1,1);
        return uVar4;
      }
      goto LAB_1800a5fab;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}


