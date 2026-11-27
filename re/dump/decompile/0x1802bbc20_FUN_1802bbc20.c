// 0x1802bbc20  FUN_1802bbc20
// size=920 thunk=false
// signature: undefined FUN_1802bbc20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bbc20(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  fVar1 = DAT_180380bb0;
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  fVar11 = 0.0;
  if ((0.0 <= param_5) && (fVar11 = DAT_180380bb0, param_5 <= DAT_180380bb0)) {
    fVar11 = param_5;
  }
  fStack_dc = (float)((ulonglong)param_2 >> 0x20);
  fVar2 = fStack_dc;
  fVar6 = (float)param_3;
  fVar7 = (float)param_2 + fVar6;
  local_e8._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar10 = fVar6 + DAT_180380d30;
  uVar4 = (uint)(fVar11 * DAT_1803811c8 + DAT_180380ac0);
  _local_e0 = CONCAT44(fStack_dc,fVar7 + DAT_180380bb0);
  local_f8 = (fVar7 + DAT_180380bb0) - fVar10;
  fVar11 = fStack_dc - (local_e8._4_4_ + DAT_180380bb0);
  uVar5 = uVar4 << 0x18;
  local_f0 = fStack_dc + local_e8._4_4_ + DAT_180380bb0;
  local_e8 = param_3;
  if ((uVar4 & 0xff) != 0) {
    local_f4 = fVar11;
    local_d8 = local_f8;
    local_d4 = local_f0;
    FUN_18020dc30(param_1 + 0x50,&local_d8);
    FUN_18020dc30(param_1 + 0x50,&local_f8);
    FUN_18020dc30(param_1 + 0x50,&local_e0);
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar5);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  puVar3 = (undefined8 *)(param_1 + 0x58);
  local_d4 = fVar2;
  local_f8 = fVar7 - fVar6;
  fVar9 = fVar2 - local_e8._4_4_;
  fVar8 = fVar2 + local_e8._4_4_;
  _local_e0 = CONCAT44(fVar8,fVar7 - fVar6);
  if (uVar5 != 0) {
    local_f4 = fVar9;
    local_d8 = fVar7;
    FUN_18020dc30(param_1 + 0x50,&local_e0);
    FUN_18020dc30(param_1 + 0x50,&local_f8);
    FUN_18020dc30(param_1 + 0x50,&local_d8);
    FUN_1802938c0(param_1,*puVar3,*(undefined4 *)(param_1 + 0x50),uVar5 | 0xffffff);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  local_d4 = fVar2;
  local_f4 = local_f0;
  fVar7 = ((float)param_2 + param_4) - fVar6;
  local_d8 = fVar7 - fVar1;
  local_f8 = local_d8 + fVar10;
  _local_e0 = CONCAT44(fVar11,local_f8);
  if ((uVar4 & 0xff) != 0) {
    FUN_18020dc30(param_1 + 0x50,&local_e0);
    FUN_18020dc30(param_1 + 0x50,&local_f8);
    FUN_18020dc30(param_1 + 0x50,&local_d8);
    FUN_1802938c0(param_1,*puVar3,*(undefined4 *)(param_1 + 0x50),uVar5);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  local_f8 = fVar7 + fVar6;
  local_d4 = fVar2;
  _local_e0 = CONCAT44(fVar9,fVar7 + fVar6);
  if (uVar5 != 0) {
    local_f4 = fVar8;
    local_d8 = fVar7;
    FUN_18020dc30(param_1 + 0x50,&local_e0);
    FUN_18020dc30(param_1 + 0x50,&local_f8);
    FUN_18020dc30(param_1 + 0x50,&local_d8);
    FUN_1802938c0(param_1,*puVar3,*(undefined4 *)(param_1 + 0x50),uVar5 | 0xffffff);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


