// 0x1802c7500  FUN_1802c7500
// size=790 thunk=false
// signature: undefined FUN_1802c7500()
// status: ok


void FUN_1802c7500(longlong param_1,float *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar3 = DAT_180380ac0;
  local_res8 = *param_2;
  fVar8 = param_2[1] + DAT_180380bb0;
  lVar5 = 0xccc;
  if ((param_3 >> 0x15 & 1) == 0) {
    lVar5 = 0xd1c;
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  fVar7 = (param_2[2] - local_res8) * DAT_180380ac0 - DAT_180380bb0;
  fVar9 = param_2[3] - *(float *)(lVar2 + 0xd34);
  fVar6 = *(float *)(lVar5 + lVar2);
  if (fVar7 <= *(float *)(lVar5 + lVar2)) {
    fVar6 = fVar7;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  local_resc = fVar9;
  FUN_18020dc30(param_1 + 0x50,&local_res8);
  local_res8 = fVar7 + *param_2;
  fVar8 = fVar7 + fVar8;
  local_resc = fVar8;
  if (fVar3 <= fVar7) {
    FUN_180293e00(param_1,&local_res8,fVar7,0x18,0x24);
  }
  else {
    FUN_18020dc30(param_1 + 0x50);
  }
  local_res8 = param_2[2] - fVar7;
  if (fVar3 <= fVar7) {
    local_resc = fVar8;
    FUN_180293e00(param_1,&local_res8,fVar7,0x24,0x30);
  }
  else {
    local_resc = fVar8;
    FUN_18020dc30(param_1 + 0x50);
  }
  local_res8 = param_2[2];
  local_resc = fVar9;
  FUN_18020dc30(param_1 + 0x50,&local_res8);
  FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0.0 < *(float *)(lVar2 + 0xd20)) {
    local_res8 = *param_2 + fVar3;
    local_resc = fVar9;
    FUN_18020dc30(param_1 + 0x50,&local_res8);
    fVar8 = fVar8 + fVar3;
    local_res8 = fVar7 + *param_2 + fVar3;
    local_resc = fVar8;
    if (fVar3 <= fVar7) {
      FUN_180293e00(param_1,&local_res8,fVar7,0x18,0x24);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    local_res8 = (param_2[2] - fVar7) - fVar3;
    if (fVar3 <= fVar7) {
      local_resc = fVar8;
      FUN_180293e00(param_1,&local_res8,fVar7,0x24,0x30);
    }
    else {
      local_resc = fVar8;
      FUN_18020dc30(param_1 + 0x50);
    }
    local_res8 = param_2[2] - fVar3;
    local_resc = fVar9;
    FUN_18020dc30(param_1 + 0x50,&local_res8);
    uVar1 = *(undefined4 *)(lVar2 + 0xd20);
    uVar4 = FUN_18026a6a0(5,DAT_180380bb0);
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar4,
                  uVar1,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


