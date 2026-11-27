// 0x1800f80b0  FUN_1800f80b0
// size=972 thunk=false
// signature: undefined FUN_1800f80b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1800f80b0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  float *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  float local_a8 [2];
  float local_a0 [2];
  float local_98 [4];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  pfVar7 = local_a8;
  local_a0[0] = 1.5;
  local_a8[0] = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar7 = &DAT_1803da6a4;
  }
  pfVar6 = local_a0;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar6 = pfVar7;
  }
  fVar1 = *pfVar6;
  if (*(char *)(param_1 + 4) == '\0') {
    if (-1 < *(int *)(param_1 + 0x48)) {
      FUN_180012ac0(local_98,0x10,&DAT_18033f570);
      goto LAB_1800f8185;
    }
    puVar9 = &DAT_18034d714;
  }
  else {
    puVar9 = &DAT_18034fa3c;
  }
  FUN_180012ac0(local_98,0x10,puVar9);
LAB_1800f8185:
  if (*(int *)(param_1 + 0x4c) < 2) {
    local_a0[0] = (float)((uint)local_a0[0] & 0xffffff00);
  }
  else {
    FUN_180012ac0(local_a0,8,&DAT_18034fa44);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = DAT_180381384;
  uVar4 = DAT_180381308;
  local_e0 = local_98;
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e8 = DAT_180381384;
  FUN_18029e350(local_a8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1238),DAT_180381308);
  fVar3 = DAT_180380ba8;
  fVar11 = (float)(int)(local_a8[0] + DAT_180380ba8) + fVar1 * _DAT_18038106c;
  if (local_a0[0]._0_1_ != '\0') {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_e0 = local_a0;
    local_b8 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e8 = uVar5;
    FUN_18029e350(local_a8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1238),uVar4);
    fVar11 = (float)(int)(local_a8[0] + fVar3) + fVar1 * DAT_180380f40 + fVar11;
  }
  fVar12 = 0.0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    pfVar7 = (float *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      pfVar7 = *(float **)pfVar7;
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (pfVar7 == (float *)0x0) {
      fVar10 = 0.0;
    }
    else {
      local_b8 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_e8 = uVar5;
      local_e0 = pfVar7;
      FUN_18029e350(local_a8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1238),uVar4);
      fVar10 = (float)(int)(local_a8[0] + fVar3);
    }
    fVar11 = fVar11 + fVar1 * DAT_180380fa8 + fVar10;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x28);
    if (0xf < *(ulonglong *)(param_1 + 0x40)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (puVar8 != (undefined8 *)0x0) {
      local_b8 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_e8 = uVar5;
      local_e0 = (float *)puVar8;
      FUN_18029e350(local_a8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1238),uVar4);
      fVar12 = (float)(int)(local_a8[0] + fVar3);
    }
    fVar11 = fVar11 + fVar1 * DAT_180380fa8 + fVar12;
  }
  return fVar1 * DAT_180380fd4 + fVar11;
}


