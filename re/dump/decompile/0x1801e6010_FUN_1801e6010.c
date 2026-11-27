// 0x1801e6010  FUN_1801e6010
// size=4252 thunk=false
// signature: undefined FUN_1801e6010()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e6010(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  float *pfVar9;
  size_t sVar10;
  float *pfVar11;
  longlong lVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  int iVar16;
  longlong lVar17;
  char **ppcVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_268 [32];
  char local_248;
  float local_240 [4];
  undefined4 local_230;
  undefined8 ***local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulonglong uStack_210;
  char *local_208;
  undefined4 local_200 [2];
  char *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  char *local_1b8;
  undefined4 local_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  char *local_198;
  undefined4 local_190;
  char *local_188;
  undefined4 local_180;
  char *local_178;
  undefined4 local_170;
  char *local_168;
  undefined4 local_160;
  char *local_158;
  undefined4 local_150;
  char *local_148;
  undefined4 local_140;
  char *local_138;
  undefined4 local_130;
  char *local_128;
  undefined4 local_120;
  char *local_118;
  undefined4 local_110;
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_268;
  iVar16 = 0;
  local_230 = 0;
  if (DAT_1803fa457 != '\0') {
    local_b8 = (char *)CONCAT44(local_b8._4_4_,4);
    local_240[0] = 0.0;
    pfVar11 = local_240;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar11 = &DAT_1803fb24c;
    }
    pfVar9 = (float *)&local_b8;
    if ((int)DAT_1803fb24c < 5) {
      pfVar9 = pfVar11;
    }
    DAT_1803fb24c = *pfVar9;
    lVar17 = (longlong)(int)DAT_1803fb24c * 200;
    local_208 = "Aimbot";
    local_b0 = -0x8ade0d76885cfcd;
    local_b8 = (char *)0x549a0576bfe235e1;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_240,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,&local_228,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_200[0] = *puVar8;
    local_1f8 = "Triggerbot";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0xcef5d8b14b3154d9;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_1f0 = *puVar8;
    local_1e8 = "Fakeduck";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x15b58d95d09e07fe;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_1e0 = *puVar8;
    local_1d8 = "Airstuck";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x14aaa39e12056f36;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_1d0 = *puVar8;
    local_1c8 = &DAT_18035056c;
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0xdb9ca35f44d9bb88;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_1c0 = *puVar8;
    local_1b8 = "Speedhack";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x647450219ebf53aa;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_1b0 = *puVar8;
    local_1a8 = "Double tap";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0xb51863fffb940c02;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_1a0 = *puVar8;
    local_198 = "Fakelag";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x64c4d3b04486d14d;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_190 = *puVar8;
    local_188 = "Entity add";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x11da5b42ad2c912c;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_180 = *puVar8;
    local_178 = "Friend toggle";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x42e98a6fcf3a4937;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_170 = *puVar8;
    local_168 = "Rage aim";
    local_b0 = 0x2723fc3764d74742;
    local_b8 = (char *)0x549a0576bfe235e1;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_160 = *puVar8;
    local_158 = "AA left";
    local_b0 = 0x2d8f695138585a77;
    local_b8 = (char *)0xb13946245d7c0048;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_150 = *puVar8;
    local_148 = "AA right";
    local_b0 = 0x2d8f695138585a77;
    local_b8 = (char *)0x59dd15dc32d48bd;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_140 = *puVar8;
    local_138 = "AA back";
    local_b0 = 0x2d8f695138585a77;
    local_b8 = (char *)0xf702e5968aa6c59a;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_130 = *puVar8;
    local_128 = "AA invert";
    local_b0 = 0x2d8f695138585a77;
    local_b8 = (char *)0xaae97fae090a88e9;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_120 = *puVar8;
    local_118 = "Third person";
    local_b0 = 0x575dfe7fd1bc6251;
    local_b8 = (char *)0x549a0576bfe235e1;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_110 = *puVar8;
    local_108 = "Free cam";
    local_b0 = 0x237bcfbdef3b6800;
    local_b8 = (char *)0x549a0576bfe235e1;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_100 = *puVar8;
    local_f8 = "Spam use";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0xc9339fae2fcb199e;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_f0 = *puVar8;
    local_e8 = "Spam primary";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x217a2c6fd3b34823;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_e0 = *puVar8;
    local_d8 = "Spam secondary";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0xdd80ea0cec10ff07;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_d0 = *puVar8;
    local_c8 = "Spam light";
    local_b0 = -0x6c02a9e56954f399;
    local_b8 = (char *)0x65489c45ca370d45;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_228,&local_b0);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_240,&local_b8);
    puVar8 = (undefined4 *)FUN_1802029c0(*plVar7 + 0x28);
    local_c0 = *puVar8;
    if (DAT_1803fa52f == '\0') {
      DAT_1803fa52f = '\x01';
    }
    lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_b0 = lVar19;
    cVar6 = *(char *)(lVar19 + 0x10);
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
      cVar6 = *(char *)(lVar19 + 0x10);
    }
    lVar4 = *(longlong *)(lVar19 + 0xec0);
    if (*(char *)(lVar4 + 0x108) == '\0') {
      DAT_1804009f8 = '\0';
      _DAT_180423af0 = 0;
    }
    else if (DAT_1804009f8 != '\0') {
      DAT_1803da70c = *(float *)(lVar4 + 0x104) - _DAT_180423af4;
      DAT_1803da708 = *(float *)(lVar4 + 0x100) - _DAT_180423af0;
    }
    local_240[0] = 1.5;
    local_b8 = (char *)CONCAT44(local_b8._4_4_,0x3f400000);
    pfVar11 = (float *)&local_b8;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar11 = &DAT_1803da6a4;
    }
    pfVar9 = local_240;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar9 = pfVar11;
    }
    fVar1 = *pfVar9;
    lVar12 = DAT_1803fa5d0;
    if (DAT_1803fa5d0 == 0) {
      if (cVar6 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar19 + 0xec0) + 0x1228);
    }
    FUN_18027a8a0(lVar12,fVar1 * DAT_180380fd8);
    fVar21 = fVar1 * DAT_180380fa8;
    local_b8 = (char *)CONCAT44(fVar21,fVar21);
    FUN_18026aad0(2,&local_b8);
    local_b8 = (char *)CONCAT44(fVar1 * DAT_180380e9c,fVar21);
    FUN_18026aad0(0xb,&local_b8);
    local_b8 = (char *)CONCAT44(fVar1 * DAT_180380f40,fVar21);
    FUN_18026aad0(0xe,&local_b8);
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = *(longlong *)(lVar19 + 0xec0);
    *(uint *)(lVar12 + 0x1f48) = *(uint *)(lVar12 + 0x1f48) | 1;
    *(float *)(lVar12 + 0x1f58) = DAT_1803da708;
    *(float *)(lVar12 + 0x1f5c) = DAT_1803da70c;
    *(undefined8 *)(lVar12 + 0x1f60) = 0;
    *(undefined4 *)(lVar12 + 0x1f4c) = 1;
    local_b8 = (char *)0x7f7fffff7f7fffff;
    local_240[0] = fVar1 * DAT_18038116c;
    local_240[1] = 0.0;
    FUN_180279900(local_240,&local_b8);
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    FUN_18026a810(10,*(longlong *)(lVar19 + 0xec0) + 0xe60);
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    FUN_18026a810(0xc,*(longlong *)(lVar19 + 0xec0) + 0xe60);
    FUN_180276630("Hotkeys",0,0x178);
    if (((DAT_1804009f8 == '\0') && (*(char *)(lVar4 + 0xb30) != '\0')) &&
       (cVar6 = FUN_180279410(3), cVar6 != '\0')) {
      cVar6 = *(char *)(lVar19 + 0x10);
      if (cVar6 == '\0') {
        __dyn_tls_on_demand_init();
        cVar6 = *(char *)(lVar19 + 0x10);
      }
      lVar12 = *(longlong *)(lVar19 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar12 + 0x1520) + 0xce) = 1;
      lVar12 = *(longlong *)(lVar12 + 0x1520);
      if (lVar12 != 0) {
        fVar21 = *(float *)(lVar4 + 0xae0);
        if (*(float *)(lVar12 + 0x28) <= fVar21) {
          fVar2 = *(float *)(lVar4 + 0xae4);
          if (((*(float *)(lVar12 + 0x2c) <= fVar2) &&
              (fVar21 < *(float *)(lVar12 + 0x28) + *(float *)(lVar12 + 0x30))) &&
             (fVar2 < *(float *)(lVar12 + 0x2c) + *(float *)(lVar12 + 0x34))) {
            if (cVar6 == '\0') {
              __dyn_tls_on_demand_init();
            }
            if (*(int *)(*(longlong *)(lVar19 + 0xec0) + 0x1594) == 0) {
              DAT_1804009f8 = '\x01';
              if (*(char *)(lVar19 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar4 = *(longlong *)(*(longlong *)(lVar19 + 0xec0) + 0x1520);
              _DAT_180423af0 =
                   CONCAT44(fVar2 - *(float *)(lVar4 + 0x2c),fVar21 - *(float *)(lVar4 + 0x28));
              if (*(char *)(lVar19 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              FUN_1802827b0(*(undefined8 *)(*(longlong *)(lVar19 + 0xec0) + 0x1520),0);
            }
          }
        }
      }
    }
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0xec0) + 0x1520);
    DAT_1803da708 = *(float *)(lVar19 + 0x28);
    DAT_1803da70c = *(float *)(lVar19 + 0x2c);
    bVar20 = DAT_1803fa540 == 1;
    local_248 = bVar20;
    if (DAT_1803fa545 != '\0') {
      pcVar13 = "All##hk_mode";
      if (bVar20) {
        pcVar13 = "Held##hk_mode";
      }
      cVar6 = FUN_1802ac330(pcVar13);
      if (cVar6 != '\0') {
        DAT_1803fa540 = bVar20 ^ 1;
      }
      cVar6 = FUN_18026ee60(0);
      if (cVar6 != '\0') {
        FUN_180280d00("Click to switch: All assigned binds / only held keys");
      }
      FUN_1802afb40();
    }
    uVar5 = DAT_180381384;
    fVar21 = DAT_180381138;
    ppcVar18 = &local_208;
    do {
      iVar3 = *(int *)(ppcVar18 + 1);
      if ((iVar3 != 0) && ((cVar6 = FUN_1800245f0(iVar3), !bVar20 || (cVar6 != '\0')))) {
        FUN_1802aabb0(&DAT_1803dca28 + lVar17,&DAT_1803431ac,*ppcVar18);
        FUN_18027f5b0(fVar1 * fVar21);
        pcVar13 = (char *)FUN_1802d2b60(iVar3);
        local_228 = (undefined8 ****)0x0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        sVar10 = strlen(pcVar13);
        FUN_18001d080(&local_228,pcVar13,sVar10);
        local_230 = 2;
        ppppuVar15 = &local_228;
        if (0xf < uStack_210) {
          ppppuVar15 = (undefined8 ****)local_228;
        }
        puVar14 = &DAT_1803dc9e8;
        if (cVar6 == '\0') {
          puVar14 = &DAT_1803dca18;
        }
        FUN_1802aabb0(puVar14 + lVar17,&DAT_1803431ac,ppppuVar15);
        local_230 = 0;
        FUN_18020e450(&local_228);
        iVar16 = iVar16 + 1;
      }
      cVar6 = local_248;
      ppcVar18 = ppcVar18 + 2;
    } while (ppcVar18 != (char **)&local_b8);
    if ((((DAT_1803fa520 != 0) || (DAT_1803fa524 != 0)) || (DAT_1803fa528 != 0)) &&
       ((local_248 == '\0' || (DAT_1803fa46f != '\0')))) {
      uStack_a0 = 0;
      lVar19 = 0;
      local_98 = 0;
      local_90 = 0xf;
      local_a8 = (undefined8 ****)0x0;
      do {
        if ((&DAT_1803fa520)[lVar19] != 0) {
          if (local_98 != 0) {
            FUN_18021aef0(&local_a8,&DAT_180378f28,3);
          }
          pcVar13 = (char *)FUN_1802d2b60((&DAT_1803fa520)[lVar19]);
          local_228 = (undefined8 ****)0x0;
          uStack_220 = 0;
          local_218 = 0;
          uStack_210 = 0;
          sVar10 = strlen(pcVar13);
          FUN_18001d080(&local_228,pcVar13,sVar10);
          local_230 = 1;
          ppppuVar15 = &local_228;
          if (0xf < uStack_210) {
            ppppuVar15 = (undefined8 ****)local_228;
          }
          FUN_18021aef0(&local_a8,ppppuVar15,local_218);
          local_230 = 0;
          FUN_18020e450(&local_228);
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      FUN_1802aabb0(&DAT_1803dca28 + lVar17,"Panic");
      FUN_18027f5b0(fVar1 * fVar21,uVar5);
      ppppuVar15 = &local_a8;
      if (0xf < local_90) {
        ppppuVar15 = (undefined8 ****)local_a8;
      }
      puVar14 = &DAT_1803dca08;
      if (DAT_1803fa46f == '\0') {
        puVar14 = &DAT_1803dca18;
      }
      FUN_1802aabb0(puVar14 + lVar17,&DAT_1803431ac,ppppuVar15);
      iVar16 = iVar16 + 1;
      FUN_18020e450(&local_a8);
    }
    lVar17 = local_b0;
    if (iVar16 == 0) {
      pcVar13 = "No active binds";
      if (cVar6 != '\0') {
        pcVar13 = "No held binds";
      }
      FUN_1802aac00(pcVar13);
    }
    FUN_180278d40();
    FUN_18026a890(2);
    FUN_18026abb0(3);
    if (*(char *)(lVar17 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)(lVar17 + 0xec0);
    lVar19 = (longlong)*(int *)(lVar17 + 0x1fe8);
    if (*(int *)(lVar17 + 0x1fe8) < 1) {
      FUN_18027e9c0("Calling PopFont() too many times!");
    }
    else {
      lVar4 = *(longlong *)(lVar17 + 0x1ff0);
      FUN_18027a5f0(*(undefined8 *)(lVar4 + -0x10 + lVar19 * 0x10),
                    *(undefined4 *)(lVar4 + -8 + lVar19 * 0x10),
                    *(undefined4 *)(lVar4 + -4 + lVar19 * 0x10));
      *(int *)(lVar17 + 0x1fe8) = *(int *)(lVar17 + 0x1fe8) + -1;
    }
  }
  return;
}


