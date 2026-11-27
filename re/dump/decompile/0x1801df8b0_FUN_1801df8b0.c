// 0x1801df8b0  FUN_1801df8b0
// size=10594 thunk=false
// signature: undefined FUN_1801df8b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801df8b0(void)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong *plVar12;
  float *pfVar13;
  size_t sVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  undefined *puVar21;
  char *pcVar22;
  float *pfVar23;
  char **ppcVar24;
  undefined *puVar25;
  void *pvVar26;
  undefined1 _Memory [8];
  void *pvVar27;
  char *pcVar28;
  undefined8 ******ppppppuVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  byte *pbVar32;
  int iVar33;
  void *pvVar34;
  float *pfVar35;
  uint *puVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  longlong lVar43;
  longlong lVar44;
  undefined1 uVar45;
  byte *pbVar46;
  longlong lVar47;
  char **ppcVar48;
  uint uVar49;
  char **ppcVar50;
  byte *pbVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined1 auStack_3b0 [24];
  float *local_398;
  char *local_390;
  code *local_388;
  char **local_380;
  float local_378 [2];
  float local_370 [2];
  float local_368 [2];
  uint local_360;
  float local_358;
  float local_354;
  byte local_350 [4];
  uint local_34c;
  undefined8 local_348;
  void *local_340;
  float local_338;
  float local_334;
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  ulonglong local_310;
  ulonglong uStack_308;
  undefined8 *local_300;
  float local_2f8;
  undefined4 local_2f4;
  float local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  float local_2e4;
  float local_2e0;
  undefined4 local_2dc;
  undefined8 *****local_2d8;
  longlong lStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_288 [16];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  char local_198 [8];
  undefined1 local_190 [8];
  byte *pbStack_188;
  byte *local_180;
  float *local_178;
  float *pfStack_170;
  longlong local_168;
  void *local_160;
  void *pvStack_158;
  longlong local_150;
  undefined8 *****local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong local_130;
  undefined8 *****local_128;
  longlong lStack_120;
  float *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  fVar6 = DAT_180380fa8;
  fVar5 = DAT_180380c50;
  fVar1 = DAT_180380b20;
  puVar42 = auStack_3b8;
  puVar39 = auStack_3b8;
  puVar40 = auStack_3b8;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_3b8;
  uVar49 = 0;
  local_34c = 0;
  local_360 = 0;
  local_358 = 5.60519e-45;
  local_370[0] = 0.0;
  pfVar20 = local_370;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar20 = &DAT_1803fb24c;
  }
  pfVar19 = &local_358;
  if ((int)DAT_1803fb24c < 5) {
    pfVar19 = pfVar20;
  }
  DAT_1803fb24c = *pfVar19;
  pvVar34 = (void *)((longlong)(int)DAT_1803fb24c * 200);
  local_340 = pvVar34;
  local_370[0] = 1.5;
  local_358 = 0.75;
  pfVar20 = &local_358;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar19 = local_370;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar19 = pfVar20;
  }
  fVar58 = *pfVar19 * DAT_180380fa8;
  local_338 = fVar58;
  FUN_18027f740(fVar58);
  lVar44 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar47 = 0x10;
  local_348 = 0x10;
  local_328 = lVar44;
  if (*(char *)(lVar44 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar43 = 0xec0;
  local_330 = 0xec0;
  lVar2 = *(longlong *)(*(longlong *)(lVar44 + 0xec0) + 0x1520);
  fVar54 = (*(float *)(lVar2 + 0x280) - *(float *)(lVar2 + 0x28)) - fVar58;
  if (DAT_1803fa55c != 0) {
    FUN_1801a0b60("Enable net logging",&DAT_18042586d);
    local_378[0] = 1.5;
    local_368[0] = 0.75;
    pfVar20 = local_368;
    if (fVar1 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar19 = local_378;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar19 = pfVar20;
    }
    FUN_18027f5b0(fVar54 - *pfVar19 * DAT_1803810ec);
    local_378[0] = 1.5;
    local_368[0] = 0.75;
    pfVar20 = local_368;
    if (fVar1 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar19 = local_378;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar19 = pfVar20;
    }
    local_368[1] = 26.0;
    local_368[0] = *pfVar19 * DAT_1803810ec;
    local_300 = (undefined8 *)((longlong)pvVar34 + 0x1803dca08);
    local_1d8 = (char *)*local_300;
    uStack_1d0 = *(undefined8 *)((longlong)pvVar34 + 0x1803dca10);
    local_390 = (char *)CONCAT71(local_390._1_7_,1);
    local_398 = (float *)CONCAT71(local_398._1_7_,1);
    cVar8 = FUN_18019cb40("Clear##net_clear",9,local_368,&local_1d8);
    if (cVar8 != '\0') {
      local_1b8 = &DAT_1803e9600;
      iVar9 = _Mtx_lock(&DAT_1803e9600);
      if (iVar9 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (DAT_1803e964c == 0x7fffffff) {
        DAT_1803e964c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      FUN_18021d210(&DAT_1805c7aa8);
      _Mtx_unlock(&DAT_1803e9600);
    }
    FUN_1801a0b60("Outgoing",&DAT_1803e95f0);
    local_378[0] = 1.5;
    local_368[0] = 0.75;
    pfVar20 = local_368;
    if (fVar1 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar19 = local_378;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar19 = pfVar20;
    }
    FUN_18027f5b0(0,*pfVar19 * DAT_180380fe8);
    FUN_1801a0b60("Incoming",&DAT_1803e95f1);
    local_378[0] = 1.5;
    local_368[0] = 0.75;
    FUN_18027f5b0(0);
    FUN_1801a0b60("C logging (raw in/out)",&DAT_180425869);
    FUN_1801a0ae0(
                 "Outgoing net.* captured by name + typed content (passive C hooks, no pcall). \'view\' to expand / resend. C logging adds raw engine-level in/out entries."
                 );
    if ((DAT_1805c7aa0 & 1) == 0) {
      DAT_1805c7aa0 = DAT_1805c7aa0 | 1;
      atexit((_func_5014 *)&LAB_18030b450);
    }
    if (*(char *)(lVar44 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar44 = *(longlong *)(local_330 + lVar44);
    puVar36 = (uint *)(lVar44 + 0x1ec0);
    *puVar36 = *puVar36 | 1;
    fVar54 = (float)((uint)fVar58 ^ DAT_1803817f0);
    *(float *)(lVar44 + 0x1ed8) = fVar54;
    pbVar51 = (byte *)&DAT_1803e7540;
    local_1d8 = (char *)&DAT_1803e7540;
    pcVar22 = (char *)0x0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    pbVar32 = (byte *)&DAT_1803e7540;
    if (0xf < DAT_1803e7558) {
      pbVar32 = DAT_1803e7540;
    }
    local_368[0] = 0.0;
    local_368[1] = 0.0;
    local_380 = &local_1d8;
    local_388 = FUN_1802d2b00;
    local_390 = (char *)CONCAT44(local_390._4_4_,0x400000);
    local_398 = local_368;
    FUN_1802b74e0("##net_search","search by name / #id...",pbVar32,DAT_1803e7558 + 1);
    FUN_1802afb40();
    if ((DAT_1805c7aa0 & 2) == 0) {
      DAT_1805c7aa0 = DAT_1805c7aa0 | 2;
      atexit(FUN_18030b3e0);
    }
    if ((DAT_1805c7aa0 & 4) == 0) {
      DAT_1805c7aa0 = DAT_1805c7aa0 | 4;
      atexit((_func_5014 *)&LAB_18030b3d0);
    }
    if ((DAT_1805c7aa0 & 8) == 0) {
      DAT_1805c7aa0 = DAT_1805c7aa0 | 8;
      atexit((_func_5014 *)&LAB_18030b3c0);
    }
    local_160 = (void *)0x0;
    pvStack_158 = (void *)0x0;
    local_150 = 0;
    local_1b8 = &DAT_1803e9600;
    iVar9 = _Mtx_lock(&DAT_1803e9600);
    if (iVar9 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1803e964c == 0x7fffffff) {
      DAT_1803e964c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_1d8 = pcVar22;
    if (DAT_1805c7aa8 != (undefined8 *)0x0) {
      local_1d8 = (char *)*DAT_1805c7aa8;
    }
    uStack_1d0 = DAT_1805c7ac0;
    FUN_180214990(&local_160,&local_1d8,DAT_1805c7ac8);
    _Mtx_unlock(&DAT_1803e9600);
    fVar53 = DAT_180380fcc;
    iVar9 = 0;
    local_34c = 0;
    local_370[0] = 1.5;
    local_358 = 0.75;
    local_378[0] = 1.5;
    local_368[0] = 0.75;
    pfVar20 = local_368;
    if (fVar1 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar19 = local_378;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar19 = pfVar20;
    }
    local_368[0] = *pfVar19 * DAT_180380fcc;
    pfVar20 = &local_358;
    if (fVar1 <= DAT_1803da6a4) {
      pfVar20 = &DAT_1803da6a4;
    }
    pfVar13 = local_370;
    if (DAT_1803da6a4 <= fVar5) {
      pfVar13 = pfVar20;
    }
    local_368[1] = *pfVar13 * fVar6;
    FUN_18026aad0(2,local_368);
    local_368[0] = fVar54;
    local_368[1] = fVar54;
    FUN_180272fa0("##net_list",local_368,1,0x800);
    fVar57 = DAT_18038116c;
    fVar56 = DAT_18038115c;
    fVar55 = DAT_180381138;
    fVar54 = DAT_180380fe0;
    pvVar27 = pvStack_158;
    puVar41 = auStack_3b8;
    pvVar26 = local_160;
    if (0 < (int)((longlong)pvStack_158 - (longlong)local_160 >> 3) * -0x3b13b13b) {
      local_370[0] = 0.0;
      do {
        pvVar34 = local_160;
        pcVar28 = (char *)((longlong)(int)local_370[0] * 0x68);
        local_1b8 = pcVar28;
        if (*(longlong *)(pcVar28 + 0x18 + (longlong)local_160) == 0) {
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          FUN_18001d080(&local_2b8,&DAT_180377dfc,4);
          uVar49 = uVar49 | 2;
          plVar12 = &local_2b8;
        }
        else {
          plVar12 = (longlong *)
                    FUN_18016d4c0(local_218,(char *)((longlong)local_160 + (longlong)(pcVar28 + 8)))
          ;
          uVar49 = uVar49 | 1;
        }
        local_360 = uVar49;
        local_128 = (undefined8 *****)0x0;
        lStack_120 = 0;
        local_118 = (float *)0x0;
        uStack_110 = 0;
        local_128 = (undefined8 ******)*plVar12;
        lStack_120 = plVar12[1];
        local_118 = (float *)plVar12[2];
        uStack_110 = plVar12[3];
        plVar12[2] = 0;
        plVar12[3] = 0xf;
        *(undefined1 *)plVar12 = 0;
        if ((uVar49 & 2) != 0) {
          uVar49 = uVar49 & 0xfffffffd;
          local_360 = uVar49;
          FUN_18020e450(&local_2b8);
        }
        if ((uVar49 & 1) != 0) {
          uVar49 = uVar49 & 0xfffffffe;
          local_360 = uVar49;
          FUN_18020e450(local_218);
        }
        local_108 = 0;
        uStack_100 = 0;
        if (-1 < *(int *)(pcVar28 + 0x2c + (longlong)pvVar34)) {
          FUN_180208da0(&local_108,&DAT_180377e04);
        }
        if (local_118 == (float *)0x7fffffffffffffff) goto LAB_1801e220d;
        local_388 = (code *)0x1;
        local_390 = " ";
        local_398 = local_118;
        FUN_18020e930(local_278);
        local_360 = uVar49 | 0x10;
        sVar14 = strlen((char *)&local_108);
        puVar15 = (undefined4 *)FUN_18021aef0(local_278,&local_108,sVar14);
        local_298 = *puVar15;
        uStack_294 = puVar15[1];
        uStack_290 = puVar15[2];
        uStack_28c = puVar15[3];
        local_288 = *(undefined1 (*) [16])(puVar15 + 4);
        *(undefined8 *)(puVar15 + 4) = 0;
        *(undefined8 *)(puVar15 + 6) = 0xf;
        *(undefined1 *)puVar15 = 0;
        local_360 = uVar49 | 0x18;
        if (DAT_1803e7550 == 0) {
          bVar52 = false;
        }
        else {
          uVar16 = FUN_18019a270(local_258,&local_298);
          uVar17 = FUN_18019a270(local_1f8,&DAT_1803e7540);
          lVar44 = FUN_18011aa70(uVar16,uVar17);
          FUN_18020e450(local_1f8);
          FUN_18020e450(local_258);
          bVar52 = lVar44 == -1;
        }
        local_360 = uVar49 | 0x10;
        FUN_18020e450(&local_298);
        local_360 = uVar49;
        FUN_18020e450(local_278);
        lVar47 = local_348;
        if (!bVar52) {
          if (((pcVar28 + 4)[(longlong)pvVar34] == '\0') ||
             ((*(longlong *)(pcVar28 + 0x50 + (longlong)pvVar34) ==
               *(longlong *)(pcVar28 + 0x58 + (longlong)pvVar34) &&
              (*(longlong *)(pcVar28 + 0x38 + (longlong)pvVar34) ==
               *(longlong *)(pcVar28 + 0x40 + (longlong)pvVar34))))) {
            puVar36 = (uint *)((longlong)pvVar34 + (longlong)(pcVar28 + 0x30));
            bVar52 = false;
LAB_1801e11ba:
            bVar4 = bVar52;
            bVar52 = false;
          }
          else {
            bVar4 = true;
            puVar36 = (uint *)((longlong)pvVar34 + (longlong)(pcVar28 + 0x30));
            bVar52 = true;
            if (DAT_180425420 != *(longlong *)puVar36) goto LAB_1801e11ba;
            bVar52 = true;
          }
          FUN_18027ae00(*puVar36 & 0x7fffffff);
          puVar21 = &DAT_1803dca28 + (longlong)local_340;
          FUN_1802aabb0(puVar21,"%7.1f",(double)*(float *)(pcVar28 + (longlong)pvVar34));
          local_378[0] = 1.5;
          local_368[0] = 0.75;
          pfVar20 = local_368;
          if (fVar1 <= DAT_1803da6a4) {
            pfVar20 = &DAT_1803da6a4;
          }
          pfVar19 = local_378;
          if (DAT_1803da6a4 <= fVar5) {
            pfVar19 = pfVar20;
          }
          FUN_18027f5b0(0,*pfVar19 * fVar53);
          if ((pcVar28 + 4)[(longlong)pvVar34] == '\0') {
            puVar25 = &DAT_1803dc9c8;
          }
          else {
            puVar25 = &DAT_1803dc9e8;
          }
          puVar30 = &DAT_18034c9dc;
          if ((pcVar28 + 4)[(longlong)pvVar34] == '\0') {
            puVar30 = &DAT_180377e08;
          }
          FUN_1802aabb0(puVar25 + (longlong)local_340,puVar30);
          local_378[0] = 1.5;
          local_368[0] = 0.75;
          pfVar20 = local_368;
          if (fVar1 <= DAT_1803da6a4) {
            pfVar20 = &DAT_1803da6a4;
          }
          pfVar19 = local_378;
          if (DAT_1803da6a4 <= fVar5) {
            pfVar19 = pfVar20;
          }
          FUN_18027f5b0(0,*pfVar19 * fVar6);
          ppppppuVar29 = &local_128;
          if (0xf < uStack_110) {
            ppppppuVar29 = (undefined8 ******)local_128;
          }
          puVar25 = puVar21;
          if ((pcVar28 + 4)[(longlong)pvVar34] != '\0') {
            puVar25 = &DAT_1803dca18 + (longlong)local_340;
          }
          FUN_1802aabb0(puVar25,&DAT_1803431ac,ppppppuVar29);
          local_378[0] = 1.5;
          local_368[0] = 0.75;
          FUN_18027f5b0(0);
          FUN_1802aabb0(puVar21,&DAT_180377e0c,
                        (int)((*(int *)(pcVar28 + 0x28 + (longlong)pvVar34) + 7 >> 0x1f & 7U) +
                             *(int *)(pcVar28 + 0x28 + (longlong)pvVar34) + 7) >> 3);
          if (*(longlong *)(pcVar28 + 0x38 + (longlong)pvVar34) !=
              *(longlong *)(pcVar28 + 0x40 + (longlong)pvVar34)) {
            local_378[0] = 1.5;
            local_368[0] = 0.75;
            FUN_18027f5b0(0);
            FUN_1802aabb0(puVar21,"%d fields",
                          (int)(*(longlong *)(pcVar28 + 0x40 + (longlong)pvVar34) -
                                *(longlong *)(pcVar28 + 0x38 + (longlong)pvVar34) >> 5) + -2);
          }
          if (bVar4) {
            local_378[0] = 1.5;
            local_368[0] = 0.75;
            FUN_18027f5b0(0);
            puVar25 = &DAT_180377e2c;
            if (bVar52) {
              puVar25 = &DAT_180377e24;
            }
            cVar8 = FUN_1802ac330(puVar25);
            if (cVar8 == '\0') goto LAB_1801e17a9;
            if (bVar52) {
              DAT_180425420 = 0;
              goto LAB_1801e17b0;
            }
            DAT_180425420 = *(longlong *)puVar36;
            pcVar22 = (char *)((longlong)pvVar34 + (longlong)(pcVar28 + 0x50));
            if ((void **)pcVar22 != &DAT_180423b50) {
              pvVar26 = *(void **)pcVar22;
              sVar14 = *(longlong *)(pcVar22 + 8) - (longlong)pvVar26;
              if ((ulonglong)(DAT_180423b60 - (longlong)DAT_180423b50) < sVar14) {
                FUN_18022e030(&DAT_180423b50,sVar14);
                pvVar27 = DAT_180423b50;
              }
              else {
                uVar37 = (longlong)DAT_180423b58 - (longlong)DAT_180423b50;
                if (sVar14 <= uVar37) {
                  pvVar27 = (void *)((longlong)DAT_180423b50 + sVar14);
                  memmove(DAT_180423b50,pvVar26,sVar14);
                  DAT_180423b58 = pvVar27;
                  goto LAB_1801e1528;
                }
                memmove(DAT_180423b50,pvVar26,uVar37);
                sVar14 = sVar14 - uVar37;
                pvVar26 = (void *)(uVar37 + (longlong)pvVar26);
                pvVar27 = DAT_180423b58;
              }
              memmove(pvVar27,pvVar26,sVar14);
              DAT_180423b58 = (void *)((longlong)pvVar27 + sVar14);
            }
LAB_1801e1528:
            DAT_1803fe3b0 = *(int *)(pcVar28 + 0x28 + (longlong)pvVar34);
            uStack_318 = 0;
            uVar37 = 0;
            local_310 = 0;
            uStack_308 = 0xf;
            local_320 = (undefined8 *)0x0;
            local_360 = uVar49 | 0x40;
            DAT_1803fea38 = DAT_1803fe3b0;
            if (DAT_180423b58 != DAT_180423b50) {
              do {
                FUN_180208d40(local_198,&DAT_18037755c,
                              *(undefined1 *)(uVar37 + (longlong)DAT_180423b50));
                sVar14 = strlen(local_198);
                FUN_18021aef0(&local_320,local_198,sVar14);
                uVar7 = local_310;
                uVar37 = uVar37 + 1;
                if (uVar37 < (ulonglong)((longlong)DAT_180423b58 - (longlong)DAT_180423b50)) {
                  uVar45 = 0x20;
                  if ((uVar37 & 0xf) == 0) {
                    uVar45 = 10;
                  }
                  if (local_310 < uStack_308) {
                    puVar18 = &local_320;
                    if (0xf < uStack_308) {
                      puVar18 = local_320;
                    }
                    puVar41 = (undefined1 *)((longlong)puVar18 + local_310);
                    local_310 = local_310 + 1;
                    *puVar41 = uVar45;
                    *(undefined1 *)((longlong)puVar18 + uVar7 + 1) = 0;
                  }
                  else {
                    FUN_18021abd0(&local_320);
                  }
                }
                pcVar28 = local_1b8;
              } while (uVar37 < (ulonglong)((longlong)DAT_180423b58 - (longlong)DAT_180423b50));
            }
            if (0xf < DAT_1803e7088) {
              pvVar27 = (void *)CONCAT44(DAT_1803e7070._4_4_,(undefined4)DAT_1803e7070);
              pvVar26 = pvVar27;
              if ((0xfff < DAT_1803e7088 + 1) &&
                 (pvVar26 = *(void **)((longlong)pvVar27 + -8),
                 0x1f < (ulonglong)((longlong)pvVar27 + (-8 - (longlong)pvVar26)))) {
                pcVar3 = (code *)swi(0x29);
                (*pcVar3)(5);
                puVar39 = auStack_3b0;
                goto LAB_1801e1ff8;
              }
              free(pvVar26);
            }
            DAT_1803e7070._0_4_ = (undefined4)local_320;
            DAT_1803e7070._4_4_ = local_320._4_4_;
            uRam00000001803e7078 = (undefined4)uStack_318;
            uRam00000001803e707c = uStack_318._4_4_;
            DAT_1803e7088 = uStack_308;
            DAT_1803e7080 = local_310;
            local_310 = 0;
            uStack_308 = 0xf;
            local_320 = (undefined8 *)((ulonglong)local_320 & 0xffffffffffffff00);
            local_360 = uVar49;
            FUN_18020e450(&local_320);
            DAT_1803e9948 = 0;
            pcVar22 = (char *)&DAT_1803e9938;
            if (0xf < DAT_1803e9950) {
              pcVar22 = _DAT_1803e9938;
            }
            *pcVar22 = '\0';
            puVar18 = *(undefined8 **)(pcVar28 + 0x40 + (longlong)pvVar34);
            for (puVar38 = *(undefined8 **)(pcVar28 + 0x38 + (longlong)pvVar34); lVar47 = local_348,
                puVar38 != puVar18; puVar38 = puVar38 + 4) {
              puVar31 = puVar38;
              if (0xf < (ulonglong)puVar38[3]) {
                puVar31 = (undefined8 *)*puVar38;
              }
              FUN_18021aef0(&DAT_1803e9938,puVar31,puVar38[2]);
              if (DAT_1803e9948 < DAT_1803e9950) {
                pcVar22 = (char *)&DAT_1803e9938;
                if (0xf < DAT_1803e9950) {
                  pcVar22 = _DAT_1803e9938;
                }
                pcVar22 = pcVar22 + DAT_1803e9948;
                DAT_1803e9948 = DAT_1803e9948 + 1;
                pcVar22[0] = '\n';
                pcVar22[1] = '\0';
              }
              else {
                FUN_18021abd0(&DAT_1803e9938);
              }
            }
          }
          else {
LAB_1801e17a9:
            lVar47 = local_348;
            if (bVar52) {
LAB_1801e17b0:
              FUN_18027f740(fVar54);
              FUN_1802aabb0(puVar21,"Lua code (editable)");
              FUN_18027f5b0(0);
              pcVar22 = "raw bytes";
              if (DAT_1803ff090 != '\0') {
                pcVar22 = "hide raw";
              }
              cVar8 = FUN_1802ac330(pcVar22);
              lVar47 = local_348;
              if (cVar8 != '\0') {
                DAT_1803ff090 = DAT_1803ff090 == '\0';
              }
              pcVar22 = (char *)&DAT_1803e9938;
              if (0xf < DAT_1803e9950) {
                pcVar22 = _DAT_1803e9938;
              }
              pcVar28 = (char *)&DAT_1803e9938;
              if (0xf < DAT_1803e9950) {
                pcVar28 = _DAT_1803e9938;
              }
              iVar9 = 1;
              for (; pcVar22 != pcVar28 + DAT_1803e9948; pcVar22 = pcVar22 + 1) {
                iVar33 = iVar9 + 1;
                if (*pcVar22 != '\n') {
                  iVar33 = iVar9;
                }
                iVar9 = iVar33;
              }
              lVar44 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar44 + local_348) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar2 = local_330;
              fVar58 = *(float *)(*(longlong *)(lVar44 + local_330) + 0x1238);
              if (*(char *)(lVar44 + lVar47) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar2 = *(longlong *)(lVar44 + lVar2);
              puVar36 = (uint *)(lVar2 + 0x1ec0);
              *puVar36 = *puVar36 | 1;
              *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
              local_358 = -1.0;
              local_1b8 = (char *)&DAT_1803e9938;
              uStack_1b0 = 0;
              local_1a8 = 0;
              pcVar22 = (char *)&DAT_1803e9938;
              if (0xf < DAT_1803e9950) {
                pcVar22 = _DAT_1803e9938;
              }
              local_380 = &local_1b8;
              local_388 = FUN_1802d2b00;
              local_390 = (char *)CONCAT44(local_390._4_4_,0x4400000);
              local_398 = &local_358;
              local_354 = (float)(iVar9 + 1) * fVar58 + fVar6;
              FUN_1802b74e0("##code",0,pcVar22,DAT_1803e9950 + 1);
              FUN_1802aabb0(local_300,"(!) Resend sends a real client->server packet");
              pvVar26 = local_340;
              local_378[0] = 1.5;
              local_368[0] = 0.75;
              pfVar20 = local_368;
              if (fVar1 <= DAT_1803da6a4) {
                pfVar20 = &DAT_1803da6a4;
              }
              pfVar19 = local_378;
              if (DAT_1803da6a4 <= fVar5) {
                pfVar19 = pfVar20;
              }
              local_2f8 = *pfVar19 * fVar57;
              local_2f4 = 0x41d00000;
              local_1b8 = *(char **)((longlong)local_340 + 0x1803dc9e8);
              uStack_1b0 = *(undefined8 *)((longlong)local_340 + 0x1803dc9f0);
              local_390 = (char *)CONCAT71(local_390._1_7_,1);
              local_398 = (float *)CONCAT71(local_398._1_7_,1);
              cVar8 = FUN_18019cb40("Resend (code)",0xd,&local_2f8,&local_1b8);
              if ((cVar8 != '\0') && (DAT_1803e9948 != 0)) {
                local_1d8 = &DAT_1803e72b0;
                iVar9 = _Mtx_lock(&DAT_1803e72b0);
                if (iVar9 != 0) {
                  std::_Throw_Cpp_error(5);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (DAT_1803e72fc == 0x7fffffff) {
LAB_1801e1ff8:
                  DAT_1803e72fc = 0x7ffffffe;
                  *(undefined8 *)(puVar39 + -8) = 0x1801e200d;
                  std::_Throw_Cpp_error(6);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FUN_18020c8a0(&DAT_1805c3940,&DAT_1803e9938);
                _Mtx_unlock(&DAT_1803e72b0);
              }
              if (DAT_180423b50 != DAT_180423b58) {
                local_378[0] = 1.5;
                local_368[0] = 0.75;
                FUN_18027f5b0(0);
                local_378[0] = 1.5;
                local_368[0] = 0.75;
                pfVar20 = local_368;
                if (fVar1 <= DAT_1803da6a4) {
                  pfVar20 = &DAT_1803da6a4;
                }
                pfVar19 = local_378;
                if (DAT_1803da6a4 <= fVar5) {
                  pfVar19 = pfVar20;
                }
                local_2f0 = *pfVar19 * fVar57;
                local_2ec = 0x41d00000;
                local_1b8 = *(char **)((longlong)pvVar26 + 0x1803dc9c8);
                uStack_1b0 = *(undefined8 *)((longlong)pvVar26 + 0x1803dc9d0);
                local_390 = (char *)CONCAT71(local_390._1_7_,1);
                local_398 = (float *)CONCAT71(local_398._1_7_,1);
                cVar8 = FUN_18019cb40("Resend original",0xb,&local_2f0,&local_1b8);
                if (cVar8 != '\0') {
                  iVar9 = DAT_1803fe3b0;
                  if (DAT_1803fe3b0 < 1) {
                    iVar9 = ((int)DAT_180423b58 - (int)DAT_180423b50) * 8;
                  }
                  FUN_18006e740(DAT_180423b50,(int)DAT_180423b58 - (int)DAT_180423b50,iVar9);
                }
              }
              if ((DAT_1803ff090 != '\0') && (DAT_180423b50 != DAT_180423b58)) {
                pcVar22 = (char *)&DAT_1803e7070;
                if (0xf < DAT_1803e7088) {
                  pcVar22 = (char *)CONCAT44(DAT_1803e7070._4_4_,(undefined4)DAT_1803e7070);
                }
                puVar18 = &DAT_1803e7070;
                if (0xf < DAT_1803e7088) {
                  puVar18 = (undefined8 *)CONCAT44(DAT_1803e7070._4_4_,(undefined4)DAT_1803e7070);
                }
                iVar9 = 1;
                for (; pcVar22 != (char *)(DAT_1803e7080 + (longlong)puVar18); pcVar22 = pcVar22 + 1
                    ) {
                  iVar33 = iVar9 + 1;
                  if (*pcVar22 != '\n') {
                    iVar33 = iVar9;
                  }
                  iVar9 = iVar33;
                }
                if (*(char *)(lVar44 + lVar47) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar2 = local_330;
                fVar58 = *(float *)(*(longlong *)(lVar44 + local_330) + 0x1238);
                FUN_1802aabb0(puVar21,"Raw bytes (hex)");
                if (*(char *)(lVar44 + lVar47) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar43 = *(longlong *)(lVar44 + lVar2);
                puVar36 = (uint *)(lVar43 + 0x1ec0);
                *puVar36 = *puVar36 | 1;
                *(undefined4 *)(lVar43 + 0x1ed8) = 0xbf800000;
                local_2e8 = 0xbf800000;
                local_1b8 = (char *)&DAT_1803e7070;
                pbVar51 = (byte *)0x0;
                uStack_1b0 = 0;
                local_1a8 = 0;
                puVar18 = &DAT_1803e7070;
                if (0xf < DAT_1803e7088) {
                  puVar18 = (undefined8 *)CONCAT44(DAT_1803e7070._4_4_,(undefined4)DAT_1803e7070);
                }
                local_380 = &local_1b8;
                local_388 = FUN_1802d2b00;
                local_390 = (char *)CONCAT44(local_390._4_4_,0x4400000);
                local_398 = (float *)&local_2e8;
                local_2e4 = (float)(iVar9 + 1) * fVar58 + fVar6;
                FUN_1802b74e0("##hex",0,puVar18,DAT_1803e7088 + 1);
                local_378[0] = 1.5;
                local_368[0] = 0.75;
                pfVar20 = local_368;
                if (fVar1 <= DAT_1803da6a4) {
                  pfVar20 = &DAT_1803da6a4;
                }
                pfVar19 = local_378;
                if (DAT_1803da6a4 <= fVar5) {
                  pfVar19 = pfVar20;
                }
                fVar58 = *pfVar19;
                if (*(char *)(lVar44 + lVar47) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar44 = *(longlong *)(lVar44 + lVar2);
                puVar36 = (uint *)(lVar44 + 0x1ec0);
                *puVar36 = *puVar36 | 1;
                *(float *)(lVar44 + 0x1ed8) = fVar58 * fVar55;
                local_368[0] = 1.4013e-43;
                local_378[0] = 1.4013e-45;
                local_390 = "%d";
                local_398 = local_368;
                FUN_1802b3a10(&DAT_180377ee0,4,&DAT_1803fea38,local_378);
                if (DAT_1803fea38 < 0) {
                  DAT_1803fea38 = 0;
                }
                local_378[0] = 1.5;
                local_368[0] = 0.75;
                FUN_18027f5b0(0);
                local_378[0] = 1.5;
                local_368[0] = 0.75;
                pfVar20 = local_368;
                if (fVar1 <= DAT_1803da6a4) {
                  pfVar20 = &DAT_1803da6a4;
                }
                pfVar19 = local_378;
                if (DAT_1803da6a4 <= fVar5) {
                  pfVar19 = pfVar20;
                }
                local_2e0 = *pfVar19 * fVar56;
                local_2dc = 0x41d00000;
                local_1b8 = *(char **)((longlong)pvVar26 + 0x1803dc9c8);
                uStack_1b0 = *(undefined8 *)((longlong)pvVar26 + 0x1803dc9d0);
                local_390 = (char *)CONCAT71(local_390._1_7_,1);
                local_398 = (float *)CONCAT71(local_398._1_7_,1);
                cVar8 = FUN_18019cb40("Resend bytes",0xb,&local_2e0,&local_1b8);
                if (cVar8 != '\0') {
                  local_180 = (byte *)0x0;
                  local_360 = uVar49 | 4;
                  iVar9 = -1;
                  pcVar28 = (char *)&DAT_1803e7070;
                  if (0xf < DAT_1803e7088) {
                    pcVar28 = (char *)CONCAT44(DAT_1803e7070._4_4_,(undefined4)DAT_1803e7070);
                  }
                  puVar18 = &DAT_1803e7070;
                  if (0xf < DAT_1803e7088) {
                    puVar18 = (undefined8 *)CONCAT44(DAT_1803e7070._4_4_,(undefined4)DAT_1803e7070);
                  }
                  pcVar22 = (char *)(DAT_1803e7080 + (longlong)puVar18);
                  _local_190 = ZEXT816(0);
                  if (pcVar28 != pcVar22) {
                    pbStack_188 = (byte *)0x0;
                    pbVar32 = pbStack_188;
                    pbVar46 = pbVar51;
                    do {
                      cVar8 = *pcVar28;
                      iVar33 = (int)cVar8;
                      if ((byte)(cVar8 - 0x30U) < 10) {
                        iVar10 = iVar33 + -0x30;
LAB_1801e1ea5:
                        if (-1 < iVar9) {
                          local_350[0] = (char)iVar9 << 4 | (byte)iVar10;
                          if (pbVar32 == pbVar46) {
                            FUN_1802281d0(local_190,pbVar32,local_350);
                            pbVar32 = pbStack_188;
                          }
                          else {
                            *pbVar32 = local_350[0];
                            pbVar32 = (byte *)((longlong)pbStack_188 + 1);
                            pbStack_188 = pbVar32;
                          }
                          pbVar46 = local_180;
                          iVar10 = -1;
                        }
                      }
                      else {
                        if ((byte)(cVar8 + 0x9fU) < 6) {
                          iVar10 = iVar33 + -0x57;
                          goto LAB_1801e1ea5;
                        }
                        iVar10 = iVar9;
                        if ((byte)(cVar8 + 0xbfU) < 6) {
                          iVar10 = iVar33 + -0x37;
                          goto LAB_1801e1ea5;
                        }
                      }
                      iVar9 = iVar10;
                      pcVar28 = pcVar28 + 1;
                    } while (pcVar28 != pcVar22);
                    if (local_190 != (undefined1  [8])pbVar32) {
                      iVar9 = DAT_1803fea38;
                      if (DAT_1803fea38 < 1) {
                        iVar9 = ((int)pbVar32 - local_190._0_4_) * 8;
                      }
                      FUN_18006e740(local_190,(int)pbVar32 - local_190._0_4_,iVar9);
                    }
                  }
                  local_360 = uVar49;
                  if (local_190 != (undefined1  [8])0x0) {
                    _Memory = local_190;
                    if ((0xfff < (ulonglong)((longlong)local_180 - (longlong)local_190)) &&
                       (_Memory = *(undefined1 (*) [8])((longlong)local_190 + -8),
                       0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)_Memory)))) {
                      pvVar27 = (void *)0x5;
                      pcVar3 = (code *)swi(0x29);
                      (*pcVar3)();
                      puVar40 = auStack_3b0;
                      break;
                    }
                    free((void *)_Memory);
                    _local_190 = ZEXT816(0);
                    local_180 = (byte *)0x0;
                  }
                }
              }
              FUN_18027f7f0(fVar54);
              FUN_1802afb40();
            }
          }
          local_34c = local_34c + 1;
          pcVar22 = (char *)(ulonglong)local_34c;
          lVar44 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar44 + lVar47) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar44 = *(longlong *)(*(longlong *)(local_330 + lVar44) + 0x1520);
          iVar9 = *(int *)(lVar44 + 0x108);
          if (iVar9 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar44 + 0x108) = iVar9 + -1;
          }
        }
        pbVar51 = (byte *)&DAT_1803e7540;
        FUN_18020e450(&local_128);
        local_370[0] = (float)((int)local_370[0] + 1);
        pvVar27 = pvStack_158;
        pvVar26 = local_160;
      } while ((int)local_370[0] <
               (int)((longlong)pvStack_158 - (longlong)local_160 >> 3) * -0x3b13b13b);
      iVar9 = (int)pcVar22;
      pvVar34 = *(void **)(puVar40 + 0x78);
      puVar41 = puVar40;
      fVar58 = local_338;
    }
    if (pvVar26 == pvVar27) {
      pcVar22 = "Logging disabled.";
      if (DAT_18042586d != '\0') {
        pcVar22 = "Waiting for packets...";
      }
      *(undefined8 *)(puVar41 + -8) = 0x1801e2059;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)pvVar34,pcVar22);
    }
    else if (iVar9 == 0) {
      if (0xf < DAT_1803e7558) {
        pbVar51 = DAT_1803e7540;
      }
      *(undefined8 *)(puVar41 + -8) = 0x1801e2088;
      FUN_1802aabb0(&DAT_1803dca28 + (longlong)pvVar34,"No messages match \'%s\'.",pbVar51);
    }
    lVar44 = local_328;
    if (DAT_180425420 == 0) {
      if (*(char *)(lVar47 + local_328) == '\0') {
        *(undefined8 *)(puVar41 + -8) = 0x1801e20a2;
        __dyn_tls_on_demand_init();
      }
      lVar2 = local_330;
      fVar1 = *(float *)(*(longlong *)(*(longlong *)(local_330 + lVar44) + 0x1520) + 0x9c);
      if (*(char *)(lVar47 + lVar44) == '\0') {
        *(undefined8 *)(puVar41 + -8) = 0x1801e20c5;
        __dyn_tls_on_demand_init();
      }
      if (*(float *)(*(longlong *)(*(longlong *)(lVar2 + lVar44) + 0x1520) + 0xa4) - DAT_180380e9c
          <= fVar1) {
        *(undefined8 *)(puVar41 + -8) = 0x1801e20f2;
        FUN_1802809c0(DAT_180380bb0);
      }
    }
    *(undefined8 *)(puVar41 + -8) = 0x1801e20f7;
    FUN_180273410();
    *(undefined8 *)(puVar41 + -8) = 0x1801e2101;
    FUN_18026abb0(1);
    pvVar26 = pvStack_158;
    pvVar34 = local_160;
    if (local_160 != (void *)0x0) {
      for (; pvVar34 != pvVar26; pvVar34 = (void *)((longlong)pvVar34 + 0x68)) {
        *(undefined8 *)(puVar41 + -8) = 0x1801e2128;
        FUN_18006b910(pvVar34);
      }
      pvVar34 = local_160;
      if (((ulonglong)((local_150 - (longlong)local_160 >> 3) * 8) < 0x1000) ||
         (pvVar34 = *(void **)((longlong)local_160 + -8),
         (ulonglong)((longlong)local_160 + (-8 - (longlong)pvVar34)) < 0x20)) {
        *(undefined8 *)(puVar41 + -8) = 0x1801e2185;
        free(pvVar34);
        local_160 = (void *)0x0;
        pvStack_158 = (void *)0x0;
        local_150 = 0;
        goto LAB_1801e219b;
      }
      goto LAB_1801e2206;
    }
    goto LAB_1801e219b;
  }
  FUN_1801a0b60("Enable damage logging",&DAT_18042586c);
  local_370[0] = 1.5;
  local_358 = 0.75;
  pfVar20 = &local_358;
  if (fVar1 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar19 = local_370;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar19 = pfVar20;
  }
  fVar53 = *pfVar19;
  fVar56 = fVar53 * _DAT_180381124;
  fVar55 = fVar53 * DAT_180381068;
  fVar57 = fVar53 * DAT_1803810ec;
  FUN_18027f5b0(fVar54 - (fVar55 + fVar56 + fVar57 + fVar53 * DAT_180380f40 + fVar53 * DAT_180380f40
                         ));
  puVar21 = &DAT_1803dc9e8;
  if (DAT_18042586b == '\0') {
    puVar21 = &DAT_1803dca28;
  }
  local_334 = 26.0;
  local_1d8 = *(char **)(puVar21 + (longlong)pvVar34);
  uStack_1d0 = *(undefined8 *)((longlong)(puVar21 + (longlong)pvVar34) + 8);
  pcVar22 = "Live feed##dmg_feed";
  if (DAT_18042586b != '\0') {
    pcVar22 = "Live ON##dmg_feed";
  }
  local_390 = (char *)CONCAT71(local_390._1_7_,1);
  local_398 = (float *)CONCAT71(local_398._1_7_,DAT_18042586b);
  local_338 = fVar56;
  cVar8 = FUN_18019cb40(pcVar22,1,&local_338,&local_1d8);
  if (cVar8 != '\0') {
    DAT_18042586b = DAT_18042586b == '\0';
  }
  cVar8 = FUN_18026ee60(0);
  if (cVar8 != '\0') {
    FUN_180280d00(
                 "On-screen damage feed, top-left by default.\nDrag it while the menu is open.\nWorks on its own - the log below can stay off."
                 );
  }
  FUN_18027f5b0(0);
  ppcVar50 = (char **)((longlong)pvVar34 + 0x1803dc9c8);
  local_1d8 = *ppcVar50;
  uStack_1d0 = *(undefined8 *)((longlong)pvVar34 + 0x1803dc9d0);
  local_398 = (float *)CONCAT44(fVar53 * DAT_180381048,fVar55);
  cVar8 = FUN_18019d4d0("##dmg_feed_opts",0xc,DAT_18042586b,&local_1d8);
  if (cVar8 != '\0') {
    FUN_180280fd0("dmg_feed_opts");
  }
  FUN_18027f5b0(0);
  local_334 = 26.0;
  ppcVar48 = (char **)((longlong)pvVar34 + 0x1803dca08);
  local_1d8 = *ppcVar48;
  uStack_1d0 = *(undefined8 *)((longlong)pvVar34 + 0x1803dca10);
  local_390 = (char *)CONCAT71(local_390._1_7_,1);
  local_398 = (float *)CONCAT71(local_398._1_7_,1);
  local_338 = fVar57;
  cVar8 = FUN_18019cb40("Clear##dmg_clear",9,&local_338,&local_1d8);
  if (cVar8 != '\0') {
    local_300 = (undefined8 *)&DAT_1803e9600;
    iVar9 = _Mtx_lock(&DAT_1803e9600);
    if (iVar9 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1803e964c == 0x7fffffff) {
      DAT_1803e964c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    FUN_18021d310(&DAT_18042cd10);
    _Mtx_unlock(&DAT_1803e9600);
  }
  FUN_1801a0b60("Subscribe to player_hurt event",&DAT_18042586a);
  cVar8 = FUN_18026ee60(0);
  if (cVar8 != '\0') {
    FUN_180280d00(
                 "Default (off): damage is read from the health netvar we already receive.\nPassive, nothing is requested from the server, nobody can see it.\n\nOn: asks the server to send us its own player_hurt event -> each shotgun\npellet as its own hit, the attacker straight from the server, and damage\non players you cannot see (dormant / hidden HP).\n\nCost: the subscription sets one bit in our clc_ListenEvents. LSAC ships\nsourcenet and majority-votes that bitfield across players, so it CAN spot\nthe odd one out. Pure-Lua anticheats cannot see it at all.\nBlocked by Aimbot -> Anti-AC -> \"Block Event Subscriptions\" (on by\ndefault); turn that sub-toggle off to keep this while Anti-AC stays on."
                 );
  }
  pvVar26 = pvVar34;
  if (DAT_18042586a != '\0') {
    cVar8 = FUN_18006b0e0();
    iVar9 = DAT_1803ff708;
    if (cVar8 == '\0') {
      if ((DAT_18042586a != '\0') && (iVar33 = 0, pvVar26 = local_340, 0 < DAT_1803ff708)) {
        do {
          lVar44 = (longlong)iVar33 * 0x58;
          if ((char *)(&DAT_1803eb898)[(longlong)iVar33 * 0xb] != (char *)0x0) {
            iVar10 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar33 * 0xb],"player_hurt");
            if (iVar10 == 0) {
              pvVar26 = local_340;
              lVar43 = local_330;
              if ((lVar44 != -0x1803eb890) && ((&DAT_1803eb8e4)[lVar44] != '\0')) {
                local_370[0] = 1.5;
                local_358 = 0.75;
                pfVar20 = &local_358;
                if (fVar1 <= DAT_1803da6a4) {
                  pfVar20 = &DAT_1803da6a4;
                }
                pfVar19 = local_370;
                if (DAT_1803da6a4 <= fVar5) {
                  pfVar19 = pfVar20;
                }
                FUN_18027f5b0(0,*pfVar19 * fVar6);
                pvVar26 = local_340;
                FUN_1802aabb0(&DAT_1803dc9e8 + (longlong)local_340,"(live)");
                lVar43 = local_330;
              }
              break;
            }
          }
          iVar33 = iVar33 + 1;
          pvVar26 = local_340;
          lVar43 = local_330;
        } while (iVar33 < iVar9);
      }
    }
    else {
      local_370[0] = 1.5;
      local_358 = 0.75;
      pfVar20 = &local_358;
      if (fVar1 <= DAT_1803da6a4) {
        pfVar20 = &DAT_1803da6a4;
      }
      pfVar19 = local_370;
      if (DAT_1803da6a4 <= fVar5) {
        pfVar19 = pfVar20;
      }
      FUN_18027f5b0(0,*pfVar19 * fVar6);
      FUN_1802aabb0(ppcVar48,"(blocked: Anti-AC events)");
    }
  }
  local_370[0] = 1.5;
  local_358 = 0.75;
  pfVar20 = &local_358;
  if (fVar1 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar19 = local_370;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar19 = pfVar20;
  }
  fVar54 = *pfVar19;
  local_338 = fVar54 * DAT_180380fe0;
  local_334 = fVar54 * DAT_180380fd8;
  FUN_18026aad0(2,&local_338);
  local_338 = fVar54 * fVar6;
  local_334 = local_338;
  FUN_18026aad0(0xe,&local_338);
  lVar44 = local_348;
  fVar54 = fVar54 * _DAT_1803811d0;
  if (*(char *)(local_348 + local_328) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar47 = *(longlong *)(lVar43 + local_328);
  *(uint *)(lVar47 + 0x1f48) = *(uint *)(lVar47 + 0x1f48) | 2;
  *(float *)(lVar47 + 0x1f68) = fVar54;
  *(undefined4 *)(lVar47 + 0x1f6c) = 0;
  *(undefined4 *)(lVar47 + 0x1f50) = 1;
  cVar8 = FUN_18019a680("dmg_feed_opts");
  fVar54 = DAT_180380fcc;
  if (cVar8 != '\0') {
    puVar21 = &DAT_1803dca28 + (longlong)pvVar26;
    FUN_1802aabb0(puVar21,"Visible lines");
    lVar47 = local_328;
    if (*(char *)(lVar44 + local_328) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar43 = local_330;
    lVar2 = *(longlong *)(local_330 + lVar47);
    puVar36 = (uint *)(lVar2 + 0x1ec0);
    *puVar36 = *puVar36 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    local_358 = 1.26117e-44;
    local_370[0] = 4.2039e-45;
    local_388 = (code *)CONCAT71(local_388._1_7_,1);
    local_390 = "%d";
    local_398 = &local_358;
    FUN_1801a6c50("##dmg_feed_lines",4,&DAT_1803e7bac,local_370);
    local_370[0] = 1.26117e-44;
    local_358 = 4.2039e-45;
    pfVar20 = &local_358;
    if (2 < (int)DAT_1803e7bac) {
      pfVar20 = &DAT_1803e7bac;
    }
    pfVar19 = local_370;
    if ((int)DAT_1803e7bac < 10) {
      pfVar19 = pfVar20;
    }
    DAT_1803e7bac = *pfVar19;
    cVar8 = FUN_18026ee60(0);
    if (cVar8 != '\0') {
      FUN_180280d00("Older lines are pushed out fast once the stack is full.");
    }
    FUN_1802aabb0(puVar21,"Hold time");
    if (*(char *)(lVar44 + lVar47) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar43 + lVar47);
    puVar36 = (uint *)(lVar2 + 0x1ec0);
    *puVar36 = *puVar36 | 1;
    *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
    local_358 = 10.0;
    local_370[0] = 1.0;
    local_388 = (code *)CONCAT71(local_388._1_7_,1);
    local_390 = "%.1f s";
    local_398 = &local_358;
    FUN_1801a6c50("##dmg_feed_life",8,&DAT_1803e7ba8,local_370);
    cVar8 = FUN_18026ee60(0);
    if (cVar8 != '\0') {
      FUN_180280d00("How long a line stays before it fades out.");
    }
    FUN_1802afb40();
    FUN_1801a0b60("Merge repeat hits",&DAT_1803e7bb8);
    cVar8 = FUN_18026ee60(0);
    if (cVar8 != '\0') {
      FUN_180280d00(
                   "Folds shots landing back to back on the same target\ninto one line (\"120 x5\") instead of one line per pellet."
                   );
    }
    FUN_1801a0b60("Newest at bottom",&DAT_1804096e4);
    cVar8 = FUN_18026ee60(0);
    if (cVar8 != '\0') {
      FUN_180280d00(
                   "Off: the newest line sits on top and older ones slide down.\nOn: lines are added under the stack, oldest on top."
                   );
    }
    FUN_1801a0b60("Show weapon",&DAT_1804096e6);
    FUN_1802afb40();
    local_348 = 0x41d00000bf800000;
    local_1d8 = *ppcVar50;
    uStack_1d0 = *(undefined8 *)((longlong)pvVar34 + 0x1803dc9d0);
    local_390 = (char *)CONCAT71(local_390._1_7_,1);
    local_398 = (float *)((ulonglong)local_398 & 0xffffffffffffff00);
    cVar8 = FUN_18019cb40("Reset position##dmg_feed_reset",0xb,&local_348,&local_1d8);
    if (cVar8 != '\0') {
      DAT_1804096e5 = 0;
    }
    if (*(char *)(lVar44 + lVar47) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)(*(longlong *)(lVar43 + lVar47) + 0x1520);
    puVar15 = (undefined4 *)(lVar47 + 0x1f0);
    FUN_18028a630(lVar47 + 0x208,puVar15);
    *puVar15 = 0;
    FUN_1802aabb0(puVar21,
                  "Drag the feed while the menu is open. My hits / Hits on me / Others filter it too."
                 );
    lVar47 = local_328;
    if (*(char *)(lVar44 + local_328) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar44 = *(longlong *)(*(longlong *)(lVar43 + lVar47) + 0x1520);
    iVar9 = *(int *)(lVar44 + 0x208);
    if (iVar9 < 1) {
      FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
    }
    else {
      *(undefined4 *)(lVar44 + 0x1f0) =
           *(undefined4 *)(*(longlong *)(lVar44 + 0x210) + -4 + (longlong)iVar9 * 4);
      *(int *)(lVar44 + 0x208) = iVar9 + -1;
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  FUN_18026abb0(2);
  FUN_1801a0b60("My hits",&DAT_1803e95f2);
  local_370[0] = 1.5;
  local_358 = 0.75;
  pfVar20 = &local_358;
  if (fVar1 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar19 = local_370;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar19 = pfVar20;
  }
  FUN_18027f5b0(0,*pfVar19 * DAT_180380fe8);
  FUN_1801a0b60("Hits on me",&DAT_1803e9650);
  local_370[0] = 1.5;
  local_358 = 0.75;
  FUN_18027f5b0(0);
  FUN_1801a0b60("Others");
  FUN_1801a0ae0(
               "From FireBullets on all players (incl. enemies). Amount/hp shown when the gamemode provides it."
               );
  FUN_1802afb40();
  local_178 = (float *)0x0;
  pfStack_170 = (float *)0x0;
  local_168 = 0;
  local_300 = (undefined8 *)&DAT_1803e9600;
  iVar9 = _Mtx_lock(&DAT_1803e9600);
  if (iVar9 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1803e964c == 0x7fffffff) {
    DAT_1803e964c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_18042cd10 == (undefined8 *)0x0) {
    local_1d8 = (char *)0x0;
  }
  else {
    local_1d8 = (char *)*DAT_18042cd10;
  }
  uStack_1d0 = DAT_18042cd28;
  FUN_180214650(&local_178,&local_1d8,DAT_18042cd30);
  _Mtx_unlock(&DAT_1803e9600);
  local_368[0] = 1.5;
  local_378[0] = 0.75;
  local_370[0] = 1.5;
  local_358 = 0.75;
  pfVar20 = &local_358;
  if (fVar1 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar19 = local_370;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar19 = pfVar20;
  }
  fVar53 = *pfVar19 * fVar54;
  local_348 = CONCAT44(local_348._4_4_,fVar53);
  pfVar20 = local_378;
  if (fVar1 <= DAT_1803da6a4) {
    pfVar20 = &DAT_1803da6a4;
  }
  pfVar19 = local_368;
  if (DAT_1803da6a4 <= fVar5) {
    pfVar19 = pfVar20;
  }
  local_348 = CONCAT44(*pfVar19 * fVar6,fVar53);
  FUN_18026aad0(2,&local_348);
  local_348 = CONCAT44((uint)fVar58 ^ DAT_1803817f0,(uint)fVar58 ^ DAT_1803817f0);
  FUN_180272fa0("##dmg_list",&local_348,1,0x800);
  pfVar20 = pfStack_170;
  uVar16 = _UNK_180381698;
  pcVar22 = _DAT_180381690;
  if (local_178 == pfStack_170) {
LAB_1801e08bd:
    pcVar22 = "Logging disabled.";
    if (DAT_18042586c != '\0') {
      pcVar22 = "Waiting for damage...";
    }
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)local_340,pcVar22);
  }
  else {
    puVar21 = &DAT_1803dca28 + (longlong)local_340;
    pfVar19 = local_178 + 10;
    pfVar13 = local_178 + 2;
    pfVar35 = local_178;
    do {
      FUN_1802aabb0(puVar21,"%7.1f",(double)*pfVar35);
      local_378[0] = 1.5;
      local_368[0] = 0.75;
      pfVar23 = local_368;
      if (fVar1 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar11 = local_378;
      if (DAT_1803da6a4 <= fVar5) {
        pfVar11 = pfVar23;
      }
      FUN_18027f5b0(0,*pfVar11 * fVar54);
      if (*(char *)(pfVar35 + 0x25) == '\0') {
        if (pfVar35[1] == 0.0) {
          pcVar28 = "DEALT";
          ppcVar24 = (char **)((longlong)local_340 + 0x1803dc9e8);
        }
        else if (pfVar35[1] == 1.4013e-45) {
          pcVar28 = "TAKEN";
          ppcVar24 = ppcVar48;
        }
        else {
          pcVar28 = "OTHER";
          ppcVar24 = ppcVar50;
        }
      }
      else {
        local_1d8 = pcVar22;
        uStack_1d0 = uVar16;
        pcVar28 = "KILL ";
        ppcVar24 = &local_1d8;
      }
      FUN_1802aabb0(ppcVar24,pcVar28);
      local_378[0] = 1.5;
      local_368[0] = 0.75;
      pfVar23 = local_368;
      if (fVar1 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar11 = local_378;
      if (DAT_1803da6a4 <= fVar5) {
        pfVar11 = pfVar23;
      }
      FUN_18027f5b0(0,*pfVar11 * fVar6);
      if ((int)pfVar35[0x12] < 0) {
        FUN_1802aabb0(puVar21,&DAT_18034d714);
      }
      else {
        FUN_1802aaae0(&DAT_18033f570);
      }
      local_378[0] = 1.5;
      local_368[0] = 0.75;
      pfVar23 = local_368;
      if (fVar1 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar11 = local_378;
      if (DAT_1803da6a4 <= fVar5) {
        pfVar11 = pfVar23;
      }
      FUN_18027f5b0(0,*pfVar11 * fVar6);
      pfVar23 = pfVar13;
      pfVar11 = pfVar19;
      if (*(char *)(pfVar35 + 0x25) == '\0') {
        if (0xf < *(ulonglong *)(pfVar19 + 6)) {
          pfVar11 = *(float **)pfVar19;
        }
        if (0xf < *(ulonglong *)(pfVar13 + 6)) {
          pfVar23 = *(float **)pfVar13;
        }
        pcVar28 = "%s >> %s";
      }
      else {
        if (0xf < *(ulonglong *)(pfVar19 + 6)) {
          pfVar11 = *(float **)pfVar19;
        }
        if (*(ulonglong *)(pfVar13 + 6) < 0x10) {
          pcVar28 = "%s killed %s";
        }
        else {
          pcVar28 = "%s killed %s";
          pfVar23 = *(float **)pfVar13;
        }
      }
      FUN_1802aaae0(pcVar28,pfVar23,pfVar11);
      local_378[0] = 1.5;
      local_368[0] = 0.75;
      pfVar23 = local_368;
      if (fVar1 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar11 = local_378;
      if (DAT_1803da6a4 <= fVar5) {
        pfVar11 = pfVar23;
      }
      FUN_18027f5b0(0,*pfVar11 * fVar6);
      uStack_140 = 0;
      local_138 = 0;
      local_130 = 0xf;
      local_148 = (undefined8 ******)0x0;
      if (*(longlong *)(pfVar35 + 0x20) != 0) {
        pfVar23 = pfVar35 + 0x1c;
        if (0xf < *(ulonglong *)(pfVar35 + 0x22)) {
          pfVar23 = *(float **)pfVar23;
        }
        FUN_18021aef0(&local_148,pfVar23,*(undefined8 *)(pfVar35 + 0x20));
      }
      if (*(longlong *)(pfVar35 + 0x18) != 0) {
        if (local_138 != 0) {
          FUN_18021aef0(&local_148,&DAT_1803467d0,2);
        }
        pfVar23 = pfVar35 + 0x14;
        if (0xf < *(ulonglong *)(pfVar35 + 0x1a)) {
          pfVar23 = *(float **)pfVar23;
        }
        FUN_18021aef0(&local_148,pfVar23,*(undefined8 *)(pfVar35 + 0x18));
      }
      if (-1 < (int)pfVar35[0x24]) {
        if (local_138 != 0) {
          FUN_18021aef0(&local_148,&DAT_1803467d0,2);
        }
        FUN_180013ba0(local_238,pfVar35[0x24]);
        plVar12 = (longlong *)FUN_18022a630();
        local_2d8 = (undefined8 *****)*plVar12;
        lStack_2d0 = plVar12[1];
        local_2c8 = plVar12[2];
        uStack_2c0 = plVar12[3];
        plVar12[2] = 0;
        plVar12[3] = 0xf;
        *(undefined1 *)plVar12 = 0;
        local_360 = local_34c | 0x20;
        ppppppuVar29 = &local_2d8;
        if (0xf < uStack_2c0) {
          ppppppuVar29 = (undefined8 ******)local_2d8;
        }
        local_34c = local_360;
        FUN_18021aef0(&local_148,ppppppuVar29,local_2c8);
        local_360 = local_34c & 0xffffffdf;
        local_34c = local_360;
        FUN_18020e450(&local_2d8);
        FUN_18020e450(local_238);
      }
      if (local_138 != 0) {
        ppppppuVar29 = &local_148;
        if (0xf < local_130) {
          ppppppuVar29 = (undefined8 ******)local_148;
        }
        FUN_1802aabb0(puVar21,&DAT_180377c90,ppppppuVar29);
      }
      FUN_18020e450(&local_148);
      pfVar35 = pfVar35 + 0x26;
      pfVar19 = pfVar19 + 0x26;
      pfVar13 = pfVar13 + 0x26;
    } while (pfVar35 != pfVar20);
    if (local_178 == pfStack_170) goto LAB_1801e08bd;
  }
  lVar44 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar44 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar44 + 0xec0) + 0x1520) + 0x9c);
  if (*(char *)(lVar44 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(float *)(*(longlong *)(*(longlong *)(local_330 + local_328) + 0x1520) + 0xa4) -
      DAT_180380e9c <= fVar1) {
    FUN_1802809c0(DAT_180380bb0);
  }
  FUN_180273410();
  FUN_18026abb0(1);
  puVar41 = auStack_3b8;
  if (local_178 != (float *)0x0) {
    FUN_180217fc0(local_178,pfStack_170);
    pfVar20 = local_178;
    if ((0xfff < (ulonglong)((local_168 - (longlong)local_178 >> 3) * 8)) &&
       (pfVar20 = *(float **)(local_178 + -2), puVar41 = auStack_3b8,
       0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)pfVar20)))) {
LAB_1801e2206:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar42 = puVar41 + 8;
LAB_1801e220d:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar42 + -8) = &UNK_1801e2212;
      FUN_1800130a0();
    }
    free(pfVar20);
    local_178 = (float *)0x0;
    pfStack_170 = (float *)0x0;
    local_168 = 0;
    puVar41 = auStack_3b8;
  }
LAB_1801e219b:
  *(undefined8 *)(puVar41 + -8) = 0x1801e21a4;
  FUN_18027f7f0(fVar58);
  *(undefined8 *)(puVar41 + -8) = 0x1801e21b3;
  return;
}


