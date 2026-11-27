// 0x1800ae6e0  Features_Autowall_ArcCWAutowall_vfunc03
// size=354 thunk=false
// signature: undefined Features_Autowall_ArcCWAutowall_vfunc03()
// status: ok


void Features_Autowall_ArcCWAutowall_vfunc03(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 *local_res8;
  undefined8 local_res10;
  undefined1 *local_res18;
  float *local_res20;
  
  puVar1 = (undefined1 *)(param_1 + 0x18);
  *puVar1 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x10);
  *puVar2 = 0;
  pfVar3 = (float *)(param_1 + 8);
  *pfVar3 = 0.0;
  *(float *)(param_1 + 0xc) = 0.0;
  local_res8 = puVar1;
  local_res10 = param_2;
  local_res18 = puVar2;
  local_res20 = pfVar3;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar6 = FUN_1800acab0("arccw_enable_penetration");
    *(undefined8 *)(param_1 + 0x20) = uVar6;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar6 = FUN_1800acab0("arccw_mult_penetration");
    *(undefined8 *)(param_1 + 0x28) = uVar6;
  }
  uVar4 = FUN_1800acae0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (fVar7 = (float)FUN_180019700(*(undefined8 *)(param_1 + 0x28)), 0.0 < fVar7)) {
    *(float *)(param_1 + 0x14) = fVar7;
  }
  local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffff00000000);
  cVar5 = FUN_1800ac530(param_2,"GetBuff","Penetration",&local_res8,0);
  if ((cVar5 != '\0') && (0.0 < local_res8._0_4_)) {
    *pfVar3 = local_res8._0_4_;
    local_res8 = (undefined1 *)((ulonglong)local_res8 & 0xffffffff00000000);
    cVar5 = FUN_1800ac530(param_2,"GetBuff","Damage",&local_res8,0);
    if ((cVar5 != '\0') && (0.0 < local_res8._0_4_)) {
      *(float *)(param_1 + 0xc) = local_res8._0_4_;
      *puVar2 = 1;
    }
    *puVar1 = 1;
  }
  return;
}


