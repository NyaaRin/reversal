// 0x1802ac830  FUN_1802ac830
// size=812 thunk=false
// signature: undefined FUN_1802ac830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802ac830(undefined4 param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined4 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  char local_b0;
  char local_af [7];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar11 = param_2[1];
  fVar9 = *param_2;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  fVar10 = fVar11 + *(float *)(lVar2 + 0x1238);
  fVar8 = fVar9 + *(float *)(lVar2 + 0x1238);
  local_a8 = fVar9;
  local_a4 = fVar11;
  local_a0 = fVar8;
  local_9c = fVar10;
  if (((*(float *)(lVar3 + 0x224) - *(float *)(lVar3 + 0x21c)) *
      (*(float *)(lVar3 + 0x220) - *(float *)(lVar3 + 0x218))) /
      ((fVar10 - fVar11) * (fVar8 - fVar9)) < DAT_180380c50) {
    local_a0 = (float)(int)((fVar8 - fVar9) * _DAT_180381348);
    local_a8 = fVar9 - local_a0;
    local_a0 = local_a0 + fVar8;
    local_9c = (float)(int)((fVar10 - fVar11) * _DAT_180381348);
    local_a4 = fVar11 - local_9c;
    local_9c = local_9c + fVar10;
  }
  local_c8 = fVar9;
  local_c4 = fVar11;
  local_c0 = fVar8;
  local_bc = fVar10;
  cVar4 = FUN_18027f160(&local_a8,param_1,0,0);
  local_d8 = 0.0;
  uVar6 = FUN_1802ab600(&local_a8,param_1,local_af,&local_b0);
  fVar7 = DAT_180380bb0;
  if (cVar4 != '\0') {
    uVar5 = FUN_18026a6a0((local_b0 != '\0') + '\x17',DAT_180380bb0);
    if (local_af[0] != '\0') {
      local_d0 = 0;
      local_d8 = 0.0;
      FUN_180295000(*(undefined8 *)(lVar3 + 0x2c8),&local_c8,&local_c0,uVar5);
    }
    FUN_18026c370(&local_c8,param_1,2);
    uVar5 = FUN_18026a6a0(0,fVar7);
    fVar1 = *(float *)(lVar2 + 0x1210);
    fVar9 = (fVar8 + fVar9) * DAT_180380ac0 - DAT_180380ac0;
    fVar7 = *(float *)(lVar2 + 0x1238) * DAT_180380ac0 * _DAT_180380b14 - fVar7;
    fVar11 = (fVar10 + fVar11) * DAT_180380ac0 - DAT_180380ac0;
    fVar8 = fVar9 + fVar7;
    fVar9 = fVar9 + (float)((uint)fVar7 ^ DAT_1803817f0);
    fVar10 = fVar11 + fVar7;
    fVar11 = fVar11 + (float)((uint)fVar7 ^ DAT_1803817f0);
    local_d8 = (float)(int)fVar1;
    local_c8 = fVar8;
    local_c4 = fVar10;
    local_b8 = fVar9;
    local_b4 = fVar11;
    FUN_180294c90(*(undefined8 *)(lVar3 + 0x2c8),&local_c8,&local_b8,uVar5);
    local_d8 = (float)(int)fVar1;
    local_c8 = fVar9;
    local_c4 = fVar10;
    local_b8 = fVar8;
    local_b4 = fVar11;
    FUN_180294c90(*(undefined8 *)(lVar3 + 0x2c8),&local_b8,&local_c8,uVar5);
    uVar6 = uVar6 & 0xff;
  }
  return uVar6;
}


