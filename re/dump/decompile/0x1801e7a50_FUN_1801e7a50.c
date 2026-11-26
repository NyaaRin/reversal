// 0x1801e7a50  FUN_1801e7a50
// size=6906 thunk=false
// signature: undefined FUN_1801e7a50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e7a50(float param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  float local_168;
  float local_164;
  undefined8 local_160;
  float local_158;
  float local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined8 *local_108;
  float *local_100;
  float local_e8;
  float local_e4;
  float local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  local_118 = param_1;
  if (DAT_1803fa46f == '\0') {
    if (DAT_1803fa545 != '\0') {
      if (param_1 <= 0.0) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = expf(param_1 * _DAT_1803813f0);
        fVar20 = DAT_180380bb0 - fVar20;
      }
      fVar23 = DAT_180380bb0;
      DAT_1803fa54c = (DAT_180380bb0 - DAT_1803fa54c) * fVar20 + DAT_1803fa54c;
      FUN_180199890();
      local_140 = 5.60519e-45;
      local_13c = 0.0;
      pfVar10 = &local_13c;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar10 = &DAT_1803fb24c;
      }
      pfVar8 = &local_140;
      if ((int)DAT_1803fb24c < 5) {
        pfVar8 = pfVar10;
      }
      DAT_1803fb24c = *pfVar8;
      lVar7 = (longlong)(int)DAT_1803fb24c;
      lVar18 = lVar7 * 200;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      cVar4 = *(char *)(lVar2 + 0x10);
      if (cVar4 == '\0') {
        __dyn_tls_on_demand_init();
        cVar4 = *(char *)(lVar2 + 0x10);
      }
      local_100 = (float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
      local_110 = *local_100;
      *local_100 = DAT_1803fa54c;
      local_13c = 0.0;
      pfVar10 = &local_13c;
      if (-1 < (int)DAT_1803fa53c) {
        pfVar10 = &DAT_1803fa53c;
      }
      pfVar8 = &local_140;
      if ((int)DAT_1803fa53c < 9) {
        pfVar8 = pfVar10;
      }
      DAT_1803fa53c = *pfVar8;
      local_140 = 1.5;
      local_13c = 0.75;
      pfVar10 = &local_13c;
      if (DAT_180380b20 <= DAT_1803da6a4) {
        pfVar10 = &DAT_1803da6a4;
      }
      pfVar8 = &local_140;
      if (DAT_1803da6a4 <= DAT_180380c50) {
        pfVar8 = pfVar10;
      }
      fVar20 = *pfVar8;
      fVar28 = fVar20 * DAT_18038126c;
      fVar29 = fVar20 * DAT_180381250;
      if (DAT_1803fa52e == '\0') {
        if (cVar4 == '\0') {
          __dyn_tls_on_demand_init();
          cVar4 = *(char *)(lVar2 + 0x10);
        }
        fVar21 = (*(float *)(*(longlong *)(lVar2 + 0xec0) + 0x34) - fVar29) * DAT_180380ac0;
        DAT_1803fa534 = DAT_180380fe8;
        if (DAT_180380fe8 <= fVar21) {
          DAT_1803fa534 = fVar21;
        }
        fVar21 = (*(float *)(*(longlong *)(lVar2 + 0xec0) + 0x30) - fVar28) * DAT_180380ac0;
        DAT_1803fa530 = DAT_180380fe8;
        if (DAT_180380fe8 <= fVar21) {
          DAT_1803fa530 = fVar21;
        }
        DAT_1803fa52e = '\x01';
        DAT_1803da700 = fVar28;
        DAT_1803da704 = fVar29;
      }
      bVar19 = DAT_1803ff030 != '\0';
      if ((DAT_1803ff030 != '\0') && (DAT_1804257a9 == '\0')) {
        FUN_1801e70b0();
        cVar4 = *(char *)(lVar2 + 0x10);
      }
      DAT_1804257a9 = bVar19;
      if (DAT_1803de100 != 0) {
        if (cVar4 == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (_DAT_1803fa568 < (float)*(double *)(*(longlong *)(lVar2 + 0xec0) + 0x10)) {
          DAT_1803de100 = 0;
          puVar16 = &DAT_1803de0f0;
          if (0xf < DAT_1803de108) {
            puVar16 = DAT_1803de0f0;
          }
          *(undefined1 *)puVar16 = 0;
        }
      }
      if ((DAT_1803fa53c == 1.4013e-45) || (DAT_1803fa53c == 5.60519e-45)) {
        fVar21 = 1.4013e-45;
      }
      else {
        fVar21 = DAT_1803fa53c;
        if ((((DAT_1803fa53c != 2.8026e-45) && (DAT_1803fa53c != 4.2039e-45)) &&
            (fVar21 = 5.60519e-45, DAT_1803fa53c != 8.40779e-45)) &&
           (fVar21 = 0.0, DAT_1803fa53c == 7.00649e-45)) {
          fVar21 = DAT_1803fa53c;
        }
      }
      cVar4 = *(char *)(lVar2 + 0x10);
      if (cVar4 == '\0') {
        __dyn_tls_on_demand_init();
        cVar4 = *(char *)(lVar2 + 0x10);
      }
      lVar3 = *(longlong *)(lVar2 + 0xec0);
      if (*(char *)(lVar3 + 0x108) == '\0') {
        DAT_1803fa546 = '\0';
        _DAT_1803fa550 = 0;
      }
      else if (DAT_1803fa546 != '\0') {
        DAT_1803fa534 = *(float *)(lVar3 + 0x104) - _DAT_1803fa554;
        DAT_1803fa530 = *(float *)(lVar3 + 0x100) - _DAT_1803fa550;
      }
      if (cVar4 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar2 + 0xec0);
      *(uint *)(lVar3 + 0x1f48) = *(uint *)(lVar3 + 0x1f48) | 2;
      *(float *)(lVar3 + 0x1f68) = fVar28;
      *(float *)(lVar3 + 0x1f6c) = fVar29;
      *(undefined4 *)(lVar3 + 0x1f50) = 1;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar2 + 0xec0);
      *(uint *)(lVar3 + 0x1f48) = *(uint *)(lVar3 + 0x1f48) | 1;
      *(float *)(lVar3 + 0x1f58) = DAT_1803fa530;
      *(float *)(lVar3 + 0x1f5c) = DAT_1803fa534;
      *(undefined8 *)(lVar3 + 0x1f60) = 0;
      *(undefined4 *)(lVar3 + 0x1f4c) = 1;
      local_168 = 1.0;
      local_164 = 1.0;
      FUN_18026aad0(2,&local_168);
      FUN_18026a940(3);
      FUN_18026a810(2,&DAT_1803dc978 + lVar18);
      puVar16 = (undefined8 *)(&DAT_1803dc9b8 + lVar18);
      FUN_18026a810(5,puVar16);
      cVar4 = FUN_180276630("catsuper##Main",0,299);
      if (cVar4 != '\0') {
        fVar22 = fVar20 * DAT_180381158;
        fVar30 = fVar20 * _DAT_1803810b0;
        local_13c = fVar22;
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar2 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1520) + 0x2c8);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = *(longlong *)(lVar2 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar9 + 0x1520) + 0xce) = 1;
        lVar9 = *(longlong *)(lVar9 + 0x1520);
        local_130 = *(float *)(lVar9 + 0x2c);
        local_154 = local_130 + *(float *)(lVar9 + 0x34);
        fVar24 = *(float *)(lVar9 + 0x28);
        local_158 = fVar24 + *(float *)(lVar9 + 0x30);
        local_160 = CONCAT44(local_130 + fVar30,fVar24 + 0.0);
        local_140 = fVar24;
        local_138 = local_154;
        local_e8 = local_158;
        cVar4 = FUN_1801a5660(&DAT_1803fa546,&DAT_1803fa550,&local_160,0);
        if (cVar4 != '\0') {
          if (((DAT_1803fa46c != '\0') && (DAT_1803fa52d == '\0')) &&
             (lVar9 = FUN_180273780("ESP Editor##Sidecar"), lVar9 != 0)) {
            FUN_1802827b0(lVar9,0);
          }
          lVar9 = FUN_180273780("catsuper##Main");
          if (lVar9 != 0) {
            FUN_1802827b0(lVar9,0);
          }
          DAT_1803fa538 = 0;
        }
        cVar4 = FUN_180279410(0xb);
        if (cVar4 != '\0') {
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(char *)(*(longlong *)(lVar2 + 0xec0) + 0xb30) != '\0') {
            if (((DAT_1803fa46c != '\0') && (DAT_1803fa52d == '\0')) &&
               (lVar9 = FUN_180273780("ESP Editor##Sidecar"), lVar9 != 0)) {
              FUN_1802827b0(lVar9,0);
            }
            lVar9 = FUN_180273780("catsuper##Main");
            if (lVar9 != 0) {
              FUN_1802827b0(lVar9,0);
            }
            DAT_1803fa538 = 0;
          }
        }
        cVar4 = *(char *)(lVar2 + 0x10);
        if (cVar4 == '\0') {
          __dyn_tls_on_demand_init();
          cVar4 = *(char *)(lVar2 + 0x10);
        }
        lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
        DAT_1803fa530 = *(float *)(lVar9 + 0x28);
        DAT_1803fa534 = *(float *)(lVar9 + 0x2c);
        fVar25 = fVar20 * DAT_180380fd8;
        lVar9 = DAT_1803fa5d0;
        DAT_1803da700 = fVar28;
        DAT_1803da704 = fVar29;
        local_114 = fVar25;
        if (DAT_1803fa5d0 == 0) {
          if (cVar4 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1228);
        }
        FUN_18027a8a0(lVar9);
        fVar26 = fVar20 * DAT_180380fa8;
        local_164 = fVar20 * DAT_180380e9c;
        local_168 = fVar26;
        local_134 = fVar26;
        local_11c = local_164;
        FUN_18026aad0(0xb,&local_168);
        fVar27 = fVar20 * DAT_180380f40;
        local_168 = fVar26;
        local_164 = fVar27;
        FUN_18026aad0(0xe,&local_168);
        local_168 = fVar20 * DAT_180380f90;
        local_164 = local_11c;
        FUN_18026aad0(0xf,&local_168);
        fVar26 = local_130;
        local_150 = *(undefined8 *)(&DAT_1803dc988 + lVar18);
        uStack_148 = *(undefined8 *)(&DAT_1803dc990 + lVar18);
        local_164 = local_138 - fVar23;
        local_168 = fVar22 + fVar24;
        local_e4 = fVar24 + fVar23;
        local_e0 = local_130 + fVar23;
        local_138 = local_164;
        local_12c = local_168;
        uVar5 = FUN_180268ed0(&local_150);
        local_190._0_4_ = 0x50;
        local_198._0_4_ = DAT_180380fa8;
        FUN_180295000(lVar3,&local_e4,&local_168,uVar5);
        local_150 = *puVar16;
        uStack_148 = *(undefined8 *)(&DAT_1803dc9c0 + lVar18);
        local_168 = local_12c;
        local_164 = local_138;
        local_120 = fVar26 + fVar23;
        local_124 = local_12c;
        local_e4 = local_120;
        uVar5 = FUN_180268ed0(&local_150);
        local_198._0_4_ = fVar23;
        FUN_180294c90(lVar3,&local_124,&local_168,uVar5);
        fVar26 = fVar20 * DAT_180381078;
        local_164 = (fVar30 - fVar26) * DAT_180380ac0 + local_130;
        local_168 = fVar24 + fVar25;
        local_150 = *(undefined8 *)(&DAT_1803dc9c8 + lVar18);
        uStack_148 = CONCAT44(*(float *)(&DAT_1803dc9d4 + lVar18) * DAT_1803809fc,
                              *(undefined4 *)(&DAT_1803dc9d0 + lVar18));
        local_160 = CONCAT44(local_164 + fVar26,local_168 + fVar26);
        local_138 = local_168;
        local_128 = local_164;
        local_124 = fVar26;
        uVar5 = FUN_180268ed0(&local_150);
        fVar22 = local_134;
        local_190._0_4_ = 0;
        local_198._0_4_ = local_134;
        FUN_180295000(lVar3,&local_168,&local_160,uVar5);
        local_150 = *(undefined8 *)(&DAT_1803dc9c8 + lVar18);
        uStack_148 = CONCAT44(*(float *)(&DAT_1803dc9d4 + lVar18) * DAT_180380ab8,
                              *(undefined4 *)(&DAT_1803dc9d0 + lVar18));
        local_160 = CONCAT44(local_128 + fVar26,local_138 + fVar26);
        uVar5 = FUN_180268ed0(&local_150);
        local_188 = (char *)((ulonglong)local_188._4_4_ << 0x20);
        local_190 = (undefined8 *)CONCAT44(local_190._4_4_,fVar23);
        local_198._0_4_ = fVar22;
        FUN_180294f00(lVar3,&local_168,&local_160,uVar5);
        local_150 = *(undefined8 *)(&DAT_1803dc9c8 + lVar18);
        uStack_148 = *(undefined8 *)(&DAT_1803dc9d0 + lVar18);
        fVar25 = fVar26 * DAT_180380ac0 + local_138;
        fVar24 = local_128 + fVar26 * DAT_180380ac0;
        fVar22 = fVar20 * DAT_180380fc8;
        uVar5 = FUN_180268ed0(&local_150);
        local_198 = (undefined8 *)CONCAT44(local_198._4_4_,fVar22);
        FUN_18019ab20(lVar3,0xf,CONCAT44(fVar24,fVar25),uVar5);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar25 = local_124;
        fVar22 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
        fVar26 = (local_124 - (fVar22 + fVar22 + DAT_180380d30)) * DAT_180380ac0;
        lVar15 = 0x180000000;
        local_150 = *(undefined8 *)(&DAT_1803dca18 + lVar18);
        uStack_148 = *(undefined8 *)(&DAT_1803dca20 + lVar18);
        uVar6 = FUN_180268ed0(&local_150);
        fVar24 = local_128;
        local_124 = fVar25 + local_134 + local_138;
        local_160 = CONCAT44(fVar26 + local_128,fVar25 + local_134 + local_138);
        lVar9 = *(longlong *)(lVar3 + 0x38);
        if ((uVar6 & 0xff000000) != 0) {
          local_150 = *(undefined8 *)(lVar3 + 0x60);
          uStack_148 = *(undefined8 *)(lVar3 + 0x68);
          local_170 = 0;
          local_178 = 0;
          local_180 = 0;
          local_188 = "mayrr";
          local_190 = &local_150;
          local_198 = (undefined8 *)CONCAT44(local_198._4_4_,uVar6);
          FUN_18029e990(*(undefined8 *)(lVar9 + 0x18),lVar3,*(undefined4 *)(lVar9 + 0x20),&local_160
                       );
          lVar9 = *(longlong *)(lVar3 + 0x38);
          lVar15 = 0x180000000;
        }
        local_150 = CONCAT44(*(undefined4 *)(lVar18 + 0x3dca2c + lVar15),
                             *(undefined4 *)(lVar18 + 0x3dca28 + lVar15));
        uStack_148 = CONCAT44(*(float *)(lVar18 + 0x3dca34 + lVar15) * DAT_180380b4c,
                              *(undefined4 *)(lVar18 + 0x3dca30 + lVar15));
        uVar6 = FUN_180268ed0(&local_150);
        local_160 = CONCAT44(fVar26 + fVar22 + DAT_180380d30 + fVar24,local_124);
        if ((uVar6 & 0xff000000) != 0) {
          local_150 = *(undefined8 *)(lVar3 + 0x60);
          uStack_148 = *(undefined8 *)(lVar3 + 0x68);
          local_170 = 0;
          local_178 = 0;
          local_180 = 0;
          local_188 = "internal";
          local_190 = &local_150;
          local_198 = (undefined8 *)CONCAT44(local_198._4_4_,uVar6);
          FUN_18029e990(*(undefined8 *)(lVar9 + 0x18),lVar3,*(undefined4 *)(lVar9 + 0x20),&local_160
                       );
        }
        local_150 = *puVar16;
        uStack_148 = *(undefined8 *)(&DAT_1803dc9c0 + lVar18);
        fVar24 = fVar30 + local_130;
        local_160 = CONCAT44(fVar24,local_12c);
        local_168 = local_140 + fVar23;
        local_164 = fVar24;
        uVar5 = FUN_180268ed0(&local_150);
        local_198._0_4_ = fVar23;
        FUN_180294c90(lVar3,&local_168,&local_160,uVar5);
        fVar22 = local_13c - fVar20 * DAT_180380fe8;
        local_160 = CONCAT44(fVar30 + fVar20 * DAT_180380fe8,local_134);
        FUN_18027f6a0(&local_160);
        local_160 = (ulonglong)(uint)local_11c << 0x20;
        FUN_18026aad0(0xe,&local_160);
        cVar4 = FUN_18019dee0("Combat",0x10,fVar21 == 0.0,fVar22);
        if ((cVar4 != '\0') && (bVar19 = DAT_1803fa53c == 9.80909e-45, DAT_1803fa53c = 0.0, bVar19))
        {
          DAT_1803fa53c = 9.80909e-45;
        }
        cVar4 = FUN_18019dee0("Visual",1,fVar21 == 1.4013e-45,fVar22);
        if ((cVar4 != '\0') &&
           (bVar19 = DAT_1803fa53c == 5.60519e-45, DAT_1803fa53c = 1.4013e-45, bVar19)) {
          DAT_1803fa53c = 5.60519e-45;
        }
        cVar4 = FUN_18019dee0("Utility",2,fVar21 == 2.8026e-45,fVar22);
        if (cVar4 != '\0') {
          DAT_1803fa53c = 2.8026e-45;
        }
        cVar4 = FUN_18019dee0(&DAT_18037907c,0x11,fVar21 == 4.2039e-45,fVar22);
        if (cVar4 != '\0') {
          DAT_1803fa53c = 4.2039e-45;
        }
        cVar4 = FUN_18019dee0("Network",0x12,fVar21 == 5.60519e-45,fVar22);
        if (cVar4 != '\0') {
          DAT_1803fa53c = 8.40779e-45;
        }
        fVar25 = fVar29 - fVar20 * DAT_18038113c;
        local_150 = *puVar16;
        uStack_148 = CONCAT44(*(float *)(&DAT_1803dc9c4 + lVar18) * DAT_180380ae4,
                              *(undefined4 *)(&DAT_1803dc9c0 + lVar18));
        local_164 = (fVar25 + local_130) - local_134;
        local_160 = CONCAT44(local_164,local_12c - local_114);
        local_168 = local_140 + local_114;
        uVar5 = FUN_180268ed0(&local_150);
        local_198._0_4_ = fVar23;
        FUN_180294c90(lVar3,&local_168,&local_160,uVar5);
        local_160 = CONCAT44(fVar25,local_134);
        FUN_18027f6a0(&local_160);
        cVar4 = FUN_18019dee0("Lua editor",5,DAT_180409bc1,fVar22);
        if (cVar4 != '\0') {
          DAT_180409bc1 = DAT_180409bc1 == '\0';
        }
        cVar4 = FUN_18019dee0("ESP editor",0x13,DAT_1803fa46c,fVar22);
        if (cVar4 != '\0') {
          DAT_1803fa46c = DAT_1803fa46c == '\0';
        }
        cVar4 = FUN_18019dee0("Settings",4,fVar21 == 7.00649e-45,fVar22);
        if (cVar4 != '\0') {
          DAT_1803fa53c = 7.00649e-45;
        }
        FUN_18026abb0(1);
        fVar25 = local_e8;
        fVar22 = local_12c;
        local_150 = CONCAT44((*(float *)(&DAT_1803dc99c + lVar18) -
                             *(float *)(&DAT_1803dc97c + lVar18)) * _UNK_1803815d4 +
                             *(float *)(&DAT_1803dc97c + lVar18),
                             (*(float *)(&DAT_1803dc998 + lVar18) -
                             *(float *)(&DAT_1803dc978 + lVar18)) * _DAT_1803815d0 +
                             *(float *)(&DAT_1803dc978 + lVar18));
        uStack_148 = CONCAT44((*(float *)(&DAT_1803dc9a4 + lVar18) -
                              *(float *)(&DAT_1803dc984 + lVar18)) * _UNK_1803815dc +
                              *(float *)(&DAT_1803dc984 + lVar18),
                              (*(float *)(&DAT_1803dc9a0 + lVar18) -
                              *(float *)(&DAT_1803dc980 + lVar18)) * _UNK_1803815d8 +
                              *(float *)(&DAT_1803dc980 + lVar18));
        local_160 = CONCAT44(fVar24,local_e8 - fVar23);
        local_168 = local_12c + fVar23;
        local_164 = local_e4;
        uVar5 = FUN_180268ed0(&local_150);
        local_190 = (undefined8 *)CONCAT44(local_190._4_4_,0x20);
        local_198._0_4_ = DAT_180380fa8;
        FUN_180295000(lVar3,&local_168,&local_160,uVar5);
        local_150 = *puVar16;
        uStack_148 = *(undefined8 *)(&DAT_1803dc9c0 + lVar18);
        local_160 = CONCAT44(fVar24,fVar25);
        local_168 = fVar22;
        local_164 = fVar24;
        uVar5 = FUN_180268ed0(&local_150);
        local_198 = (undefined8 *)CONCAT44(local_198._4_4_,fVar23);
        FUN_180294c90(lVar3,&local_168,&local_160,uVar5);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar22 = local_13c;
        fVar23 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xcc8);
        fVar23 = (fVar30 - (fVar23 + fVar23 + *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238))) *
                 DAT_180380ac0;
        fVar25 = fVar20 * DAT_180381004;
        fVar24 = local_13c + fVar25;
        local_160 = CONCAT44(fVar23,fVar24);
        FUN_18027f6a0(&local_160);
        FUN_1802af4c0();
        FUN_1802aabb0(&DAT_1803dca18 + lVar18,&DAT_1803431ac,(&PTR_s_Combat_1803395c8)[(uint)fVar21]
                     );
        FUN_18027f5b0();
        local_150 = *(undefined8 *)(&DAT_1803dca28 + lVar18);
        uStack_148 = CONCAT44(*(float *)((longlong)&DAT_1803dca30 + lVar18 + 4) * DAT_180380b10,
                              *(undefined4 *)(&DAT_1803dca30 + lVar7 * 0x19));
        FUN_1802aabb0(&local_150,&DAT_1803431ac,
                      (&PTR_s_targeting___accuracy_18033ce30)[(uint)fVar21]);
        local_160 = CONCAT44(fVar23,fVar28 - fVar20 * _DAT_180381194);
        FUN_18027f6a0(&local_160);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar7 = *(longlong *)(lVar2 + 0xec0);
        puVar1 = (uint *)(lVar7 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(float *)(lVar7 + 0x1ed8) = fVar20 * _DAT_180381180;
        local_160 = 0;
        local_180 = 0;
        local_188 = (char *)0x0;
        local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
        local_198 = &local_160;
        FUN_1802b74e0("##global_search","Search options...",&DAT_1803ff030,0x40);
        local_160 = CONCAT44(fVar30 + fVar25,fVar24);
        FUN_18027f6a0(&local_160);
        local_160 = CONCAT44((fVar29 - fVar30) - (fVar25 + fVar25),
                             (fVar28 - fVar22) - (fVar25 + fVar25));
        cVar4 = FUN_180272fa0("##page_canvas",&local_160,0,0x18);
        if (cVar4 != '\0') {
          if (DAT_1803ff030 == '\0') {
            if ((fVar21 == 2.8026e-45) || (4 < (uint)fVar21)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if (*(char *)(lVar2 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
            fVar23 = (*(float *)(lVar7 + 0x11c) - *(float *)(lVar7 + 0x2c)) +
                     *(float *)(lVar7 + 0x9c);
            if (bVar19) {
              if (*(char *)(lVar2 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar7 = *(longlong *)(lVar2 + 0xec0);
              *(undefined1 *)(*(longlong *)(lVar7 + 0x1520) + 0xce) = 1;
              lVar7 = *(longlong *)(lVar7 + 0x1520);
              *(float *)(lVar7 + 0x11c) =
                   (*(float *)(lVar7 + 0x2c) - *(float *)(lVar7 + 0x9c)) + fVar23 + local_134;
              *(undefined1 *)(lVar7 + 0x159) = 1;
              if (*(char *)(lVar2 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
              fVar28 = *(float *)(lVar7 + 0x118);
              fVar29 = *(float *)(lVar7 + 0x28);
              fVar22 = *(float *)(lVar7 + 0x98);
              if (*(char *)(lVar2 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar7 = *(longlong *)(lVar2 + 0xec0);
              *(undefined1 *)(*(longlong *)(lVar7 + 0x1520) + 0xce) = 1;
              lVar7 = *(longlong *)(lVar7 + 0x1520);
              *(float *)(lVar7 + 0x118) =
                   (*(float *)(lVar7 + 0x28) - *(float *)(lVar7 + 0x98)) +
                   (fVar28 - fVar29) + fVar22 + fVar27;
              *(undefined1 *)(lVar7 + 0x159) = 1;
            }
            if (fVar21 == 0.0) {
              cVar4 = FUN_18019e970("Aimbot",DAT_1803fa53c == 0.0);
              if (cVar4 != '\0') {
                DAT_1803fa53c = 0.0;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970(&DAT_180379178,DAT_1803fa53c == 9.80909e-45);
              if (cVar4 != '\0') {
                DAT_1803fa53c = 9.80909e-45;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970(&DAT_180364308,DAT_1803fa53c == 1.12104e-44);
              if (cVar4 != '\0') {
                DAT_1803fa53c = 1.12104e-44;
              }
            }
            else if (fVar21 == 1.4013e-45) {
              if ((DAT_1803fa53c == 1.4013e-45) && (DAT_1803fa560 == 0)) {
                uVar13 = 1;
              }
              else {
                uVar13 = 0;
              }
              cVar4 = FUN_18019e970("Players",uVar13);
              if (cVar4 != '\0') {
                DAT_1803fa53c = 1.4013e-45;
                DAT_1803fa560 = 0;
              }
              FUN_18027f5b0();
              if ((DAT_1803fa53c == 1.4013e-45) && (DAT_1803fa560 == 1)) {
                uVar13 = 1;
              }
              else {
                uVar13 = 0;
              }
              cVar4 = FUN_18019e970("World",uVar13);
              if (cVar4 != '\0') {
                DAT_1803fa53c = 1.4013e-45;
                DAT_1803fa560 = 1;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Camera",DAT_1803fa53c == 5.60519e-45);
              if (cVar4 != '\0') {
                DAT_1803fa53c = 5.60519e-45;
              }
            }
            else if (fVar21 == 4.2039e-45) {
              cVar4 = FUN_18019e970("Damage",DAT_1803fa55c == 0);
              if (cVar4 != '\0') {
                DAT_1803fa55c = 0;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Network",DAT_1803fa55c == 1);
              if (cVar4 != '\0') {
                DAT_1803fa55c = 1;
              }
            }
            else if (fVar21 == 5.60519e-45) {
              cVar4 = FUN_18019e970("Entities",DAT_1803fa548 == 0);
              if (cVar4 != '\0') {
                DAT_1803fa548 = 0;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Players",DAT_1803fa548 == 1);
              if (cVar4 != '\0') {
                DAT_1803fa548 = 1;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Teams",DAT_1803fa548 == 2);
              if (cVar4 != '\0') {
                DAT_1803fa548 = 2;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Usergroups",DAT_1803fa548 == 4);
              if (cVar4 != '\0') {
                DAT_1803fa548 = 4;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Netvars",DAT_1803fa548 == 3);
              if (cVar4 != '\0') {
                DAT_1803fa548 = 3;
              }
              FUN_18027f5b0();
              cVar4 = FUN_18019e970("Steam",DAT_1803fa548 == 6);
              if (cVar4 != '\0') {
                DAT_1803fa548 = 6;
              }
            }
            iVar17 = DAT_1803fa548;
            if (bVar19) {
              fVar20 = fVar20 * DAT_180381048;
              if (*(char *)(lVar2 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              iVar17 = DAT_1803fa548;
              lVar7 = *(longlong *)(lVar2 + 0xec0);
              *(undefined1 *)(*(longlong *)(lVar7 + 0x1520) + 0xce) = 1;
              lVar7 = *(longlong *)(lVar7 + 0x1520);
              *(float *)(lVar7 + 0x11c) =
                   (*(float *)(lVar7 + 0x2c) - *(float *)(lVar7 + 0x9c)) + fVar20 + fVar23 + fVar25;
              *(undefined1 *)(lVar7 + 0x159) = 1;
            }
            switch(DAT_1803fa53c) {
            case 0.0:
              FUN_1801bb810();
              break;
            case 1.4013e-45:
              if (DAT_1803fa560 == 0) {
                FUN_1801c23c0();
              }
              else {
                FUN_1801c3ef0();
              }
              break;
            case 2.8026e-45:
              FUN_1801d5ef0();
              break;
            case 4.2039e-45:
              FUN_1801df8b0();
              break;
            case 5.60519e-45:
              FUN_1801e2220();
              break;
            case 7.00649e-45:
              FUN_1801e3830();
              break;
            case 8.40779e-45:
              if (iVar17 == 1) {
                FUN_1801cb050();
              }
              else if (iVar17 == 2) {
                FUN_1801cd9e0();
              }
              else if (iVar17 == 3) {
                FUN_1801d0270();
              }
              else if (iVar17 == 4) {
                FUN_1801cee10();
              }
              else if (iVar17 == 6) {
                FUN_1801d3b90();
              }
              else {
                FUN_1801c8950();
              }
              break;
            case 9.80909e-45:
              FUN_1801bfd20();
              break;
            case 1.12104e-44:
              FUN_1801bf770();
            }
          }
          else {
            FUN_1801a35c0(&DAT_1803ff030,0x40,&DAT_1803fa53c);
          }
        }
        FUN_180273410();
        FUN_18026abb0(3);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar2 = *(longlong *)(lVar2 + 0xec0);
        if (*(int *)(lVar2 + 0x1fe8) < 1) {
          FUN_18027e9c0("Calling PopFont() too many times!");
          param_1 = local_118;
        }
        else {
          FUN_18027a5f0(*(undefined8 *)
                         (*(longlong *)(lVar2 + 0x1ff0) + -0x10 +
                         (longlong)*(int *)(lVar2 + 0x1fe8) * 0x10));
          *(int *)(lVar2 + 0x1fe8) = *(int *)(lVar2 + 0x1fe8) + -1;
          param_1 = local_118;
        }
      }
      pcVar12 = "ESP Editor##Sidecar";
      FUN_180278d40();
      FUN_18026a890(2);
      FUN_18026abb0(2);
      FUN_1801a6210();
      local_190 = (undefined8 *)&DAT_1803fa52d;
      local_198 = (undefined8 *)CONCAT44(local_198._4_4_,DAT_1803fa54c);
      FUN_18017f530(CONCAT44(DAT_1803fa534,DAT_1803fa530),CONCAT44(DAT_1803da704,DAT_1803da700),
                    param_1,&DAT_1803fa46c);
      puVar16 = DAT_1803fcc70;
      for (puVar14 = DAT_1803fcc68; local_108 = puVar14, puVar14 != puVar16; puVar14 = puVar14 + 1)
      {
        (**(code **)(*(longlong *)*puVar14 + 0x18))();
      }
      if (DAT_1803fa46e != '\0') {
        DAT_1803fa46e = '\0';
        if (DAT_180409bc1 != '\0') {
          FUN_180282270("Lua editor##AOS");
        }
        if (DAT_1803fa547 != '\0') {
          FUN_180282270("Theme editor##AOS_CustomTheme");
        }
        if (DAT_1803fa46c != '\0') {
          pcVar11 = "ESP Editor##Sidecar";
          if (DAT_1803fa52d != '\0') {
            pcVar11 = "ESP Editor##Detached";
          }
          FUN_180282270(pcVar11);
        }
        if (DAT_1803fa538 == 1) {
          pcVar12 = "Lua editor##AOS";
        }
        else if (DAT_1803fa538 == 2) {
          if (DAT_1803fa52d != '\0') {
            pcVar12 = "ESP Editor##Detached";
          }
        }
        else if (DAT_1803fa538 == 3) {
          pcVar12 = "Theme editor##AOS_CustomTheme";
        }
        else {
          pcVar12 = "catsuper##Main";
        }
        FUN_180282270(pcVar12);
      }
      (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_e8,&local_e4);
      if (DAT_1803da696 != '\0') {
        local_160 = CONCAT44((float)(int)local_e4,(float)(int)local_e8);
        FUN_1802d3440(local_160);
      }
      *local_100 = local_110;
      return;
    }
  }
  else if (DAT_1803fa545 != '\0') {
    DAT_1803fa545 = 0;
    if (DAT_1803fa5a8 != (longlong *)0x0) {
      (**(code **)(*DAT_1803fa5a8 + 0x58))(DAT_1803fa5a8,1);
    }
    FUN_180024860();
    DAT_1803fa54c = 0.0;
    return;
  }
  DAT_1803fa54c = 0.0;
  return;
}


