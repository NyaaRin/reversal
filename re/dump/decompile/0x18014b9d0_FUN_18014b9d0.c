// 0x18014b9d0  FUN_18014b9d0
// size=405 thunk=false
// signature: undefined FUN_18014b9d0()
// status: ok


undefined8 FUN_18014b9d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  uVar8 = param_1[1] - *param_1;
  local_res8 = 0;
  iVar6 = FUN_18014b840(*param_1,uVar8,&local_res8);
  uVar4 = local_res8;
  if (((iVar6 == 0) || (uVar9 = (ulonglong)iVar6, local_res8 < uVar9)) ||
     (uVar3 = local_res8, uVar8 < local_res8)) {
LAB_18014bb37:
    uVar7 = 0;
  }
  else {
    while (uVar9 < uVar4) {
      lVar1 = *param_1;
      local_res8 = 0;
      iVar6 = FUN_18014b840(lVar1 + uVar9,uVar4 - uVar9,&local_res8);
      if (iVar6 == 0) goto LAB_18014bb37;
      switch(local_res8) {
      case 0:
      case 8:
      case 9:
      case 10:
      case 0xb:
        uVar8 = 0;
        break;
      case 1:
        uVar8 = 1;
        break;
      case 2:
        uVar8 = 2;
        break;
      case 3:
        uVar8 = 3;
        break;
      case 4:
        uVar8 = 4;
        break;
      case 5:
        uVar8 = 6;
        break;
      case 6:
      case 7:
        uVar8 = 8;
        break;
      default:
        uVar8 = local_res8 - 0xc >> 1;
      }
      if ((param_1[1] - lVar1) - uVar3 < uVar8) goto LAB_18014bb37;
      local_48 = local_res8;
      uVar5 = local_48;
      uVar9 = uVar9 + (longlong)iVar6;
      puVar2 = (undefined4 *)param_2[1];
      uStack_40 = uVar3;
      local_38 = uVar8;
      if (puVar2 == (undefined4 *)param_2[2]) {
        FUN_180224820(param_2,puVar2,&local_48);
      }
      else {
        local_48._0_4_ = (undefined4)local_res8;
        local_48._4_4_ = (undefined4)(local_res8 >> 0x20);
        uStack_40._0_4_ = (undefined4)uVar3;
        uStack_40._4_4_ = (undefined4)(uVar3 >> 0x20);
        *puVar2 = (undefined4)local_48;
        puVar2[1] = local_48._4_4_;
        puVar2[2] = (undefined4)uStack_40;
        puVar2[3] = uStack_40._4_4_;
        *(ulonglong *)(puVar2 + 4) = uVar8;
        param_2[1] = param_2[1] + 0x18;
        local_48 = uVar5;
      }
      uVar3 = uVar3 + uVar8;
    }
    uVar7 = 1;
  }
  return uVar7;
}


