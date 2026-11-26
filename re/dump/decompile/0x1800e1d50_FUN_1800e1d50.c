// 0x1800e1d50  FUN_1800e1d50
// size=751 thunk=false
// signature: undefined FUN_1800e1d50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800e1d50(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  uint extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  uVar1 = FUN_180022110(*(undefined4 *)(param_1 + 0xc));
  fVar5 = DAT_180380980;
  if ((DAT_180380980 <= (float)(extraout_XMM0_Da & _DAT_1803817c0)) ||
     (DAT_180380980 <=
      (float)((uint)(*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) & _DAT_1803817c0))) {
    local_108 = *(undefined8 *)(param_2 + 8);
    local_f8 = *(undefined8 *)(param_1 + 8);
    local_100 = 0;
    local_f0 = 0;
    FUN_1802d3e70(&local_108,&local_d8,&local_e8,local_a8);
    FUN_1802d3e70(&local_f8,&local_c8,&local_b8,local_98);
    fVar7 = *(float *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar11 = fVar9 * local_e8 + fVar7 * local_d8;
    fVar10 = fVar9 * local_e0 + fVar7 * local_d0;
    fVar8 = fVar9 * local_e4 + fVar7 * local_d4;
    uVar1 = (*(code *)PTR_FUN_1803da018)(fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10);
    fVar9 = DAT_1803812ac;
    fVar7 = DAT_180381214;
    if (fVar5 <= extraout_XMM0_Da_00) {
      if ((((DAT_1803fa340 == 0) || (lVar2 = FUN_180016fb0("cl_forwardspeed"), lVar2 == 0)) ||
          (fVar5 = (float)FUN_180019700(lVar2), fVar5 <= DAT_180380bb0)) || (fVar9 < fVar5)) {
        fVar5 = fVar7;
      }
      local_114 = fVar5;
      fVar6 = fVar7;
      if (((DAT_1803fa340 == 0) || (lVar2 = FUN_180016fb0("cl_sidespeed"), lVar2 == 0)) ||
         ((fVar6 = (float)FUN_180019700(lVar2), DAT_180380bb0 < fVar6 && (fVar6 <= fVar9)))) {
        fVar7 = fVar6;
      }
      local_10c = fVar7;
      local_114 = (float)((uint)fVar7 ^ DAT_1803817f0);
      local_118 = fVar8 * local_c4 + fVar11 * local_c8 + fVar10 * local_c0;
      local_110 = (float)((uint)fVar5 ^ DAT_1803817f0);
      fVar9 = fVar8 * local_b4 + fVar11 * local_b8 + fVar10 * local_b0;
      pfVar4 = &local_110;
      if ((float)((uint)fVar5 ^ DAT_1803817f0) <= local_118) {
        pfVar4 = &local_118;
      }
      pfVar3 = &local_114;
      if (local_118 <= fVar5) {
        pfVar3 = pfVar4;
      }
      *(float *)(param_1 + 0x14) = *pfVar3;
      local_118 = fVar9;
      pfVar4 = &local_114;
      if (local_114 <= fVar9) {
        pfVar4 = &local_118;
      }
      pfVar3 = &local_10c;
      if (fVar9 <= fVar7) {
        pfVar3 = pfVar4;
      }
      fVar5 = *pfVar3;
      *(float *)(param_1 + 0x18) = fVar5;
      return CONCAT71((uint7)(uint3)((uint)fVar5 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}


