// 0x1800af890  Features_Autowall_SWCSAutowall_vfunc03
// size=446 thunk=false
// signature: undefined Features_Autowall_SWCSAutowall_vfunc03()
// status: ok


void Features_Autowall_SWCSAutowall_vfunc03
               (ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined1 *local_res18;
  undefined1 *local_res20;
  float *pfVar8;
  float *pfVar9;
  
  puVar1 = (undefined1 *)(param_1 + 0x20);
  *puVar1 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x10);
  *puVar2 = 0;
  pfVar3 = (float *)(param_1 + 8);
  *pfVar3 = 0.0;
  pfVar4 = (float *)(param_1 + 0xc);
  *pfVar4 = 0.0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = puVar1;
  local_res20 = puVar2;
  pfVar8 = pfVar3;
  pfVar9 = pfVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar7 = FUN_1800acab0("swcs_penetration_type");
    *(longlong *)(param_1 + 0x28) = lVar7;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    if (lVar7 == 0) goto LAB_1800af94f;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  uVar6 = FUN_1800197a0(*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
LAB_1800af94f:
  local_res8 = local_res8 & 0xffffffff00000000;
  cVar5 = FUN_1800ac3f0(param_2,"GetPenetration",&local_res8,param_4,pfVar8,pfVar9);
  if ((cVar5 != '\0') && (0.0 < (float)local_res8)) {
    *pfVar3 = (float)local_res8;
    local_res8 = local_res8 & 0xffffffff00000000;
    cVar5 = FUN_1800ac3f0(param_2,"GetDamage",&local_res8,param_4,pfVar8,pfVar9);
    if ((cVar5 != '\0') && (0.0 < (float)local_res8)) {
      *pfVar4 = (float)local_res8;
      *puVar2 = 1;
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    cVar5 = FUN_1800ac3f0(param_2,"GetRange",&local_res8,param_4,pfVar8,pfVar9);
    if ((cVar5 == '\0') || ((float)local_res8 <= 0.0)) {
      *(undefined4 *)(param_1 + 0x14) = 0x46000000;
    }
    else {
      *(float *)(param_1 + 0x14) = (float)local_res8;
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    cVar5 = FUN_1800ac3f0(param_2,"GetRangeModifier",&local_res8);
    if (((cVar5 == '\0') || ((float)local_res8 <= 0.0)) || (DAT_180380bb0 < (float)local_res8)) {
      *(undefined4 *)(param_1 + 0x18) = 0x3f7ae148;
    }
    else {
      *(float *)(param_1 + 0x18) = (float)local_res8;
    }
    *puVar1 = 1;
  }
  return;
}


