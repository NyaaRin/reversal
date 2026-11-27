// 0x1802bac60  FUN_1802bac60
// size=4023 thunk=false
// signature: undefined FUN_1802bac60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802bac60(char *param_1,undefined1 (*param_2) [12],uint param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 auVar3 [4];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [12];
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined4 uVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  char *pcVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_238 [32];
  char **local_218;
  char **local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1e8;
  byte local_1d8;
  byte local_1d7;
  uint local_1d4;
  float local_1d0 [2];
  uint local_1c8;
  uint local_1c4;
  longlong local_1c0;
  char *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  ulonglong local_1a0;
  float local_198;
  uint local_194;
  undefined8 local_190;
  undefined1 (*local_188) [12];
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  char *local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  float local_15c;
  uint local_158;
  uint local_154;
  int local_150;
  undefined1 local_148 [4];
  undefined1 auStack_144 [8];
  float fStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  byte local_128 [64];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  uVar24 = (ulonglong)_tls_index;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
  local_1c0 = 0x10;
  local_188 = param_2;
  local_170 = param_1;
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1520) + 0xce) = 1;
  local_1a0 = *(ulonglong *)(lVar5 + 0x1520);
  if (*(char *)(local_1a0 + 0xd1) != '\0') {
    return local_1a0 & 0xffffffffffffff00;
  }
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar33 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xcc8);
  fVar33 = fVar33 + fVar33 + *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
  pcVar25 = local_170;
  if (local_170 != (char *)0xffffffffffffffff) {
    while (*pcVar25 != '\0') {
      pcVar1 = pcVar25 + 1;
      if (((*pcVar25 == '#') && (*pcVar1 == '#')) ||
         (pcVar25 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  local_1b8 = pcVar25;
  local_15c = fVar33;
  fVar30 = (float)FUN_18027f9c0();
  *(undefined8 *)(lVar5 + 0x1ec0) = 0;
  FUN_18027fc30();
  FUN_18027abf0(local_170);
  local_150 = *(int *)(lVar5 + 0x2650);
  if (local_150 == 0) {
    *(undefined4 *)(lVar5 + 0x2650) =
         *(undefined4 *)
          (*(longlong *)(local_1a0 + 0x110) + -4 + (longlong)*(int *)(local_1a0 + 0x108) * 4);
  }
  uVar22 = param_3;
  if ((param_3 & 0x20) != 0) {
    uVar22 = param_3 & 0xff9fffff | 0x100008;
  }
  local_1a4 = param_3;
  if ((uVar22 & 8) == 0) {
    FUN_1802bf4d0(param_2,uVar22);
  }
  fVar36 = DAT_180380bb0;
  uVar23 = *(uint *)(lVar5 + 0x264c);
  if ((uVar22 & 0x700000) == 0) {
    uVar22 = uVar22 | uVar23 & 0x700000;
  }
  if ((uVar22 & 0x1800000) == 0) {
    uVar22 = uVar22 | uVar23 & 0x1800000;
  }
  if ((uVar22 & 0x6000000) == 0) {
    uVar22 = uVar22 | uVar23 & 0x6000000;
  }
  if ((uVar22 & 0x18000000) == 0) {
    uVar22 = uVar22 | uVar23 & 0x18000000;
  }
  uVar23 = uVar22 | uVar23 & 0xe00fffff;
  local_1d4 = uVar23 & 2;
  local_1c4 = 4 - (local_1d4 != 0);
  local_154 = uVar23 & 0x10;
  if (local_154 == 0) {
    fVar38 = fVar33 + *(float *)(lVar5 + 0xcdc);
  }
  else {
    fVar38 = 0.0;
  }
  auVar3 = *(undefined1 (*) [4])*param_2;
  fVar34 = *(float *)(*param_2 + 4);
  fVar35 = *(float *)(*param_2 + 8);
  fVar37 = fVar30 - fVar38;
  if (fVar30 - fVar38 <= DAT_180380bb0) {
    fVar37 = DAT_180380bb0;
  }
  fVar30 = DAT_180380bb0;
  if (local_1d4 == 0) {
    fVar30 = *(float *)param_2[1];
  }
  fStack_13c = fVar30;
  _local_148 = *param_2;
  local_194 = uVar22 & 0x10000000;
  local_158 = uVar23;
  if ((local_194 == 0) || ((uVar22 & 0x100000) == 0)) {
    if ((uVar22 & 0x8200000) == 0x8200000) {
      local_210 = (char **)(local_148 + 8);
      local_218 = (char **)(local_148 + 4);
      FUN_180268f90();
      FUN_1802bab60(param_2,local_148,local_148 + 4,local_148 + 8);
      goto LAB_1802baf63;
    }
  }
  else {
    local_210 = (char **)(local_148 + 8);
    local_218 = (char **)(local_148 + 4);
    FUN_180269040();
LAB_1802baf63:
    fVar35 = (float)auStack_144._4_4_;
    fVar34 = (float)auStack_144._0_4_;
    fVar30 = fStack_13c;
    auVar3 = local_148;
  }
  fVar18 = DAT_18038135c;
  if (0.0 <= (float)auVar3) {
    fVar18 = DAT_180380ac0;
  }
  local_138 = (int)((float)auVar3 * DAT_1803811c8 + fVar18);
  fVar18 = DAT_18038135c;
  if (0.0 <= fVar34) {
    fVar18 = DAT_180380ac0;
  }
  iVar12 = (int)(fVar34 * DAT_1803811c8 + fVar18);
  fVar34 = DAT_18038135c;
  if (0.0 <= fVar35) {
    fVar34 = DAT_180380ac0;
  }
  iVar13 = (int)(fVar35 * DAT_1803811c8 + fVar34);
  _iStack_134 = CONCAT44(iVar13,iVar12);
  fVar34 = DAT_180380ac0;
  if (fVar30 < 0.0) {
    fVar34 = DAT_18038135c;
  }
  bVar10 = 0;
  local_1d8 = 0;
  local_1d7 = 0;
  iStack_12c = (int)(fVar30 * DAT_1803811c8 + fVar34);
  fVar30 = *(float *)(local_1a0 + 0x118);
  local_1a8 = *(undefined4 *)(local_1a0 + 0x11c);
  fVar34 = fVar38;
  if (*(int *)(lVar5 + 0xd64) != 0) {
    fVar34 = 0.0;
  }
  local_1c8 = uVar23 & 0x20;
  *(float *)(local_1a0 + 0x118) = fVar34 + fVar30;
  local_198 = fVar30;
  if (((uVar22 & 0x300000) == 0) || (local_1c8 != 0)) {
    if (((uVar22 & 0x400000) != 0) && (local_1c8 == 0)) {
      if (local_1d4 == 0) {
        if (iStack_12c < 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = iStack_12c;
          if (0xff < iStack_12c) {
            iVar21 = 0xff;
          }
        }
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        else if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        if (local_138 < 0) {
          iVar26 = 0;
        }
        else {
          iVar26 = local_138;
          if (0xff < local_138) {
            iVar26 = 0xff;
          }
        }
        local_208 = (undefined *)CONCAT44(local_208._4_4_,iVar21);
        local_210 = (char **)CONCAT44(local_210._4_4_,iVar13);
        local_218 = (char **)CONCAT44(local_218._4_4_,iVar12);
        FUN_180268750(local_128,0x40,"#%02X%02X%02X%02X",iVar26);
      }
      else {
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        else if (0xff < iVar13) {
          iVar13 = 0xff;
        }
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        if (local_138 < 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = local_138;
          if (0xff < local_138) {
            iVar21 = 0xff;
          }
        }
        local_210 = (char **)CONCAT44(local_210._4_4_,iVar13);
        local_218 = (char **)CONCAT44(local_218._4_4_,iVar12);
        FUN_180268750(local_128,0x40,"#%02X%02X%02X",iVar21);
      }
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
      if (*(char *)(lVar15 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_1b8 = (char *)0x0;
      lVar15 = *(longlong *)(lVar15 + 0xec0);
      local_200 = 0;
      local_208 = (undefined *)0x0;
      local_218 = &local_1b8;
      local_210 = (char **)CONCAT44(local_210._4_4_,8);
      puVar2 = (uint *)(lVar15 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(float *)(lVar15 + 0x1ed8) = fVar37;
      cVar11 = FUN_1802b74e0("##Text",0,local_128,0x40);
      if (cVar11 != '\0') {
        bVar10 = 1;
        pbVar20 = local_128;
        local_1d8 = 1;
        while ((*pbVar20 < 0x24 && ((0x900000200U >> ((longlong)(char)*pbVar20 & 0x3fU) & 1) != 0)))
        {
          pbVar20 = pbVar20 + 1;
        }
        iStack_12c = 0xff;
        _iStack_134 = 0;
        local_138 = 0;
        if (local_1d4 == 0) {
          local_210 = (char **)&iStack_12c;
          local_218 = (char **)&iStack_130;
          FUN_1802671a0(pbVar20,"%02X%02X%02X%02X",&local_138,&iStack_134);
        }
        else {
          local_218 = (char **)&iStack_130;
          FUN_1802671a0(pbVar20,"%02X%02X%02X",&local_138,&iStack_134);
        }
      }
      if ((uVar23 & 8) == 0) {
        FUN_1802819f0();
      }
    }
  }
  else {
    uVar28 = uVar23 & 0x80000;
    uVar29 = uVar23 & 0x200800;
    fVar35 = (float)(int)local_1c4;
    fVar34 = fVar37 - (float)(int)(local_1c4 - 1) * *(float *)(lVar5 + 0xcdc);
    local_168 = uVar29;
    local_164 = uVar28;
    if (uVar29 == 0) {
LAB_1802bb187:
      lVar15 = 0;
    }
    else {
      pcVar25 = "M:000";
      if ((uVar22 & 0x1000000) != 0) {
        pcVar25 = "M:0.000";
      }
      if (*(char *)(local_1c0 + lVar4) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_1e8 = 0;
      local_1f8 = 0;
      local_200 = 0;
      local_208 = (undefined *)0x0;
      local_218 = (char **)CONCAT44(local_218._4_4_,DAT_180381384);
      local_210 = (char **)pcVar25;
      FUN_18029e350(&local_180,*(undefined8 *)(*(longlong *)(lVar4 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar4 + 0xec0) + 0x1238),DAT_180381308);
      if ((float)(int)(fVar34 / fVar35) <= (float)(int)(local_180 + DAT_180380ba8))
      goto LAB_1802bb187;
      lVar15 = (ulonglong)((uVar22 & 0x200000) != 0) + 1;
    }
    uVar14 = DAT_18038096c;
    fVar18 = 0.0;
    if (uVar29 == 0) {
      fVar18 = 5.73972e-42;
    }
    iVar12 = 0;
    local_190 = (char *)(lVar15 * 0x20);
    local_160 = uVar22 & 0x1000000;
    local_180 = (float)(uVar23 & 8);
    fVar32 = 0.0;
    local_1d0[0] = fVar18;
    do {
      if (0 < iVar12) {
        FUN_18027f5b0();
      }
      fVar33 = (float)(int)(((float)(iVar12 + 1) * fVar34) / fVar35);
      fVar32 = fVar33 - fVar32;
      if (fVar32 <= fVar36) {
        fVar32 = fVar36;
      }
      if (*(char *)(lVar4 + local_1c0) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar27 = *(longlong *)(lVar4 + 0xec0);
      puVar2 = (uint *)(lVar27 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(float *)(lVar27 + 0x1ed8) = fVar32;
      if (local_168 == 0) {
        uVar19 = *(undefined4 *)(&DAT_180338af0 + (longlong)iVar12 * 4);
        if (*(char *)(lVar4 + local_1c0) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar27 = *(longlong *)(lVar4 + 0xec0);
        puVar2 = (uint *)(lVar27 + 0x1ec0);
        *puVar2 = *puVar2 | 0x20;
        *(undefined4 *)(lVar27 + 0x1ef4) = uVar19;
        uVar28 = local_164;
      }
      lVar27 = (longlong)iVar12;
      if (local_160 == 0) {
        local_200 = CONCAT44(local_200._4_4_,fVar18);
        local_1d0[0] = 0.0;
        uVar19 = 0xff;
        if (uVar28 != 0) {
          uVar19 = 0;
        }
        local_190 = (char *)CONCAT44(local_190._4_4_,uVar19);
        local_208 = (&PTR_DAT_180380600)[lVar27 + lVar15 * 4];
        local_210 = (char **)&local_190;
        local_218 = (char **)local_1d0;
        bVar10 = FUN_1802b1e50((&PTR_DAT_1803805d8)[lVar27],4,&local_138 + lVar27,fVar36);
        local_1d8 = local_1d8 | bVar10;
      }
      else {
        local_208 = (&PTR_s__0_3f_180380660)[lVar27 + lVar15 * 4];
        local_1d0[0] = fVar36;
        if (uVar28 != 0) {
          local_1d0[0] = 0.0;
        }
        local_200 = CONCAT44(local_200._4_4_,fVar18);
        local_210 = (char **)local_1d0;
        local_218 = (char **)&local_190;
        local_190 = (char *)((ulonglong)local_190._4_4_ << 0x20);
        bVar10 = FUN_1802b1e50((&PTR_DAT_1803805d8)[lVar27],8,local_148 + lVar27 * 4,uVar14);
        local_1d8 = local_1d8 | bVar10;
        local_1d7 = local_1d7 | local_1d8;
      }
      if (local_180 == 0.0) {
        FUN_1802819f0();
      }
      iVar12 = iVar12 + 1;
      pcVar25 = local_1b8;
      fVar32 = fVar33;
      fVar33 = local_15c;
      uVar23 = local_158;
      bVar10 = local_1d8;
      fVar30 = local_198;
    } while (iVar12 < (int)local_1c4);
  }
  pauVar9 = local_188;
  lVar15 = 0;
  if (local_154 == 0) {
    if ((local_1c8 == 0) && (*(int *)(lVar5 + 0xd64) != 0)) {
      fVar34 = fVar37 + *(float *)(lVar5 + 0xcdc);
    }
    else {
      fVar34 = 0.0;
    }
    *(undefined4 *)(local_1a0 + 0x11c) = local_1a8;
    *(float *)(local_1a0 + 0x118) = fVar30 + fVar34;
    if (local_1d4 == 0) {
      fVar36 = *(float *)local_188[1];
    }
    local_180 = *(float *)*local_188;
    uStack_17c = *(undefined4 *)(*local_188 + 4);
    uStack_178 = *(undefined4 *)(*local_188 + 8);
    local_1b8 = (char *)0x0;
    fStack_174 = fVar36;
    cVar11 = FUN_1802be530("##ColorButton",&local_180,uVar23,&local_1b8);
    if ((cVar11 != '\0') && ((uVar23 & 4) == 0)) {
      *(ulonglong *)(lVar5 + 0x2664) = CONCAT44(uStack_17c,local_180);
      *(ulonglong *)(lVar5 + 0x266c) = CONCAT44(fStack_174,uStack_178);
      FUN_180280fd0("picker");
      fVar30 = *(float *)(lVar5 + 0x1f04);
      fVar36 = *(float *)(lVar5 + 0xcd8);
      fVar34 = *(float *)(lVar5 + 0x1f10);
      if (*(char *)(lVar4 + local_1c0) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar27 = *(longlong *)(lVar4 + 0xec0);
      *(uint *)(lVar27 + 0x1f48) = *(uint *)(lVar27 + 0x1f48) | 1;
      *(float *)(lVar27 + 0x1f58) = fVar30 + 0.0;
      *(undefined8 *)(lVar27 + 0x1f60) = 0;
      *(float *)(lVar27 + 0x1f5c) = fVar36 + fVar34;
      *(undefined4 *)(lVar27 + 0x1f4c) = 1;
      fVar30 = local_198;
    }
    if ((uVar23 & 8) == 0) {
      FUN_1802819f0();
    }
    cVar11 = FUN_180281720("picker",0);
    if (cVar11 != '\0') {
      lVar27 = *(longlong *)(lVar5 + 0x1520);
      if (*(short *)(lVar27 + 0xda) == 1) {
        if (local_170 != pcVar25) {
          FUN_1802aa3c0(local_170,pcVar25,0);
          if (*(char *)(lVar4 + local_1c0) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar15 = *(longlong *)(lVar4 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar15 + 0x1520) + 0xce) = 1;
          if (*(char *)(*(longlong *)(lVar15 + 0x1520) + 0xd1) == '\0') {
            local_1b8 = (char *)0x0;
            FUN_18027f400(&local_1b8);
          }
        }
        local_1a4 = local_1a4 & 0x1f8c0002 | 0x704080;
        if (*(char *)(lVar4 + local_1c0) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar33 = fVar33 * DAT_180380fd8;
        lVar15 = *(longlong *)(lVar4 + 0xec0);
        puVar2 = (uint *)(lVar15 + 0x1ec0);
        *puVar2 = *puVar2 | 1;
        *(float *)(lVar15 + 0x1ed8) = fVar33;
        local_1d8 = FUN_1802bbfc0("##picker",pauVar9,local_1a4,lVar5 + 0x2664);
        local_1d8 = bVar10 | local_1d8;
        lVar15 = lVar27;
      }
      FUN_180281800();
    }
  }
  pcVar1 = local_170;
  if ((local_170 != pcVar25) && (-1 < (char)uVar23)) {
    FUN_18027f5b0();
    if (local_1c8 == 0) {
      fVar38 = fVar37 + fVar38 + *(float *)(lVar5 + 0xcdc);
    }
    *(float *)(local_1a0 + 0x118) = fVar30 + fVar38;
    FUN_1802aa3c0(pcVar1,pcVar25,0);
  }
  bVar10 = local_1d8;
  if ((local_1d8 != 0) && (lVar15 == 0)) {
    if (local_1d7 == 0) {
      auVar31._0_4_ = (float)local_138;
      auVar31._4_4_ = (float)iStack_134;
      auVar31._8_4_ = (float)iStack_130;
      auVar31._12_4_ = (float)iStack_12c;
      _local_148 = divps(auVar31,_DAT_1803817a0);
    }
    if ((uVar23 & 0x8200000) == 0x8200000) {
      local_210 = (char **)(local_148 + 8);
      *(undefined1 (*) [4])(lVar5 + 0x2658) = local_148;
      *(undefined4 *)(lVar5 + 0x265c) = auStack_144._0_4_;
      local_218 = (char **)(local_148 + 4);
      FUN_180269040();
      *(undefined4 *)(lVar5 + 0x2654) = *(undefined4 *)(lVar5 + 0x2650);
      local_1b0 = auStack_144._4_4_;
      local_1b8 = local_148._0_8_;
      local_1ac = 0;
      uVar14 = FUN_180268ed0(&local_1b8);
      *(undefined4 *)(lVar5 + 0x2660) = uVar14;
    }
    if (((uVar23 >> 0x14 & 1) != 0) && (local_194 != 0)) {
      local_210 = (char **)(local_148 + 8);
      local_218 = (char **)(local_148 + 4);
      FUN_180268f90();
    }
    *(undefined1 (*) [4])*local_188 = local_148;
    *(undefined4 *)(*local_188 + 8) = auStack_144._4_4_;
    *(undefined4 *)(*local_188 + 4) = auStack_144._0_4_;
    if (local_1d4 == 0) {
      *(float *)local_188[1] = fStack_13c;
    }
  }
  lVar27 = local_1c0;
  if (local_150 == 0) {
    *(undefined4 *)(lVar5 + 0x2650) = 0;
  }
  if (*(char *)(lVar4 + local_1c0) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
  iVar12 = *(int *)(lVar6 + 0x108);
  if (iVar12 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar6 + 0x108) = iVar12 + -1;
  }
  FUN_18027fda0();
  if ((((*(byte *)(lVar5 + 0x1f00) & 1) == 0) || ((*(uint *)(lVar5 + 0x1efc) & 0x800) != 0)) ||
     ((uVar23 >> 9 & 1) != 0)) goto LAB_1802bbbba;
  if (*(char *)(lVar4 + lVar27) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar27 = *(longlong *)(lVar4 + 0xec0);
  if (((*(char *)(lVar27 + 0x2298) == '\0') || ((*(uint *)(lVar27 + 0x1f00) & 1) == 0)) ||
     ((*(longlong *)(lVar27 + 0x1530) == 0 ||
      ((lVar6 = *(longlong *)(lVar27 + 0x1520),
       *(longlong *)(lVar6 + 0x3c0) != *(longlong *)(*(longlong *)(lVar27 + 0x1530) + 0x3c0) ||
       (*(char *)(lVar6 + 0xd1) != '\0')))))) goto LAB_1802bbbba;
  puVar16 = (undefined8 *)(lVar27 + 0x1f24);
  if ((*(uint *)(lVar27 + 0x1f00) & 2) == 0) {
    puVar16 = (undefined8 *)(lVar27 + 0x1f04);
  }
  iVar12 = *(int *)(lVar27 + 0x1ef8);
  if (iVar12 == 0) {
    iVar12 = FUN_18027ab30(lVar6,puVar16);
    FUN_18027f100(iVar12);
  }
  bVar10 = local_1d8;
  if (*(int *)(lVar27 + 0x22b4) == iVar12) goto LAB_1802bbbba;
  uVar7 = puVar16[1];
  *(undefined8 *)(lVar27 + 0x22e8) = *puVar16;
  *(undefined8 *)(lVar27 + 0x22f0) = uVar7;
  if ((*(uint *)(lVar27 + 0x1f00) & 0x200) == 0) {
    puVar16 = (undefined8 *)(lVar6 + 0x268);
  }
  else {
    puVar16 = (undefined8 *)(lVar27 + 0x1f34);
  }
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  *(int *)(lVar27 + 0x2308) = iVar12;
  *(undefined1 *)(lVar27 + 0x229a) = 1;
  *(undefined8 *)(lVar27 + 0x22f8) = uVar7;
  *(undefined8 *)(lVar27 + 0x2300) = uVar8;
  puVar16 = (undefined8 *)FUN_180287620("_COL3F");
  pauVar9 = local_188;
  bVar10 = local_1d8;
  if (puVar16 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar16;
    *(undefined8 *)*local_188 = *puVar17;
    *(undefined4 *)(*local_188 + 8) = *(undefined4 *)(puVar17 + 1);
    bVar10 = 1;
  }
  puVar17 = (undefined8 *)FUN_180287620("_COL4F");
  if (puVar17 == (undefined8 *)0x0) {
    if (puVar16 != (undefined8 *)0x0) goto LAB_1802bbb53;
  }
  else {
    memcpy(pauVar9,(void *)*puVar17,(ulonglong)local_1c4 << 2);
    bVar10 = 1;
LAB_1802bbb53:
    if (local_194 != 0) {
      local_210 = (char **)(*pauVar9 + 8);
      local_218 = (char **)(*pauVar9 + 4);
      FUN_180268f90();
    }
  }
  if (*(char *)(lVar4 + local_1c0) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(lVar4 + 0x229a) = 0;
  if (*(char *)(lVar4 + 0x22e2) != '\0') {
    FUN_180287530();
  }
LAB_1802bbbba:
  if (((lVar15 != 0) && (*(int *)(lVar5 + 0x1594) != 0)) &&
     (*(longlong *)(lVar5 + 0x15b8) == lVar15)) {
    *(int *)(lVar5 + 0x1ef8) = *(int *)(lVar5 + 0x1594);
  }
  if ((bVar10 != 0) && (*(int *)(lVar5 + 0x1ef8) != 0)) {
    FUN_18026ed00();
  }
  return (ulonglong)bVar10;
}


