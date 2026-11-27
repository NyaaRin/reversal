// 0x1800aff90  Features_Autowall_TFAAutowall_vfunc03
// size=756 thunk=false
// signature: undefined Features_Autowall_TFAAutowall_vfunc03()
// status: ok


void Features_Autowall_TFAAutowall_vfunc03(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong *plVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  float **ppfVar11;
  float **ppfVar12;
  float fVar13;
  float fVar14;
  undefined8 local_98;
  float local_90;
  int local_8c;
  float *local_88;
  float *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  float *local_58;
  
  puVar1 = (undefined1 *)(param_1 + 0x25);
  *puVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x14);
  *(undefined1 *)pfVar2 = 0;
  pfVar3 = (float *)(param_1 + 8);
  *pfVar3 = 0.0;
  local_58 = (float *)(param_1 + 0xc);
  *local_58 = 0.0;
  pfVar4 = (float *)(param_1 + 0x10);
  *pfVar4 = 0.0;
  local_98 = pfVar4;
  local_88 = pfVar3;
  local_80 = pfVar2;
  local_78 = param_2;
  local_70 = param_1;
  local_68 = puVar1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar9 = FUN_1800acab0("sv_tfa_bullet_penetration");
    *(undefined8 *)(param_1 + 0x28) = uVar9;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar9 = FUN_1800acab0("sv_tfa_bullet_penetration_power_mul");
    *(undefined8 *)(param_1 + 0x30) = uVar9;
  }
  plVar5 = (longlong *)(param_1 + 0x38);
  local_60 = plVar5;
  if (*plVar5 == 0) {
    lVar10 = FUN_1800acab0("sv_tfa_penetration_hardlimit");
    *plVar5 = lVar10;
  }
  uVar6 = FUN_1800acae0(*(undefined8 *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x24) = uVar6;
  fVar14 = DAT_180380bb0;
  local_90 = DAT_180380bb0;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (fVar13 = (float)FUN_180019700(*(undefined8 *)(param_1 + 0x30)), 0.0 < fVar13)) {
    local_90 = fVar13;
    fVar14 = fVar13;
  }
  local_80 = (float *)CONCAT44(local_80._4_4_,0x45fa0000);
  local_98 = (float *)CONCAT44(local_98._4_4_,0x447a0000);
  fVar13 = fVar14 * DAT_180381120;
  local_88 = (float *)CONCAT44(local_88._4_4_,fVar13);
  ppfVar12 = (float **)&local_98;
  if (DAT_180381278 <= fVar13) {
    ppfVar12 = &local_88;
  }
  ppfVar11 = &local_80;
  if (fVar13 <= DAT_1803812a0) {
    ppfVar11 = ppfVar12;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)ppfVar11;
  local_98._0_4_ = 0.0;
  cVar7 = FUN_1800ac530(param_2,"GetStatL","Primary.PenetrationPower",&local_98,0);
  if ((cVar7 != '\0') && (0.0 < (float)local_98)) {
    *local_58 = (float)local_98 * fVar14;
    *pfVar3 = (float)local_98 * fVar14;
    local_98._0_4_ = 1.0;
    cVar7 = FUN_1800ac530(param_2,"GetStatL","Primary.PenetrationMultiplier",&local_98,0);
    if ((cVar7 == '\0') || ((float)local_98 <= 0.0)) {
      *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    }
    else {
      *(float *)(param_1 + 0x18) = (float)local_98;
    }
    local_98 = (float *)((ulonglong)local_98._4_4_ << 0x20);
    cVar7 = FUN_1800ac530(param_2,"GetStatL","Primary.Damage",&local_98,0);
    if ((cVar7 != '\0') && (0.0 < (float)local_98)) {
      *pfVar4 = (float)local_98;
      *(undefined1 *)pfVar2 = 1;
    }
    local_8c = 100;
    if ((*plVar5 != 0) && (iVar8 = FUN_1800197a0(*plVar5), local_8c = 100, 0 < iVar8)) {
      local_8c = iVar8;
    }
    fVar13 = (float)local_8c;
    local_98 = (float *)((ulonglong)local_98 & 0xffffffff00000000);
    cVar7 = FUN_1800ac530(param_2,"GetStatL","Primary.MaxSurfacePenetrationCount",&local_98,0);
    fVar14 = fVar13;
    if (((cVar7 != '\0') && (0.0 < (float)local_98)) &&
       (fVar14 = (float)local_98, fVar13 <= (float)local_98)) {
      fVar14 = fVar13;
    }
    local_80 = (float *)CONCAT44(local_80._4_4_,1);
    iVar8 = (int)fVar14;
    local_88 = (float *)CONCAT44(local_88._4_4_,iVar8);
    ppfVar12 = &local_80;
    if (0 < iVar8) {
      ppfVar12 = &local_88;
    }
    if (4 < iVar8) {
      ppfVar12 = (float **)&DAT_18033c6a0;
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)ppfVar12;
    *puVar1 = 1;
  }
  return;
}


