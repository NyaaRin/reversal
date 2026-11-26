// 0x180194360  FUN_180194360
// size=1087 thunk=false
// signature: undefined FUN_180194360()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180194360(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  BOOL BVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined **local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 *puStack_140;
  undefined8 local_138;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_118;
  undefined8 local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_b8 [64];
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  if (((DAT_1803fa610 != (longlong *)0x0) && (DAT_1803fa668 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 != '\0')) {
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
    puVar9 = (undefined8 *)(*pcVar4)(DAT_1803fa360,uVar7);
    if (puVar9 != (undefined8 *)0x0) {
      local_114 = 0;
      local_118 = 0;
      (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_118);
      FUN_1802d4050(&local_118,&local_128);
      pfVar10 = (float *)FUN_18001c430(puVar9,&local_1e8);
      fVar5 = DAT_1803812a4;
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      local_c8 = 0;
      local_f8 = (local_128 * DAT_1803812a4 + fVar1) - fVar1;
      local_f4 = (local_124 * DAT_1803812a4 + fVar2) - fVar2;
      local_f0 = (local_120 * DAT_1803812a4 + fVar3) - fVar3;
      local_1c0 = fVar1;
      local_1bc = fVar2;
      local_1b8 = fVar3;
      fVar11 = (float)(*(code *)PTR_FUN_1803da018)
                                (local_f8 * local_f8 + local_f4 * local_f4 + local_f0 * local_f0);
      local_bf = fVar11 != 0.0;
      local_d4 = 0;
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 1;
      local_e4 = 0;
      local_e8 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      puStack_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_1b0 = vftable_CTraceFilter;
      local_1f8 = &local_198;
      local_1a8 = puVar9;
      local_108 = fVar1;
      local_104 = fVar2;
      local_100 = fVar3;
      (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_108,0x46004003,&local_1b0);
      if (((puStack_140 == (undefined8 *)0x0) || (puStack_140 == puVar9)) ||
         (puStack_140 < (undefined8 *)0x10000)) {
        local_78 = 0;
        local_1dc = 0x41800000;
        local_1d8 = 0x41800000;
        local_1d4 = 0x41800000;
        local_1d0 = 0xc1800000;
        local_1cc = 0xc1800000;
        local_1c8 = 0xc1800000;
        local_1e8 = local_128 * fVar5 + fVar1;
        local_1e4 = local_124 * fVar5 + fVar2;
        local_1e0 = local_120 * fVar5 + fVar3;
        local_1f8 = (undefined8 *)&local_1dc;
        FUN_18001fe90(local_b8,&local_1c0,&local_1e8,&local_1d0);
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        puStack_140 = (undefined8 *)0x0;
        local_138 = 0;
        local_1f8 = &local_198;
        (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_b8,0x46004003,&local_1b0);
        if (puStack_140 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if (puStack_140 == puVar9) {
          return (undefined8 *)0x0;
        }
      }
      puVar9 = puStack_140;
      BVar8 = IsBadReadPtr(puStack_140,8);
      if ((BVar8 == 0) && (BVar8 = IsBadReadPtr((void *)*puVar9,8), BVar8 == 0)) {
        return puVar9;
      }
    }
  }
  return (undefined8 *)0x0;
}


