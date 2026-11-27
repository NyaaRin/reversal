// 0x1801c8950  FUN_1801c8950
// size=8671 thunk=false
// signature: undefined FUN_1801c8950()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c8950(void)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  longlong lVar4;
  size_t _Size;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 ***pppuVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  void *pvVar19;
  size_t sVar20;
  longlong *plVar21;
  undefined8 uVar22;
  float *pfVar23;
  float *pfVar24;
  int *piVar25;
  float *pfVar26;
  undefined8 *_Buf1;
  uint7 uVar28;
  undefined8 ****ppppuVar27;
  longlong lVar29;
  undefined8 ****ppppuVar30;
  uint uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  longlong lVar37;
  undefined8 *puVar38;
  char *pcVar39;
  undefined8 uVar40;
  int iVar41;
  undefined8 *puVar42;
  int iVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 extraout_XMM0_Qa;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [32];
  char *local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  ulonglong local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  float local_220 [2];
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined8 ***local_1f0;
  undefined8 uStack_1e8;
  size_t local_1e0;
  ulonglong uStack_1d8;
  undefined8 ***local_1d0 [2];
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined8 ***local_1b0 [2];
  undefined8 local_1a0;
  ulonglong local_198;
  undefined1 local_190 [40];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined1 local_104;
  undefined4 local_100;
  ulonglong local_f8;
  
  puVar36 = auStack_2d8;
  puVar34 = auStack_2d8;
  puVar35 = auStack_2d8;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_2d8;
  local_298 = 0;
  local_208 = CONCAT44(local_208._4_4_,4);
  local_220[0] = 0.0;
  pfVar26 = local_220;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar26 = &DAT_1803fb24c;
  }
  pfVar23 = (float *)&local_208;
  if ((int)DAT_1803fb24c < 5) {
    pfVar23 = pfVar26;
  }
  DAT_1803fb24c = *pfVar23;
  lVar32 = (longlong)(int)DAT_1803fb24c;
  if ((DAT_1805c7b90 & 1) == 0) {
    DAT_1805c7b90 = DAT_1805c7b90 | 1;
    atexit((_func_5014 *)&LAB_18030b310);
  }
  if ((DAT_1805c7b90 & 2) == 0) {
    DAT_1805c7b90 = DAT_1805c7b90 | 2;
    atexit(FUN_18030b300);
  }
  uVar10 = DAT_180381384;
  cVar14 = FUN_18019fbc0("Entities",0xc,CONCAT44(DAT_180381384,DAT_180381384),0);
  pvVar19 = ThreadLocalStoragePointer;
  if (cVar14 != '\0') {
    lVar37 = lVar32 * 200;
    uVar44 = (ulonglong)_tls_index;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
    local_218 = lVar37;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar48 = (float)*(double *)(*(longlong *)(lVar4 + 0xec0) + 0x10);
    if ((DAT_1803e99e0 != '\0') || (DAT_180380d30 < fVar48 - _DAT_180425850)) {
      FUN_180122a50();
      DAT_1803e99e0 = '\0';
      _DAT_180425850 = fVar48;
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar29 + 0x1c8) != 0) ||
       (pfVar26 = (float *)(lVar29 + 0x280),
       *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368) != 0)) {
      pfVar26 = (float *)(lVar29 + 0x250);
    }
    fVar48 = (*pfVar26 - *(float *)(lVar29 + 0x118)) * DAT_180380ab4;
    FUN_18027fc30();
    FUN_180012ac0(&local_168,0x40,"Search %d entities...",DAT_1803edd50 - DAT_1803edd48 >> 5);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(lVar4 + 0xec0);
    puVar1 = (uint *)(lVar29 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar29 + 0x1ed8) = fVar48;
    local_208 = 0;
    local_2a0 = 0;
    local_2a8 = 0;
    local_2b0 = (undefined8 *)((ulonglong)local_2b0._4_4_ << 0x20);
    local_2b8 = (char *)&local_208;
    FUN_1802b74e0("##ent_search",&local_168,&DAT_1803fcfc0,0x80);
    puVar42 = (undefined8 *)(&DAT_1803dca28 + lVar37);
    local_1f8 = puVar42;
    FUN_1802aabb0(puVar42,"Server (%d)",DAT_1803edd50 - DAT_1803edd48 >> 5);
    FUN_18027f5b0();
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(lVar4 + 0xec0);
    uVar2 = *(undefined4 *)(lVar29 + 0xcc8);
    *(undefined4 *)(lVar29 + 0xcc8) = 0;
    local_208 = 0;
    cVar14 = FUN_1802abf60("Refresh##ent",&local_208,0x8000);
    *(undefined4 *)(lVar29 + 0xcc8) = uVar2;
    if (cVar14 != '\0') {
      FUN_180122a50();
    }
    FUN_18027f5b0();
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(lVar4 + 0xec0);
    uVar2 = *(undefined4 *)(lVar29 + 0xcc8);
    *(undefined4 *)(lVar29 + 0xcc8) = 0;
    local_208 = 0;
    cVar14 = FUN_1802abf60("Full scan##ent",&local_208,0x8000);
    *(undefined4 *)(lVar29 + 0xcc8) = uVar2;
    if (cVar14 != '\0') {
      FUN_180122bf0();
    }
    fVar9 = DAT_180380c50;
    fVar8 = DAT_180380b20;
    local_220[0] = 1.5;
    local_208 = CONCAT44(local_208._4_4_,0x3f400000);
    pfVar26 = (float *)&local_208;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar23 = pfVar26;
    }
    fVar3 = *pfVar23;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(lVar4 + 0xec0);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar50 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar51 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xcc8);
    fVar49 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1238);
    fVar45 = fVar3 * DAT_1803810a0;
    fVar46 = *(float *)(lVar29 + 0xcd8) * DAT_180380e9c;
    fVar47 = fVar3 * DAT_180380e9c;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar29 + 0x1c8) != 0) ||
       (pfVar26 = (float *)(lVar29 + 0x284),
       *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368) != 0)) {
      pfVar26 = (float *)(lVar29 + 0x254);
    }
    fVar49 = (*pfVar26 - *(float *)(lVar29 + 0x11c)) -
             (fVar51 + fVar51 + fVar49 + fVar45 + fVar50 + fVar46 + fVar47);
    FUN_18026a810(3,&DAT_1803dc9a8 + lVar37);
    FUN_18026a810(5,&DAT_1803dc9b8 + lVar37);
    fVar50 = DAT_1803810ec;
    fVar51 = fVar3 * DAT_1803810ec;
    if (fVar3 * DAT_1803810ec <= fVar49) {
      fVar51 = fVar49;
    }
    local_208 = CONCAT44(fVar51,fVar48);
    FUN_180272fa0("##ent_list",&local_208,1,0);
    iVar41 = 0;
    if (0 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249) {
      iVar43 = 0;
      do {
        puVar38 = (undefined8 *)((longlong)iVar43 * 0x70 + DAT_1803eb378);
        cVar14 = FUN_1801cab40(0x6db6db6db6db6db7,puVar38);
        if (cVar14 != '\0') {
          iVar41 = iVar41 + 1;
          puVar33 = puVar38;
          if (0xf < (ulonglong)puVar38[3]) {
            puVar33 = (undefined8 *)*puVar38;
          }
          if (puVar38[2] == 0) {
            lVar29 = -1;
          }
          else {
            lVar37 = (longlong)puVar33 + puVar38[2];
            lVar16 = thunk_FUN_1802d5c20(puVar33,lVar37,0x2a);
            lVar29 = -1;
            if (lVar16 != lVar37) {
              lVar29 = lVar16 - (longlong)puVar33;
            }
          }
          local_2b8 = "";
          if (lVar29 != -1) {
            local_2b8 = " - wildcard";
          }
          pcVar39 = " - disabled";
          if (*(char *)(puVar38 + 4) != '\0') {
            pcVar39 = "";
          }
          FUN_180012ac0(&local_168,0x50,"profile%s%s",pcVar39);
          puVar33 = (undefined8 *)((longlong)puVar38 + 0x2c);
          if (*(char *)(puVar38 + 4) == '\0') {
            puVar33 = puVar42;
          }
          uVar22 = *puVar33;
          uVar7 = puVar33[1];
          FUN_18027ae00(iVar43);
          if (((DAT_1803e8978 < 0) ||
              ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) ||
             (DAT_1803e8978 != iVar43)) {
            uVar40 = 0;
          }
          else {
            uVar40 = 1;
          }
          if (0xf < (ulonglong)puVar38[3]) {
            puVar38 = (undefined8 *)*puVar38;
          }
          local_2a8 = local_2a8 & 0xffffffffffffff00;
          local_2b0 = &local_208;
          local_2b8 = (char *)CONCAT71(local_2b8._1_7_,1);
          local_208 = uVar22;
          uStack_200 = uVar7;
          cVar14 = FUN_1801c81a0("added",puVar38,&local_168,uVar40);
          if (cVar14 != '\0') {
            DAT_1803e6f08 = 0;
            puVar38 = &DAT_1803e6ef8;
            if (0xf < DAT_1803e6f10) {
              puVar38 = DAT_1803e6ef8;
            }
            DAT_1803e8978 = iVar43;
            *(undefined1 *)puVar38 = 0;
          }
          pvVar19 = ThreadLocalStoragePointer;
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar37 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
          iVar15 = *(int *)(lVar37 + 0x108);
          if (iVar15 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar37 + 0x108) = iVar15 + -1;
          }
        }
        iVar43 = iVar43 + 1;
      } while (iVar43 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249);
      uVar44 = (ulonglong)_tls_index;
    }
    if (0 < (int)(DAT_1803edd50 - DAT_1803edd48 >> 5)) {
      iVar43 = 0;
      do {
        puVar38 = (undefined8 *)((longlong)iVar43 * 0x20 + DAT_1803edd48);
        cVar14 = FUN_1801cab40(DAT_1803edd48,puVar38);
        if ((cVar14 != '\0') && (lVar37 = FUN_180122350(puVar38), lVar37 == 0)) {
          iVar41 = iVar41 + 1;
          FUN_18027ae00(iVar43);
          if (DAT_1803e8978 < 0) {
            puVar33 = puVar38;
            if (0xf < (ulonglong)puVar38[3]) {
              puVar33 = (undefined8 *)*puVar38;
            }
            _Buf1 = &DAT_1803e6ef8;
            if (0xf < DAT_1803e6f10) {
              _Buf1 = DAT_1803e6ef8;
            }
            if ((DAT_1803e6f08 != puVar38[2]) ||
               ((DAT_1803e6f08 != 0 && (iVar15 = memcmp(_Buf1,puVar33,DAT_1803e6f08), iVar15 != 0)))
               ) goto LAB_1801c9112;
            uVar22 = 1;
          }
          else {
LAB_1801c9112:
            uVar22 = 0;
          }
          puVar33 = puVar38;
          if (0xf < (ulonglong)puVar38[3]) {
            puVar33 = (undefined8 *)*puVar38;
          }
          local_208 = *puVar42;
          uStack_200 = (&DAT_1803dca30)[lVar32 * 0x19];
          local_2a8 = local_2a8 & 0xffffffffffffff00;
          local_2b0 = &local_208;
          local_2b8 = (char *)((ulonglong)local_2b8 & 0xffffffffffffff00);
          cVar14 = FUN_1801c81a0(puVar33,puVar33,0,uVar22);
          if (cVar14 != '\0') {
            if ((undefined8 **)puVar38 != &DAT_1803e6ef8) {
              if (0xf < (ulonglong)puVar38[3]) {
                puVar38 = (undefined8 *)*puVar38;
              }
              FUN_180212700(&DAT_1803e6ef8,puVar38);
            }
            DAT_1803e8978 = -1;
          }
          if (*(char *)(*(longlong *)((longlong)pvVar19 + uVar44 * 8) + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar37 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
          iVar15 = *(int *)(lVar37 + 0x108);
          if (iVar15 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar37 + 0x108) = iVar15 + -1;
          }
        }
        iVar43 = iVar43 + 1;
      } while (iVar43 < (int)(DAT_1803edd50 - DAT_1803edd48 >> 5));
    }
    if (iVar41 == 0) {
      pcVar39 = "  Nothing scanned yet.";
      if (DAT_1803fcfc0 != '\0') {
        pcVar39 = "  No matches.";
      }
      FUN_1802aabb0(puVar42,pcVar39);
    }
    FUN_180273410();
    FUN_18026a890(2);
    fVar3 = DAT_180380f40;
    uVar28 = (uint7)(uint3)((uint)DAT_1803e8978 >> 8);
    if (((DAT_1803e8978 < 0) ||
        ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) &&
       ((DAT_1803e6f08 != 0 || (DAT_1803fcfc0 != '\0')))) {
      lVar32 = (ulonglong)uVar28 << 8;
    }
    else {
      lVar32 = CONCAT71(uVar28,1);
    }
    fVar51 = (fVar48 - DAT_180380f40) * DAT_180380ac0;
    FUN_180279170(lVar32);
    lVar32 = local_218;
    local_208 = CONCAT44(0x41d00000,fVar51);
    local_288 = *(undefined8 *)(&DAT_1803dc9e8 + local_218);
    uStack_280 = *(undefined8 *)(&DAT_1803dc9f0 + local_218);
    local_2b0 = (undefined8 *)CONCAT71(local_2b0._1_7_,1);
    local_2b8 = (char *)CONCAT71(local_2b8._1_7_,1);
    cVar14 = FUN_18019cb40("Add##ent",10,&local_208,&local_288);
    uVar44 = DAT_1803e6f08;
    puVar36 = auStack_2d8;
    if (cVar14 != '\0') {
      if (DAT_1803e6f08 == 0) {
        local_240 = 0;
        uStack_238 = 0;
        local_230 = 0;
        uStack_228 = 0;
        sVar20 = strlen(&DAT_1803fcfc0);
        FUN_18001d080(&local_240,&DAT_1803fcfc0,sVar20);
        puVar38 = &local_240;
        uVar31 = 2;
      }
      else {
        local_278 = 0;
        uStack_270 = 0;
        pvVar19 = (void *)0x0;
        local_268 = 0;
        local_260 = 0;
        puVar38 = &DAT_1803e6ef8;
        if (0xf < DAT_1803e6f10) {
          puVar38 = DAT_1803e6ef8;
        }
        if (0x7fffffffffffffff < DAT_1803e6f08) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        if (DAT_1803e6f08 < 0x10) {
          local_268 = DAT_1803e6f08;
          local_260 = 0xf;
          local_278 = *puVar38;
          uStack_270 = puVar38[1];
          puVar34 = auStack_2d8;
        }
        else {
          uVar17 = DAT_1803e6f08 | 0xf;
          if (uVar17 < 0x8000000000000000) goto LAB_1801c936e;
          uVar18 = 0x8000000000000027;
          uVar17 = 0x7fffffffffffffff;
          puVar34 = auStack_2d8;
          while( true ) {
            *(undefined8 *)(puVar34 + -8) = 0x1801c935f;
            lVar37 = FUN_1802d8350(uVar18);
            if (lVar37 != 0) break;
            pcVar5 = (code *)swi(0x29);
            uVar17 = (*pcVar5)(5);
            puVar34 = puVar34 + 8;
LAB_1801c936e:
            if (uVar17 < 0x16) {
              uVar17 = 0x16;
            }
            if (uVar17 == 0xffffffffffffffff) goto LAB_1801c93b6;
            if (uVar17 + 1 < 0x1000) {
              *(undefined8 *)(puVar34 + -8) = 0x1801c93b6;
              pvVar19 = (void *)FUN_1802d8350();
              goto LAB_1801c93b6;
            }
            uVar18 = uVar17 + 0x28;
            if (uVar18 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar34 + -8) = &UNK_1801cab30;
              FUN_180012fe0();
            }
          }
          pvVar19 = (void *)(lVar37 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)pvVar19 - 8) = lVar37;
LAB_1801c93b6:
          *(void **)(puVar34 + 0x60) = pvVar19;
          *(ulonglong *)(puVar34 + 0x70) = uVar44;
          *(ulonglong *)(puVar34 + 0x78) = uVar17;
          *(undefined8 *)(puVar34 + -8) = 0x1801c93d4;
          memcpy(pvVar19,puVar38,uVar44 + 1);
        }
        puVar38 = (undefined8 *)(puVar34 + 0x60);
        uVar31 = 1;
        puVar35 = puVar34;
      }
      iVar41 = 0;
      *(uint *)(puVar35 + 0x40) = uVar31;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = (undefined8 ****)*puVar38;
      uStack_1e8 = puVar38[1];
      sVar20 = puVar38[2];
      uStack_1d8 = puVar38[3];
      local_1e0 = sVar20;
      puVar38[2] = 0;
      puVar38[3] = 0xf;
      *(undefined1 *)puVar38 = 0;
      if ((uVar31 & 2) != 0) {
        uVar31 = uVar31 & 0xfffffffd;
        *(uint *)(puVar35 + 0x40) = uVar31;
        *(undefined8 *)(puVar35 + -8) = 0x1801c945e;
        FUN_18020e450(&local_240);
      }
      if ((uVar31 & 1) != 0) {
        *(uint *)(puVar35 + 0x40) = uVar31 & 0xfffffffe;
        *(undefined8 *)(puVar35 + -8) = 0x1801c9475;
        FUN_18020e450(puVar35 + 0x60);
      }
      uVar44 = uStack_1d8;
      pppuVar13 = local_1f0;
      lVar29 = DAT_1803eb380;
      lVar37 = DAT_1803eb378;
      if (sVar20 != 0) {
        if (0 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249) {
          do {
            puVar42 = (undefined8 *)((longlong)iVar41 * 0x70 + lVar37);
            ppppuVar27 = &local_1f0;
            if (0xf < uVar44) {
              ppppuVar27 = (undefined8 ****)pppuVar13;
            }
            _Size = puVar42[2];
            if (0xf < (ulonglong)puVar42[3]) {
              puVar42 = (undefined8 *)*puVar42;
            }
            if (_Size == sVar20) {
              if (_Size == 0) goto LAB_1801c9540;
              *(undefined8 *)(puVar35 + -8) = 0x1801c94f3;
              iVar43 = memcmp(puVar42,ppppuVar27,_Size);
              if (iVar43 == 0) goto LAB_1801c9540;
            }
            iVar41 = iVar41 + 1;
          } while (iVar41 < (int)(lVar29 - lVar37 >> 4) * -0x49249249);
        }
        *(undefined8 *)(puVar35 + -8) = 0x1801c951e;
        FUN_180122440(&local_1f0);
        iVar41 = (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 + -1;
LAB_1801c9540:
        DAT_1803e6f08 = 0;
        puVar42 = &DAT_1803e6ef8;
        if (0xf < DAT_1803e6f10) {
          puVar42 = DAT_1803e6ef8;
        }
        DAT_1803e8978 = iVar41;
        *(undefined1 *)puVar42 = 0;
        lVar32 = local_218;
        puVar42 = local_1f8;
      }
      *(undefined8 *)(puVar35 + -8) = 0x1801c957f;
      FUN_18020e450(&local_1f0);
      puVar36 = puVar35;
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9594;
    FUN_180279200();
    local_220[0] = 1.5;
    local_208 = CONCAT44(local_208._4_4_,0x3f400000);
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    fVar49 = *pfVar23;
    *(undefined8 *)(puVar36 + -8) = 0x1801c95db;
    FUN_18027f5b0(pfVar26,fVar49 * fVar3);
    uVar28 = (uint7)(uint3)((uint)DAT_1803e8978 >> 8);
    if ((DAT_1803e8978 < 0) ||
       ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) {
      lVar37 = CONCAT71(uVar28,1);
    }
    else {
      lVar37 = (ulonglong)uVar28 << 8;
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9614;
    FUN_180279170(lVar37);
    local_218 = CONCAT44(0x41d00000,fVar51);
    uVar22 = *(undefined8 *)(&DAT_1803dca10 + lVar32);
    *(undefined8 *)(puVar36 + 0x50) = *(undefined8 *)(&DAT_1803dca08 + lVar32);
    *(undefined8 *)(puVar36 + 0x58) = uVar22;
    puVar36[0x28] = 1;
    puVar36[0x20] = 1;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9652;
    cVar14 = FUN_18019cb40("Remove##ent",9,&local_218,puVar36 + 0x50);
    if (((cVar14 != '\0') && (lVar37 = (longlong)DAT_1803e8978, -1 < DAT_1803e8978)) &&
       (DAT_1803e8978 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249)) {
      *(undefined8 *)(puVar36 + -8) = 0x1801c969a;
      FUN_18016d4c0(local_190,DAT_1803eb378 + lVar37 * 0x70);
      lVar16 = DAT_1803eb380;
      lVar37 = DAT_1803eb378 + lVar37 * 0x70;
      lVar29 = lVar37;
      while (lVar29 = lVar29 + 0x70, lVar29 != lVar16) {
        *(undefined8 *)(puVar36 + -8) = 0x1801c96c0;
        FUN_1801cacc0(lVar37,lVar29);
        lVar37 = lVar37 + 0x70;
      }
      local_1f8 = (undefined8 *)(DAT_1803eb380 + -0x70);
      *(undefined8 *)(puVar36 + -8) = 0x1801c96e1;
      FUN_18020e450();
      DAT_1803eb380 = DAT_1803eb380 + -0x70;
      plVar21 = (longlong *)*DAT_1805c3998;
      if (plVar21 != DAT_1805c3998) {
        do {
          *(undefined8 *)(puVar36 + -8) = 0x1801c970f;
          cVar14 = FUN_180121f30(local_190,plVar21 + 3);
          if (cVar14 == '\0') {
            plVar21 = (longlong *)*plVar21;
          }
          else {
            *(undefined8 *)(puVar36 + -8) = 0x1801c971f;
            puVar38 = (undefined8 *)FUN_180204e10(extraout_XMM0_Qa,&local_1f8,plVar21);
            plVar21 = (longlong *)*puVar38;
          }
        } while (plVar21 != DAT_1805c3998);
      }
      iVar41 = (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249;
      if (iVar41 <= DAT_1803e8978) {
        DAT_1803e8978 = iVar41 + -1;
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801c976a;
      FUN_18020e450(local_190);
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c976f;
    FUN_180279200();
    fVar51 = (fVar48 - DAT_180380fd8) / DAT_180380e28;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1801c9793;
      __dyn_tls_on_demand_init();
    }
    fVar49 = DAT_180380bf0;
    fVar45 = (float)*(double *)(*(longlong *)(lVar4 + 0xec0) + 0x10) - _DAT_1803e6fa4;
    bVar6 = fVar45 < DAT_180380bf0;
    uVar28 = (uint7)(uint3)((uint)DAT_1803e8978 >> 8);
    if ((DAT_1803e8978 < 0) ||
       ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) {
      lVar37 = CONCAT71(uVar28,1);
    }
    else {
      lVar37 = (ulonglong)uVar28 << 8;
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c97f5;
    FUN_180279170(lVar37);
    if (fVar45 < fVar49) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801c9805;
        __dyn_tls_on_demand_init();
      }
      lVar37 = *(longlong *)(lVar4 + 0xec0);
      local_258 = 0;
      local_254 = *(undefined8 *)(lVar37 + 0xdb0);
      uStack_24c = *(undefined8 *)(lVar37 + 0xdb8);
      *(undefined8 *)(puVar36 + -8) = 0x1801c982b;
      FUN_18028a220(lVar37 + 0x1fc8,&local_258);
      if (*(int *)(lVar37 + 0x1fc4) != 0) {
        uVar22 = *(undefined8 *)(&DAT_1803dc9f0 + lVar32);
        *(undefined8 *)(lVar37 + 0xdb0) = *(undefined8 *)(&DAT_1803dc9e8 + lVar32);
        *(undefined8 *)(lVar37 + 0xdb8) = uVar22;
      }
    }
    fVar46 = DAT_180381038;
    local_220[0] = 1.5;
    local_208 = CONCAT44(local_208._4_4_,0x3f400000);
    local_218 = CONCAT44(local_218._4_4_,fVar51);
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    local_218 = CONCAT44(*pfVar23 * DAT_180381038,fVar51);
    pcVar39 = "Copy##ent";
    if (bVar6) {
      pcVar39 = "Copied##ent";
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c98b8;
    cVar14 = FUN_1802abf60(pcVar39,&local_218,0);
    if (cVar14 != '\0') {
      puVar38 = (undefined8 *)((longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378);
      if ((undefined8 **)puVar38 != &DAT_1803e9580) {
        puVar33 = puVar38;
        if (0xf < (ulonglong)puVar38[3]) {
          puVar33 = (undefined8 *)*puVar38;
        }
        uVar22 = puVar38[2];
        *(undefined8 *)(puVar36 + -8) = 0x1801c98f9;
        FUN_180212700(&DAT_1803e9580,puVar33,uVar22);
      }
      DAT_1803e95a0 = *(undefined1 *)(puVar38 + 4);
      DAT_1803e95a1 = *(undefined1 *)((longlong)puVar38 + 0x21);
      DAT_1803e95a2 = *(undefined1 *)((longlong)puVar38 + 0x22);
      DAT_1803e95a3 = *(undefined1 *)((longlong)puVar38 + 0x23);
      DAT_1803e95a4 = *(undefined1 *)((longlong)puVar38 + 0x24);
      DAT_1803e95a5 = *(undefined1 *)((longlong)puVar38 + 0x25);
      DAT_1803e95a6 = *(undefined1 *)((longlong)puVar38 + 0x26);
      DAT_1803e95a8 = *(undefined4 *)(puVar38 + 5);
      _DAT_1803e95ac = *(undefined8 *)((longlong)puVar38 + 0x2c);
      uRam00000001803e95b4 = *(undefined8 *)((longlong)puVar38 + 0x34);
      DAT_1803e95bc = *(undefined1 *)((longlong)puVar38 + 0x3c);
      DAT_1803e95c0 = *(undefined4 *)(puVar38 + 8);
      _DAT_1803e95c4 = *(undefined8 *)((longlong)puVar38 + 0x44);
      uRam00000001803e95cc = *(undefined8 *)((longlong)puVar38 + 0x4c);
      _DAT_1803e95d4 = *(undefined4 *)((longlong)puVar38 + 0x54);
      uRam00000001803e95d8 = *(undefined4 *)(puVar38 + 0xb);
      uRam00000001803e95dc = *(undefined4 *)((longlong)puVar38 + 0x5c);
      uRam00000001803e95e0 = *(undefined4 *)(puVar38 + 0xc);
      DAT_1803e95e4 = *(undefined1 *)((longlong)puVar38 + 100);
      DAT_1803e95e8 = *(undefined4 *)(puVar38 + 0xd);
      DAT_1803ff098 = '\x01';
      if (*(char *)(lVar4 + 0x10) == '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801c99a6;
        __dyn_tls_on_demand_init();
      }
      _DAT_1803e6fa4 = (float)*(double *)(*(longlong *)(lVar4 + 0xec0) + 0x10);
    }
    if (fVar45 < fVar49) {
      *(undefined8 *)(puVar36 + -8) = 0x1801c99d6;
      FUN_18026a890(1);
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c99db;
    FUN_180279200();
    local_220[0] = 1.5;
    local_208._0_4_ = 0.75;
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    fVar49 = *pfVar23;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9a1b;
    FUN_18027f5b0(pfVar26,fVar49 * fVar3);
    if (((DAT_1803e8978 < 0) ||
        ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) ||
       (DAT_1803ff098 == '\0')) {
      uVar22 = CONCAT71((uint7)(uint3)((uint)DAT_1803e8978 >> 8),1);
    }
    else {
      uVar22 = 0;
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9a5d;
    FUN_180279170(uVar22);
    local_220[0] = 1.5;
    local_208 = CONCAT44(local_208._4_4_,0x3f400000);
    local_218 = CONCAT44(local_218._4_4_,fVar51);
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    local_218 = CONCAT44(*pfVar23 * fVar46,fVar51);
    *(undefined8 *)(puVar36 + -8) = 0x1801c9ab0;
    cVar14 = FUN_1802abf60("Paste##ent",&local_218,0);
    if (cVar14 != '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1801c9ad3;
      FUN_18016d4c0(local_1d0,(longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378);
      puVar38 = (undefined8 *)((longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378);
      if ((undefined8 **)puVar38 != &DAT_1803e9580) {
        puVar33 = &DAT_1803e9580;
        if (0xf < DAT_1803e9598) {
          puVar33 = DAT_1803e9580;
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801c9b0d;
        FUN_180212700(puVar38,puVar33,DAT_1803e9590);
      }
      iVar41 = DAT_1803e8978;
      *(undefined1 *)(puVar38 + 4) = DAT_1803e95a0;
      *(undefined1 *)((longlong)puVar38 + 0x21) = DAT_1803e95a1;
      *(undefined1 *)((longlong)puVar38 + 0x22) = DAT_1803e95a2;
      *(undefined1 *)((longlong)puVar38 + 0x23) = DAT_1803e95a3;
      *(undefined1 *)((longlong)puVar38 + 0x24) = DAT_1803e95a4;
      *(undefined1 *)((longlong)puVar38 + 0x25) = DAT_1803e95a5;
      *(undefined1 *)((longlong)puVar38 + 0x26) = DAT_1803e95a6;
      *(undefined4 *)(puVar38 + 5) = DAT_1803e95a8;
      uVar22 = uRam00000001803e95b4;
      *(undefined8 *)((longlong)puVar38 + 0x2c) = _DAT_1803e95ac;
      *(undefined8 *)((longlong)puVar38 + 0x34) = uVar22;
      *(undefined1 *)((longlong)puVar38 + 0x3c) = DAT_1803e95bc;
      *(undefined4 *)(puVar38 + 8) = DAT_1803e95c0;
      uVar22 = uRam00000001803e95cc;
      *(undefined8 *)((longlong)puVar38 + 0x44) = _DAT_1803e95c4;
      *(undefined8 *)((longlong)puVar38 + 0x4c) = uVar22;
      uVar12 = uRam00000001803e95e0;
      uVar11 = uRam00000001803e95dc;
      uVar2 = uRam00000001803e95d8;
      *(undefined4 *)((longlong)puVar38 + 0x54) = _DAT_1803e95d4;
      *(undefined4 *)(puVar38 + 0xb) = uVar2;
      *(undefined4 *)((longlong)puVar38 + 0x5c) = uVar11;
      *(undefined4 *)(puVar38 + 0xc) = uVar12;
      *(undefined1 *)((longlong)puVar38 + 100) = DAT_1803e95e4;
      *(undefined4 *)(puVar38 + 0xd) = DAT_1803e95e8;
      ppppuVar27 = (undefined8 ****)((longlong)iVar41 * 0x70 + DAT_1803eb378);
      if (ppppuVar27 != local_1d0) {
        ppppuVar30 = local_1d0;
        if (0xf < local_1b8) {
          ppppuVar30 = (undefined8 ****)local_1d0[0];
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801c9bd7;
        FUN_180212700(ppppuVar27,ppppuVar30,local_1c0);
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801c9be1;
      FUN_18020e450(local_1d0);
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9bed;
    FUN_180279200();
    local_220[0] = 1.5;
    local_208._0_4_ = 0.75;
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    fVar49 = *pfVar23;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9c2d;
    FUN_18027f5b0(pfVar26,fVar49 * fVar3);
    uVar28 = (uint7)(uint3)((uint)DAT_1803e8978 >> 8);
    if ((DAT_1803e8978 < 0) ||
       ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) {
      lVar37 = CONCAT71(uVar28,1);
    }
    else {
      lVar37 = (ulonglong)uVar28 << 8;
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9c5c;
    FUN_180279170(lVar37);
    local_220[0] = 1.5;
    local_208 = CONCAT44(local_208._4_4_,0x3f400000);
    local_218 = CONCAT44(local_218._4_4_,fVar51);
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    local_218 = CONCAT44(*pfVar23 * fVar46,fVar51);
    *(undefined8 *)(puVar36 + -8) = 0x1801c9caf;
    cVar14 = FUN_1802abf60("Reset##ent",&local_218,0);
    if (cVar14 != '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1801c9cd2;
      FUN_18016d4c0(local_1b0,(longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378);
      uStack_160 = 0;
      local_158 = 0;
      local_150 = 0xf;
      local_168 = 0;
      local_148 = 0x1000101;
      local_144 = 0;
      local_142 = 1;
      local_140 = 0;
      local_13c = 0x3f19999a;
      uStack_138 = 0x3f59999a;
      uStack_134 = 0x3f800000;
      uStack_130 = 0x3f800000;
      local_12c = 0;
      local_128 = 0;
      local_124 = 0x3eb33333;
      uStack_120 = 0x3f59999a;
      uStack_11c = 0x3f800000;
      uStack_118 = (undefined4)ram0x0001803815c0;
      uStack_114 = (undefined4)((ulonglong)ram0x0001803815c0 >> 0x20);
      uStack_110 = (undefined4)_UNK_1803815c8;
      uStack_10c = (undefined4)((ulonglong)_UNK_1803815c8 >> 0x20);
      uStack_108 = 0x3f800000;
      local_104 = 0;
      local_100 = 2;
      lVar37 = (longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378;
      *(undefined8 *)(puVar36 + -8) = 0x1801c9db6;
      FUN_18020e8a0(lVar37,&local_168);
      *(undefined1 *)(lVar37 + 0x20) = (undefined1)local_148;
      *(undefined1 *)(lVar37 + 0x21) = local_148._1_1_;
      *(undefined1 *)(lVar37 + 0x22) = local_148._2_1_;
      *(undefined1 *)(lVar37 + 0x23) = local_148._3_1_;
      *(undefined1 *)(lVar37 + 0x24) = (undefined1)local_144;
      *(undefined1 *)(lVar37 + 0x25) = local_144._1_1_;
      *(undefined1 *)(lVar37 + 0x26) = local_142;
      *(undefined4 *)(lVar37 + 0x28) = local_140;
      *(ulonglong *)(lVar37 + 0x2c) = CONCAT44(uStack_138,local_13c);
      *(ulonglong *)(lVar37 + 0x34) = CONCAT44(uStack_130,uStack_134);
      *(undefined1 *)(lVar37 + 0x3c) = local_12c;
      *(undefined4 *)(lVar37 + 0x40) = local_128;
      *(ulonglong *)(lVar37 + 0x44) = CONCAT44(uStack_120,local_124);
      *(ulonglong *)(lVar37 + 0x4c) = CONCAT44(uStack_118,uStack_11c);
      *(ulonglong *)(lVar37 + 0x54) = CONCAT44(uStack_110,uStack_114);
      *(ulonglong *)(lVar37 + 0x5c) = CONCAT44(uStack_108,uStack_10c);
      *(undefined1 *)(lVar37 + 100) = local_104;
      *(undefined4 *)(lVar37 + 0x68) = local_100;
      *(undefined8 *)(puVar36 + -8) = 0x1801c9e55;
      FUN_18020e450(&local_168);
      ppppuVar27 = (undefined8 ****)((longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378);
      if (ppppuVar27 != local_1b0) {
        ppppuVar30 = local_1b0;
        if (0xf < local_198) {
          ppppuVar30 = (undefined8 ****)local_1b0[0];
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801c9e87;
        FUN_180212700(ppppuVar27,ppppuVar30,local_1a0);
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801c9e91;
      FUN_18020e450(local_1b0);
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9e9d;
    FUN_180279200();
    *(undefined8 *)(puVar36 + -8) = 0x1801c9eac;
    FUN_1802aabb0(puVar42,"Aim add");
    *(undefined8 *)(puVar36 + -8) = 0x1801c9eb9;
    FUN_18027f5b0();
    if (fVar50 <= fVar48 - DAT_1803810cc) {
      fVar50 = fVar48 - DAT_1803810cc;
    }
    local_218 = (ulonglong)(uint)fVar50;
    local_1f8 = (undefined8 *)0x93fd561a96ab0c67;
    local_208 = 0x11da5b42ad2c912c;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9f05;
    plVar21 = (longlong *)FUN_180241a30(&DAT_1803fadf0,puVar36 + 0x50,&local_1f8);
    lVar37 = *plVar21;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9f19;
    plVar21 = (longlong *)FUN_180241a30(lVar37 + 0x28,&local_258,&local_208);
    lVar37 = *plVar21;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9f25;
    uVar22 = FUN_1802029c0(lVar37 + 0x28);
    *(undefined8 *)(puVar36 + -8) = 0x1801c9f3b;
    FUN_1802d31a0("##ent_addbind",uVar22,&local_218,0);
    *(undefined8 *)(puVar36 + -8) = 0x1801c9f42;
    cVar14 = FUN_18026ee60(0);
    if (cVar14 != '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1801c9f52;
      FUN_180280d00(
                   "In-game: aim at an entity and press this key to add\nits class to the list. Works with the menu closed."
                   );
    }
    if (DAT_1803ff098 == '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1801c9f8b;
      FUN_1802aabb0(puVar42,"Copy a profile to reuse its look.");
    }
    else {
      puVar38 = &DAT_1803e9580;
      if (0xf < DAT_1803e9598) {
        puVar38 = DAT_1803e9580;
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801c9f7d;
      FUN_1802aabb0(puVar42,"Clipboard: %s",puVar38);
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801c9f90;
    FUN_18027fda0();
    local_220[0] = 1.5;
    local_208 = CONCAT44(local_208._4_4_,0x3f400000);
    pfVar26 = (float *)&local_208;
    if (fVar8 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar23 = local_220;
    if (DAT_1803da6a4 <= fVar9) {
      pfVar23 = pfVar26;
    }
    fVar48 = *pfVar23;
    *(undefined8 *)(puVar36 + -8) = 0x1801c9fd3;
    FUN_18027f5b0(pfVar26,fVar48 * DAT_180380fcc);
    *(undefined8 *)(puVar36 + -8) = 0x1801c9fd8;
    FUN_18027fc30();
    if (*(char *)(lVar4 + 0x10) == '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1801c9fea;
      __dyn_tls_on_demand_init();
    }
    lVar37 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar37 + 0x1c8) != 0) ||
       (pfVar26 = (float *)(lVar37 + 0x280),
       *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x2368) != 0)) {
      pfVar26 = (float *)(lVar37 + 0x250);
    }
    if ((DAT_1803e8978 < 0) ||
       ((int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 <= DAT_1803e8978)) {
      if (DAT_1803e6f08 == 0) {
        *(undefined8 *)(puVar36 + -8) = 0x1801caa44;
        FUN_1802aabb0(puVar42,"No entity selected.");
        if (*(char *)(lVar4 + 0x10) == '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801caa50;
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(lVar4 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar32 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar32 + 0x1520) + 0xd1) == '\0') {
          local_218 = 0;
          *(undefined8 *)(puVar36 + -8) = 0x1801caa87;
          FUN_18027f400(&local_218,uVar10);
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801caa96;
        FUN_1802aabb0(puVar42,"Pick a class on the left, then press Add.");
        pcVar39 = "Typed patterns work too: npc_*, item_health*.";
      }
      else {
        puVar38 = &DAT_1803e6ef8;
        if (0xf < DAT_1803e6f10) {
          puVar38 = DAT_1803e6ef8;
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801ca9da;
        FUN_1802aa3c0(puVar38,0,1);
        if (*(char *)(lVar4 + 0x10) == '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca9e6;
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(lVar4 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar32 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar32 + 0x1520) + 0xd1) == '\0') {
          local_218 = 0;
          *(undefined8 *)(puVar36 + -8) = 0x1801caa1d;
          FUN_18027f400(&local_218,uVar10);
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801caa2c;
        FUN_1802aabb0(puVar42,"Not added yet.");
        pcVar39 = "Press Add to create a profile for this class.";
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801caaa5;
      FUN_1802aabb0(puVar42,pcVar39);
    }
    else {
      fVar48 = *pfVar26;
      fVar50 = *(float *)(lVar37 + 0x118);
      puVar33 = (undefined8 *)((longlong)DAT_1803e8978 * 0x70 + DAT_1803eb378);
      puVar38 = puVar33;
      if (0xf < (ulonglong)puVar33[3]) {
        puVar38 = (undefined8 *)*puVar33;
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801ca093;
      FUN_1802aabb0(&DAT_1803dc9c8 + lVar32,&DAT_1803431ac,puVar38);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca0a3;
      FUN_1801a0b60("Enabled##ent_on",puVar33 + 4);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca0a8;
      FUN_1802afb40();
      *(undefined8 *)(puVar36 + -8) = 0x1801ca0b7;
      FUN_1802aabb0(puVar42,&DAT_18036ebe0);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca0c7;
      FUN_1801a0b60("Bounding box##ent",(longlong)puVar33 + 0x21);
      fVar51 = DAT_180380fa8;
      local_220[0] = 1.5;
      local_208 = CONCAT44(local_208._4_4_,0x3f400000);
      pfVar26 = (float *)&local_208;
      if (fVar8 <= DAT_1803da6a4) {
        pfVar26 = &DAT_1803da6a4;
      }
      pfVar23 = local_220;
      if (DAT_1803da6a4 <= fVar9) {
        pfVar23 = pfVar26;
      }
      fVar49 = *pfVar23;
      *(undefined8 *)(puVar36 + -8) = 0x1801ca117;
      FUN_18027f5b0(pfVar26,fVar49 * DAT_180380fa8);
      fVar50 = (fVar48 - fVar50) - DAT_180381178;
      fVar48 = DAT_18038110c;
      if (DAT_18038110c <= fVar50) {
        fVar48 = fVar50;
      }
      if (*(char *)(lVar4 + 0x10) == '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca137;
        __dyn_tls_on_demand_init();
      }
      lVar32 = *(longlong *)(lVar4 + 0xec0);
      puVar1 = (uint *)(lVar32 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(float *)(lVar32 + 0x1ed8) = fVar48;
      *(undefined4 *)(puVar36 + 0x20) = 4;
      *(undefined8 *)(puVar36 + -8) = 0x1801ca16f;
      FUN_1802b1200("##ent_style",puVar33 + 5);
      local_220[0] = 1.5;
      local_208 = CONCAT44(local_208._4_4_,0x3f400000);
      pfVar26 = (float *)&local_208;
      if (fVar8 <= DAT_1803da6a4) {
        pfVar26 = &DAT_1803da6a4;
      }
      pfVar23 = local_220;
      if (DAT_1803da6a4 <= fVar9) {
        pfVar23 = pfVar26;
      }
      fVar48 = *pfVar23;
      *(undefined8 *)(puVar36 + -8) = 0x1801ca1af;
      FUN_18027f5b0(pfVar26,fVar48 * fVar3);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca1c5;
      FUN_1802bac60("##ent_clr",(longlong)puVar33 + 0x2c,0x400a0);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca1d5;
      FUN_1801a0b60("Stable bounds##ent",(longlong)puVar33 + 0x22);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca1dc;
      cVar14 = FUN_18026ee60(0);
      if (cVar14 != '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca1ec;
        FUN_180280d00(
                     "Freezes animated hitbox bones in the model\'s reference pose.\nEnable for rotors/propellers if the box jitters.\nLeave disabled for articulated vehicles such as the jeep."
                     );
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801ca1fc;
      FUN_1801a0b60("Name##ent",(longlong)puVar33 + 0x23);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca20c;
      FUN_1801a0b60("Health##ent",(longlong)puVar33 + 0x24);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca21c;
      FUN_1801a0b60("Distance##ent",(longlong)puVar33 + 0x25);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca22c;
      FUN_1801a0b60("Dormant##ent",(longlong)puVar33 + 0x26);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca233;
      cVar14 = FUN_18026ee60(0);
      if (cVar14 != '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca243;
        FUN_180280d00(
                     "Keeps the box after the server stops sending the entity.\nServers with a transmit optimizer (Prometheus and similar)\ndrop distant entities from the client entirely - the box then\nfreezes at the last position it was seen at, dimmed.\nExact for static props like money printers; anything that\nmoves while untransmitted is drawn where you last saw it."
                     );
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801ca248;
      FUN_1802afb40();
      *(undefined8 *)(puVar36 + -8) = 0x1801ca257;
      FUN_1802aabb0(puVar42,"Chams");
      *(undefined8 *)(puVar36 + -8) = 0x1801ca267;
      FUN_1801a0b60("Chams##ent_chams",(longlong)puVar33 + 0x3c);
      *(undefined8 *)(puVar36 + -8) = 0x1801ca26e;
      cVar14 = FUN_18026ee60(0);
      if (cVar14 != '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca27e;
        FUN_180280d00(
                     "Recolors the MODEL of every entity of this class.\nIndependent of the player chams toggle; the fill material\nis the one picked in Visuals -> Chams."
                     );
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801ca28b;
      FUN_18027f5b0();
      *(undefined8 *)(puVar36 + -8) = 0x1801ca2a5;
      cVar14 = FUN_18019dc00("##ent_chams_opts",4,0);
      if (*(char *)(lVar4 + 0x10) == '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca2b4;
        __dyn_tls_on_demand_init();
      }
      fVar48 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1f08);
      if (*(char *)(lVar4 + 0x10) == '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca2cc;
        __dyn_tls_on_demand_init();
      }
      fVar50 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0x1f0c);
      if (cVar14 != '\0') {
        *(undefined8 *)(puVar36 + -8) = 0x1801ca2e9;
        FUN_180280fd0("ent_chams_opts");
      }
      if (DAT_1803facfd == '\0') {
        if (*(char *)(lVar4 + 0x10) == '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca308;
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(lVar4 + 0xec0);
        *(uint *)(lVar32 + 0x1f48) = *(uint *)(lVar32 + 0x1f48) | 1;
        *(float *)(lVar32 + 0x1f58) = fVar50 + fVar51;
        *(float *)(lVar32 + 0x1f5c) = fVar48 - fVar3;
        *(undefined8 *)(lVar32 + 0x1f60) = 0;
        *(undefined4 *)(lVar32 + 0x1f4c) = 8;
      }
      *(undefined8 *)(puVar36 + -8) = 0x1801ca348;
      cVar14 = FUN_18019a680("ent_chams_opts");
      if (cVar14 != '\0') {
        local_220[0] = 1.5;
        local_208._0_4_ = 0.75;
        pfVar26 = (float *)&local_208;
        if (fVar8 <= DAT_1803da6a4) {
          pfVar26 = &DAT_1803da6a4;
        }
        pfVar23 = local_220;
        if (DAT_1803da6a4 <= fVar9) {
          pfVar23 = pfVar26;
        }
        fVar48 = *pfVar23;
        if (*(char *)(lVar4 + 0x10) == '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca395;
          __dyn_tls_on_demand_init();
        }
        lVar32 = *(longlong *)(lVar4 + 0xec0);
        puVar1 = (uint *)(lVar32 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        fVar3 = DAT_180381190;
        *(float *)(lVar32 + 0x1ed8) = fVar48 * DAT_180381190;
        pfVar26 = (float *)(puVar33 + 8);
        *(undefined4 *)(puVar36 + 0x20) = 2;
        *(undefined8 *)(puVar36 + -8) = 0x1801ca3d6;
        FUN_1802b1200("Mode##ent_chams_mode",pfVar26);
        local_220[0] = 1.4013e-45;
        local_208 = (ulonglong)local_208._4_4_ << 0x20;
        pfVar23 = (float *)&local_208;
        if (-1 < (int)*pfVar26) {
          pfVar23 = pfVar26;
        }
        pfVar24 = local_220;
        if ((int)*pfVar26 < 2) {
          pfVar24 = pfVar23;
        }
        *pfVar26 = *pfVar24;
        *(undefined8 *)(puVar36 + -8) = 0x1801ca405;
        cVar14 = FUN_18026ee60(0);
        if (cVar14 != '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca415;
          FUN_180280d00(
                       "Solid: two-color silhouette, punches through walls.\nOutline: coloured border around the entity (and the real\nmodel through walls) - the same pass the player chams\n\"Outline\" mode uses, works with gmod_mcore_test 1."
                       );
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801ca42b;
        FUN_1802bac60("Hidden##ent_chams_thr",(longlong)puVar33 + 0x44,0x22);
        *(undefined8 *)(puVar36 + -8) = 0x1801ca432;
        cVar14 = FUN_18026ee60(0);
        if (cVar14 != '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca442;
          FUN_180280d00("Colour of the part behind geometry. Per profile.");
        }
        *(undefined8 *)(puVar36 + -8) = 0x1801ca458;
        FUN_1802bac60("Visible##ent_chams_vis",(longlong)puVar33 + 0x54,0x22);
        *(undefined8 *)(puVar36 + -8) = 0x1801ca45f;
        cVar14 = FUN_18026ee60(0);
        if (cVar14 != '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca46f;
          FUN_180280d00("Colour of the part in line of sight. Per profile.");
        }
        local_1f8 = (undefined8 *)0x93fd561a96ab0c67;
        *(undefined8 *)(puVar36 + -8) = 0x1801ca491;
        plVar21 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_258,&local_1f8);
        lVar32 = *plVar21 + 0x28;
        *(undefined8 *)(puVar36 + -8) = 0x1801ca49d;
        FUN_1802afb40();
        if (*pfVar26 == 1.4013e-45) {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca4b6;
          FUN_1802aabb0(puVar42,"Border style (this profile)");
          pcVar39 = (char *)((longlong)puVar33 + 100);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca4c9;
          FUN_1801a0b60("Sharp border (no glow)##ent_glow_sharp",pcVar39);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca4d0;
          cVar14 = FUN_18026ee60(0);
          if (cVar14 != '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca4e0;
            FUN_180280d00(
                         "No blur: the silhouette is grown by a fixed number of pixels and its\ninside is cut out, so the border is hard-edged and evenly thick.\nA style of its own costs one extra screen-space pass per frame."
                         );
          }
          if (*pcVar39 != '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca4fb;
            FUN_1802aabb0(puVar42,"Thickness (px)");
            local_208._0_4_ = 1.4013e-44;
            local_220[0] = 1.4013e-45;
            pfVar23 = (float *)(puVar33 + 0xd);
            puVar36[0x30] = 1;
            *(undefined **)(puVar36 + 0x28) = &DAT_18033f570;
            *(undefined8 **)(puVar36 + 0x20) = &local_208;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca538;
            FUN_1801a6c50("##ent_glow_thick",4,pfVar23,local_220);
            local_220[0] = 1.4013e-44;
            local_208 = CONCAT44(local_208._4_4_,1);
            pfVar26 = (float *)&local_208;
            if (0 < (int)*pfVar23) {
              pfVar26 = pfVar23;
            }
            pfVar24 = local_220;
            if ((int)*pfVar23 < 0xb) {
              pfVar24 = pfVar26;
            }
            *pfVar23 = *pfVar24;
          }
          *(undefined8 *)(puVar36 + -8) = 0x1801ca565;
          FUN_1802afb40();
          *(undefined8 *)(puVar36 + -8) = 0x1801ca574;
          FUN_1802aabb0(puVar42,"Outline (shared with Visuals -> Chams)");
          local_218 = 0x25ac6bf5fc61a680;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca593;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar4 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca59f;
          uVar22 = FUN_1801fcfc0(lVar4 + 0x28);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca5ae;
          FUN_1801a0b60("Outline##ent_glow_outline",uVar22);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca5b5;
          cVar14 = FUN_18026ee60(0);
          if (cVar14 != '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca5c5;
            FUN_180280d00("The coloured border itself. Off + \"Show model\" on = model only.");
          }
          local_218 = 0x44e346faced5d1ce;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca5e4;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar4 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca5f0;
          uVar22 = FUN_1801fcfc0(lVar4 + 0x28);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca5ff;
          FUN_1801a0b60("Show model through walls##ent_glow_xray",uVar22);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca606;
          cVar14 = FUN_18026ee60(0);
          if (cVar14 != '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca616;
            FUN_180280d00(
                         "Redraws the entity\'s own textured model with the depth suppressed,\nso you see it behind geometry. Independent of the border."
                         );
          }
          local_218 = 0x5bca754c19d73cdf;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca635;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar4 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca641;
          uVar22 = FUN_1801fcfc0(lVar4 + 0x28);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca650;
          FUN_1801a0b60("Outline through walls##ent_glow_thr",uVar22);
          *(undefined8 *)(puVar36 + -8) = 0x1801ca657;
          cVar14 = FUN_18026ee60(0);
          if (cVar14 != '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca667;
            FUN_180280d00("Colours the covered part of the entity too, in the \"hidden\" colour.");
          }
          if (*pcVar39 == '\0') {
            local_218 = 0x5cded73623217c2a;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca68f;
            plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
            lVar4 = *plVar21;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca69b;
            uVar22 = FUN_1801fcfc0(lVar4 + 0x28);
            *(undefined8 *)(puVar36 + -8) = 0x1801ca6aa;
            FUN_1801a0b60("Soft glow##ent_glow_soft",uVar22);
            *(undefined8 *)(puVar36 + -8) = 0x1801ca6b1;
            cVar14 = FUN_18026ee60(0);
            if (cVar14 != '\0') {
              *(undefined8 *)(puVar36 + -8) = 0x1801ca6c1;
              FUN_180280d00("On: wide soft halo. Off: crisp border - pair it with thickness 1-2.");
            }
            *(undefined8 *)(puVar36 + -8) = 0x1801ca6d0;
            FUN_1802aabb0(puVar42,"Thickness");
            local_218 = 0x928aca364203258f;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca6ef;
            plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
            local_208._0_4_ = 20.0;
            local_220[0] = 0.5;
            lVar4 = *plVar21;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca709;
            uVar22 = FUN_180202dc0(lVar4 + 0x28);
            puVar36[0x30] = 1;
            *(undefined **)(puVar36 + 0x28) = &DAT_180360afc;
            *(undefined8 **)(puVar36 + 0x20) = &local_208;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca73b;
            FUN_1801a6c50("##ent_glow_size",8,uVar22,local_220);
            *(undefined8 *)(puVar36 + -8) = 0x1801ca74a;
            FUN_1802aabb0(puVar42,"Spread");
            local_218 = 0x2c86430344857507;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca769;
            plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
            local_208 = CONCAT44(local_208._4_4_,4);
            local_220[0] = 1.4013e-45;
            lVar4 = *plVar21;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca783;
            uVar22 = FUN_1802029c0(lVar4 + 0x28);
            puVar36[0x30] = 1;
            *(undefined **)(puVar36 + 0x28) = &DAT_18033f570;
            *(undefined8 **)(puVar36 + 0x20) = &local_208;
            *(undefined8 *)(puVar36 + -8) = 0x1801ca7ae;
            FUN_1801a6c50("##ent_glow_passes",4,uVar22,local_220);
          }
          *(undefined8 *)(puVar36 + -8) = 0x1801ca7bd;
          FUN_1802aabb0(puVar42,"Brightness");
          local_218 = 0x5d20275a62ec75ff;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca7dc;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          local_208 = CONCAT44(local_208._4_4_,4);
          local_220[0] = 1.4013e-45;
          lVar32 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca7f6;
          uVar22 = FUN_1802029c0(lVar32 + 0x28);
          puVar36[0x30] = 1;
          *(undefined **)(puVar36 + 0x28) = &DAT_18033f570;
          *(undefined8 **)(puVar36 + 0x20) = &local_208;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca821;
          FUN_1801a6c50("##ent_glow_intensity",4,uVar22,local_220);
        }
        else {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca832;
          FUN_1802aabb0(puVar42,"Fill material (shared with Visuals -> Chams)");
          local_220[0] = 1.5;
          local_208._0_4_ = 0.75;
          pfVar26 = (float *)&local_208;
          if (fVar8 <= DAT_1803da6a4) {
            pfVar26 = &DAT_1803da6a4;
          }
          pfVar23 = local_220;
          if (DAT_1803da6a4 <= fVar9) {
            pfVar23 = pfVar26;
          }
          fVar48 = *pfVar23;
          if (*(char *)(lVar4 + 0x10) == '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca87b;
            __dyn_tls_on_demand_init();
          }
          lVar4 = *(longlong *)(lVar4 + 0xec0);
          puVar1 = (uint *)(lVar4 + 0x1ec0);
          *puVar1 = *puVar1 | 1;
          *(float *)(lVar4 + 0x1ed8) = fVar48 * fVar3;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca897;
          FUN_1801071e0();
          local_218 = 0x279c57cf06166f3d;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca8b9;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar4 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca8c5;
          uVar22 = FUN_1802029c0(lVar4 + 0x28);
          *(undefined4 *)(puVar36 + 0x20) = 0xd;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca8df;
          FUN_1802b1200("##ent_chams_mat",uVar22);
          local_220[0] = 1.68156e-44;
          local_208 = (ulonglong)local_208._4_4_ << 0x20;
          local_218 = 0x279c57cf06166f3d;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca8ff;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar4 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca90b;
          pfVar23 = (float *)FUN_1802029c0(lVar4 + 0x28);
          pfVar26 = (float *)&local_208;
          if (-1 < (int)*pfVar23) {
            pfVar26 = pfVar23;
          }
          pfVar24 = local_220;
          if ((int)*pfVar23 < 0xd) {
            pfVar24 = pfVar26;
          }
          fVar48 = *pfVar24;
          local_218 = 0x279c57cf06166f3d;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca939;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar4 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca945;
          pfVar26 = (float *)FUN_1802029c0(lVar4 + 0x28);
          *pfVar26 = fVar48;
          local_218 = 0x279c57cf06166f3d;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca95c;
          plVar21 = (longlong *)FUN_180241a30(lVar32,puVar36 + 0x50,&local_218);
          lVar32 = *plVar21;
          *(undefined8 *)(puVar36 + -8) = 0x1801ca968;
          piVar25 = (int *)FUN_1802029c0(lVar32 + 0x28);
          if (*piVar25 == 0xc) {
            *(undefined8 *)(puVar36 + -8) = 0x1801ca975;
            FUN_1801c3ca0();
          }
        }
        if (DAT_1803facfd == '\0') {
          *(undefined8 *)(puVar36 + -8) = 0x1801ca9a7;
          FUN_180281800();
        }
        else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
          DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
        }
      }
    }
    *(undefined8 *)(puVar36 + -8) = 0x1801caaaa;
    FUN_18027fda0();
  }
  *(undefined8 *)(puVar36 + -8) = 0x1801caaaf;
  FUN_180273410();
  *(undefined8 *)(puVar36 + -8) = 0x1801caab9;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar36 + -8) = 0x1801caac3;
  FUN_18026a890(2);
  *(undefined8 *)(puVar36 + -8) = 0x1801caad2;
  return;
}


