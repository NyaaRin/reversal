// 0x18026c700  FUN_18026c700
// size=1817 thunk=false
// signature: undefined FUN_18026c700()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18026c700(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_258 [32];
  float *local_238;
  float *local_230;
  undefined4 local_228;
  float local_218;
  float local_214;
  undefined8 local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  longlong local_1d0;
  byte *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  fVar19 = (float)param_2;
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_210 = param_1;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar11 = DAT_180380d30;
  fVar10 = DAT_180380bb0;
  if (10 < param_3) {
    param_3 = 0;
  }
  local_1d0 = *(longlong *)(lVar4 + 0xec0);
  plVar18 = *(longlong **)(local_1d0 + 0x2060);
  pbVar15 = *(byte **)(local_1d0 + 0x1260);
  plVar17 = plVar18 + *(int *)(local_1d0 + 0x2058);
  local_1c8 = pbVar15;
  local_1c0 = plVar17;
  if (plVar18 != plVar17) {
    do {
      if ((param_3 < 0xb) && ((*pbVar15 & 2) == 0)) {
        lVar4 = *(longlong *)(pbVar15 + 0x2b0);
        fVar26 = *(float *)(pbVar15 + 0x54);
        lVar5 = *plVar18;
        lVar16 = (longlong)
                 (*(int *)(*(longlong *)(lVar4 + 0x78) +
                          (ulonglong)(*(uint *)(lVar4 + 0xec) & 0x7ffff) * 4) << 0xc) >> 0xc;
        lVar13 = (longlong)(int)param_3;
        fVar25 = (float)(&DAT_180337b88)[lVar13 * 6];
        fVar27 = local_210._4_4_ - (float)(&DAT_180337b94)[lVar13 * 6];
        fVar2 = (float)(&DAT_180337b8c)[lVar13 * 6];
        fVar28 = (float)local_210 - (float)(&DAT_180337b90)[lVar13 * 6];
        fVar24 = (float)*(ushort *)(*(longlong *)(lVar4 + 0x68) + lVar16 * 8) +
                 (float)(&DAT_180337b80)[lVar13 * 6];
        fVar20 = (float)*(ushort *)(*(longlong *)(lVar4 + 0x68) + 2 + lVar16 * 8) +
                 (float)(&DAT_180337b84)[lVar13 * 6];
        fVar23 = *(float *)(pbVar15 + 0x58) * fVar20;
        fVar20 = (fVar2 + fVar20) * *(float *)(pbVar15 + 0x58);
        _local_108 = CONCAT44(fVar23,fVar26 * fVar24);
        _fStack_100 = CONCAT44(fVar20,(fVar25 + fVar24) * fVar26);
        _local_f8 = CONCAT44(fVar23,(fVar24 + _DAT_180381140) * fVar26);
        _fStack_f0 = CONCAT44(fVar20,(fVar24 + _DAT_180381140 + fVar25) * fVar26);
        if ((fVar27 < *(float *)(lVar5 + 0xc) + *(float *)(lVar5 + 0x14)) &&
           (((*(float *)(lVar5 + 0xc) < (fVar2 + fVar11) * fVar19 + fVar27 &&
             (fVar28 < *(float *)(lVar5 + 8) + *(float *)(lVar5 + 0x10))) &&
            (fVar26 = (fVar25 + fVar11) * fVar19 + fVar28, *(float *)(lVar5 + 8) < fVar26)))) {
          local_218 = fVar28;
          local_214 = fVar27;
          lVar13 = FUN_18026f7d0(lVar5,1,"##Foreground");
          lVar4 = *(longlong *)(pbVar15 + 0x28);
          lVar5 = *(longlong *)(pbVar15 + 0x30);
          local_1b8 = lVar4;
          local_1b0 = lVar5;
          FUN_1802926d0(lVar13,&local_1b8);
          local_228 = 0x30000000;
          local_230 = &fStack_f0;
          local_238 = &local_f8;
          local_208 = (fVar25 + fVar10) * fVar19 + fVar28;
          fVar20 = fVar19 * 0.0 + fVar27;
          fVar23 = (fVar2 + 0.0) * fVar19 + fVar27;
          local_200 = fVar28 + fVar19;
          local_204 = fVar23;
          local_1fc = fVar20;
          local_1a8 = lVar4;
          local_1a0 = lVar5;
          FUN_180295680(lVar13,&local_1a8,&local_200,&local_208);
          local_228 = 0x30000000;
          local_230 = &fStack_f0;
          local_238 = &local_f8;
          local_1f0 = fVar19 + fVar19 + fVar28;
          local_1f8 = fVar26;
          local_1f4 = fVar23;
          local_1ec = fVar20;
          local_198 = lVar4;
          local_190 = lVar5;
          FUN_180295680(lVar13,&local_198,&local_1f0,&local_1f8);
          fVar26 = fVar19 * fVar25 + fVar28;
          fVar25 = fVar19 * fVar2 + fVar27;
          local_1e8 = fVar26;
          local_1e4 = fVar25;
          if ((lVar5 == *(longlong *)(lVar13 + 0x78)) && (lVar4 == *(longlong *)(lVar13 + 0x70))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
            local_188 = lVar4;
            local_180 = lVar5;
            FUN_1802926d0(lVar13,&local_188);
          }
          FUN_1802927a0(lVar13,6,4);
          local_238 = &fStack_f0;
          local_230 = (float *)CONCAT44(local_230._4_4_,0xff000000);
          FUN_180292880(lVar13,&local_218,&local_1e8,&local_f8);
          if (bVar9) {
            iVar3 = *(int *)(lVar13 + 0xb0);
            iVar12 = iVar3 + -1;
            *(int *)(lVar13 + 0xb0) = iVar12;
            if (iVar12 == 0) {
              local_178 = 0;
              uStack_170 = 0;
              puVar14 = &local_178;
            }
            else {
              puVar1 = (undefined8 *)(*(longlong *)(lVar13 + 0xb8) + ((longlong)iVar3 + -2) * 0x10);
              puVar14 = &local_138;
              local_138 = *puVar1;
              uStack_130 = puVar1[1];
            }
            uVar6 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar7 = *(undefined4 *)(puVar14 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar14 + 0xc);
            *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)puVar14;
            *(undefined4 *)(lVar13 + 0x74) = uVar6;
            *(undefined4 *)(lVar13 + 0x78) = uVar7;
            *(undefined4 *)(lVar13 + 0x7c) = uVar8;
            FUN_180292400(lVar13);
          }
          local_1e0 = fVar26;
          local_1dc = fVar25;
          if ((lVar5 == *(longlong *)(lVar13 + 0x78)) && (lVar4 == *(longlong *)(lVar13 + 0x70))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
            local_168 = lVar4;
            local_160 = lVar5;
            FUN_1802926d0(lVar13,&local_168);
          }
          FUN_1802927a0(lVar13,6,4);
          local_238 = &fStack_100;
          local_230 = (float *)CONCAT44(local_230._4_4_,0xffffffff);
          FUN_180292880(lVar13,&local_218,&local_1e0,&local_108);
          if (bVar9) {
            iVar3 = *(int *)(lVar13 + 0xb0);
            iVar12 = iVar3 + -1;
            *(int *)(lVar13 + 0xb0) = iVar12;
            if (iVar12 == 0) {
              local_158 = 0;
              uStack_150 = 0;
              puVar14 = &local_158;
            }
            else {
              puVar1 = (undefined8 *)(*(longlong *)(lVar13 + 0xb8) + ((longlong)iVar3 + -2) * 0x10);
              puVar14 = &local_128;
              local_128 = *puVar1;
              uStack_120 = puVar1[1];
            }
            uVar6 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar7 = *(undefined4 *)(puVar14 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar14 + 0xc);
            *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)puVar14;
            *(undefined4 *)(lVar13 + 0x74) = uVar6;
            *(undefined4 *)(lVar13 + 0x78) = uVar7;
            *(undefined4 *)(lVar13 + 0x7c) = uVar8;
            FUN_180292400(lVar13);
          }
          if (param_3 - 8 < 2) {
            fVar26 = fmodf((float)*(double *)(local_1d0 + 0x10) * DAT_180380f00,DAT_180380f70);
            auVar21._8_4_ = in_XMM1_Dc;
            auVar21._0_8_ = param_2;
            auVar21._12_4_ = in_XMM1_Dd;
            auVar22._4_12_ = auVar21._4_12_;
            auVar22._0_4_ = fVar19 * DAT_180380f40;
            local_230 = (float *)((ulonglong)local_230 & 0xffffffff00000000);
            local_1d8 = fVar19 * DAT_180380fe0 + fVar28;
            local_1d4 = fVar27 - fVar19 * fVar10;
            local_238._0_4_ = fVar26 + _DAT_180380f08;
            FUN_1802941e0(lVar13,&local_1d8,auVar22._0_8_,fVar26);
            local_230 = (float *)((ulonglong)local_230 & 0xffffffff00000000);
            local_238 = (float *)CONCAT44(local_238._4_4_,fVar19 * DAT_180380e28);
            FUN_1802929d0(lVar13,*(undefined8 *)(lVar13 + 0x58),*(undefined4 *)(lVar13 + 0x50),
                          0xffffffff);
            *(undefined4 *)(lVar13 + 0x50) = 0;
          }
          iVar3 = *(int *)(lVar13 + 0xb0);
          iVar12 = iVar3 + -1;
          *(int *)(lVar13 + 0xb0) = iVar12;
          if (iVar12 == 0) {
            local_148 = 0;
            puVar14 = &local_148;
            uStack_140 = 0;
          }
          else {
            puVar1 = (undefined8 *)(*(longlong *)(lVar13 + 0xb8) + ((longlong)iVar3 + -2) * 0x10);
            puVar14 = &local_118;
            local_118 = *puVar1;
            uStack_110 = puVar1[1];
          }
          uVar6 = *(undefined4 *)((longlong)puVar14 + 4);
          uVar7 = *(undefined4 *)(puVar14 + 1);
          uVar8 = *(undefined4 *)((longlong)puVar14 + 0xc);
          *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)puVar14;
          *(undefined4 *)(lVar13 + 0x74) = uVar6;
          *(undefined4 *)(lVar13 + 0x78) = uVar7;
          *(undefined4 *)(lVar13 + 0x7c) = uVar8;
          FUN_180292400(lVar13);
          pbVar15 = local_1c8;
          plVar17 = local_1c0;
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar17);
  }
  return;
}


