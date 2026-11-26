// 0x1802afbd0  FUN_1802afbd0
// size=1027 thunk=false
// signature: undefined FUN_1802afbd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802afbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  float *local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_128._0_4_ = DAT_180381384;
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  lVar5 = *(longlong *)(lVar4 + 0x1520);
  FUN_180272ad0(&local_f0,param_2,param_3,0);
  fVar11 = DAT_180380ba8;
  local_e4 = *(float *)(lVar5 + 0x11c);
  fVar1 = *(float *)(lVar4 + 0xd7c);
  fVar12 = *(float *)(lVar4 + 0xd88);
  fVar2 = *(float *)(lVar5 + 0x118);
  local_104 = *(float *)(lVar4 + 0xd8c) + *(float *)(lVar4 + 0xd8c) + local_ec;
  local_108 = local_f0 + param_4 + fVar12 + fVar12;
  if (local_104 <= fVar1) {
    local_104 = fVar1;
  }
  local_f8 = *(float *)(lVar5 + 0x250);
  local_f4 = local_e4 + local_104;
  fVar10 = ((local_f4 - local_e4) - local_ec) * *(float *)(lVar4 + 0xd84) + DAT_180380ba8;
  local_100 = fVar2;
  local_fc = local_e4;
  FUN_18027f400(&local_108);
  cVar8 = FUN_18027f160(&local_100,0,0,0);
  fVar7 = local_f4;
  fVar6 = local_f8;
  uVar9 = DAT_180380bb0;
  if (cVar8 != '\0') {
    local_e4 = (float)(int)fVar10 + local_e4;
    fVar13 = (float)(int)((local_f4 + local_fc) * DAT_180380ac0 + fVar11);
    fVar10 = (local_f8 - fVar2) - (fVar12 + fVar12);
    fVar11 = 0.0;
    if (0.0 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar11 = ((fVar11 - local_f0) - param_4) * *(float *)(lVar4 + 0xd80);
    local_e8 = 0.0;
    if (0.0 <= fVar11) {
      local_e8 = fVar11;
    }
    local_e8 = local_e8 + fVar12 + fVar2;
    *(float *)(lVar5 + 0x120) = local_e8 + local_f0;
    uVar9 = FUN_18026a6a0(0x1c,uVar9);
    if (local_f0 <= 0.0) {
      if (*(char *)(lVar4 + 0x2858) != '\0') {
        FUN_180287bb0(&DAT_18037ffb4);
      }
      if (0.0 < fVar1) {
        local_120 = CONCAT44(local_120._4_4_,fVar1);
        local_128 = CONCAT44(local_128._4_4_,uVar9);
        FUN_180294d60(*(undefined8 *)(lVar5 + 0x2c8),fVar2,fVar6,fVar13);
      }
    }
    else {
      fVar12 = local_e8 - *(float *)(lVar4 + 0xcd4);
      fVar11 = local_e8 + local_f0 + param_4 + *(float *)(lVar4 + 0xcd4);
      if ((fVar2 < fVar12) && (0.0 < fVar1)) {
        local_120 = CONCAT44(local_120._4_4_,fVar1);
        local_128._0_4_ = uVar9;
        FUN_180294d60(*(undefined8 *)(lVar5 + 0x2c8),fVar2,fVar12,fVar13);
      }
      if ((fVar11 < fVar6) && (0.0 < fVar1)) {
        local_120 = CONCAT44(local_120._4_4_,fVar1);
        local_128._0_4_ = uVar9;
        FUN_180294d60(*(undefined8 *)(lVar5 + 0x2c8),fVar11,fVar6,fVar13);
      }
      if (*(char *)(lVar4 + 0x2858) != '\0') {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar3 + 0xec0);
        *(undefined **)(lVar3 + 0x2880) = &DAT_18037ffb4;
        *(undefined8 *)(lVar3 + 0x2888) = 0;
      }
      local_104 = fVar7 + *(float *)(lVar4 + 0xcd8);
      local_118 = &local_f0;
      local_108 = fVar6;
      local_128 = param_2;
      local_120 = param_3;
      FUN_18026bd00(*(undefined8 *)(lVar5 + 0x2c8),&local_e8,&local_108,fVar6);
    }
  }
  return;
}


