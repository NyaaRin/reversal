// 0x1801d3b90  FUN_1801d3b90
// size=9040 thunk=false
// signature: undefined FUN_1801d3b90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d3b90(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  longlong lVar6;
  code *pcVar7;
  void *pvVar8;
  bool bVar9;
  undefined8 *****_Memory;
  char *pcVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  char *pcVar14;
  undefined8 ******ppppppuVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  float *pfVar23;
  HMODULE pHVar24;
  longlong lVar25;
  ULONGLONG UVar26;
  undefined8 uVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined8 **********ppppppppppuVar31;
  char *pcVar32;
  undefined *puVar33;
  char **ppcVar34;
  size_t sVar35;
  void *pvVar36;
  uintptr_t uVar37;
  float *pfVar38;
  char **_Buf1;
  char *_Str1;
  char **ppcVar39;
  char **ppcVar40;
  undefined8 ******ppppppuVar41;
  undefined8 **********ppppppppppuVar42;
  undefined8 ******ppppppuVar43;
  undefined8 ******ppppppuVar44;
  undefined4 *puVar45;
  undefined1 *puVar46;
  longlong lVar47;
  undefined8 **********ppppppppppuVar48;
  undefined1 *puVar49;
  float fVar50;
  ulonglong uVar51;
  undefined1 uVar52;
  bool bVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uStack_330;
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [24];
  float local_308 [2];
  longlong local_300;
  longlong local_2f8 [2];
  float local_2e8 [4];
  undefined8 local_2d8;
  char local_2d0 [4];
  float local_2cc;
  undefined8 local_2c8;
  int iStack_2c0;
  float afStack_2bc [2];
  char local_2b4 [4];
  float local_2b0 [2];
  undefined8 local_2a8;
  undefined8 local_2a0;
  float local_298;
  float local_294;
  undefined8 ********local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong *local_268;
  longlong local_260;
  undefined8 *********local_258;
  uint local_250;
  undefined4 local_24c;
  undefined8 *****local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  ulonglong local_230;
  uint local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined1 local_200 [32];
  undefined1 local_1e0 [40];
  undefined8 *********local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 *****local_180 [3];
  ulonglong local_168;
  char local_158 [96];
  ulonglong local_f8;
  
  puVar46 = auStack_328;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_328;
  local_298 = 0.0;
  afStack_2bc[1] = 0.0;
  local_2cc = 5.60519e-45;
  local_2b0[0] = 0.0;
  pfVar38 = local_2b0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar38 = &DAT_1803fb24c;
  }
  pfVar23 = &local_2cc;
  if ((int)DAT_1803fb24c < 5) {
    pfVar23 = pfVar38;
  }
  DAT_1803fb24c = *pfVar23;
  lVar47 = (longlong)(int)DAT_1803fb24c;
  local_2cc = 1.5;
  local_2b0[0] = 0.75;
  pfVar38 = local_2b0;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar38 = &DAT_1803da6a4;
  }
  pfVar23 = &local_2cc;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar23 = pfVar38;
  }
  fVar60 = *pfVar23;
  local_2b0[0] = fVar60;
  if ((DAT_1805c5a18 & 1) == 0) {
    DAT_1805c5a18 = DAT_1805c5a18 | 1;
    atexit((_func_5014 *)&LAB_18030b390);
  }
  if ((DAT_1805c5a18 & 2) == 0) {
    DAT_1805c5a18 = DAT_1805c5a18 | 2;
    atexit((_func_5014 *)&LAB_18030b380);
  }
  if ((DAT_1805c5a18 & 4) == 0) {
    DAT_1805c5a18 = DAT_1805c5a18 | 4;
    atexit((_func_5014 *)&LAB_18030b370);
  }
  uVar54 = DAT_180381384;
  cVar16 = FUN_18019fbc0("Steam account",0xe,CONCAT44(DAT_180381384,DAT_180381384),0);
  cVar18 = DAT_180409c59;
  cVar17 = DAT_180409c29;
  puVar30 = auStack_328;
  if (cVar16 == '\0') goto LAB_1801d5e60;
  lVar47 = lVar47 * 200;
  local_2cc = DAT_180409c24;
  local_2d0[1] = DAT_180409c59;
  local_2d0[0] = DAT_180409c29;
  local_2b4[1] = (int)DAT_180409c24 - 2U < 2;
  pHVar24 = DAT_1803fea40;
  local_260 = lVar47;
  if (((DAT_1803fea40 == (HMODULE)0x0) &&
      (pHVar24 = GetModuleHandleA("steamclient64.dll"), pHVar24 == (HMODULE)0x0)) ||
     (DAT_1803fea40 = pHVar24, lVar25 = FUN_180131270(), *(char *)(lVar25 + 0x30) == '\0')) {
    FUN_1801d3aa0(&DAT_1803dca08 + lVar47,"steamclient64.dll is not loaded - nothing to talk to.");
    puVar30 = auStack_328;
    goto LAB_1801d5e60;
  }
  local_198 = 0;
  lStack_190 = 0;
  local_188 = 0;
  FUN_1801367d0(&local_198);
  UVar26 = GetTickCount64();
  if (2000 < UVar26 - _DAT_1803fd0b0) {
    _DAT_1803fd0b0 = UVar26;
    DAT_1803f9220 = FUN_1801384e0();
    if ((DAT_180409c29 == '\0') || (lVar25 = DAT_180409c38, DAT_180409c38 == 0)) {
      uVar27 = FUN_1801321e0();
      plVar28 = (longlong *)FUN_1801323e0(uVar27);
      lVar25 = 0;
      if (plVar28 != (longlong *)0x0) {
        lVar25 = *plVar28;
      }
    }
    FUN_180138510(&local_228,lVar25);
    afStack_2bc[1] = 1.79366e-43;
    puVar46 = auStack_328;
    if (0xf < CONCAT44(DAT_1803e9990._4_4_,(undefined4)DAT_1803e9990)) {
      pvVar8 = (void *)CONCAT44(DAT_1803e9978._4_4_,(uint)DAT_1803e9978);
      pvVar36 = pvVar8;
      puVar46 = auStack_328;
      if ((0xfff < CONCAT44(DAT_1803e9990._4_4_,(undefined4)DAT_1803e9990) + 1) &&
         (pvVar36 = *(void **)((longlong)pvVar8 + -8), puVar46 = auStack_328,
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar36)))) {
        pcVar7 = (code *)swi(0x29);
        pvVar36 = (void *)(*pcVar7)(5);
        puVar46 = auStack_320;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d3e7e;
      free(pvVar36);
    }
    DAT_1803e9978._0_4_ = local_228;
    DAT_1803e9978._4_4_ = uStack_224;
    uRam00000001803e9980 = uStack_220;
    uRam00000001803e9984 = uStack_21c;
    DAT_1803e9988._0_4_ = (undefined4)local_218;
    DAT_1803e9988._4_4_ = local_218._4_4_;
    DAT_1803e9990._0_4_ = (undefined4)uStack_210;
    DAT_1803e9990._4_4_ = uStack_210._4_4_;
    local_218 = 0;
    uStack_210 = 0xf;
    local_228 = local_228 & 0xffffff00;
    local_298 = 0.0;
    *(undefined4 *)(puVar46 + 0x70) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d3ebd;
    FUN_18020e450(&local_228);
    *(undefined8 *)(puVar46 + -8) = 0x1801d3ec2;
    DAT_1803e786c = FUN_1801386f0();
    *(undefined8 *)(puVar46 + -8) = 0x1801d3ed1;
    puVar29 = (undefined8 *)FUN_180138370(local_200);
    if (puVar29 != &DAT_1803da538) {
      if (0xf < DAT_1803da550) {
        pvVar8 = (void *)CONCAT44(DAT_1803da538._4_4_,(undefined4)DAT_1803da538);
        pvVar36 = pvVar8;
        if ((0xfff < DAT_1803da550 + 1) &&
           (pvVar36 = *(void **)((longlong)pvVar8 + -8),
           0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar36)))) {
          pvVar36 = (void *)0x5;
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)();
          puVar46 = puVar46 + 8;
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d3f26;
        free(pvVar36);
      }
      DAT_1803da538._0_4_ = *(undefined4 *)puVar29;
      DAT_1803da538._4_4_ = *(undefined4 *)((longlong)puVar29 + 4);
      uRam00000001803da540 = *(undefined4 *)(puVar29 + 1);
      uRam00000001803da544 = *(undefined4 *)((longlong)puVar29 + 0xc);
      DAT_1803da548 = puVar29[2];
      DAT_1803da550 = puVar29[3];
      puVar29[2] = 0;
      puVar29[3] = 0xf;
      *(undefined1 *)puVar29 = 0;
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d3f6c;
    FUN_18020e450(local_200);
  }
  plVar28 = (longlong *)(&DAT_1803dca28 + lVar47);
  *(undefined8 *)(puVar46 + -8) = 0x1801d3f90;
  local_268 = plVar28;
  FUN_1802aabb0(plVar28,"Game is presenting:");
  *(undefined8 *)(puVar46 + -8) = 0x1801d3fa0;
  FUN_18027f5b0(0,uVar54);
  if (cVar17 == '\0') {
    if (CONCAT44(DAT_1803e9988._4_4_,(undefined4)DAT_1803e9988) == 0) {
      pcVar32 = "own account";
    }
    else {
      pcVar32 = (char *)&DAT_1803e9978;
      if (0xf < CONCAT44(DAT_1803e9990._4_4_,(undefined4)DAT_1803e9990)) {
        pcVar32 = (char *)CONCAT44(DAT_1803e9978._4_4_,(uint)DAT_1803e9978);
      }
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d4116;
    FUN_1801d3aa0(&DAT_1803dca18 + lVar47,"%llu (%s)",DAT_1803f9220,pcVar32);
  }
  else {
    *(undefined **)(puVar46 + 0x50) = &DAT_1803e85c0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d3fbe;
    iVar19 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar19 != 0) {
      *(undefined8 *)(puVar46 + -8) = 0x1801d3fcd;
      std::_Throw_Cpp_error(5);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      *(undefined8 *)(puVar46 + -8) = 0x1801d3fee;
      std::_Throw_Cpp_error(6);
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d3fff;
    FUN_18016d4c0(&local_1b8,&DAT_1803eb340);
    *(undefined4 *)(puVar46 + 0x70) = 0x20;
    *(undefined8 *)(puVar46 + -8) = 0x1801d4013;
    _Mtx_unlock(&DAT_1803e85c0);
    if (local_1a8 == 0) {
      ppppppppppuVar42 = (undefined8 **********)"our session";
    }
    else {
      ppppppppppuVar42 = &local_1b8;
      if (0xf < local_1a0) {
        ppppppppppuVar42 = (undefined8 **********)local_1b8;
      }
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d4051;
    FUN_1801d3aa0(&DAT_1803dc9e8 + lVar47,"%llu (%s - switched)",DAT_1803f9220,ppppppppppuVar42);
    if (DAT_180409c50 != 0) {
      puVar30 = &DAT_1803467cc;
      if (CONCAT44(DAT_1803e9988._4_4_,(undefined4)DAT_1803e9988) == 0) {
        puVar30 = &DAT_18033e5ea;
      }
      puVar29 = &DAT_1803e9978;
      if (0xf < CONCAT44(DAT_1803e9990._4_4_,(undefined4)DAT_1803e9990)) {
        puVar29 = (undefined8 *)CONCAT44(DAT_1803e9978._4_4_,(uint)DAT_1803e9978);
      }
      puVar49 = &DAT_18034f9b0;
      if (CONCAT44(DAT_1803e9988._4_4_,(undefined4)DAT_1803e9988) == 0) {
        puVar49 = &DAT_18033e5ea;
      }
      *(undefined1 **)(puVar46 + 0x28) = puVar30;
      *(undefined8 **)(puVar46 + 0x20) = puVar29;
      *(undefined8 *)(puVar46 + -8) = 0x1801d40b7;
      FUN_1801d3aa0(plVar28,"own account: %llu%s%s%s",DAT_180409c50,puVar49);
    }
    local_298 = 0.0;
    *(undefined4 *)(puVar46 + 0x70) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d40ca;
    FUN_18020e450(&local_1b8);
  }
  if (DAT_1803da548 != 0) {
    puVar29 = &DAT_1803da538;
    if (0xf < DAT_1803da550) {
      puVar29 = (undefined8 *)CONCAT44(DAT_1803da538._4_4_,(undefined4)DAT_1803da538);
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d4142;
    FUN_1801d3aa0(plVar28,"Steam client: %s",puVar29);
  }
  if (DAT_1803e786c == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4161;
    FUN_1801d3aa0(&DAT_1803dca08 + lVar47,
                  "Steam signed the game\'s own account out - press Restore, then sign Steam back in."
                 );
  }
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_270 = lVar47;
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d418b;
    __dyn_tls_on_demand_init();
  }
  local_2a0 = 0xec0;
  lVar25 = *(longlong *)(lVar47 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar25 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar25 + 0x1520) + 0xd1) == '\0') {
    local_2a8 = (undefined8 *)0x0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d41cd;
    FUN_18027f400(&local_2a8,uVar54);
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d41d2;
  FUN_1802afb40();
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d41de;
    __dyn_tls_on_demand_init();
  }
  lVar25 = *(longlong *)(lVar47 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar25 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar25 + 0x1520) + 0xd1) == '\0') {
    local_2a8 = (undefined8 *)0x0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d4215;
    FUN_18027f400(&local_2a8,uVar54);
  }
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4221;
    __dyn_tls_on_demand_init();
  }
  lVar25 = *(longlong *)(*(longlong *)(lVar47 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar25 + 0x1c8) != 0) ||
     (pfVar38 = (float *)(lVar25 + 0x280),
     *(longlong *)(*(longlong *)(lVar47 + 0xec0) + 0x2368) != 0)) {
    pfVar38 = (float *)(lVar25 + 0x250);
  }
  fVar59 = *pfVar38;
  fVar61 = *(float *)(lVar25 + 0x118);
  if ((DAT_1805c5a18 & 8) == 0) {
    DAT_1805c5a18 = DAT_1805c5a18 | 8;
    DAT_18042a8d8 = (undefined8 ******)0x0;
    DAT_18042a8e0 = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d4292;
    DAT_18042a8d8 = (undefined8 ******)FUN_1802d8350(0x48);
    *DAT_18042a8d8 = DAT_18042a8d8;
    DAT_18042a8d8[1] = DAT_18042a8d8;
    DAT_18042a8d8[2] = DAT_18042a8d8;
    *(undefined2 *)(DAT_18042a8d8 + 3) = 0x101;
    *(undefined8 *)(puVar46 + -8) = 0x1801d42b6;
    atexit(FUN_18030b360);
  }
  if (cVar18 == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d42cc;
    UVar26 = GetTickCount64();
    if (3000 < UVar26 - _DAT_1803ff0e0) {
      *(undefined8 *)(puVar46 + -8) = 0x1801d42e5;
      _DAT_1803ff0e0 = GetTickCount64();
      ppppppuVar41 = DAT_18042a8d8;
      cVar17 = *(char *)((longlong)DAT_18042a8d8[1] + 0x19);
      _Memory = DAT_18042a8d8[1];
      lVar25 = local_198;
      while (local_198 = lVar25, cVar17 == '\0') {
        ppppuVar4 = _Memory[2];
        *(undefined8 *)(puVar46 + -8) = 0x1801d431f;
        FUN_180218030(&DAT_18042a8d8,&DAT_18042a8d8,ppppuVar4);
        pppppuVar5 = (undefined8 *****)*_Memory;
        *(undefined8 ******)(puVar46 + 0x50) = _Memory + 4;
        *(undefined8 *)(puVar46 + -8) = 0x1801d4333;
        FUN_18020e450();
        *(undefined8 *)(puVar46 + -8) = 0x1801d4340;
        free(_Memory);
        plVar28 = local_268;
        _Memory = pppppuVar5;
        lVar25 = local_198;
        cVar17 = *(char *)((longlong)pppppuVar5 + 0x19);
      }
      ppppppuVar41[1] = ppppppuVar41;
      *ppppppuVar41 = ppppppuVar41;
      ppppppuVar41[2] = ppppppuVar41;
      DAT_18042a8e0 = 0;
      *(longlong *)(puVar46 + 0x50) = lStack_190;
      if (lVar25 != lStack_190) {
        do {
          uVar27 = *(undefined8 *)(lVar25 + 0x20);
          *(undefined8 *)(puVar46 + -8) = 0x1801d4390;
          lVar47 = FUN_180135620(&local_290,lVar25,uVar27);
          uVar52 = *(longlong *)(lVar47 + 0x10) != 0;
          puVar46[0x74] = uVar52;
          *(undefined8 *)(puVar46 + -8) = 0x1801d43a8;
          FUN_18020e450(&local_290);
          ppppppuVar41 = DAT_18042a8d8;
          ppppppppppuVar42 = (undefined8 **********)DAT_18042a8d8[1];
          ppppppppppuVar31 = (undefined8 **********)DAT_18042a8d8;
          ppppppppppuVar48 = ppppppppppuVar42;
          if (*(char *)((longlong)ppppppppppuVar42 + 0x19) == '\0') {
            do {
              ppppppppppuVar42 = ppppppppppuVar48;
              *(undefined8 *)(puVar46 + -8) = 0x1801d43df;
              cVar17 = FUN_180201cf0(ppppppppppuVar42 + 4,lVar25);
              if (-1 < cVar17) {
                ppppppppppuVar48 = (undefined8 **********)*ppppppppppuVar42;
                ppppppppppuVar31 = ppppppppppuVar42;
              }
              else {
                ppppppppppuVar48 = (undefined8 **********)ppppppppppuVar42[2];
              }
              uVar21 = (uint)(-1 < cVar17);
            } while (*(char *)((longlong)ppppppppppuVar48 + 0x19) == '\0');
            uVar52 = puVar46[0x74];
          }
          else {
            uVar21 = 0;
          }
          if (*(char *)((longlong)ppppppppppuVar31 + 0x19) == '\0') {
            *(undefined8 *)(puVar46 + -8) = 0x1801d441b;
            cVar17 = FUN_180201cf0(lVar25,ppppppppppuVar31 + 4);
            if (cVar17 < '\0') goto LAB_1801d4423;
          }
          else {
LAB_1801d4423:
            if (DAT_18042a8e0 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar46 + -8) = &UNK_1801d5ee0;
              FUN_180013b80();
            }
            *(undefined8 ********)(puVar46 + 0x60) = &DAT_18042a8d8;
            *(undefined8 *)(puVar46 + 0x68) = 0;
            *(undefined8 *)(puVar46 + 0x68) = 0;
            *(undefined8 *)(puVar46 + -8) = 0x1801d4462;
            puVar29 = (undefined8 *)FUN_1802d8350(0x48);
            *(undefined8 **)(puVar46 + 0x68) = puVar29;
            local_2a8 = puVar29 + 4;
            *(undefined8 *)(puVar46 + -8) = 0x1801d447d;
            FUN_18016d4c0(local_2a8,lVar25);
            *(undefined1 *)(puVar29 + 8) = 0;
            *puVar29 = ppppppuVar41;
            puVar29[1] = ppppppuVar41;
            puVar29[2] = ppppppuVar41;
            *(undefined2 *)(puVar29 + 3) = 0;
            *(undefined8 *)(puVar46 + 0x68) = 0;
            local_24c = uStack_1b0._4_4_;
            *(undefined8 *)(puVar46 + -8) = 0x1801d44bd;
            local_258 = ppppppppppuVar42;
            local_250 = uVar21;
            ppppppppppuVar31 =
                 (undefined8 **********)FUN_18022bb90(&DAT_18042a8d8,&local_258,puVar29);
          }
          *(undefined1 *)(ppppppppppuVar31 + 8) = uVar52;
          lVar25 = lVar25 + 0x48;
          plVar28 = local_268;
          lVar47 = local_270;
        } while (lVar25 != *(longlong *)(puVar46 + 0x50));
      }
    }
  }
  fVar58 = DAT_180380fd8;
  fVar57 = DAT_180380ac0;
  iVar19 = 0;
  fVar61 = ((fVar59 - fVar61) - fVar60 * DAT_180380fd8) * DAT_180380ac0;
  *(undefined8 *)(puVar46 + -8) = 0x1801d4511;
  FUN_18027fc30();
  *(undefined8 *)(puVar46 + -8) = 0x1801d4520;
  FUN_1802aabb0(plVar28,"Saved accounts");
  fVar59 = DAT_18038116c;
  local_2a8 = (undefined8 *)CONCAT44(fVar60 * DAT_18038116c,fVar61);
  *(undefined8 *)(puVar46 + -8) = 0x1801d4551;
  FUN_180272fa0("##as_list",&local_2a8,1,0);
  if (local_198 == lStack_190) {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4573;
    FUN_1802aabb0(plVar28,"None yet - sign in once with");
    *(undefined8 *)(puVar46 + -8) = 0x1801d4582;
    FUN_1802aabb0(plVar28,"Remember on and it lands here.");
  }
  fVar12 = DAT_180380f40;
  fVar11 = DAT_180380d30;
  fVar50 = local_298;
  if (0 < (int)(lStack_190 - local_198 >> 3) * 0x38e38e39) {
    fVar59 = fVar60 * DAT_180381070;
    fVar60 = fVar60 * _DAT_180381114;
    do {
      ppcVar40 = (char **)(local_198 + (longlong)iVar19 * 0x48);
      if (*(int *)(puVar46 + 0x5c) == 4) {
        *(undefined8 *)(puVar46 + -8) = 0x1801d45fb;
        pcVar32 = (char *)FUN_1801357d0(&local_290);
        fVar50 = (float)((uint)fVar50 | 1);
        *(float *)(puVar46 + 0x70) = fVar50;
        if (0xf < *(ulonglong *)(pcVar32 + 0x18)) {
          pcVar32 = *(char **)pcVar32;
        }
        ppcVar34 = ppcVar40;
        if ((char *)0xf < ppcVar40[3]) {
          ppcVar34 = (char **)*ppcVar40;
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d4628;
        iVar20 = _stricmp((char *)ppcVar34,pcVar32);
        if (iVar20 != 0) goto LAB_1801d4635;
        bVar9 = true;
      }
      else {
LAB_1801d4635:
        bVar9 = false;
      }
      ppcVar34 = ppcVar40 + 3;
      if (((uint)fVar50 & 1) != 0) {
        fVar50 = (float)((uint)fVar50 & 0xfffffffe);
        *(float *)(puVar46 + 0x70) = fVar50;
        *(undefined8 *)(puVar46 + -8) = 0x1801d4650;
        FUN_18020e450(&local_290);
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4658;
      FUN_18027ae00(iVar19);
      local_2a8 = (undefined8 *)((ulonglong)(uint)fVar59 << 0x20);
      ppcVar39 = ppcVar40;
      if ((char *)0xf < *ppcVar34) {
        ppcVar39 = (char **)*ppcVar40;
      }
      _Buf1 = &DAT_1803e9718;
      if (0xf < DAT_1803e9730) {
        _Buf1 = (char **)DAT_1803e9718;
      }
      if ((char *)DAT_1803e9728 == ppcVar40[2]) {
        if (DAT_1803e9728 == 0) {
          bVar53 = true;
        }
        else {
          *(undefined8 *)(puVar46 + -8) = 0x1801d46aa;
          iVar20 = memcmp(_Buf1,ppcVar39,DAT_1803e9728);
          bVar53 = iVar20 == 0;
        }
      }
      else {
        bVar53 = false;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d46c5;
      cVar17 = FUN_1802c1850("##as_row",bVar53,0x10,&local_2a8);
      if (cVar17 != '\0') {
        if (ppcVar40 != &DAT_1803e9718) {
          ppcVar39 = ppcVar40;
          if ((char *)0xf < *ppcVar34) {
            ppcVar39 = (char **)*ppcVar40;
          }
          pcVar32 = ppcVar40[2];
          *(undefined8 *)(puVar46 + -8) = 0x1801d46e6;
          FUN_180212700(&DAT_1803e9718,ppcVar39,pcVar32);
        }
        ppcVar39 = ppcVar40;
        if ((char *)0xf < *ppcVar34) {
          ppcVar39 = (char **)*ppcVar40;
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d470b;
        strncpy_s(&DAT_1803fecf0,0x40,(char *)ppcVar39,0xffffffffffffffff);
        ppcVar39 = ppcVar40 + 5;
        if ((char *)0xf < ppcVar40[8]) {
          ppcVar39 = (char **)*ppcVar39;
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d4732;
        strncpy_s(&DAT_180423b20,0x30,(char *)ppcVar39,0xffffffffffffffff);
      }
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4745;
        __dyn_tls_on_demand_init();
      }
      fVar57 = *(float *)(*(longlong *)(local_2a0 + lVar47) + 0x1f04);
      fVar58 = *(float *)(*(longlong *)(local_2a0 + lVar47) + 0x1f08);
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4769;
        __dyn_tls_on_demand_init();
      }
      lVar25 = *(longlong *)(local_2a0 + lVar47);
      *(undefined1 *)(*(longlong *)(lVar25 + 0x1520) + 0xce) = 1;
      lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x1520) + 0x2c8);
      ppcVar39 = ppcVar40;
      if ((char *)0xf < *ppcVar34) {
        ppcVar39 = (char **)*ppcVar40;
      }
      if (bVar9) {
        puVar33 = &DAT_1803dc9e8;
      }
      else {
        puVar33 = &DAT_1803dca18;
      }
      local_1b8 = *(undefined8 **********)(puVar33 + local_260);
      uStack_1b0 = *(undefined8 *)((longlong)(puVar33 + local_260) + 8);
      *(undefined8 *)(puVar46 + -8) = 0x1801d47c7;
      uVar21 = FUN_180268ed0(&local_1b8);
      local_298 = fVar57 + fVar12;
      local_294 = fVar58 + fVar11;
      if ((((uVar21 & 0xff000000) != 0) && (ppcVar39 != (char **)0x0)) &&
         (*(char *)ppcVar39 != '\0')) {
        uVar22 = *(undefined4 *)(*(longlong *)(lVar25 + 0x38) + 0x20);
        uVar27 = *(undefined8 *)(*(longlong *)(lVar25 + 0x38) + 0x18);
        local_1b8 = *(undefined8 **********)(lVar25 + 0x60);
        uStack_1b0 = *(undefined8 *)(lVar25 + 0x68);
        *(undefined4 *)(puVar46 + 0x48) = 0;
        *(undefined4 *)(puVar46 + 0x40) = 0;
        *(undefined8 *)(puVar46 + 0x38) = 0;
        *(char ***)(puVar46 + 0x30) = ppcVar39;
        *(undefined8 ***********)(puVar46 + 0x28) = &local_1b8;
        *(uint *)(puVar46 + 0x20) = uVar21;
        *(undefined8 *)(puVar46 + -8) = 0x1801d4845;
        FUN_18029e990(uVar27,lVar25,uVar22,&local_298);
      }
      if (ppcVar40[7] == (char *)0x0) {
        *(char **)(puVar46 + 0x20) = ppcVar40[4];
        *(undefined8 *)(puVar46 + -8) = 0x1801d4874;
        FUN_180012b20(local_158,0x60,0xffffffffffffffff,&DAT_18033f580);
      }
      else {
        ppcVar34 = ppcVar40 + 5;
        if ((char *)0xf < ppcVar40[8]) {
          ppcVar34 = (char **)*ppcVar34;
        }
        *(char ***)(puVar46 + 0x28) = ppcVar34;
        *(char **)(puVar46 + 0x20) = ppcVar40[4];
        *(undefined8 *)(puVar46 + -8) = 0x1801d48b1;
        FUN_180012b20(local_158,0x60,0xffffffffffffffff,"%llu  -  %s");
      }
      local_1b8 = (undefined8 *********)*local_268;
      uStack_1b0 = local_268[1];
      *(undefined8 *)(puVar46 + -8) = 0x1801d48c5;
      uVar21 = FUN_180268ed0(&local_1b8);
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d48d8;
        __dyn_tls_on_demand_init();
      }
      local_270 = CONCAT44(fVar58 + fVar11 + *(float *)(*(longlong *)(local_2a0 + lVar47) + 0x1238),
                           fVar57 + fVar12);
      if (((uVar21 & 0xff000000) != 0) && (local_158[0] != '\0')) {
        uVar22 = *(undefined4 *)(*(longlong *)(lVar25 + 0x38) + 0x20);
        uVar27 = *(undefined8 *)(*(longlong *)(lVar25 + 0x38) + 0x18);
        local_1b8 = *(undefined8 **********)(lVar25 + 0x60);
        uStack_1b0 = *(longlong *)(lVar25 + 0x68);
        *(undefined4 *)(puVar46 + 0x48) = 0;
        *(undefined4 *)(puVar46 + 0x40) = 0;
        *(undefined8 *)(puVar46 + 0x38) = 0;
        *(char **)(puVar46 + 0x30) = local_158;
        *(undefined8 ***********)(puVar46 + 0x28) = &local_1b8;
        *(uint *)(puVar46 + 0x20) = uVar21;
        *(undefined8 *)(puVar46 + -8) = 0x1801d4963;
        FUN_18029e990(uVar27,lVar25,uVar22,&local_270);
      }
      ppppppuVar15 = DAT_18042a8d8;
      cVar17 = *(char *)((longlong)DAT_18042a8d8[1] + 0x19);
      ppppppuVar41 = (undefined8 ******)DAT_18042a8d8[1];
      ppppppuVar44 = DAT_18042a8d8;
      while (ppppppuVar43 = ppppppuVar41, cVar17 == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d498c;
        cVar17 = FUN_180201cf0(ppppppuVar43 + 4,ppcVar40);
        if (cVar17 < '\0') {
          ppppppuVar41 = (undefined8 ******)ppppppuVar43[2];
          ppppppuVar43 = ppppppuVar44;
        }
        else {
          ppppppuVar41 = (undefined8 ******)*ppppppuVar43;
        }
        cVar17 = *(char *)((longlong)ppppppuVar41 + 0x19);
        ppppppuVar44 = ppppppuVar43;
      }
      if (*(char *)((longlong)ppppppuVar44 + 0x19) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d49b4;
        cVar17 = FUN_180201cf0(ppcVar40,ppppppuVar44 + 4);
        if (cVar17 < '\0') goto LAB_1801d49b8;
      }
      else {
LAB_1801d49b8:
        ppppppuVar44 = ppppppuVar15;
      }
      if ((ppppppuVar44 == ppppppuVar15) || (*(char *)(ppppppuVar44 + 8) == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d49df;
        __dyn_tls_on_demand_init();
      }
      lVar25 = local_2a0;
      fVar57 = *(float *)(*(longlong *)(*(longlong *)(local_2a0 + lVar47) + 0x1520) + 0x28);
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d49ff;
        __dyn_tls_on_demand_init();
      }
      fVar58 = *(float *)(*(longlong *)(*(longlong *)(lVar25 + lVar47) + 0x1520) + 0x118);
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4a1e;
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar25 + lVar47) + 0x1520);
      if ((*(longlong *)(lVar6 + 0x1c8) != 0) ||
         (pfVar38 = (float *)(lVar6 + 0x280),
         *(longlong *)(*(longlong *)(lVar25 + lVar47) + 0x2368) != 0)) {
        pfVar38 = (float *)(lVar6 + 0x250);
      }
      fVar2 = *pfVar38;
      fVar3 = *(float *)(lVar6 + 0x118);
      *(undefined8 *)(puVar46 + -8) = 0x1801d4a6d;
      FUN_18027f5b0((((fVar2 - fVar3) + fVar58) - fVar57) - fVar60,uVar54);
      if ((puVar46[0x59] == '\0') && (bVar9)) {
        uVar27 = 0;
      }
      else {
        uVar27 = 1;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4a83;
      FUN_180279170(uVar27);
      pcVar32 = "no token";
      if (bVar9) {
        pcVar32 = "Switch";
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4a9c;
      cVar17 = FUN_1802ac330(pcVar32);
      uVar52 = DAT_1803e7860;
      if (cVar17 != '\0') {
        local_258 = &local_1b8;
        uStack_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0xf;
        local_1b8 = (undefined8 **********)0x0;
        *(undefined1 **)(puVar46 + 0x60) = local_1e0;
        *(undefined8 *)(puVar46 + -8) = 0x1801d4ae5;
        uVar27 = FUN_18016d4c0(local_1e0,ppcVar40);
        *(undefined8 *)(puVar46 + -8) = 0x1801d4af6;
        FUN_18013d830(uVar27,uVar52,&local_1b8);
        lVar25 = local_2a0;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4aff;
      FUN_180279200();
      *(undefined8 *)(puVar46 + -8) = 0x1801d4b06;
      cVar17 = FUN_18026ee60(0);
      if (cVar17 != '\0') {
        pcVar32 = "No saved token found in local.vdf for this account.\n";
        if (bVar9) {
          pcVar32 = "Sign in with the refresh token Steam saved for this account";
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d4b23;
        FUN_180280d00(pcVar32);
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4b30;
      FUN_18027f5b0(0,uVar54);
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4b3c;
        __dyn_tls_on_demand_init();
      }
      lVar25 = *(longlong *)(lVar25 + lVar47);
      uVar22 = *(undefined4 *)(lVar25 + 0xcc8);
      *(undefined4 *)(lVar25 + 0xcc8) = 0;
      *(undefined8 *)(puVar46 + 0x50) = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d4b6c;
      cVar17 = FUN_1802abf60(&DAT_18034ede4,puVar46 + 0x50,0x8000);
      *(undefined4 *)(lVar25 + 0xcc8) = uVar22;
      if (cVar17 != '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4b80;
        FUN_180136ab0(ppcVar40);
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4b87;
      cVar17 = FUN_18026ee60(0);
      if (cVar17 != '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4b97;
        FUN_180280d00("Drop from this list (the Steam login cache is untouched).");
      }
      if (*(char *)(lVar47 + 0x10) == '\0') {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4ba2;
        __dyn_tls_on_demand_init();
      }
      lVar25 = *(longlong *)(*(longlong *)(local_2a0 + lVar47) + 0x1520);
      iVar20 = *(int *)(lVar25 + 0x108);
      if (iVar20 < 2) {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4bc8;
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar25 + 0x108) = iVar20 + -1;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)(lStack_190 - local_198 >> 3) * 0x38e38e39);
    fVar60 = *(float *)(puVar46 + 0x78);
    fVar57 = DAT_180380ac0;
    fVar59 = DAT_18038116c;
    fVar58 = DAT_180380fd8;
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d4c2c;
  FUN_180273410();
  if (DAT_1803e9728 != 0) {
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d4c5d;
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)(lVar47 + 0xec0);
    puVar1 = (uint *)(lVar47 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar47 + 0x1ed8) = fVar61 - fVar60 * DAT_1803810cc;
    *(undefined8 *)(puVar46 + 0x50) = 0;
    *(undefined8 *)(puVar46 + 0x38) = 0;
    *(undefined8 *)(puVar46 + 0x30) = 0;
    *(undefined4 *)(puVar46 + 0x28) = 0;
    *(undefined1 **)(puVar46 + 0x20) = puVar46 + 0x50;
    *(undefined8 *)(puVar46 + -8) = 0x1801d4cca;
    FUN_1802b74e0("##as_label","label (main, alt, ...)",&DAT_180423b20,0x30);
    *(undefined8 *)(puVar46 + -8) = 0x1801d4cdc;
    FUN_18027f5b0(0,fVar60 * fVar12);
    *(float *)(puVar46 + 0x50) = fVar60 * DAT_1803810a8;
    *(undefined4 *)(puVar46 + 0x54) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d4d0a;
    cVar17 = FUN_1802abf60(&DAT_180371c5c,puVar46 + 0x50,0);
    if (cVar17 != '\0') {
      local_248 = (undefined8 ******)0x0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d4d2d;
      sVar35 = strlen(&DAT_180423b20);
      *(undefined8 *)(puVar46 + -8) = 0x1801d4d40;
      FUN_18001d080(&local_248,&DAT_180423b20,sVar35);
      local_208 = &DAT_1803e86b0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d4d55;
      iVar19 = _Mtx_lock(&DAT_1803e86b0);
      if (iVar19 != 0) {
        *(undefined8 *)(puVar46 + -8) = 0x1801d4d64;
        std::_Throw_Cpp_error(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar32 = DAT_1803eb7b8;
      pcVar10 = DAT_1803eb7c0;
      if (DAT_1803e86fc == 0x7fffffff) {
        DAT_1803e86fc = 0x7ffffffe;
        *(undefined8 *)(puVar46 + -8) = 0x1801d4d85;
        std::_Throw_Cpp_error(6);
        pcVar32 = DAT_1803eb7b8;
        pcVar10 = DAT_1803eb7c0;
      }
      for (; pcVar14 = DAT_1803eb7c0, pcVar32 != DAT_1803eb7c0; pcVar32 = pcVar32 + 0x48) {
        ppcVar40 = &DAT_1803e9718;
        if (0xf < DAT_1803e9730) {
          ppcVar40 = (char **)DAT_1803e9718;
        }
        _Str1 = pcVar32;
        if (0xf < *(ulonglong *)(pcVar32 + 0x18)) {
          _Str1 = *(char **)pcVar32;
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d4dc8;
        DAT_1803eb7c0 = pcVar10;
        iVar19 = _stricmp(_Str1,(char *)ppcVar40);
        if ((iVar19 == 0) && ((undefined8 ******)(pcVar32 + 0x28) != &local_248)) {
          ppppppuVar41 = &local_248;
          if (0xf < local_230) {
            ppppppuVar41 = (undefined8 ******)local_248;
          }
          *(undefined8 *)(puVar46 + -8) = 0x1801d4df0;
          FUN_180212700(pcVar32 + 0x28,ppppppuVar41,local_238);
        }
        pcVar10 = DAT_1803eb7c0;
        DAT_1803eb7c0 = pcVar14;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d4e02;
      DAT_1803eb7c0 = pcVar10;
      _Mtx_unlock(&DAT_1803e86b0);
      *(undefined8 *)(puVar46 + -8) = 0x1801d4e07;
      FUN_1801365b0();
      *(undefined8 *)(puVar46 + -8) = 0x1801d4e11;
      FUN_18020e450(&local_248);
    }
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d4e16;
  FUN_18027fda0();
  *(undefined8 *)(puVar46 + -8) = 0x1801d4e28;
  FUN_18027f5b0(0,fVar60 * fVar58);
  *(undefined8 *)(puVar46 + -8) = 0x1801d4e2d;
  FUN_18027fc30();
  cVar17 = puVar46[0x59];
  *(undefined8 *)(puVar46 + -8) = 0x1801d4e3b;
  FUN_180279170(cVar17);
  lVar25 = local_260;
  *(undefined8 *)(puVar46 + -8) = 0x1801d4e5c;
  FUN_1802aabb0(&DAT_1803dca28 + local_260,"Sign in");
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4e7f;
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar47 + 0xec0);
  puVar1 = (uint *)(lVar6 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar6 + 0x1ed8) = fVar61;
  *(undefined8 *)(puVar46 + 0x50) = 0;
  *(undefined8 *)(puVar46 + 0x38) = 0;
  *(undefined8 *)(puVar46 + 0x30) = 0;
  *(undefined4 *)(puVar46 + 0x28) = 0;
  *(undefined1 **)(puVar46 + 0x20) = puVar46 + 0x50;
  *(undefined8 *)(puVar46 + -8) = 0x1801d4edb;
  FUN_1802b74e0("##as_user","Steam username",&DAT_1803fecf0,0x40);
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4ee6;
    __dyn_tls_on_demand_init();
  }
  lVar47 = *(longlong *)(lVar47 + 0xec0);
  puVar1 = (uint *)(lVar47 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar47 + 0x1ed8) = fVar61;
  *(undefined8 *)(puVar46 + 0x50) = 0;
  *(undefined8 *)(puVar46 + 0x38) = 0;
  *(undefined8 *)(puVar46 + 0x30) = 0;
  *(undefined4 *)(puVar46 + 0x28) = 0x400;
  *(undefined1 **)(puVar46 + 0x20) = puVar46 + 0x50;
  *(undefined8 *)(puVar46 + -8) = 0x1801d4f46;
  FUN_1802b74e0("##as_pass","Password",&DAT_1803ffba0,0x80);
  *(undefined8 *)(puVar46 + -8) = 0x1801d4f59;
  FUN_1801a0b60("Remember",&DAT_1803e7360);
  *(undefined8 *)(puVar46 + -8) = 0x1801d4f60;
  cVar18 = FUN_18026ee60(0);
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4f70;
    FUN_180280d00(
                 "Lets Steam keep a login token for this account -\nthat token is what makes the one-click Switch work later."
                 );
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d4f85;
  FUN_18027f5b0(0,fVar60 * DAT_180380fe0);
  *(undefined8 *)(puVar46 + -8) = 0x1801d4f98;
  FUN_1801a0b60("Auto deploy",&DAT_1803e7860);
  *(undefined8 *)(puVar46 + -8) = 0x1801d4f9f;
  cVar18 = FUN_18026ee60(0);
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d4faf;
    FUN_180280d00("Point the game at the account as soon as it is signed in.");
  }
  fVar61 = fVar61 * fVar57 - fVar60 * DAT_180380e9c;
  *(float *)(puVar46 + 0x50) = fVar61;
  *(undefined4 *)(puVar46 + 0x54) = 0x42280000;
  local_1b8 = *(undefined8 **********)(&DAT_1803dc9c8 + lVar25);
  uStack_1b0 = *(longlong *)(&DAT_1803dc9d0 + lVar25);
  puVar46[0x28] = 1;
  puVar46[0x20] = 1;
  *(undefined8 *)(puVar46 + -8) = 0x1801d5002;
  cVar18 = FUN_18019cb40("Login",0xe,puVar46 + 0x50,&local_1b8);
  uVar13 = DAT_1803e7860;
  uVar52 = DAT_1803e7360;
  if (cVar18 != '\0') {
    *(undefined8 ***********)(puVar46 + 0x60) = &local_1b8;
    local_1b8 = (undefined8 *********)0x0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5042;
    sVar35 = strlen(&DAT_1803ffba0);
    *(undefined8 *)(puVar46 + -8) = 0x1801d5055;
    FUN_18001d080(&local_1b8,&DAT_1803ffba0,sVar35);
    local_258 = &local_290;
    local_290 = (undefined8 *********)0x0;
    uStack_288 = 0;
    local_280 = 0;
    local_278 = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5079;
    sVar35 = strlen(&DAT_1803fecf0);
    *(undefined8 *)(puVar46 + -8) = 0x1801d508c;
    FUN_18001d080(&local_290,&DAT_1803fecf0,sVar35);
    *(undefined8 *)(puVar46 + -8) = 0x1801d50a2;
    FUN_18013cfb0(&local_290,&local_1b8,uVar52,uVar13);
    puVar30 = &DAT_1803ffba0;
    for (lVar47 = 0x80; lVar47 != 0; lVar47 = lVar47 + -1) {
      *puVar30 = 0;
      puVar30 = puVar30 + 1;
    }
    cVar17 = puVar46[0x59];
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d50be;
  FUN_180279200();
  fVar57 = DAT_180380fa8;
  *(undefined8 *)(puVar46 + -8) = 0x1801d50d9;
  FUN_18027f5b0(0,fVar60 * DAT_180380fa8);
  *(float *)(puVar46 + 0x50) = fVar61;
  *(undefined4 *)(puVar46 + 0x54) = 0x42280000;
  local_1b8 = *(undefined8 **********)(&DAT_1803dca08 + lVar25);
  uStack_1b0 = *(longlong *)(&DAT_1803dca10 + lVar25);
  pcVar32 = "Log off";
  if (cVar17 != '\0') {
    pcVar32 = "Cancel";
  }
  puVar46[0x28] = 1;
  puVar46[0x20] = 0;
  *(undefined8 *)(puVar46 + -8) = 0x1801d5127;
  cVar18 = FUN_18019cb40(pcVar32,9,puVar46 + 0x50,&local_1b8);
  if (cVar18 == '\0') {
LAB_1801d53a1:
    if (cVar17 != '\0') goto LAB_1801d51f8;
LAB_1801d53aa:
    cVar18 = puVar46[0x58];
    iVar19 = *(int *)(puVar46 + 0x5c);
    if ((cVar18 == '\0') && (iVar19 != 4)) goto LAB_1801d5202;
    uVar27 = 0;
  }
  else {
    if (cVar17 == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5243;
      cVar18 = FUN_18013cf00();
      if (cVar18 != '\0') {
        local_1b8 = (undefined8 **********)0x0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        *(undefined8 *)(puVar46 + -8) = 0x1801d5276;
        FUN_18001d080(&local_1b8,"logging off...",0xe);
        *(undefined **)(puVar46 + 0x60) = &DAT_1803e85c0;
        *(undefined8 *)(puVar46 + -8) = 0x1801d528c;
        iVar19 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar19 != 0) {
          *(undefined8 *)(puVar46 + -8) = 0x1801d529b;
          std::_Throw_Cpp_error(5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          *(undefined8 *)(puVar46 + -8) = 0x1801d52bc;
          std::_Throw_Cpp_error(6);
        }
        ppppppppppuVar42 = &local_1b8;
        if (0xf < local_1a0) {
          ppppppppppuVar42 = (undefined8 **********)local_1b8;
        }
        *(undefined8 *)(puVar46 + -8) = 0x1801d52e1;
        FUN_180212700(&DAT_1803e9e20,ppppppppppuVar42,local_1a8);
        *(undefined8 *)(puVar46 + -8) = 0x1801d52eb;
        _Mtx_unlock(&DAT_1803e85c0);
        *(undefined8 *)(puVar46 + -8) = 0x1801d52f5;
        FUN_18020e450(&local_1b8);
        *(undefined8 *)(puVar46 + 0x50) = 0;
        *(undefined8 *)(puVar46 + -8) = 0x1801d5302;
        pvVar36 = (void *)FUN_1802d8350(1);
        *(void **)(puVar46 + 0x50) = pvVar36;
        *(uint *)(puVar46 + 0x70) = (uint)fVar50 | 8;
        *(undefined1 **)(puVar46 + 0x28) = puVar46 + 0x68;
        *(undefined4 *)(puVar46 + 0x20) = 0;
        *(undefined8 *)(puVar46 + -8) = 0x1801d5332;
        uVar37 = _beginthreadex((void *)0x0,0,FUN_180221100,pvVar36,*(uint *)(puVar46 + 0x20),
                                *(uint **)(puVar46 + 0x28));
        *(uintptr_t *)(puVar46 + 0x60) = uVar37;
        if (uVar37 == 0) {
          *(undefined4 *)(puVar46 + 0x68) = 0;
          *(undefined8 *)(puVar46 + -8) = 0x1801d53a0;
          std::_Throw_Cpp_error(6);
          goto LAB_1801d53a1;
        }
        *(undefined8 *)(puVar46 + 0x50) = 0;
        *(uint *)(puVar46 + 0x70) = (uint)fVar50 & 0xfffffff7;
        if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar46 + -8) = 0x1801d5359;
          terminate();
        }
        _DAT_18056de90 = *(undefined8 *)(puVar46 + 0x60);
        DAT_18056de98 = *(int *)(puVar46 + 0x68);
        _DAT_18056de9c = *(undefined4 *)(puVar46 + 0x6c);
        *(undefined8 *)(puVar46 + 0x60) = 0;
        *(undefined8 *)(puVar46 + 0x68) = 0;
        if (*(int *)(puVar46 + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar46 + -8) = 0x1801d5390;
          terminate();
        }
      }
      goto LAB_1801d53aa;
    }
    if (DAT_180409c59 != '\0') {
      LOCK();
      DAT_180409c58 = 1;
      UNLOCK();
      local_1b8 = (undefined8 **********)0x0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d5179;
      FUN_18001d080(&local_1b8,"cancelling...",0xd);
      *(undefined **)(puVar46 + 0x60) = &DAT_1803e85c0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d518f;
      iVar19 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar19 != 0) {
        *(undefined8 *)(puVar46 + -8) = 0x1801d519e;
        std::_Throw_Cpp_error(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        *(undefined8 *)(puVar46 + -8) = 0x1801d51bf;
        std::_Throw_Cpp_error(6);
      }
      ppppppppppuVar42 = &local_1b8;
      if (0xf < local_1a0) {
        ppppppppppuVar42 = (undefined8 **********)local_1b8;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d51e4;
      FUN_180212700(&DAT_1803e9e20,ppppppppppuVar42,local_1a8);
      *(undefined8 *)(puVar46 + -8) = 0x1801d51ee;
      _Mtx_unlock(&DAT_1803e85c0);
      *(undefined8 *)(puVar46 + -8) = 0x1801d51f8;
      FUN_18020e450(&local_1b8);
    }
LAB_1801d51f8:
    iVar19 = *(int *)(puVar46 + 0x5c);
    cVar18 = puVar46[0x58];
LAB_1801d5202:
    uVar27 = 1;
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5209;
  FUN_180279170(uVar27);
  pcVar32 = "Deploy to game";
  if (cVar18 != '\0') {
    pcVar32 = "Restore game account";
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5223;
  cVar16 = FUN_1802ac330(pcVar32);
  if (cVar16 != '\0') {
    if (cVar18 == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d53cf;
      FUN_180137a90();
    }
    else {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5239;
      FUN_180138480();
    }
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d53d4;
  FUN_180279200();
  *(undefined8 *)(puVar46 + -8) = 0x1801d53db;
  cVar16 = FUN_18026ee60(0);
  if (cVar16 != '\0') {
    pcVar32 = 
    "Point the game at the account signed in above.\n\"Auto deploy\" already does this after a login or a switch."
    ;
    if (cVar18 != '\0') {
      pcVar32 = "Hand the game its own Steam account back, without signing anything out.";
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d53f9;
    FUN_180280d00(pcVar32);
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5406;
  FUN_18027f5b0(0,uVar54);
  uVar51 = (ulonglong)_tls_index;
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d542a;
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar47 + 0xec0);
  uVar22 = *(undefined4 *)(lVar6 + 0xcc8);
  *(undefined4 *)(lVar6 + 0xcc8) = 0;
  *(undefined8 *)(puVar46 + 0x50) = 0;
  *(undefined8 *)(puVar46 + -8) = 0x1801d5465;
  cVar18 = FUN_1802abf60("Import from Steam",puVar46 + 0x50,0x8000);
  *(undefined4 *)(lVar6 + 0xcc8) = uVar22;
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5476;
    FUN_180139c90();
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d547d;
  cVar18 = FUN_18026ee60(0);
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d548d;
    FUN_180280d00(
                 "Reads the accounts Steam already remembers (loginusers.vdf)\ninto the list, and picks up a token for every one Steam still\nhas cached - those switch with no password at all.\nNever reads or stores a password."
                 );
  }
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d549d;
    __dyn_tls_on_demand_init();
  }
  lVar47 = *(longlong *)(lVar47 + 0xec0);
  uVar22 = *(undefined4 *)(lVar47 + 0xcc8);
  *(undefined4 *)(lVar47 + 0xcc8) = 0;
  *(undefined8 *)(puVar46 + 0x50) = 0;
  *(undefined8 *)(puVar46 + -8) = 0x1801d54d2;
  cVar18 = FUN_1802abf60("Sign in with a token",puVar46 + 0x50,0x8000);
  *(undefined4 *)(lVar47 + 0xcc8) = uVar22;
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d54ea;
    FUN_180280fd0("##as_token_popup");
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d54f1;
  cVar18 = FUN_18026ee60(0);
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5501;
    FUN_180280d00(
                 "Signs in with a Steam refresh token instead of a password.\nThe username field above has to be filled in too - a token\ncarries no name, and Steam wants both."
                 );
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d550e;
  FUN_18027f5b0(0,uVar54);
  if ((cVar17 == '\0') && (iVar19 == 4)) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5524;
  FUN_180279170(uVar27);
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5540;
    __dyn_tls_on_demand_init();
  }
  lVar47 = *(longlong *)(lVar47 + 0xec0);
  uVar22 = *(undefined4 *)(lVar47 + 0xcc8);
  *(undefined4 *)(lVar47 + 0xcc8) = 0;
  *(undefined8 *)(puVar46 + 0x50) = 0;
  *(undefined8 *)(puVar46 + -8) = 0x1801d5573;
  cVar18 = FUN_1802abf60("Repair join",puVar46 + 0x50,0x8000);
  *(undefined4 *)(lVar47 + 0xcc8) = uVar22;
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5584;
    FUN_180139010();
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5589;
  FUN_180279200();
  *(undefined8 *)(puVar46 + -8) = 0x1801d5590;
  cVar18 = FUN_18026ee60(0);
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d55a0;
    FUN_180280d00(
                 "Press after a server refused the join with\n\"Steam validation rejected\".\nChecks that Steam has given the account a connect token back,\nthen drops the stale auth ticket the engine cached for that\nserver so the next connect asks for a fresh one.\nIf it says the pool is still empty, wait a few seconds and\npress again."
                 );
  }
  if ((cVar17 == '\0') && (iVar19 == 4)) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d55b6;
  FUN_180279170(uVar27);
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d55d3;
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar47 + 0xec0);
  uVar22 = *(undefined4 *)(lVar6 + 0xcc8);
  *(undefined4 *)(lVar6 + 0xcc8) = 0;
  *(undefined8 *)(puVar46 + 0x50) = 0;
  *(undefined8 *)(puVar46 + -8) = 0x1801d560e;
  cVar18 = FUN_1802abf60("Diagnose",puVar46 + 0x50,0x8000);
  *(undefined4 *)(lVar6 + 0xcc8) = uVar22;
  if (cVar18 != '\0') {
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d562a;
      __dyn_tls_on_demand_init();
    }
    uVar52 = *(undefined1 *)(*(longlong *)(lVar47 + 0xec0) + 0x11c);
    *(undefined8 *)(puVar46 + -8) = 0x1801d563f;
    FUN_1801393d0(uVar52);
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5644;
  FUN_180279200();
  *(undefined8 *)(puVar46 + -8) = 0x1801d564b;
  cVar18 = FUN_18026ee60(0);
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d565b;
    FUN_180280d00(
                 "Writes the full account report to the log: licence,\nownership ticket, connect tokens, running game - and WHO OWNS\nthe copy of the game. A borrowed (family-shared) copy is what\nmakes some servers let you in and then throw you out.\nFree. Ctrl+click also spends one auth ticket and one connect\ntoken on a live join probe."
                 );
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5667;
  cVar18 = FUN_18019a680("##as_token_popup");
  if (cVar18 != '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5685;
    FUN_1802aabb0(&DAT_1803dca28 + lVar25,"Paste a Steam login token");
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5692;
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
    lVar6 = *(longlong *)(lVar47 + 0xec0);
    puVar1 = (uint *)(lVar6 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar6 + 0x1ed8) = fVar60 * fVar59;
    *(undefined8 *)(puVar46 + 0x50) = 0;
    *(undefined8 *)(puVar46 + 0x38) = 0;
    *(undefined8 *)(puVar46 + 0x30) = 0;
    *(undefined4 *)(puVar46 + 0x28) = 0x400;
    *(undefined1 **)(puVar46 + 0x20) = puVar46 + 0x50;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5706;
    FUN_1802b74e0("##as_token","eyA...",&DAT_1803ffd90,0xa28);
    *(undefined8 *)(puVar46 + -8) = 0x1801d5713;
    FUN_18027f5b0(0,uVar54);
    if ((cVar17 == '\0') && (DAT_1803ffd90 != '\0')) {
      uVar27 = 0;
    }
    else {
      uVar27 = 1;
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d572b;
    FUN_180279170(uVar27);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d573a;
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)(lVar47 + 0xec0);
    uVar22 = *(undefined4 *)(lVar47 + 0xcc8);
    *(undefined4 *)(lVar47 + 0xcc8) = 0;
    *(undefined8 *)(puVar46 + 0x50) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d576d;
    cVar17 = FUN_1802abf60("Sign in",puVar46 + 0x50,0x8000);
    *(undefined4 *)(lVar47 + 0xcc8) = uVar22;
    if (cVar17 != '\0') {
      *(undefined8 **********)(puVar46 + 0x60) = &local_290;
      local_290 = (undefined8 *********)0x0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d57a1;
      sVar35 = strlen(&DAT_1803ffd90);
      *(undefined8 *)(puVar46 + -8) = 0x1801d57b4;
      FUN_18001d080(&local_290,&DAT_1803ffd90,sVar35);
      uVar52 = DAT_1803e7860;
      local_258 = &local_1b8;
      local_1b8 = (undefined8 **********)0x0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d57e7;
      sVar35 = strlen(&DAT_1803fecf0);
      *(undefined8 *)(puVar46 + -8) = 0x1801d57fa;
      FUN_18001d080(&local_1b8,&DAT_1803fecf0,sVar35);
      *(undefined8 *)(puVar46 + -8) = 0x1801d580b;
      FUN_18013d830(&local_1b8,uVar52,&local_290);
      pcVar32 = &DAT_1803ffd90;
      for (lVar47 = 0xa28; lVar47 != 0; lVar47 = lVar47 + -1) {
        *pcVar32 = '\0';
        pcVar32 = pcVar32 + 1;
      }
      *(undefined8 *)(puVar46 + -8) = 0x1801d5820;
      FUN_180281560();
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d5825;
    FUN_180279200();
    *(undefined8 *)(puVar46 + -8) = 0x1801d583b;
    FUN_1802aabb0(&DAT_1803dca28 + lVar25,
                  "The token names its own account - the username box is only\na fallback for accounts Steam has never signed in here."
                 );
    if (DAT_1803facfd == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5866;
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5872;
  FUN_18027fda0();
  if (puVar46[0x75] != '\0') {
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5897;
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar47 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar6 + 0x1520) + 0xd1) == '\0') {
      *(undefined8 *)(puVar46 + 0x50) = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d58d5;
      FUN_18027f400(puVar46 + 0x50,uVar54);
    }
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d58e2;
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar47 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
    uVar27 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1520) + 0x2c8);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5912;
      __dyn_tls_on_demand_init();
    }
    local_2a0 = *(longlong *)(*(longlong *)(*(longlong *)(lVar47 + 0xec0) + 0x1520) + 0x118);
    fVar59 = (float)local_2a0;
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d593c;
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
    lVar6 = *(longlong *)(*(longlong *)(lVar47 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar6 + 0x1c8) != 0) ||
       (pfVar38 = (float *)(lVar6 + 0x280),
       *(longlong *)(*(longlong *)(lVar47 + 0xec0) + 0x2368) != 0)) {
      pfVar38 = (float *)(lVar6 + 0x250);
    }
    fVar60 = fVar60 * DAT_180381068;
    puVar45 = (undefined4 *)(&DAT_1803dc9f8 + lVar25);
    *(undefined4 *)(puVar46 + 0x60) = *puVar45;
    *(undefined4 *)(puVar46 + 100) = *(undefined4 *)(&DAT_1803dc9fc + lVar25);
    *(undefined4 *)(puVar46 + 0x68) = *(undefined4 *)(&DAT_1803dca00 + lVar25);
    *(float *)(puVar46 + 0x6c) = *(float *)(&DAT_1803dca04 + lVar25) * DAT_1803809fc;
    fVar61 = local_2a0._4_4_;
    fVar50 = local_2a0._4_4_ + fVar60;
    fVar58 = (*pfVar38 - *(float *)(lVar6 + 0x118)) + fVar59;
    *(float *)(puVar46 + 0x50) = fVar58;
    *(float *)(puVar46 + 0x54) = fVar50;
    *(undefined8 *)(puVar46 + -8) = 0x1801d59fb;
    uVar22 = FUN_180268ed0(puVar46 + 0x60);
    *(undefined4 *)(puVar46 + 0x28) = 0;
    *(float *)(puVar46 + 0x20) = fVar12;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5a1e;
    FUN_180295000(uVar27,&local_2a0,puVar46 + 0x50,uVar22);
    *(undefined4 *)(puVar46 + 0x60) = *puVar45;
    *(undefined4 *)(puVar46 + 100) = *(undefined4 *)(&DAT_1803dc9fc + lVar25);
    *(undefined4 *)(puVar46 + 0x68) = *(undefined4 *)(&DAT_1803dca00 + lVar25);
    *(float *)(puVar46 + 0x6c) = *(float *)(&DAT_1803dca04 + lVar25) * DAT_180380ac0;
    *(float *)(puVar46 + 0x50) = fVar58;
    *(float *)(puVar46 + 0x54) = fVar50;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5a68;
    uVar22 = FUN_180268ed0(puVar46 + 0x60);
    *(undefined4 *)(puVar46 + 0x30) = 0;
    *(undefined4 *)(puVar46 + 0x28) = DAT_180380bb0;
    *(float *)(puVar46 + 0x20) = fVar12;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5a99;
    FUN_180294f00(uVar27,&local_2a0,puVar46 + 0x50,uVar22);
    *(undefined4 *)(puVar46 + 0x60) = *puVar45;
    *(undefined4 *)(puVar46 + 100) = *(undefined4 *)(&DAT_1803dc9fc + lVar25);
    *(undefined4 *)(puVar46 + 0x68) = *(undefined4 *)(&DAT_1803dca00 + lVar25);
    *(float *)(puVar46 + 0x6c) = *(float *)(&DAT_1803dca04 + lVar25) * DAT_180380b68;
    *(float *)(puVar46 + 0x50) = fVar59 + DAT_180380e28;
    *(float *)(puVar46 + 0x54) = fVar50;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5aef;
    uVar22 = FUN_180268ed0(puVar46 + 0x60);
    *(undefined4 *)(puVar46 + 0x28) = 0;
    *(float *)(puVar46 + 0x20) = fVar11;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5b12;
    FUN_180295000(uVar27,&local_2a0,puVar46 + 0x50,uVar22);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5b22;
      __dyn_tls_on_demand_init();
    }
    fVar58 = (fVar60 - *(float *)(*(longlong *)(lVar47 + 0xec0) + 0x1238)) * DAT_180380ac0;
    fVar60 = fVar59 + DAT_180380fd8;
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5b57;
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar47 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
    lVar6 = *(longlong *)(lVar6 + 0x1520);
    *(float *)(lVar6 + 0x118) = fVar60;
    *(float *)(lVar6 + 0x11c) = fVar58 + fVar61;
    *(undefined1 *)(lVar6 + 0x159) = 1;
    pcVar32 = "Steam Guard: type the code Steam e-mailed you";
    if (iVar19 == 2) {
      pcVar32 = "Steam Guard: approve the login in the Steam app, or type its code here";
    }
    *(undefined8 *)(puVar46 + -8) = 0x1801d5baa;
    FUN_1802aabb0(puVar45,pcVar32);
    fVar60 = *(float *)(puVar46 + 0x78);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5bc8;
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
    lVar6 = *(longlong *)(lVar47 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
    lVar6 = *(longlong *)(lVar6 + 0x1520);
    *(float *)(lVar6 + 0x118) = fVar59;
    *(float *)(lVar6 + 0x11c) = fVar60 * fVar12 + fVar50;
    *(undefined1 *)(lVar6 + 0x159) = 1;
    if (*(char *)(lVar47 + 0x10) == '\0') {
      *(undefined8 *)(puVar46 + -8) = 0x1801d5c16;
      __dyn_tls_on_demand_init();
    }
    lVar47 = *(longlong *)(lVar47 + 0xec0);
    puVar1 = (uint *)(lVar47 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar47 + 0x1ed8) = fVar60 * DAT_18038115c;
    *(undefined8 *)(puVar46 + 0x50) = 0;
    *(undefined8 *)(puVar46 + 0x38) = 0;
    *(undefined8 *)(puVar46 + 0x30) = 0;
    *(undefined4 *)(puVar46 + 0x28) = 0x40;
    *(undefined1 **)(puVar46 + 0x20) = puVar46 + 0x50;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5c7b;
    cVar17 = FUN_1802b74e0("##as_code","XXXXX",&DAT_1803ff080,0x10);
    *(undefined8 *)(puVar46 + -8) = 0x1801d5c8f;
    FUN_18027f5b0(0,fVar60 * fVar57);
    *(float *)(puVar46 + 0x50) = fVar60 * DAT_180381138;
    *(undefined4 *)(puVar46 + 0x54) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5cb5;
    cVar18 = FUN_1802abf60("Submit code",puVar46 + 0x50,0);
    uVar52 = DAT_1803e7860;
    if ((cVar18 != '\0') || (cVar17 != '\0')) {
      *(undefined8 **********)(puVar46 + 0x60) = &local_290;
      local_290 = (undefined8 *********)0x0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      *(undefined8 *)(puVar46 + -8) = 0x1801d5ce9;
      sVar35 = strlen(&DAT_1803ff080);
      *(undefined8 *)(puVar46 + -8) = 0x1801d5cfc;
      FUN_18001d080(&local_290,&DAT_1803ff080,sVar35);
      *(undefined8 *)(puVar46 + -8) = 0x1801d5d0a;
      FUN_18013e870(&local_290,uVar52);
      DAT_1803ff080 = 0;
    }
  }
  lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar51 * 8);
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5d2b;
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar47 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar6 + 0x1520) + 0xd1) == '\0') {
    *(undefined8 *)(puVar46 + 0x50) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5d69;
    FUN_18027f400(puVar46 + 0x50,uVar54);
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5d6e;
  FUN_1802afb40();
  if (*(char *)(lVar47 + 0x10) == '\0') {
    *(undefined8 *)(puVar46 + -8) = 0x1801d5d7b;
    __dyn_tls_on_demand_init();
  }
  lVar47 = *(longlong *)(lVar47 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar47 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar47 + 0x1520) + 0xd1) == '\0') {
    *(undefined8 *)(puVar46 + 0x50) = 0;
    *(undefined8 *)(puVar46 + -8) = 0x1801d5db4;
    FUN_18027f400(puVar46 + 0x50,uVar54);
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5dc0;
  FUN_180135740(local_180);
  uVar54 = *(undefined4 *)(&DAT_1803dca2c + lVar25);
  uVar22 = *(undefined4 *)((longlong)&DAT_1803dca30 + lVar25);
  uVar55 = *(undefined4 *)((longlong)&DAT_1803dca30 + lVar25 + 4);
  *(undefined4 *)(puVar46 + 0x60) = *(undefined4 *)(&DAT_1803dca28 + lVar25);
  *(undefined4 *)(puVar46 + 100) = uVar54;
  *(undefined4 *)(puVar46 + 0x68) = uVar22;
  *(undefined4 *)(puVar46 + 0x6c) = uVar55;
  if (iVar19 == 4) {
    uVar54 = *(undefined4 *)(&DAT_1803dc9e8 + lVar25);
    uVar22 = *(undefined4 *)(&DAT_1803dc9ec + lVar25);
    uVar55 = *(undefined4 *)(&DAT_1803dc9f0 + lVar25);
    uVar56 = *(undefined4 *)(&DAT_1803dc9f4 + lVar25);
LAB_1801d5dfa:
    *(undefined4 *)(puVar46 + 0x60) = uVar54;
    *(undefined4 *)(puVar46 + 100) = uVar22;
    *(undefined4 *)(puVar46 + 0x68) = uVar55;
    *(undefined4 *)(puVar46 + 0x6c) = uVar56;
  }
  else {
    if (iVar19 == 5) {
      uVar54 = *(undefined4 *)(&DAT_1803dca08 + lVar25);
      uVar22 = *(undefined4 *)(lVar25 + 0x1803dca0c);
      uVar55 = *(undefined4 *)(&DAT_1803dca10 + lVar25);
      uVar56 = *(undefined4 *)(lVar25 + 0x1803dca14);
      goto LAB_1801d5dfa;
    }
    if (iVar19 == 1) {
      uVar54 = *(undefined4 *)(&DAT_1803dc9c8 + lVar25);
      uVar22 = *(undefined4 *)(&DAT_1803dc9cc + lVar25);
      uVar55 = *(undefined4 *)(&DAT_1803dc9d0 + lVar25);
      uVar56 = *(undefined4 *)(&DAT_1803dc9d4 + lVar25);
      goto LAB_1801d5dfa;
    }
  }
  ppppppuVar41 = local_180;
  if (0xf < local_168) {
    ppppppuVar41 = (undefined8 ******)local_180[0];
  }
  *(undefined8 *)(puVar46 + -8) = 0x1801d5e27;
  FUN_1801d3aa0(puVar46 + 0x60,&DAT_1803431ac,ppppppuVar41);
  *(undefined8 *)(puVar46 + -8) = 0x1801d5e34;
  FUN_18020e450(local_180);
  *(undefined8 *)(puVar46 + -8) = 0x1801d5e41;
  FUN_18020ad50(&local_198);
  puVar30 = puVar46;
LAB_1801d5e60:
  *(undefined8 *)(puVar30 + -8) = 0x1801d5e65;
  FUN_180273410();
  *(undefined8 *)(puVar30 + -8) = 0x1801d5e6f;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar30 + -8) = 0x1801d5e79;
  FUN_18026a890(2);
  *(undefined8 *)(puVar30 + -8) = 0x1801d5e88;
  return;
}


