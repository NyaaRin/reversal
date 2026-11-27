// 0x1800dd490  FUN_1800dd490
// size=735 thunk=false
// signature: undefined FUN_1800dd490()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1800dd490(double param_1,float *param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  uint7 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_58 = 0;
  uStack_50 = 0;
  FUN_1800dd250(&local_58,SUB84(param_1 + _DAT_180380f58,0));
  iVar6 = 0;
  do {
    uStack_50._4_4_ = local_58._4_4_ ^ uStack_50._4_4_;
    uVar8 = local_58._4_4_ ^ (uint)uStack_50 ^ (uint)local_58;
    uVar3 = local_58._4_4_ << 9 ^ (uint)local_58 ^ uStack_50._4_4_ ^
            (uint)uStack_50 ^ (uint)local_58;
    uVar5 = (uStack_50._4_4_ >> 0x15 | uStack_50._4_4_ << 0xb) ^ uVar8;
    uVar1 = uVar5 ^ (uint)local_58 ^ uStack_50._4_4_;
    uVar7 = uVar3 ^ uVar8;
    uVar5 = (uVar5 >> 0x15 | uVar5 << 0xb) ^ uVar7;
    uVar3 = uVar8 << 9 ^ uVar1 ^ uVar3;
    uVar1 = uVar5 ^ uVar1;
    uVar9 = uVar3 ^ uVar7;
    uVar3 = uVar7 << 9 ^ uVar1 ^ uVar3;
    uVar5 = (uVar5 >> 0x15 | uVar5 << 0xb) ^ uVar9;
    uVar1 = uVar5 ^ uVar1;
    uVar4 = uVar3 ^ uVar9;
    dVar10 = (((double)((uVar7 * 5 >> 0x19 | uVar7 * 0x280) * 9 >> 5) * DAT_180381008 +
              (double)((uVar9 * 5 >> 0x19 | uVar9 * 0x280) * 9 >> 6)) * DAT_180380998 +
             ((double)((local_58._4_4_ * 5 >> 0x19 | local_58._4_4_ * 0x280) * 9 >> 5) *
              DAT_180381008 + (double)((uVar8 * 5 >> 0x19 | uVar8 * 0x280) * 9 >> 6)) *
             DAT_180380998) - DAT_180380d08;
    uVar7 = (uVar5 >> 0x15 | uVar5 << 0xb) ^ uVar4;
    uVar5 = uVar7 ^ uVar1;
    uVar3 = uVar9 << 9 ^ uVar1 ^ uVar3;
    uVar9 = uVar3 ^ uVar4;
    uVar3 = uVar4 << 9 ^ uVar5 ^ uVar3;
    uVar1 = (uVar7 >> 0x15 | uVar7 << 0xb) ^ uVar9;
    uVar5 = uVar1 ^ uVar5;
    uVar8 = uVar3 ^ uVar9;
    uVar7 = (uVar1 >> 0x15 | uVar1 << 0xb) ^ uVar8;
    local_58._0_4_ = uVar7 ^ uVar5;
    uVar3 = uVar9 << 9 ^ uVar5 ^ uVar3;
    uVar1 = uVar3 ^ uVar8;
    uVar3 = uVar8 << 9 ^ (uint)local_58 ^ uVar3;
    uVar5 = (uVar7 >> 0x15 | uVar7 << 0xb) ^ uVar1;
    local_58._0_4_ = uVar5 ^ (uint)local_58;
    uStack_50._4_4_ = uVar5 >> 0x15 | uVar5 << 0xb;
    uStack_50._0_4_ = uVar1 << 9 ^ uVar3;
    local_58._4_4_ = uVar3 ^ uVar1;
    uVar1 = (uVar1 * 5 >> 0x19 | uVar1 * 0x280) * 9;
    dVar11 = (((double)((uVar4 * 5 >> 0x19 | uVar4 * 0x280) * 9 >> 5) * DAT_180381008 +
              (double)((uVar9 * 5 >> 0x19 | uVar9 * 0x280) * 9 >> 6)) * DAT_180380998 +
             ((double)((uVar8 * 5 >> 0x19 | uVar8 * 0x280) * 9 >> 5) * DAT_180381008 +
             (double)(uVar1 >> 6)) * DAT_180380998) - DAT_180380d08;
    uVar2 = (uint7)(uint3)(uVar1 >> 0xe);
    if (dVar11 * dVar11 + dVar10 * dVar10 <= DAT_180380d08) {
      *param_2 = (float)dVar10;
      *param_3 = (float)dVar11;
      if (param_4 != (uint *)0x0) {
        *param_4 = (uint)local_58;
        param_4[1] = local_58._4_4_;
        param_4[2] = (uint)uStack_50;
        param_4[3] = uStack_50._4_4_;
      }
      return CONCAT71(uVar2,1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  return (ulonglong)uVar2 << 8;
}


