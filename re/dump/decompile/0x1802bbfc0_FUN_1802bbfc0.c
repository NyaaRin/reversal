// 0x1802bbfc0  FUN_1802bbfc0
// size=9575 thunk=false
// signature: undefined FUN_1802bbfc0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802bbfc0(char *param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  longlong lVar9;
  undefined8 *_Src;
  char cVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  char *pcVar16;
  size_t _Size;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar36;
  undefined8 uVar35;
  float *pfVar37;
  undefined8 uVar38;
  byte local_278;
  char local_275;
  float local_274;
  undefined8 local_270;
  float local_268;
  float local_264;
  undefined8 local_260;
  undefined8 local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  undefined8 local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined8 local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  uint local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  uint local_1c8;
  float local_1c0 [3];
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  undefined1 local_198 [16];
  undefined8 local_188;
  uint local_180;
  float local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined8 local_168;
  undefined1 local_158 [16];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  int local_138;
  char *local_130;
  float *local_128 [2];
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_100 [192];
  
  pfVar37 = local_1c0 + 2;
  local_258 = 0x10;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_188 = param_4;
  local_130 = param_1;
  local_128[0] = param_2;
  if (*(char *)(lVar18 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_270 = 0xec0;
  lVar20 = *(longlong *)(lVar18 + 0xec0);
  local_108 = lVar20;
  if (*(char *)(lVar18 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar18 + 0xec0);
  uVar19 = *(ulonglong *)(lVar17 + 0x1520);
  *(undefined1 *)(uVar19 + 0xce) = 1;
  lVar17 = *(longlong *)(lVar17 + 0x1520);
  if (*(char *)(lVar17 + 0xd1) != '\0') {
    return uVar19 & 0xffffffffffffff00;
  }
  lVar3 = *(longlong *)(lVar17 + 0x2c8);
  fVar23 = (float)FUN_18027f9c0();
  uVar21 = (*(uint *)(lVar20 + 0x1ec4) | *(uint *)(lVar20 + 0x1eb8)) & 0x800;
  *(undefined8 *)(lVar20 + 0x1ec0) = 0;
  FUN_18027abf0(local_130);
  local_138 = *(int *)(lVar20 + 0x2650);
  if (local_138 == 0) {
    *(undefined4 *)(lVar20 + 0x2650) =
         *(undefined4 *)
          (*(longlong *)(lVar17 + 0x110) + -4 + (longlong)*(int *)(lVar17 + 0x108) * 4);
  }
  FUN_18027fc30();
  if ((param_3 >> 8 & 1) == 0) {
    param_3 = param_3 | 0x10;
  }
  if ((param_3 & 8) == 0) {
    FUN_1802bf9e0(param_2,param_3);
  }
  if ((param_3 & 0x6000000) == 0) {
    uVar22 = 0xa900000;
    if ((*(uint *)(lVar20 + 0x264c) & 0x6000000) != 0) {
      uVar22 = *(uint *)(lVar20 + 0x264c);
    }
    param_3 = param_3 | uVar22 & 0x6000000;
  }
  if ((param_3 & 0x18000000) == 0) {
    uVar22 = 0xa900000;
    if ((*(uint *)(lVar20 + 0x264c) & 0x18000000) != 0) {
      uVar22 = *(uint *)(lVar20 + 0x264c);
    }
    param_3 = param_3 | uVar22 & 0x18000000;
  }
  if ((param_3 & 8) == 0) {
    param_3 = param_3 | *(uint *)(lVar20 + 0x264c) & 0x40000;
  }
  local_1dc = param_3 & 2;
  if (((param_3 >> 0x12 & 1) == 0) || (local_275 = '\x01', (param_3 & 2) != 0)) {
    local_275 = '\0';
  }
  local_260 = *(undefined8 *)(lVar17 + 0x118);
  fVar27 = (float)local_260;
  cVar10 = *(char *)(lVar18 + local_258);
  local_168 = local_260;
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar18 + local_258);
  }
  fVar33 = *(float *)(lVar20 + 0xcdc);
  fVar30 = *(float *)(*(longlong *)(local_270 + lVar18) + 0xcc8);
  fVar32 = fVar30 + fVar30 + *(float *)(*(longlong *)(local_270 + lVar18) + 0x1238);
  fVar23 = fVar23 - (float)(byte)(local_275 + 1) * (fVar32 + fVar33);
  fVar30 = fVar32;
  if (fVar32 <= fVar23) {
    fVar30 = fVar23;
  }
  fVar23 = fVar30 + fVar27 + fVar33;
  local_158 = ZEXT416((uint)fVar23);
  local_118 = ZEXT416((uint)(fVar23 + fVar32 + fVar33));
  local_210 = 0x10;
  if (local_1dc != 0) {
    local_210 = 0xc;
  }
  local_1a8 = (float)(int)(fVar32 * DAT_180380a3c);
  local_268 = fVar30;
  local_264 = fVar32;
  memcpy(local_100,param_2,local_210);
  fVar8 = DAT_180380bb0;
  fVar34 = DAT_180380ac0;
  local_24c = fVar30 * DAT_180380ac0;
  local_1c0[1] = 0.0;
  local_1d0 = fVar30 * DAT_1803809e4;
  fVar29 = local_24c - local_1d0;
  local_1e0 = (fVar30 + fVar32) * DAT_180380ac0 + fVar27;
  local_1e4 = local_24c + local_260._4_4_;
  local_1c0[0] = fVar29 - (float)(int)(fVar30 * _DAT_1803809ac);
  local_244 = local_1c0[0] * _DAT_18038137c;
  local_1f8 = local_1c0[0] * DAT_18038135c;
  local_200 = local_1c0[0] * _DAT_180380b58;
  fVar23 = *param_2;
  local_1c8 = param_3 & 0x8000000;
  fVar33 = param_2[1];
  local_274 = param_2[2];
  local_240 = fVar33;
  local_23c = local_274;
  local_238 = local_274;
  local_228 = fVar29;
  local_220 = fVar23;
  local_21c = fVar33;
  local_218 = fVar23;
  local_1f4 = local_244;
  local_1e8 = local_1f8;
  local_1d8 = local_1e0;
  local_1d4 = local_1e4;
  local_148 = local_1f8;
  local_144 = local_200;
  if ((param_3 & 0x8000000) == 0) {
    local_198 = ZEXT416((uint)fVar23);
    local_230._0_4_ = fVar33;
    if ((param_3 >> 0x1c & 1) != 0) {
      FUN_180269040();
      local_218 = local_220;
      local_238 = local_23c;
      local_21c = local_240;
    }
  }
  else {
    fVar32 = local_274;
    fVar30 = fVar33;
    fVar24 = DAT_180381384;
    if (local_274 <= fVar33) {
      fVar32 = fVar33;
      fVar30 = local_274;
      fVar24 = 0.0;
    }
    local_274 = fVar23;
    if (fVar23 < fVar32) {
      fVar24 = DAT_180381358 - fVar24;
      local_274 = fVar32;
      fVar32 = fVar23;
    }
    fVar23 = fVar32;
    if (fVar30 <= fVar32) {
      fVar23 = fVar30;
    }
    fVar33 = (local_274 - fVar23) / (local_274 + DAT_180380924);
    fVar23 = (float)((uint)((fVar32 - fVar30) /
                            ((local_274 - fVar23) * DAT_180380f40 + DAT_180380924) + fVar24) &
                    _DAT_1803817c0);
    local_198 = ZEXT416((uint)fVar23);
    local_230._0_4_ = fVar33;
    if (cVar10 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)(local_270 + lVar18);
    if (*(int *)(lVar17 + 0x2654) == *(int *)(lVar17 + 0x2650)) {
      local_1c0[2] = *param_2;
      local_1b4 = param_2[1];
      local_1b0 = param_2[2];
      local_1ac = 0;
      iVar12 = FUN_180268ed0(pfVar37);
      if (*(int *)(lVar17 + 0x2660) == iVar12) {
        if ((fVar33 == 0.0) || ((fVar23 == 0.0 && (*(float *)(lVar17 + 0x2658) == fVar8)))) {
          fVar23 = *(float *)(lVar17 + 0x2658);
          local_198 = ZEXT416((uint)fVar23);
        }
        if (local_274 == 0.0) {
          fVar33 = *(float *)(lVar17 + 0x265c);
          local_230._0_4_ = fVar33;
        }
      }
    }
  }
  bVar5 = false;
  local_278 = 0;
  bVar7 = false;
  bVar6 = false;
  FUN_180279080(2,1);
  fVar30 = local_268;
  if ((param_3 >> 0x1a & 1) == 0) {
    if ((param_3 >> 0x19 & 1) == 0) goto LAB_1802bc9a8;
    local_1f8 = local_268;
    local_1f4 = local_268;
    FUN_1802ac3c0(&DAT_1803801ec,&local_1f8);
    cVar10 = *(char *)(lVar18 + local_258);
    if (cVar10 == '\0') {
      __dyn_tls_on_demand_init();
      cVar10 = *(char *)(lVar18 + local_258);
    }
    iVar12 = *(int *)(*(longlong *)(local_270 + lVar18) + 0x1594);
    fVar32 = local_260._4_4_;
    if (((iVar12 != 0) && (iVar12 == *(int *)(*(longlong *)(local_270 + lVar18) + 0x1ef8))) &&
       (uVar21 == 0)) {
      fVar29 = (*(float *)(lVar20 + 0x100) - fVar27) / (fVar30 - fVar8);
      if (0.0 <= fVar29) {
        fVar33 = fVar8;
        if (fVar29 <= fVar8) {
          fVar33 = fVar29;
        }
      }
      else {
        fVar33 = 0.0;
      }
      fVar30 = (*(float *)(lVar20 + 0x104) - local_260._4_4_) / (fVar30 - fVar8);
      if (0.0 <= fVar30) {
        local_274 = fVar8;
        if (fVar30 <= fVar8) {
          local_274 = fVar30;
        }
      }
      else {
        local_274 = 0.0;
      }
      local_274 = fVar8 - local_274;
      local_230._0_4_ = fVar33;
      if (cVar10 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar17 = *(longlong *)(local_270 + lVar18);
      if (*(int *)(lVar17 + 0x2654) == *(int *)(lVar17 + 0x2650)) {
        local_1f8 = *param_2;
        local_1f4 = param_2[1];
        local_1f0 = param_2[2];
        local_1ec = 0;
        iVar12 = FUN_180268ed0(&local_1f8);
        if (*(int *)(lVar17 + 0x2660) == iVar12) {
          fVar23 = *(float *)(lVar17 + 0x2658);
          local_198 = ZEXT416((uint)fVar23);
        }
      }
      bVar5 = true;
      local_278 = 1;
      fVar30 = local_268;
    }
    if ((param_3 & 8) == 0) {
      FUN_1802819f0();
    }
    if (*(char *)(lVar18 + local_258) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar29 = local_264;
    local_1f8 = local_264;
    lVar17 = *(longlong *)(local_270 + lVar18);
    *(undefined1 *)(*(longlong *)(lVar17 + 0x1520) + 0xce) = 1;
    lVar17 = *(longlong *)(lVar17 + 0x1520);
    *(undefined4 *)(lVar17 + 0x118) = local_158._0_4_;
    *(float *)(lVar17 + 0x11c) = fVar32;
    *(undefined1 *)(lVar17 + 0x159) = 1;
    local_1f4 = fVar30;
    FUN_1802ac3c0(&DAT_1803801e8,&local_1f8);
    if (*(char *)(lVar18 + local_258) == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar12 = *(int *)(*(longlong *)(local_270 + lVar18) + 0x1594);
    if (((iVar12 != 0) && (iVar12 == *(int *)(*(longlong *)(local_270 + lVar18) + 0x1ef8))) &&
       (uVar21 == 0)) {
      fVar24 = (*(float *)(lVar20 + 0x104) - fVar32) / (fVar30 - fVar8);
      if (0.0 <= fVar24) {
        bVar7 = true;
        fVar23 = fVar8;
        if (fVar24 <= fVar8) {
          fVar23 = fVar24;
        }
        local_278 = 1;
        local_198 = ZEXT416((uint)fVar23);
      }
      else {
        fVar23 = 0.0;
        bVar7 = true;
        local_198 = ZEXT816(0);
        local_278 = 1;
      }
    }
  }
  else {
    local_1b4 = local_268;
    local_1c0[2] = local_268 + *(float *)(lVar20 + 0xcdc) + local_264;
    FUN_1802ac3c0(&DAT_1803801dc,pfVar37);
    if (*(char *)(lVar18 + local_258) == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar12 = *(int *)(*(longlong *)(local_270 + lVar18) + 0x1594);
    if (((iVar12 != 0) && (iVar12 == *(int *)(*(longlong *)(local_270 + lVar18) + 0x1ef8))) &&
       (uVar21 == 0)) {
      fVar30 = *(float *)(lVar20 + 0xae0) - local_1e0;
      fVar32 = *(float *)(lVar20 + 0xae4) - local_1e4;
      fVar34 = *(float *)(lVar20 + 0x100) - local_1e0;
      fVar24 = *(float *)(lVar20 + 0x104) - local_1e4;
      fVar27 = fVar32 * fVar32 + fVar30 * fVar30;
      bVar7 = bVar5;
      if (((fVar29 - fVar8) * (fVar29 - fVar8) <= fVar27) &&
         (fVar27 <= (local_24c + fVar8) * (local_24c + fVar8))) {
        fVar23 = atan2f(fVar24,fVar34);
        fVar23 = (fVar23 / DAT_180380e48) * DAT_180380ac0;
        if (fVar23 < 0.0) {
          fVar23 = fVar23 + fVar8;
        }
        bVar7 = true;
        local_198._4_4_ = extraout_XMM0_Db;
        local_198._0_4_ = fVar23;
        local_198._8_4_ = extraout_XMM0_Dc;
        local_198._12_4_ = extraout_XMM0_Dd;
        local_278 = 1;
      }
      fVar27 = ((float)((uint)fVar23 ^ DAT_1803817f0) + (float)((uint)fVar23 ^ DAT_1803817f0)) *
               DAT_180380e48;
      fVar25 = cosf(fVar27);
      fVar26 = sinf(fVar27);
      fVar29 = local_1c0[0];
      fVar27 = local_244;
      fVar28 = fVar25 * fVar30 - fVar26 * fVar32;
      local_1c0[2] = 0.0 - local_244;
      local_250 = local_244 - local_200;
      fVar32 = fVar25 * fVar32 + fVar26 * fVar30;
      fVar30 = fVar28 - local_1e8;
      local_1cc = local_1e8 - local_1e8;
      bVar5 = fVar30 * local_250 - (fVar32 - local_200) * local_1cc < 0.0;
      if (fVar30 * local_1c0[2] - (fVar32 - local_244) * (local_1c0[0] - local_1e8) < 0.0 == bVar5)
      {
        fVar30 = local_1e8 - local_1c0[0];
        fVar31 = local_200 - 0.0;
        if (bVar5 == (fVar28 - local_1c0[0]) * fVar31 - (fVar32 - 0.0) * fVar30 < 0.0) {
          fVar32 = fVar25 * fVar34 - fVar26 * fVar24;
          uVar19 = (ulonglong)(uint)fVar32;
          fVar33 = fVar25 * fVar24 + fVar26 * fVar34;
          local_230 = CONCAT44(fVar33,fVar32);
          bVar5 = (fVar32 - local_1e8) * local_250 - (fVar33 - local_200) * local_1cc < 0.0;
          if (((fVar32 - local_1e8) * local_1c0[2] -
               (fVar33 - local_244) * (local_1c0[0] - local_1e8) < 0.0 != bVar5) ||
             (bVar5 != (fVar32 - local_1c0[0]) * fVar31 - (fVar33 - 0.0) * fVar30 < 0.0)) {
            puVar14 = (ulonglong *)FUN_180268480(pfVar37,local_1c0,&local_1f8,&local_148,&local_230)
            ;
            uVar19 = *puVar14;
            fVar33 = (float)(uVar19 >> 0x20);
            local_230 = uVar19;
          }
          fVar29 = (float)uVar19 - fVar29;
          fVar32 = (fVar33 - 0.0) * fVar30;
          fVar33 = fVar31 * fVar30 - (fVar27 - 0.0) * fVar30;
          fVar30 = fVar8 - (fVar29 * fVar31 - fVar32) / fVar33;
          local_274 = DAT_180380948;
          if ((DAT_180380948 <= fVar30) && (local_274 = fVar8, fVar30 <= fVar8)) {
            local_274 = fVar30;
          }
          fVar27 = (fVar30 - (fVar32 - fVar29 * (fVar27 - 0.0)) / fVar33) / local_274;
          fVar33 = DAT_180380948;
          if ((DAT_180380948 <= fVar27) && (fVar33 = fVar8, fVar27 <= fVar8)) {
            fVar33 = fVar27;
          }
          bVar6 = true;
          local_278 = 1;
          local_230._0_4_ = fVar33;
        }
      }
      fVar27 = (float)local_168;
      fVar34 = DAT_180380ac0;
    }
    if ((param_3 & 8) == 0) {
      FUN_1802819f0();
    }
LAB_1802bc9a8:
    bVar5 = bVar6;
    fVar30 = local_268;
    fVar32 = local_260._4_4_;
    fVar29 = local_264;
  }
  lVar9 = local_258;
  lVar17 = local_270;
  if (local_275 != '\0') {
    if (*(char *)(lVar18 + local_258) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = local_270;
    lVar4 = *(longlong *)(lVar18 + local_270);
    *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar4 + 0x1520);
    *(undefined4 *)(lVar4 + 0x118) = local_118._0_4_;
    *(float *)(lVar4 + 0x11c) = fVar32;
    *(undefined1 *)(lVar4 + 0x159) = 1;
    local_1f8 = fVar29;
    local_1f4 = fVar30;
    FUN_1802ac3c0("alpha",&local_1f8);
    if (*(char *)(lVar18 + lVar9) == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar12 = *(int *)(*(longlong *)(lVar18 + lVar17) + 0x1594);
    if ((iVar12 != 0) && (iVar12 == *(int *)(*(longlong *)(lVar18 + lVar17) + 0x1ef8))) {
      fVar30 = (*(float *)(lVar20 + 0x104) - fVar32) / (fVar30 - fVar8);
      if (0.0 <= fVar30) {
        fVar32 = fVar8;
        if (fVar30 <= fVar8) {
          fVar32 = fVar30;
        }
      }
      else {
        fVar32 = 0.0;
      }
      local_278 = 1;
      param_2[3] = fVar8 - fVar32;
    }
  }
  if (*(char *)(lVar18 + lVar9) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar18 + lVar17);
  iVar12 = *(int *)(lVar17 + 0x2008);
  if (iVar12 < 2) {
    FUN_18027e9c0("Calling PopItemFlag() too many times!");
  }
  else {
    *(int *)(lVar17 + 0x2008) = iVar12 + -1;
    *(undefined4 *)(lVar17 + 0x1eb8) =
         *(undefined4 *)(*(longlong *)(lVar17 + 0x2010) + -8 + (longlong)iVar12 * 4);
  }
  if ((param_3 & 0x100) == 0) {
    FUN_18027f5b0();
    FUN_18027fc30();
  }
  local_250 = (float)(param_3 & 0x80);
  if (((param_3 & 0x80) == 0) && (pcVar16 = local_130, local_130 != (char *)0xffffffffffffffff)) {
    while (*pcVar16 != '\0') {
      pcVar1 = pcVar16 + 1;
      if (((*pcVar16 == '#') && (*pcVar1 == '#')) ||
         (pcVar16 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
    if (local_130 != pcVar16) {
      if ((param_3 & 0x100) != 0) {
        FUN_18027f5b0();
      }
      FUN_1802aa3c0(local_130,pcVar16,0);
    }
  }
  fVar32 = local_250;
  fVar30 = DAT_180380e28;
  if ((param_3 & 0x100) == 0) {
    FUN_180279080(4,1);
    local_13c = fVar8;
    if (local_1dc == (param_3 & 0x100)) {
      local_13c = param_2[3];
    }
    local_148 = *param_2;
    local_144 = param_2[1];
    local_140 = param_2[2];
    if (fVar32 != 0.0) {
      FUN_1802aaae0("Current");
    }
    fVar32 = fVar29 * fVar30;
    local_1f8 = fVar32;
    local_1f4 = fVar29 + fVar29;
    FUN_1802be530("##current",&local_148,param_3 & 0x18087042,&local_1f8);
    _Src = local_188;
    if (local_188 != (undefined8 *)0x0) {
      FUN_1802aaae0("Original");
      local_17c = fVar8;
      if (local_1dc == 0) {
        local_17c = *(float *)((longlong)_Src + 0xc);
      }
      local_188 = (undefined8 *)*_Src;
      local_180 = *(uint *)(_Src + 1);
      local_1f8 = fVar32;
      local_1f4 = fVar29 + fVar29;
      cVar10 = FUN_1802be530("##original",&local_188,param_3 & 0x18087042,&local_1f8);
      if (cVar10 != '\0') {
        memcpy(param_2,_Src,local_210);
        local_278 = 1;
      }
    }
    if (*(char *)(local_258 + lVar18) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)(local_270 + lVar18);
    iVar12 = *(int *)(lVar17 + 0x2008);
    if (iVar12 < 2) {
      FUN_18027e9c0("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(lVar17 + 0x2008) = iVar12 + -1;
      *(undefined4 *)(lVar17 + 0x1eb8) =
           *(undefined4 *)(*(longlong *)(lVar17 + 0x2010) + -8 + (longlong)iVar12 * 4);
    }
    FUN_18027fda0();
  }
  if ((bVar7) || (bVar5)) {
    if (local_1c8 == 0) {
      if ((param_3 >> 0x1c & 1) != 0) {
        *param_2 = fVar23;
        param_2[1] = fVar33;
        param_2[2] = local_274;
      }
    }
    else {
      FUN_180269040();
      *(undefined4 *)(lVar20 + 0x2654) = *(undefined4 *)(lVar20 + 0x2650);
      *(float *)(lVar20 + 0x2658) = fVar23;
      *(float *)(lVar20 + 0x265c) = fVar33;
      local_210 = *(size_t *)param_2;
      local_208 = param_2[2];
      local_204 = 0.0;
      uVar13 = FUN_180268ed0(&local_210);
      *(undefined4 *)(lVar20 + 0x2660) = uVar13;
    }
  }
  if ((param_3 & 0x20) == 0) {
    bVar6 = false;
    if (local_275 == '\0') {
      fVar32 = (float)local_158._0_4_;
    }
    else {
      fVar32 = (float)local_118._0_4_;
    }
    FUN_18027f8a0((fVar32 + fVar29) - fVar27);
    uVar21 = param_3 & 0x1988705a;
    if ((((param_3 >> 0x14 & 1) != 0) || ((param_3 & 0x700000) == 0)) &&
       (cVar10 = FUN_1802bac60("##rgb",param_2,uVar21 | 0x100004), cVar10 != '\0')) {
      if ((*(int *)(lVar20 + 0x1594) != 0) && (*(char *)(lVar20 + 0x15a1) == '\0')) {
        bVar6 = true;
      }
      local_278 = 1;
    }
    if (((param_3 >> 0x15 & 1) != 0) || ((param_3 & 0x700000) == 0)) {
      bVar11 = FUN_1802bac60("##hsv",param_2,uVar21 | 0x200004);
      local_278 = local_278 | bVar11;
    }
    if (((param_3 >> 0x16 & 1) != 0) || ((param_3 & 0x700000) == 0)) {
      bVar11 = FUN_1802bac60("##hex",param_2,uVar21 | 0x400004);
      local_278 = local_278 | bVar11;
    }
    FUN_18027f940();
    if ((bVar6) && ((param_3 >> 0x1b & 1) != 0)) {
      fVar29 = param_2[2];
      fVar27 = param_2[1];
      fVar32 = *param_2;
      fVar24 = DAT_180381384;
      fVar25 = fVar27;
      if (fVar29 <= fVar27) {
        fVar24 = 0.0;
        fVar25 = fVar29;
        fVar29 = fVar27;
      }
      fVar27 = fVar32;
      if (fVar32 < fVar29) {
        fVar24 = DAT_180381358 - fVar24;
        fVar27 = fVar29;
        fVar29 = fVar32;
      }
      fVar32 = fVar29;
      if (fVar25 <= fVar29) {
        fVar32 = fVar25;
      }
      if (((float)((uint)((fVar29 - fVar25) / ((fVar27 - fVar32) * DAT_180380f40 + DAT_180380924) +
                         fVar24) & _DAT_1803817c0) <= 0.0) && (0.0 < fVar23)) {
        if ((0.0 < fVar27) || (local_274 == fVar27)) {
          if ((fVar27 - fVar32) / (fVar27 + DAT_180380924) <= 0.0) {
            FUN_180269040(param_2 + 1,fVar33 * fVar34);
          }
        }
        else {
          FUN_180269040();
        }
      }
    }
  }
  fVar32 = local_218;
  fVar27 = local_21c;
  if (local_278 != 0) {
    if ((param_3 >> 0x1b & 1) == 0) {
      if ((param_3 >> 0x1c & 1) != 0) {
        fVar23 = *param_2;
        local_198 = ZEXT416((uint)fVar23);
        fVar33 = param_2[1];
        local_274 = param_2[2];
        local_230._0_4_ = fVar33;
        FUN_180269040();
        local_238 = local_23c;
        fVar32 = local_220;
        fVar27 = local_240;
      }
    }
    else {
      local_238 = param_2[2];
      fVar27 = param_2[1];
      fVar32 = *param_2;
      fVar33 = local_238;
      fVar23 = fVar27;
      fVar29 = DAT_180381384;
      if (local_238 <= fVar27) {
        fVar33 = fVar27;
        fVar23 = local_238;
        fVar29 = 0.0;
      }
      fVar24 = fVar33;
      local_274 = fVar32;
      if (fVar32 < fVar33) {
        fVar29 = DAT_180381358 - fVar29;
        fVar24 = fVar32;
        local_274 = fVar33;
      }
      fVar25 = fVar24;
      if (fVar23 <= fVar24) {
        fVar25 = fVar23;
      }
      fVar33 = (local_274 - fVar25) / (local_274 + DAT_180380924);
      fVar23 = (float)((uint)((fVar24 - fVar23) /
                              ((local_274 - fVar25) * DAT_180380f40 + DAT_180380924) + fVar29) &
                      _DAT_1803817c0);
      local_198 = ZEXT416((uint)fVar23);
      local_230._0_4_ = fVar33;
      if (*(char *)(local_258 + lVar18) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *(longlong *)(lVar18 + local_270);
      if (*(int *)(lVar18 + 0x2654) == *(int *)(lVar18 + 0x2650)) {
        local_210 = *(size_t *)param_2;
        local_208 = param_2[2];
        local_204 = 0.0;
        iVar12 = FUN_180268ed0(&local_210);
        if (*(int *)(lVar18 + 0x2660) == iVar12) {
          if ((fVar33 == 0.0) || ((fVar23 == 0.0 && (*(float *)(lVar18 + 0x2658) == fVar8)))) {
            fVar23 = *(float *)(lVar18 + 0x2658);
            local_198 = ZEXT416((uint)fVar23);
          }
          if (local_274 == 0.0) {
            fVar33 = *(float *)(lVar18 + 0x265c);
            local_230._0_4_ = fVar33;
          }
        }
      }
    }
  }
  fVar29 = *(float *)(lVar20 + 0xc84);
  if (0.0 <= fVar29) {
    fVar24 = fVar8;
    if (fVar29 <= fVar8) {
      fVar24 = fVar29;
    }
  }
  else {
    fVar24 = 0.0;
  }
  local_210 = 0x3f8000003f800000;
  local_208 = 1.0;
  uVar22 = (int)(fVar24 * DAT_1803811c8 + fVar34) << 0x18;
  local_1c8 = uVar22 | 0xffff;
  local_240 = (float)(uVar22 | 0x808080);
  fVar24 = (float)(uVar22 | 0xffffff);
  local_250 = (float)(uVar22 | 0xff00);
  local_1c0[2] = (float)(uVar22 | 0xff);
  local_1cc = (float)(uVar22 | 0xffff00);
  local_188 = (undefined8 *)(CONCAT44(uVar22,uVar22) | 0xffff000000ff);
  local_23c = (float)(uVar22 | 0xff0000);
  pfVar37 = &local_208;
  local_220 = (float)(uVar22 | 0xff00ff);
  lVar18 = (longlong)&local_210 + 4;
  local_21c = fVar24;
  local_204 = fVar29;
  local_180 = (uint)local_250;
  local_17c = local_1cc;
  local_178 = (uint)local_23c;
  local_174 = (uint)local_220;
  local_170 = (uint)local_1c0[2];
  FUN_180269040();
  uVar21 = FUN_180268ed0(&local_210);
  local_208 = local_238;
  local_210 = CONCAT44(fVar27,fVar32);
  local_218 = (float)uVar21;
  local_204 = fVar29;
  local_238 = (float)FUN_180268ed0(&local_210);
  fVar26 = local_1d0;
  fVar25 = local_1e0;
  fVar29 = local_21c;
  fVar32 = local_228;
  fVar27 = DAT_180380d30;
  uVar13 = (undefined4)((ulonglong)lVar18 >> 0x20);
  local_270 = 0;
  if ((param_3 >> 0x1a & 1) == 0) {
    if ((param_3 >> 0x19 & 1) != 0) {
      fVar32 = (float)local_168 + local_268;
      fVar26 = local_260._4_4_ + local_268;
      uVar35 = CONCAT44((int)((ulonglong)pfVar37 >> 0x20),uVar21);
      uVar19 = CONCAT44(uVar13,uVar21);
      local_1d8 = fVar32;
      local_1d4 = fVar26;
      FUN_1802951a0(lVar3,&local_260,&local_1d8,fVar24,uVar19,uVar35,fVar24);
      uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),uVar22);
      uVar19 = uVar19 & 0xffffffff00000000;
      local_1d8 = fVar32;
      local_1d4 = fVar26;
      FUN_1802951a0(lVar3,&local_260,&local_1d8,0,uVar19,uVar35,uVar22);
      uVar13 = (undefined4)(uVar19 >> 0x20);
      uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
      fVar25 = (float)local_168;
      FUN_18026c1f0(local_168,CONCAT44(fVar26,fVar32));
      fVar29 = local_1c0[2];
      uVar21 = local_1c8;
      fVar32 = local_268;
      if (0.0 <= fVar33) {
        fVar28 = fVar8;
        if (fVar33 <= fVar8) {
          fVar28 = fVar33;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar28 = (float)(int)(fVar28 * local_268 + fVar25 + fVar34);
      fVar33 = fVar25 + fVar27;
      if ((fVar25 + fVar27 <= fVar28) && (fVar33 = (fVar25 + local_268) - fVar27, fVar28 <= fVar33))
      {
        fVar33 = fVar28;
      }
      local_274 = fVar8 - local_274;
      if (0.0 <= local_274) {
        fVar25 = fVar8;
        if (local_274 <= fVar8) {
          fVar25 = local_274;
        }
      }
      else {
        fVar25 = 0.0;
      }
      fVar25 = (float)(int)(fVar25 * local_268 + local_260._4_4_ + fVar34);
      fVar34 = local_260._4_4_ + fVar27;
      if ((local_260._4_4_ + fVar27 <= fVar25) &&
         (fVar34 = fVar26 - fVar27, fVar25 <= fVar26 - fVar27)) {
        fVar34 = fVar25;
      }
      local_270 = CONCAT44(fVar34,fVar33);
      fVar25 = local_268 / DAT_180380f40;
      uVar38 = CONCAT44(uVar36,local_1c8);
      uVar35 = CONCAT44(uVar13,local_1c0[2]);
      local_24c = (float)local_158._0_4_;
      local_228 = (float)local_158._0_4_ + local_264;
      fVar33 = fVar25 + local_260._4_4_;
      local_248 = fVar25 * 0.0 + local_260._4_4_;
      local_224 = fVar33;
      FUN_1802951a0(lVar3,&local_24c,&local_228,local_1c0[2],uVar35,uVar38,local_1c8);
      uVar38 = CONCAT44((int)((ulonglong)uVar38 >> 0x20),local_250);
      uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),uVar21);
      fVar34 = fVar25 + fVar25 + local_260._4_4_;
      local_248 = fVar33;
      local_224 = fVar34;
      FUN_1802951a0(lVar3,&local_24c,&local_228,uVar21,uVar35,uVar38,local_250);
      fVar33 = local_1cc;
      uVar38 = CONCAT44((int)((ulonglong)uVar38 >> 0x20),local_1cc);
      uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),local_250);
      fVar30 = fVar25 * fVar30 + local_260._4_4_;
      local_248 = fVar34;
      local_224 = fVar30;
      FUN_1802951a0(lVar3,&local_24c,&local_228,local_250,uVar35,uVar38,local_1cc);
      uVar38 = CONCAT44((int)((ulonglong)uVar38 >> 0x20),local_23c);
      uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),fVar33);
      fVar34 = fVar25 * DAT_180380e9c + local_260._4_4_;
      local_248 = fVar30;
      local_224 = fVar34;
      FUN_1802951a0(lVar3,&local_24c,&local_228,fVar33,uVar35,uVar38,local_23c);
      fVar33 = local_220;
      uVar38 = CONCAT44((int)((ulonglong)uVar38 >> 0x20),local_220);
      uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),local_23c);
      fVar30 = fVar25 * DAT_180380f00 + local_260._4_4_;
      local_248 = fVar34;
      local_224 = fVar30;
      FUN_1802951a0(lVar3,&local_24c,&local_228,local_23c,uVar35,uVar38,local_220);
      pfVar37 = (float *)CONCAT44((int)((ulonglong)uVar38 >> 0x20),fVar29);
      local_224 = fVar25 * DAT_180380f40 + local_260._4_4_;
      uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),fVar33);
      local_248 = fVar30;
      FUN_1802951a0(lVar3,&local_24c,&local_228,fVar33,uVar35,pfVar37,fVar29);
      uVar36 = (undefined4)((ulonglong)uVar35 >> 0x20);
      uVar13 = local_158._0_4_;
      fVar30 = local_260._4_4_;
      FUN_18026c1f0(CONCAT44(local_260._4_4_,local_158._0_4_),
                    CONCAT44(fVar26,(float)local_158._0_4_ + local_264));
      fVar33 = local_264;
      fVar34 = DAT_180380ac0;
      uVar35 = CONCAT44(uVar36,*(undefined4 *)(lVar20 + 0xc84));
      FUN_1802bbc20(lVar3,CONCAT44((float)(int)(fVar23 * fVar32 + fVar30 + DAT_180380ac0),
                                   (float)uVar13 - fVar8),CONCAT44(local_1a8,local_1a8 + fVar8),
                    local_264 + fVar27,uVar35);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      goto LAB_1802bdcc6;
    }
  }
  else {
    fVar34 = fVar34 / local_24c;
    uVar19 = 0;
    do {
      uVar13 = *(undefined4 *)(lVar3 + 0x20);
      fVar27 = (float)(int)uVar19;
      uVar21 = (uint)((ulonglong)pfVar37 >> 0x20);
      fVar23 = fVar27 / DAT_180380f40;
      fVar27 = (fVar27 + fVar8) / DAT_180380f40;
      fVar23 = (fVar23 + fVar23) * DAT_180380e48 - fVar34;
      fVar30 = (fVar27 + fVar27) * DAT_180380e48 + fVar34;
      uVar36 = (undefined4)((ulonglong)lVar18 >> 0x20);
      FUN_1802941e0(lVar3,&local_1d8);
      lVar18 = (ulonglong)uVar21 << 0x20;
      FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar29,
                    CONCAT44(uVar36,fVar26),lVar18);
      uVar36 = (undefined4)((ulonglong)lVar18 >> 0x20);
      *(undefined4 *)(lVar3 + 0x50) = 0;
      fVar27 = cosf(fVar23);
      fVar23 = sinf(fVar23);
      fVar24 = fVar23 * fVar32 + local_1e4;
      fVar33 = cosf(fVar30);
      fVar30 = sinf(fVar30);
      fVar23 = local_1e4;
      pfVar37 = (float *)CONCAT44(uVar36,*(undefined4 *)((longlong)&local_188 + uVar19 * 4));
      lVar18 = CONCAT44(fVar30 * fVar32 + local_1e4,fVar33 * fVar32 + fVar25);
      FUN_180297410(lVar3,uVar13,*(undefined4 *)(lVar3 + 0x20),
                    CONCAT44(fVar24,fVar27 * fVar32 + fVar25),lVar18,pfVar37,
                    *(undefined4 *)((longlong)&local_188 + uVar19 * 4 + 4));
      uVar13 = (undefined4)((ulonglong)lVar18 >> 0x20);
      uVar21 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar21;
    } while ((int)uVar21 < 6);
    fVar27 = ((float)local_198._0_4_ + (float)local_198._0_4_) * DAT_180380e48;
    fVar33 = cosf(fVar27);
    fVar30 = sinf(fVar27);
    fVar27 = DAT_180380ac0;
    local_258 = CONCAT44((fVar32 + local_24c) * fVar30 * DAT_180380ac0 + fVar23,
                         (fVar32 + local_24c) * fVar33 * DAT_180380ac0 + local_1e0);
    fVar23 = DAT_180380ad4;
    if (bVar7) {
      fVar23 = DAT_180380afc;
    }
    fVar26 = fVar26 * fVar23;
    iVar12 = FUN_1802924c0(lVar3);
    param_2 = local_128[0];
    fVar32 = local_218;
    fVar23 = (float)local_230;
    if ((((uint)local_218 & 0xff000000) != 0) && (fVar27 <= fVar26)) {
      if (iVar12 < 1) {
        uVar35 = CONCAT44(uVar13,0x30);
        FUN_180293e00(lVar3,&local_258);
        *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
      }
      else {
        iVar15 = 3;
        if ((2 < iVar12) && (iVar15 = iVar12, 0x200 < iVar12)) {
          iVar15 = 0x200;
        }
        pfVar37 = (float *)CONCAT44((int)((ulonglong)pfVar37 >> 0x20),iVar15 + -1);
        uVar35 = CONCAT44(uVar13,(((float)iVar15 - fVar8) * DAT_180380f70) / (float)iVar15);
        FUN_1802941e0(lVar3,&local_258);
      }
      FUN_1802938c0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar32,uVar35,
                    pfVar37);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      *(undefined4 *)(lVar3 + 0x50) = 0;
    }
    fVar32 = local_240;
    if ((((uint)local_240 & 0xff000000) != 0) && (fVar34 = fVar26 + fVar8, fVar27 <= fVar34)) {
      if (iVar12 < 1) {
        uVar35 = CONCAT44(uVar13,0x30);
        FUN_180293e00(lVar3,&local_258,fVar34 - fVar27,0,uVar35);
        uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
        uVar36 = (undefined4)((ulonglong)pfVar37 >> 0x20);
        *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
      }
      else {
        if (iVar12 < 3) {
          iVar15 = 3;
        }
        else {
          iVar15 = iVar12;
          if (0x200 < iVar12) {
            iVar15 = 0x200;
          }
        }
        uVar38 = CONCAT44((int)((ulonglong)pfVar37 >> 0x20),iVar15 + -1);
        uVar35 = CONCAT44(uVar13,(((float)iVar15 - fVar8) * DAT_180380f70) / (float)iVar15);
        FUN_1802941e0(lVar3,&local_258,fVar34 - fVar27,0,uVar35,uVar38);
        uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
        uVar36 = (undefined4)((ulonglong)uVar38 >> 0x20);
      }
      pfVar37 = (float *)CONCAT44(uVar36,0x200);
      uVar35 = CONCAT44(uVar13,fVar8);
      FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar32,uVar35,
                    pfVar37);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      *(undefined4 *)(lVar3 + 0x50) = 0;
    }
    fVar24 = local_21c;
    if ((((uint)local_21c & 0xff000000) != 0) && (fVar27 <= fVar26)) {
      if (iVar12 < 1) {
        FUN_180293e00(lVar3,&local_258);
        uVar36 = (undefined4)((ulonglong)pfVar37 >> 0x20);
        *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
      }
      else {
        uVar36 = (undefined4)((ulonglong)pfVar37 >> 0x20);
        FUN_1802941e0(lVar3,&local_258);
      }
      pfVar37 = (float *)CONCAT44(uVar36,0x200);
      uVar35 = CONCAT44(uVar13,fVar8);
      FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar24,uVar35,
                    pfVar37);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      *(undefined4 *)(lVar3 + 0x50) = 0;
    }
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    fVar27 = (fVar33 * local_1c0[0] - fVar30 * 0.0) + local_1e0;
    fVar29 = fVar30 * local_1c0[0] + fVar33 * 0.0 + local_1e4;
    fVar25 = (local_1e8 * fVar33 - local_244 * fVar30) + local_1e0;
    local_244 = local_244 * fVar33 + local_1e8 * fVar30 + local_1e4;
    fVar34 = (local_1e8 * fVar33 - local_200 * fVar30) + local_1e0;
    fVar33 = local_200 * fVar33 + local_1e8 * fVar30 + local_1e4;
    if (*(char *)(lVar18 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = *(longlong *)(lVar18 + 0xec0);
    uVar36 = *(undefined4 *)(lVar18 + 0x1250);
    uVar2 = *(undefined4 *)(lVar18 + 0x1254);
    FUN_1802927a0(lVar3,3,3);
    local_128[0] = (float *)CONCAT44(fVar29,fVar27);
    **(undefined2 **)(lVar3 + 0x48) = *(undefined2 *)(lVar3 + 0x34);
    *(longlong *)(lVar3 + 0x48) = *(longlong *)(lVar3 + 0x48) + 2;
    **(undefined8 **)(lVar3 + 0x40) = local_128[0];
    lVar18 = *(longlong *)(lVar3 + 0x40);
    local_210 = CONCAT44(local_244,fVar25);
    *(undefined4 *)(lVar18 + 8) = uVar36;
    *(undefined4 *)(lVar18 + 0xc) = uVar2;
    *(float *)(*(longlong *)(lVar3 + 0x40) + 0x10) = local_218;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 0x14;
    *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
    **(undefined2 **)(lVar3 + 0x48) = (short)*(undefined4 *)(lVar3 + 0x34);
    *(longlong *)(lVar3 + 0x48) = *(longlong *)(lVar3 + 0x48) + 2;
    **(undefined8 **)(lVar3 + 0x40) = local_210;
    lVar18 = *(longlong *)(lVar3 + 0x40);
    local_188 = (undefined8 *)CONCAT44(fVar33,fVar34);
    *(undefined4 *)(lVar18 + 8) = uVar36;
    *(undefined4 *)(lVar18 + 0xc) = uVar2;
    *(uint *)(*(longlong *)(lVar3 + 0x40) + 0x10) = uVar22;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 0x14;
    *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
    **(undefined2 **)(lVar3 + 0x48) = (short)*(undefined4 *)(lVar3 + 0x34);
    *(longlong *)(lVar3 + 0x48) = *(longlong *)(lVar3 + 0x48) + 2;
    **(ulonglong **)(lVar3 + 0x40) = (ulonglong)local_188;
    lVar18 = *(longlong *)(lVar3 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar36;
    *(undefined4 *)(lVar18 + 0xc) = uVar2;
    *(float *)(*(longlong *)(lVar3 + 0x40) + 0x10) = fVar24;
    *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 0x14;
    *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
    if (((uint)fVar32 & 0xff000000) != 0) {
      FUN_18020dc30(lVar3 + 0x50,local_128);
      uVar36 = (undefined4)((ulonglong)pfVar37 >> 0x20);
      FUN_18020dc30(lVar3 + 0x50,&local_210);
      FUN_18020dc30(lVar3 + 0x50,&local_188);
      pfVar37 = (float *)CONCAT44(uVar36,0x200);
      uVar35 = CONCAT44(uVar13,DAT_180380c50);
      FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar32,uVar35,
                    pfVar37);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      *(undefined4 *)(lVar3 + 0x50) = 0;
    }
    local_274 = fVar8 - local_274;
    if (0.0 <= local_274) {
      fVar30 = fVar8;
      if (local_274 <= fVar8) {
        fVar30 = local_274;
      }
    }
    else {
      fVar30 = 0.0;
    }
    if (0.0 <= fVar23) {
      fVar32 = fVar8;
      if (fVar23 <= fVar8) {
        fVar32 = fVar23;
      }
    }
    else {
      fVar32 = 0.0;
    }
    fVar33 = (fVar29 - fVar33) * fVar32 + fVar33;
    fVar34 = (fVar27 - fVar34) * fVar32 + fVar34;
    local_270 = CONCAT44((local_244 - fVar33) * fVar30 + fVar33,(fVar25 - fVar34) * fVar30 + fVar34)
    ;
    lVar20 = local_108;
    fVar34 = DAT_180380ac0;
  }
  fVar33 = local_264;
  fVar32 = local_268;
  fVar30 = local_260._4_4_;
  fVar27 = DAT_180380d30;
LAB_1802bdcc6:
  fVar29 = DAT_180380f70;
  fVar23 = DAT_180380a94;
  if (bVar5) {
    fVar23 = DAT_180380ad4;
  }
  fVar23 = local_1d0 * fVar23;
  iVar12 = FUN_1802924c0(lVar3);
  fVar25 = local_238;
  if ((((uint)local_238 & 0xff000000) != 0) && (fVar34 <= fVar23)) {
    if (iVar12 < 1) {
      uVar35 = CONCAT44(uVar13,0x30);
      FUN_180293e00(lVar3,&local_270);
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    }
    else {
      if (iVar12 < 3) {
        iVar15 = 3;
      }
      else {
        iVar15 = iVar12;
        if (0x200 < iVar12) {
          iVar15 = 0x200;
        }
      }
      pfVar37 = (float *)CONCAT44((int)((ulonglong)pfVar37 >> 0x20),iVar15 + -1);
      uVar35 = CONCAT44(uVar13,(((float)iVar15 - fVar8) * fVar29) / (float)iVar15);
      FUN_1802941e0(lVar3,&local_270);
    }
    FUN_1802938c0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar25,uVar35,
                  pfVar37);
    uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  fVar25 = local_240;
  uVar36 = (undefined4)((ulonglong)pfVar37 >> 0x20);
  if ((((uint)local_240 & 0xff000000) != 0) && (fVar26 = fVar23 + fVar8, fVar34 <= fVar26)) {
    if (iVar12 < 1) {
      uVar35 = CONCAT44(uVar13,0x30);
      FUN_180293e00(lVar3,&local_270,fVar26 - fVar34,0,uVar35);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    }
    else {
      if (iVar12 < 3) {
        iVar15 = 3;
      }
      else {
        iVar15 = iVar12;
        if (0x200 < iVar12) {
          iVar15 = 0x200;
        }
      }
      uVar38 = CONCAT44(uVar36,iVar15 + -1);
      uVar35 = CONCAT44(uVar13,(((float)iVar15 - fVar8) * fVar29) / (float)iVar15);
      FUN_1802941e0(lVar3,&local_270,fVar26 - fVar34,0,uVar35,uVar38);
      uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
      uVar36 = (undefined4)((ulonglong)uVar38 >> 0x20);
    }
    uVar38 = CONCAT44(uVar36,0x200);
    uVar35 = CONCAT44(uVar13,fVar8);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar25,uVar35,
                  uVar38);
    uVar36 = (undefined4)((ulonglong)uVar38 >> 0x20);
    uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  if ((((uint)fVar24 & 0xff000000) != 0) && (fVar34 <= fVar23)) {
    if (iVar12 < 1) {
      FUN_180293e00(lVar3,&local_270);
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    }
    else {
      FUN_1802941e0(lVar3,&local_270);
    }
    uVar35 = CONCAT44(uVar13,fVar8);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),fVar24,uVar35,
                  CONCAT44(uVar36,0x200));
    uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  if (local_275 != '\0') {
    fVar23 = param_2[3];
    if (0.0 <= fVar23) {
      fVar29 = fVar8;
      if (fVar23 <= fVar8) {
        fVar29 = fVar23;
      }
    }
    else {
      fVar29 = 0.0;
    }
    fVar23 = local_118._0_4_;
    fVar25 = fVar23 + fVar33;
    fVar24 = fVar30 + fVar32;
    uVar36 = 0;
    local_158._4_4_ = fVar30;
    local_158._0_4_ = fVar23;
    local_158._12_4_ = fVar24;
    local_158._8_4_ = fVar25;
    uVar35 = CONCAT44(uVar13,(fVar25 - fVar23) * fVar34);
    FUN_18029fa50(lVar3,CONCAT44(fVar30,fVar23),CONCAT44(fVar24,fVar25),0,uVar35,0,0,0);
    uVar35 = CONCAT44((int)((ulonglong)uVar35 >> 0x20),local_238);
    FUN_1802951a0(lVar3,local_158,local_158 + 8,local_238,uVar35,
                  CONCAT44(uVar36,local_238) & 0xffffffff00ffffff,(uint)local_238 & 0xffffff);
    uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
    FUN_18026c1f0(CONCAT44(fVar30,fVar23),CONCAT44(fVar24,fVar25));
    FUN_1802bbc20(lVar3,CONCAT44((float)(int)((fVar8 - fVar29) * fVar32 + fVar30 + fVar34),
                                 (float)local_118._0_4_ - fVar8),
                  CONCAT44(local_1a8,local_1a8 + fVar8),fVar33 + fVar27,
                  CONCAT44(uVar13,*(undefined4 *)(lVar20 + 0xc84)));
  }
  FUN_18027fda0();
  if (local_278 != 0) {
    _Size = 0x10;
    if (local_1dc != 0) {
      _Size = 0xc;
    }
    iVar12 = memcmp(local_100,param_2,_Size);
    if (iVar12 == 0) {
      local_278 = 0;
    }
    else if (*(int *)(lVar20 + 0x1ef8) != 0) {
      FUN_18026ed00();
    }
  }
  if (local_138 == 0) {
    *(undefined4 *)(lVar20 + 0x2650) = 0;
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar18 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0xec0) + 0x1520);
  iVar12 = *(int *)(lVar18 + 0x108);
  if (iVar12 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar18 + 0x108) = iVar12 + -1;
  }
  return (ulonglong)local_278;
}


