// 0x1800a7660  FUN_1800a7660
// size=403 thunk=false
// signature: undefined FUN_1800a7660()
// status: ok


ulonglong FUN_1800a7660(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  
  uVar8 = FUN_18001e2b0(param_2,param_1);
  if ((char)uVar8 != '\0') {
    uVar6 = (**(code **)*param_1)(param_1);
    if (DAT_1803faee8 != (code *)0x0) {
      lVar4 = param_1[1];
      FUN_180023010(&local_38,lVar4);
      (*DAT_1803faee8)(lVar4,uVar6,"EyeAngles");
      if ((local_20 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_38,local_30,local_28,local_24);
      }
    }
    cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar5 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,uVar6);
      iVar7 = FUN_180023180(param_1[1],1,1);
      if (iVar7 != 0) {
        uVar8 = (**(code **)(*param_1 + 0x10))(param_1,2);
        return uVar8 & 0xffffffffffffff00;
      }
      uVar8 = 0;
      cVar5 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,0xb);
      if (cVar5 != '\0') {
        puVar9 = (uint *)(**(code **)(*param_1 + 0x170))(param_1,0xffffffff);
        uVar1 = *puVar9;
        *param_3 = uVar1;
        uVar2 = puVar9[1];
        param_3[1] = uVar2;
        uVar3 = puVar9[2];
        param_3[2] = uVar3;
        if ((((uVar1 & 0x7f800000) != 0x7f800000) && ((uVar2 & 0x7f800000) != 0x7f800000)) &&
           ((uVar3 & 0x7f800000) != 0x7f800000)) {
          uVar8 = 1;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,2);
      return uVar8;
    }
    uVar8 = (**(code **)(*param_1 + 0x10))(param_1,2);
  }
  return uVar8 & 0xffffffffffffff00;
}


