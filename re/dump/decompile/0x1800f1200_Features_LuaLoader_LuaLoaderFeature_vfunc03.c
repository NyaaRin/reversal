// 0x1800f1200  Features_LuaLoader_LuaLoaderFeature_vfunc03
// size=15758 thunk=false
// signature: undefined Features_LuaLoader_LuaLoaderFeature_vfunc03()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_LuaLoader_LuaLoaderFeature_vfunc03(longlong param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 uVar20;
  float *pfVar21;
  size_t sVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float *pfVar26;
  longlong lVar27;
  undefined8 *puVar28;
  longlong lVar29;
  char ****_Memory;
  ulonglong uVar30;
  undefined1 *puVar31;
  longlong *plVar32;
  uint uVar33;
  char *pcVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  longlong lVar37;
  longlong lVar38;
  char ****ppppcVar39;
  char **ppcVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_828 [8];
  undefined1 auStack_820 [24];
  undefined8 *local_808;
  undefined8 local_800;
  char ***local_7f8;
  char *local_7f0;
  ulonglong local_7e8;
  undefined4 local_7e0;
  undefined4 local_7d8;
  uint local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 local_788;
  float local_780;
  undefined1 local_77c;
  float local_778;
  float local_774;
  float local_770;
  undefined8 local_768;
  undefined1 local_760;
  float local_75c;
  longlong local_758;
  longlong local_750;
  float local_748 [2];
  undefined8 local_740;
  char *local_738;
  uint local_730;
  char *local_728;
  float local_720;
  float local_71c;
  float local_718;
  float local_714;
  float local_710;
  float local_70c;
  float local_708;
  float local_704;
  longlong local_700;
  longlong local_6f8;
  char ***local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  ulonglong uStack_6a8;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined1 local_498 [32];
  undefined1 local_478 [32];
  undefined1 local_458 [32];
  undefined1 local_438 [32];
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [32];
  float local_3b8 [4];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  float local_318 [2];
  char ***local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulonglong uStack_2f8;
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  char *local_1f8;
  undefined *local_1f0;
  char *local_1e8;
  char *local_1d8 [4];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  char local_178 [160];
  ulonglong local_d8;
  
  puVar36 = auStack_828;
  puVar35 = auStack_828;
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_828;
  uVar30 = 0;
  uVar33 = 0;
  local_7c8 = 0;
  puVar31 = auStack_828;
  if (DAT_180409bc1 == '\0') goto LAB_1800f5036;
  local_738 = &DAT_1803e8500;
  local_700 = param_1;
  iVar16 = _Mtx_lock(&DAT_1803e8500);
  if (iVar16 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e854c == 0x7fffffff) {
    DAT_1803e854c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180409bb8 != '\0') {
    if (DAT_180409bc2 == '\0') {
      FUN_18024f460(param_1 + 8);
      FUN_18024f770(param_1 + 8);
      *(undefined8 *)(param_1 + 0xa7c) = 1;
      if (DAT_180409ba8 == 0) {
        pcVar34 = "Client/shared";
      }
      else if (DAT_180409ba8 == 1) {
        pcVar34 = "Server";
      }
      else if (DAT_180409ba8 == 2) {
        pcVar34 = "Menu";
      }
      else {
        pcVar34 = "Unknown";
      }
      local_580 = 0;
      uStack_578 = 0;
      local_570 = 0;
      local_568 = 0;
      FUN_18001d080(&local_580,"Ran on ",7);
      sVar22 = strlen(pcVar34);
      puVar28 = (undefined8 *)FUN_18021aef0(&local_580,pcVar34,sVar22);
      local_660 = *puVar28;
      uStack_658 = puVar28[1];
      local_650 = puVar28[2];
      uStack_648 = puVar28[3];
      puVar28[2] = 0;
      puVar28[3] = 0xf;
      *(undefined1 *)puVar28 = 0;
      local_7c8 = 0x400000;
      puVar28 = (undefined8 *)FUN_18021aef0(&local_660," - OK",5);
      local_5a0 = *puVar28;
      uStack_598 = puVar28[1];
      local_590 = puVar28[2];
      uStack_588 = puVar28[3];
      puVar28[2] = 0;
      puVar28[3] = 0xf;
      *(undefined1 *)puVar28 = 0;
      local_7c8 = 0x600000;
      FUN_18020e8a0(param_1 + 0xa58,&local_5a0);
      local_7c8 = 0x400000;
      FUN_18020e450(&local_5a0);
      uVar33 = 0;
      local_7c8 = 0;
      FUN_18020e450(&local_660);
      puVar28 = &local_580;
LAB_1800f1707:
      FUN_18020e450(puVar28);
    }
    else {
      FUN_1800ebc90(param_1,DAT_180409bbc,&DAT_1803ebb50);
      *(undefined4 *)(param_1 + 0xa7c) = 2;
      if (DAT_1803e9e90 == 0) {
        if (DAT_180409ba8 == 0) {
          pcVar34 = "Client/shared";
        }
        else if (DAT_180409ba8 == 1) {
          pcVar34 = "Server";
        }
        else if (DAT_180409ba8 == 2) {
          pcVar34 = "Menu";
        }
        else {
          pcVar34 = "Unknown";
        }
        local_5c0 = 0;
        uStack_5b8 = 0;
        local_5b0 = 0;
        local_5a8 = 0;
        FUN_18001d080(&local_5c0,"Failed on ",10);
        local_7c8 = 1;
        uVar20 = FUN_1801fc680(local_3f8,&local_5c0,pcVar34);
        local_7c8 = 3;
        uVar20 = FUN_1801fc680(local_418,uVar20,&DAT_18033e5b0);
        local_7c8 = 7;
        uVar20 = FUN_1801fc800(local_438,uVar20,&DAT_1803ebb50);
        uVar33 = 0xf;
      }
      else {
        local_7a8._0_4_ = 0.0;
        local_7a8._4_4_ = 0.0;
        uStack_7a0._0_4_ = 0.0;
        uStack_7a0._4_4_ = 0.0;
        uStack_798._0_4_ = 0;
        uStack_798._4_4_ = 0;
        local_790 = 0;
        FUN_18001d080(&local_7a8,"Hook ",5);
        local_7c8 = 0x10;
        uVar20 = FUN_1801fc800(local_458,&local_7a8,&DAT_1803e9e80);
        local_7c8 = 0x30;
        uVar20 = FUN_1801fc680(local_478,uVar20,&DAT_18033e5b0);
        local_7c8 = 0x70;
        uVar20 = FUN_1801fc800(local_498,uVar20,&DAT_1803ebb50);
        uVar33 = 0xf0;
      }
      local_7c8 = uVar33;
      FUN_18020e8a0(param_1 + 0xa58,uVar20);
      if ((char)uVar33 < '\0') {
        uVar33 = uVar33 & 0xffffff7f;
        local_7c8 = uVar33;
        FUN_18020e450(local_498);
      }
      if ((uVar33 & 0x40) != 0) {
        uVar33 = uVar33 & 0xffffffbf;
        local_7c8 = uVar33;
        FUN_18020e450(local_478);
      }
      if ((uVar33 & 0x20) != 0) {
        uVar33 = uVar33 & 0xffffffdf;
        local_7c8 = uVar33;
        FUN_18020e450(local_458);
      }
      if ((uVar33 & 0x10) != 0) {
        uVar33 = uVar33 & 0xffffffef;
        local_7c8 = uVar33;
        FUN_18020e450(&local_7a8);
      }
      if ((uVar33 & 8) != 0) {
        uVar33 = uVar33 & 0xfffffff7;
        local_7c8 = uVar33;
        FUN_18020e450(local_438);
      }
      if ((uVar33 & 4) != 0) {
        uVar33 = uVar33 & 0xfffffffb;
        local_7c8 = uVar33;
        FUN_18020e450(local_418);
      }
      if ((uVar33 & 2) != 0) {
        uVar33 = uVar33 & 0xfffffffd;
        local_7c8 = uVar33;
        FUN_18020e450(local_3f8);
      }
      if ((uVar33 & 1) != 0) {
        uVar33 = uVar33 & 0xfffffffe;
        puVar28 = &local_5c0;
        local_7c8 = uVar33;
        goto LAB_1800f1707;
      }
    }
    DAT_180409bb8 = '\0';
  }
  _Mtx_unlock(&DAT_1803e8500);
  local_3a8 = _DAT_180381650;
  uStack_3a0 = _UNK_180381658;
  local_398 = _DAT_180381660;
  uStack_390 = _UNK_180381668;
  local_388 = _DAT_180381670;
  uStack_380 = _UNK_180381678;
  local_378 = _DAT_180381620;
  uStack_370 = _UNK_180381628;
  local_368 = _DAT_180381720;
  uStack_360 = _UNK_180381728;
  local_358 = _DAT_1803816f0;
  uStack_350 = _UNK_1803816f8;
  local_348 = _DAT_1803816c0;
  uStack_340 = _UNK_1803816c8;
  local_338 = _DAT_180381710;
  uStack_330 = _UNK_180381718;
  local_328 = _DAT_180381700;
  uStack_320 = _UNK_180381708;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar15 = *(char *)(lVar23 + 0x10);
  if (cVar15 == '\0') {
    __dyn_tls_on_demand_init();
    cVar15 = *(char *)(lVar23 + 0x10);
  }
  lVar37 = *(longlong *)(lVar23 + 0xec0);
  local_3a8._0_4_ = *(undefined4 *)(lVar37 + 0xdd0);
  local_3a8._4_4_ = *(undefined4 *)(lVar37 + 0xdd4);
  uStack_3a0._0_4_ = *(undefined4 *)(lVar37 + 0xdd8);
  uStack_3a0._4_4_ = *(undefined4 *)(lVar37 + 0xddc);
  local_398 = *(undefined8 *)(lVar37 + 0xde0);
  uStack_390 = *(undefined8 *)(lVar37 + 0xde8);
  local_774 = *(float *)(lVar37 + 0xe20);
  local_778 = *(float *)(lVar37 + 0xe24);
  local_780 = *(float *)(lVar37 + 0xe28);
  local_770 = *(float *)(lVar37 + 0xe2c);
  local_378 = *(undefined8 *)(lVar37 + 0xe00);
  uStack_370 = *(undefined8 *)(lVar37 + 0xe08);
  local_368 = *(undefined8 *)(lVar37 + 0xef0);
  uStack_360 = *(undefined8 *)(lVar37 + 0xef8);
  local_358 = *(undefined8 *)(lVar37 + 0xf00);
  uStack_350 = *(undefined8 *)(lVar37 + 0xf08);
  local_338 = *(undefined8 *)(lVar37 + 0xdb0);
  uStack_330 = *(undefined8 *)(lVar37 + 0xdb8);
  local_328 = *(undefined8 *)(lVar37 + 0xdc0);
  uStack_320 = *(undefined8 *)(lVar37 + 0xdc8);
  uStack_380._0_4_ = local_780;
  uStack_380._4_4_ = local_770;
  local_388._0_4_ = local_774;
  local_388._4_4_ = local_778;
  if (*(char *)(param_1 + 0xa78) == '\0') {
    FUN_1800eae40(param_1);
    cVar15 = *(char *)(lVar23 + 0x10);
  }
  uVar5 = _UNK_18037d4d8;
  uVar4 = _DAT_18037d4d0;
  uVar3 = _UNK_18037d4a8;
  uVar20 = _DAT_18037d4a0;
  local_2c8 = _DAT_18037d490;
  uStack_2c0 = _UNK_18037d498;
  local_2a8 = _DAT_18037d4b0;
  uStack_2a0 = _UNK_18037d4b8;
  local_298 = _DAT_18037d4c0;
  uStack_290 = _UNK_18037d4c8;
  local_278 = DAT_18037d4e0;
  local_7a8._0_4_ = (float)(undefined4)local_3a8;
  local_7a8._4_4_ = (float)local_3a8._4_4_;
  uStack_7a0._0_4_ = (float)(undefined4)uStack_3a0;
  uStack_7a0._4_4_ = (float)uStack_3a0._4_4_;
  local_780 = (float)uStack_380;
  local_778 = local_388._4_4_;
  local_774 = (float)local_388;
  local_770 = uStack_380._4_4_;
  uVar17 = FUN_180268ed0(&local_7a8);
  uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar17);
  uVar11 = (undefined4)local_338;
  local_7a8._0_4_ = (float)(undefined4)local_338;
  uVar12 = local_338._4_4_;
  local_7a8._4_4_ = (float)local_338._4_4_;
  uVar13 = (undefined4)uStack_330;
  uStack_7a0._0_4_ = (float)(undefined4)uStack_330;
  uVar14 = uStack_330._4_4_;
  uStack_7a0._4_4_ = (float)uStack_330._4_4_;
  uVar17 = FUN_180268ed0(&local_7a8);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar17);
  uVar17 = (float)local_368;
  local_7a8._0_4_ = (float)local_368;
  uVar6 = local_368._4_4_;
  local_7a8._4_4_ = local_368._4_4_;
  uVar10 = (float)uStack_360;
  uStack_7a0._0_4_ = (float)uStack_360;
  fVar45 = uStack_360._4_4_;
  uStack_7a0._4_4_ = uStack_360._4_4_;
  uVar18 = FUN_180268ed0(&local_7a8);
  uStack_2a0 = CONCAT44(uVar18,(undefined4)uStack_2a0);
  local_7a8._0_4_ = (float)uVar17;
  local_7a8._4_4_ = (float)uVar6;
  uStack_7a0._0_4_ = (float)uVar10;
  uStack_7a0._4_4_ = fVar45 * DAT_180380a70;
  uVar17 = FUN_180268ed0(&local_7a8);
  local_298 = CONCAT44(local_298._4_4_,uVar17);
  uVar17 = (undefined4)local_328;
  local_7a8._0_4_ = (float)(undefined4)local_328;
  uVar6 = local_328._4_4_;
  local_7a8._4_4_ = (float)local_328._4_4_;
  uVar10 = (undefined4)uStack_320;
  uStack_7a0._0_4_ = (float)(undefined4)uStack_320;
  fVar45 = uStack_320._4_4_;
  uStack_7a0._4_4_ = uStack_320._4_4_ * DAT_180380a94;
  uVar18 = FUN_180268ed0(&local_7a8);
  local_298 = CONCAT44(uVar18,(undefined4)local_298);
  local_7a8._0_4_ = (float)uVar17;
  local_7a8._4_4_ = (float)uVar6;
  uStack_7a0._0_4_ = (float)uVar10;
  uStack_7a0._4_4_ = fVar45 * DAT_180380b3c;
  uVar17 = FUN_180268ed0(&local_7a8);
  local_278 = CONCAT44(local_278._4_4_,uVar17);
  local_7a8._0_4_ = (float)uVar11;
  local_7a8._4_4_ = (float)uVar12;
  uStack_7a0._0_4_ = (float)uVar13;
  uStack_7a0._4_4_ = (float)uVar14;
  uVar17 = FUN_180268ed0(&local_7a8);
  local_278 = CONCAT44(uVar17,(undefined4)local_278);
  local_7a8._0_4_ = local_774;
  local_7a8._4_4_ = local_778;
  uStack_7a0._0_4_ = local_780;
  uStack_7a0._4_4_ = local_770;
  uVar17 = FUN_180268ed0(&local_7a8);
  uStack_290 = CONCAT44(uStack_290._4_4_,uVar17);
  lVar37 = param_1 + 8;
  *(undefined8 *)(param_1 + 0x8c8) = local_2c8;
  *(undefined8 *)(param_1 + 0x8d0) = uStack_2c0;
  *(undefined8 *)(param_1 + 0x8d8) = uVar20;
  *(undefined8 *)(param_1 + 0x8e0) = uVar3;
  *(undefined8 *)(param_1 + 0x8e8) = local_2a8;
  *(undefined8 *)(param_1 + 0x8f0) = uStack_2a0;
  *(undefined8 *)(param_1 + 0x8f8) = local_298;
  *(undefined8 *)(param_1 + 0x900) = uStack_290;
  *(undefined8 *)(param_1 + 0x908) = uVar4;
  *(undefined8 *)(param_1 + 0x910) = uVar5;
  *(undefined8 *)(param_1 + 0x918) = local_278;
  *(undefined4 *)(param_1 + 0x9d0) = 0xbf800000;
  if (DAT_180409bc0 == '\0') {
    FUN_1800ea200(CONCAT44(DAT_1803e85a4,DAT_1803e85a0),CONCAT44(DAT_1803e84f4,DAT_1803e84f0));
  }
  fVar43 = DAT_18038129c;
  fVar51 = DAT_180381294;
  fVar50 = DAT_180381244;
  fVar49 = DAT_1803811fc;
  fVar45 = DAT_180380b20;
  local_748[0] = 1.5;
  local_75c = 0.75;
  pfVar26 = &local_75c;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar26 = &DAT_1803da6a4;
  }
  pfVar21 = local_748;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar21 = pfVar26;
  }
  local_3b8[0] = *pfVar21;
  local_71c = 1.5;
  local_720 = 0.75;
  pfVar26 = &local_720;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar26 = &DAT_1803da6a4;
  }
  pfVar21 = &local_71c;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar21 = pfVar26;
  }
  fVar41 = *pfVar21 * DAT_1803811fc;
  if ((fVar41 <= DAT_1803e84f4) && (fVar41 = DAT_180381294, DAT_1803e84f4 <= DAT_180381294)) {
    fVar41 = DAT_1803e84f4;
  }
  fVar42 = *pfVar21 * DAT_180381244;
  if ((fVar42 <= DAT_1803e84f0) && (fVar42 = DAT_18038129c, DAT_1803e84f0 <= DAT_18038129c)) {
    fVar42 = DAT_1803e84f0;
  }
  lVar27 = DAT_1803fa5d0;
  DAT_1803e84f0 = fVar42;
  DAT_1803e84f4 = fVar41;
  if (DAT_1803fa5d0 == 0) {
    if (cVar15 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1228);
  }
  FUN_18027a8a0(lVar27);
  local_7b8 = (char **)CONCAT44(local_3b8[0] * DAT_180380e9c,local_3b8[0] * DAT_180380fa8);
  FUN_18026aad0(0xb,&local_7b8);
  local_7b8 = (char **)CONCAT44(local_3b8[0] * DAT_180380f40,local_3b8[0] * DAT_180380fa8);
  FUN_18026aad0(0xe,&local_7b8);
  if (*(char *)(lVar23 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_788 = *(longlong *)(lVar23 + 0xec0);
  if (*(char *)(local_788 + 0x108) == '\0') {
    DAT_180425a9c = '\0';
    _DAT_1803fe798 = 0;
  }
  else if (DAT_180425a9c != '\0') {
    DAT_1803e85a4 = *(float *)(local_788 + 0x104) - _DAT_1803fe79c;
    DAT_1803e85a0 = *(float *)(local_788 + 0x100) - _DAT_1803fe798;
  }
  fVar49 = local_3b8[0] * fVar49;
  fVar42 = local_3b8[0] * fVar50;
  fVar41 = fVar51;
  if (0.0 < *(float *)(local_788 + 0x34)) {
    fVar41 = *(float *)(local_788 + 0x34) - DAT_180380fe8;
  }
  if (fVar41 <= fVar49) {
    fVar41 = fVar49;
  }
  fVar44 = fVar43;
  if (0.0 < *(float *)(local_788 + 0x30)) {
    fVar44 = *(float *)(local_788 + 0x30) - DAT_180380fe8;
  }
  if (fVar44 <= fVar42) {
    fVar44 = fVar42;
  }
  fVar48 = fVar49;
  if ((fVar49 <= DAT_1803e84f4) && (fVar48 = fVar41, DAT_1803e84f4 <= fVar41)) {
    fVar48 = DAT_1803e84f4;
  }
  fVar46 = fVar42;
  if ((fVar42 <= DAT_1803e84f0) && (fVar46 = fVar44, DAT_1803e84f0 <= fVar44)) {
    fVar46 = DAT_1803e84f0;
  }
  DAT_1803e84f0 = fVar46;
  DAT_1803e84f4 = fVar48;
  local_750 = local_788;
  if (*(char *)(lVar23 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar27 = *(longlong *)(lVar23 + 0xec0);
  *(uint *)(lVar27 + 0x1f48) = *(uint *)(lVar27 + 0x1f48) | 1;
  *(float *)(lVar27 + 0x1f58) = DAT_1803e85a0;
  *(float *)(lVar27 + 0x1f5c) = DAT_1803e85a4;
  *(undefined8 *)(lVar27 + 0x1f60) = 0;
  *(undefined4 *)(lVar27 + 0x1f4c) = 1;
  if (*(char *)(lVar23 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar27 = *(longlong *)(lVar23 + 0xec0);
  *(uint *)(lVar27 + 0x1f48) = *(uint *)(lVar27 + 0x1f48) | 2;
  *(ulonglong *)(lVar27 + 0x1f68) = CONCAT44(DAT_1803e84f4,DAT_1803e84f0);
  *(undefined4 *)(lVar27 + 0x1f50) = 1;
  if (*(char *)(lVar23 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar27 = *(longlong *)(lVar23 + 0xec0);
  *(uint *)(lVar27 + 0x1f48) = *(uint *)(lVar27 + 0x1f48) | 0x10;
  *(float *)(lVar27 + 0x1f8c) = fVar42;
  *(float *)(lVar27 + 0x1f90) = fVar49;
  *(float *)(lVar27 + 0x1f94) = fVar44;
  *(float *)(lVar27 + 0x1f98) = fVar41;
  *(undefined8 *)(lVar27 + 0x1fa0) = 0;
  *(undefined8 *)(lVar27 + 0x1fa8) = 0;
  local_7b8 = (char **)0x3f8000003f800000;
  FUN_18026aad0(2,&local_7b8);
  FUN_18026a940(3);
  if (*(char *)(lVar23 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_740 = *(longlong *)(lVar23 + 0xec0);
  local_7a8._0_4_ = 2.8026e-45;
  local_7a8._4_4_ = (float)*(undefined8 *)(local_740 + 0xdd0);
  uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(local_740 + 0xdd0) >> 0x20);
  uStack_7a0._4_4_ = (float)*(undefined8 *)(local_740 + 0xdd8);
  uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_740 + 0xdd8) >> 0x20);
  FUN_18028a220(local_740 + 0x1fc8,&local_7a8);
  if (*(int *)(local_740 + 0x1fc4) != 2) {
    *(undefined4 *)(local_740 + 0xdd0) = (undefined4)local_3a8;
    *(undefined4 *)(local_740 + 0xdd4) = local_3a8._4_4_;
    *(undefined4 *)(local_740 + 0xdd8) = (undefined4)uStack_3a0;
    *(undefined4 *)(local_740 + 0xddc) = uStack_3a0._4_4_;
  }
  if (*(char *)(lVar23 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_740 = *(longlong *)(lVar23 + 0xec0);
  local_7a8._0_4_ = 7.00649e-45;
  local_7a8._4_4_ = (float)*(undefined8 *)(local_740 + 0xe00);
  uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(local_740 + 0xe00) >> 0x20);
  uStack_7a0._4_4_ = (float)*(undefined8 *)(local_740 + 0xe08);
  uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_740 + 0xe08) >> 0x20);
  FUN_18028a220(local_740 + 0x1fc8,&local_7a8);
  if (*(int *)(local_740 + 0x1fc4) != 5) {
    *(undefined4 *)(local_740 + 0xe00) = (undefined4)local_378;
    *(undefined4 *)(local_740 + 0xe04) = local_378._4_4_;
    *(undefined4 *)(local_740 + 0xe08) = (undefined4)uStack_370;
    *(undefined4 *)(local_740 + 0xe0c) = uStack_370._4_4_;
  }
  local_77c = *(undefined1 *)(local_750 + 0x7e);
  *(undefined1 *)(local_750 + 0x7e) = 0;
  local_7a8._0_4_ = (float)(undefined4)local_328;
  local_7a8._4_4_ = (float)local_328._4_4_;
  uStack_7a0._0_4_ = (float)(undefined4)uStack_320;
  uStack_7a0._4_4_ = 0.3;
  FUN_18026a810(0x1f,&local_7a8);
  local_7a8._0_4_ = (float)local_368;
  local_7a8._4_4_ = local_368._4_4_;
  uStack_7a0._0_4_ = (float)uStack_360;
  uStack_7a0._4_4_ = 0.55;
  FUN_18026a810(0x20,&local_7a8);
  local_7a8._0_4_ = (float)local_368;
  local_7a8._4_4_ = local_368._4_4_;
  uStack_7a0._0_4_ = (float)uStack_360;
  uStack_7a0._4_4_ = 0.85;
  FUN_18026a810(0x21,&local_7a8);
  cVar15 = FUN_180276630("Lua editor##AOS",&DAT_180409bc1,0x12d);
  if (cVar15 == '\0') {
LAB_1800f4f8f:
    lVar23 = *(longlong *)(puVar36 + 0xd8);
LAB_1800f4f97:
    *(undefined8 *)(puVar36 + -8) = 0x1800f4f9c;
    FUN_180278d40();
    *(undefined8 *)(puVar36 + -8) = 0x1800f4fa6;
    FUN_18026a890(5);
    *(undefined8 *)(puVar36 + -8) = 0x1800f4fb0;
    FUN_18026abb0(2);
    *(undefined8 *)(puVar36 + -8) = 0x1800f4fba;
    FUN_18026abb0(2);
    lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar37 + 0x10) == '\0') {
      *(undefined8 *)(puVar36 + -8) = 0x1800f4fdd;
      __dyn_tls_on_demand_init();
    }
    lVar37 = *(longlong *)(lVar37 + 0xec0);
    if (*(int *)(lVar37 + 0x1fe8) < 1) {
      *(undefined8 *)(puVar36 + -8) = 0x1800f4ffd;
      FUN_18027e9c0("Calling PopFont() too many times!");
    }
    else {
      uVar20 = *(undefined8 *)
                (*(longlong *)(lVar37 + 0x1ff0) + -0x10 + (longlong)*(int *)(lVar37 + 0x1fe8) * 0x10
                );
      *(undefined8 *)(puVar36 + -8) = 0x1800f501f;
      FUN_18027a5f0(uVar20);
      *(int *)(lVar37 + 0x1fe8) = *(int *)(lVar37 + 0x1fe8) + -1;
    }
    *(undefined1 *)(lVar23 + 0x7e) = puVar36[0xac];
  }
  else {
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(lVar23 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar27 + 0x1520) + 0xce) = 1;
    local_758 = *(longlong *)(*(longlong *)(lVar27 + 0x1520) + 0x2c8);
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(lVar23 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar27 + 0x1520) + 0xce) = 1;
    fVar41 = DAT_180381204;
    lVar27 = *(longlong *)(lVar27 + 0x1520);
    fVar49 = *(float *)(lVar27 + 0x28);
    local_770 = fVar49 + *(float *)(lVar27 + 0x30);
    local_780 = *(float *)(lVar27 + 0x2c);
    local_75c = local_3b8[0] * DAT_1803810cc;
    fVar42 = local_3b8[0] * DAT_1803810cc + *(float *)(lVar27 + 0x2c);
    if ((DAT_180425a9c == '\0') && (*(char *)(local_750 + 0xb30) != '\0')) {
      fVar44 = local_3b8[0] * DAT_180381204;
      cVar15 = FUN_180279410(3);
      if ((cVar15 != '\0') &&
         (((((fVar48 = *(float *)(local_750 + 0xae0), fVar49 <= fVar48 &&
             (fVar46 = *(float *)(local_750 + 0xae4), local_780 <= fVar46)) && (fVar48 < local_770))
           && (fVar46 < fVar42)) && ((fVar48 < local_770 - fVar44 || (fVar42 <= fVar46)))))) {
        DAT_180425a9c = '\x01';
        if (*(char *)(lVar23 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1520);
        _DAT_1803fe798 =
             CONCAT44(fVar46 - *(float *)(lVar27 + 0x2c),fVar48 - *(float *)(lVar27 + 0x28));
        if (*(char *)(lVar23 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        FUN_1802827b0(*(undefined8 *)(*(longlong *)(lVar23 + 0xec0) + 0x1520),0);
      }
    }
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1520);
    DAT_1803e85a0 = *(float *)(lVar27 + 0x28);
    DAT_1803e85a4 = *(float *)(lVar27 + 0x2c);
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar9 = local_770;
    fVar8 = local_780;
    fVar47 = DAT_180380fe8;
    fVar46 = DAT_180380c50;
    lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1520);
    fVar44 = *(float *)(lVar27 + 0x30);
    fVar48 = *(float *)(lVar27 + 0x34);
    local_714 = 1.5;
    local_718 = 0.75;
    pfVar26 = &local_718;
    if (fVar45 <= DAT_1803da6a4) {
      pfVar26 = &DAT_1803da6a4;
    }
    pfVar21 = &local_714;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar21 = pfVar26;
    }
    DAT_1803e84f4 = *pfVar21 * DAT_1803811fc;
    if ((DAT_1803e84f4 <= fVar48) && (DAT_1803e84f4 = fVar51, fVar48 <= fVar51)) {
      DAT_1803e84f4 = fVar48;
    }
    DAT_1803e84f0 = *pfVar21 * fVar50;
    if ((DAT_1803e84f0 <= fVar44) && (DAT_1803e84f0 = fVar43, fVar44 <= fVar43)) {
      DAT_1803e84f0 = fVar44;
    }
    fVar50 = local_3b8[0] * DAT_180380fe8;
    local_710 = local_3b8[0] * DAT_180380fd8;
    fVar51 = local_3b8[0] * _DAT_1803811a4;
    local_774 = local_3b8[0] * DAT_180381048;
    local_7b8 = (char **)CONCAT44(fVar42,local_770 - DAT_180380bb0);
    local_768 = CONCAT44(local_780 + DAT_180380bb0,fVar49 + DAT_180380bb0);
    fVar45 = local_3b8[0] * DAT_180380fc4;
    local_778 = fVar50;
    local_318[0] = local_774;
    uVar17 = FUN_180268ed0(&local_398);
    local_800._0_4_ = 0x30;
    local_808._0_4_ = fVar45;
    FUN_180295000(local_758,&local_768,&local_7b8,uVar17);
    local_7b8 = (char **)CONCAT44(fVar42,fVar9);
    local_768 = CONCAT44(fVar42,fVar49);
    uVar17 = FUN_180268ed0(&local_378);
    local_808._0_4_ = DAT_180380bb0;
    FUN_180294c90(local_758,&local_768,&local_7b8,uVar17);
    local_7b8 = (char **)CONCAT44(local_3b8[0] * DAT_180381094 + fVar8,
                                  local_3b8[0] * DAT_180380e28 + fVar50 + fVar49);
    local_780 = fVar50 + fVar49;
    local_768 = CONCAT44(local_3b8[0] * DAT_180380fe4 + fVar8,local_780);
    fVar46 = local_3b8[0] * fVar46;
    uVar17 = FUN_180268ed0(&local_368);
    local_800 = (char **)((ulonglong)local_800._4_4_ << 0x20);
    local_808 = (undefined8 *)CONCAT44(local_808._4_4_,fVar46);
    FUN_180295000(local_758,&local_768,&local_7b8,uVar17);
    fVar45 = local_778;
    local_7b8 = (char **)CONCAT44(local_3b8[0] * DAT_180380fe0,
                                  local_3b8[0] * DAT_180380fd8 + local_778);
    FUN_18027f6a0(&local_7b8);
    FUN_1802aabb0(&local_338,"LUA EDITOR");
    local_7b8 = (char **)CONCAT44(local_3b8[0] * DAT_180381078,local_3b8[0] * DAT_180380fd8 + fVar45
                                 );
    FUN_18027f6a0(&local_7b8);
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar41 = local_3b8[0] * fVar41;
    fVar49 = *(float *)(*(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1520) + 0x30);
    fVar43 = local_3b8[0] * DAT_180381038;
    pcVar34 = (char *)(param_1 + 0x9f4);
    local_2f0 = ZEXT416(0);
    local_2e0 = 0;
    local_2d8 = 0;
    local_728 = pcVar34;
    sVar22 = strlen(pcVar34);
    FUN_18001d080(local_2f0,pcVar34,sVar22);
    FUN_18002cfb0(local_1d8,local_2f0,&DAT_18034f720);
    FUN_18002cfb0(local_1b8,local_2f0,&DAT_18034f748);
    FUN_18016d4c0(local_198,local_2f0);
    uVar6 = DAT_180381384;
    uVar17 = DAT_180381308;
    fVar50 = DAT_180380ba8;
    ppcVar40 = local_1d8;
    do {
      local_7b8 = ppcVar40;
      if ((char *)0xf < ppcVar40[3]) {
        local_7b8 = (char **)*ppcVar40;
      }
      if (*(char *)(lVar23 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (local_7b8 == (char **)0x0) {
        fVar42 = 0.0;
      }
      else {
        local_7d8 = 0;
        local_7e8 = 0;
        local_7f0 = (char *)0x0;
        local_7f8 = (char ***)0x0;
        local_800 = local_7b8;
        local_808 = (undefined8 *)CONCAT44(local_808._4_4_,uVar6);
        FUN_18029e350(&local_768,*(undefined8 *)(*(longlong *)(lVar23 + 0xec0) + 0x1228),
                      *(undefined4 *)(*(longlong *)(lVar23 + 0xec0) + 0x1238),uVar17);
        fVar42 = (float)(int)((float)local_768 + fVar50);
        local_768 = CONCAT44(local_768._4_4_,fVar42);
      }
      fVar44 = 0.0;
      if (fVar42 <= (fVar49 - fVar41) - (fVar43 + fVar45)) {
        if ((char *)0xf < ppcVar40[3]) {
          ppcVar40 = (char **)*ppcVar40;
        }
        FUN_1802aabb0(&local_328,&DAT_1803431ac,ppcVar40);
        break;
      }
      ppcVar40 = ppcVar40 + 4;
    } while (ppcVar40 != (char **)local_178);
    _eh_vector_destructor_iterator_
              (local_1d8,0x20,3,Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
    FUN_18020e450(local_2f0);
    fVar47 = local_3b8[0] * fVar47;
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_7b8 = (char **)CONCAT44(fVar47,*(float *)(*(longlong *)
                                                     (*(longlong *)(lVar23 + 0xec0) + 0x1520) + 0x30
                                                   ) - local_3b8[0] * DAT_1803811fc);
    FUN_18027f6a0(&local_7b8);
    local_1f8 = "Client/shared";
    local_1f0 = &DAT_18034f378;
    local_1e8 = "Server";
    local_7a8._0_4_ = 0.0;
    local_7a8._4_4_ = 2.8026e-45;
    uStack_7a0._0_4_ = 1.4013e-45;
    if (2 < DAT_180425408) {
      DAT_180425408 = 0;
    }
    fVar49 = local_3b8[0] * DAT_18038116c;
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar27 = *(longlong *)(lVar23 + 0xec0);
    puVar1 = (uint *)(lVar27 + 0x1ec0);
    *puVar1 = *puVar1 | 1;
    *(float *)(lVar27 + 0x1ed8) = fVar49;
    local_808 = (undefined8 *)CONCAT44(local_808._4_4_,3);
    FUN_1802b1200("##lua_state",&DAT_180425408);
    DAT_1803fa5f0 = *(int *)((longlong)&local_7a8 + (longlong)(int)DAT_180425408 * 4);
    FUN_18027f5b0(DAT_1803fa5f0,local_3b8[0] * DAT_180380fcc);
    uVar17 = (undefined4)local_358;
    uVar6 = local_358._4_4_;
    uVar10 = (undefined4)uStack_350;
    local_7a8._0_4_ = (float)(undefined4)local_358;
    local_7a8._4_4_ = (float)local_358._4_4_;
    uStack_7a0._0_4_ = (float)(undefined4)uStack_350;
    uStack_7a0._4_4_ = 0.24;
    FUN_18026a810(0x16,&local_7a8);
    local_7a8._0_4_ = (float)uVar17;
    local_7a8._4_4_ = (float)uVar6;
    uStack_7a0._0_4_ = (float)uVar10;
    uStack_7a0._4_4_ = 0.36;
    FUN_18026a810(0x17,&local_7a8);
    fVar49 = DAT_180380ac0;
    local_7a8._0_4_ = (float)uVar17;
    local_7a8._4_4_ = (float)uVar6;
    uStack_7a0._0_4_ = (float)uVar10;
    uStack_7a0._4_4_ = 0.5;
    FUN_18026a810(0x18,&local_7a8);
    fVar50 = DAT_180381068;
    local_7b8 = (char **)CONCAT44(local_3b8[0] * DAT_180381068,local_3b8[0] * DAT_1803810e0);
    local_760 = FUN_1802abf60(&DAT_18034f76c,&local_7b8,0);
    FUN_18026a890(3);
    cVar15 = FUN_18026ee60(0);
    if (cVar15 != '\0') {
      FUN_180280d00("Run the buffer on the selected state  (Ctrl+Enter)");
    }
    fVar43 = DAT_180380fa8;
    FUN_18027f5b0();
    local_7a8._0_4_ = (float)local_388;
    local_7a8._4_4_ = local_388._4_4_;
    uStack_7a0._0_4_ = (float)uStack_380;
    uStack_7a0._4_4_ = 0.28;
    FUN_18026a810(0x16,&local_7a8);
    local_7a8._0_4_ = (float)local_348;
    local_7a8._4_4_ = local_348._4_4_;
    uStack_7a0._0_4_ = (float)uStack_340;
    uStack_7a0._4_4_ = 0.22;
    FUN_18026a810(0x17,&local_7a8);
    local_7a8._0_4_ = (float)local_348;
    local_7a8._4_4_ = local_348._4_4_;
    uStack_7a0._0_4_ = (float)uStack_340;
    uStack_7a0._4_4_ = 0.34;
    FUN_18026a810(0x18,&local_7a8);
    fVar41 = DAT_1803810c4;
    local_7b8 = (char **)CONCAT44(local_3b8[0] * fVar50,local_3b8[0] * DAT_1803810c4);
    cVar15 = FUN_1802abf60("Close",&local_7b8,0);
    fVar42 = local_774;
    fVar50 = local_780;
    if (cVar15 == '\0') {
      local_768 = 0x10;
      local_7b8 = (char **)0xec0;
      local_6f8 = local_758;
      local_708 = fVar8;
      local_704 = fVar9;
      local_770 = local_774;
      local_748[0] = local_780;
      local_740 = lVar37;
      FUN_18026a890(3);
      fVar48 = local_3b8[0] * DAT_180380fd8 + local_75c;
      local_70c = fVar48;
      if (*(char *)(lVar23 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar43 = (((*(float *)(*(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1520) + 0x34) - fVar48)
                - fVar42) - fVar45) - local_3b8[0] * fVar43;
      local_7c0 = CONCAT44(fVar48,fVar45);
      local_75c = fVar43;
      FUN_18027f6a0(&local_7c0);
      if (*(char *)(lVar23 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_7c0 = *(longlong *)(lVar23 + 0xec0);
      local_7a8._0_4_ = 4.2039e-45;
      local_7a8._4_4_ = (float)*(undefined8 *)(local_7c0 + 0xde0);
      uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(local_7c0 + 0xde0) >> 0x20);
      uStack_7a0._4_4_ = (float)*(undefined8 *)(local_7c0 + 0xde8);
      uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_7c0 + 0xde8) >> 0x20);
      FUN_18028a220(local_7c0 + 0x1fc8,&local_7a8);
      if (*(int *)(local_7c0 + 0x1fc4) != 3) {
        *(undefined4 *)(local_7c0 + 0xde0) = (undefined4)local_398;
        *(undefined4 *)(local_7c0 + 0xde4) = local_398._4_4_;
        *(undefined4 *)(local_7c0 + 0xde8) = (undefined4)uStack_390;
        *(undefined4 *)(local_7c0 + 0xdec) = uStack_390._4_4_;
      }
      if (*(char *)(lVar23 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_7c0 = *(longlong *)(lVar23 + 0xec0);
      local_7a8._0_4_ = 7.00649e-45;
      local_7a8._4_4_ = (float)*(undefined8 *)(local_7c0 + 0xe00);
      uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(local_7c0 + 0xe00) >> 0x20);
      uStack_7a0._4_4_ = (float)*(undefined8 *)(local_7c0 + 0xe08);
      uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_7c0 + 0xe08) >> 0x20);
      FUN_18028a220(local_7c0 + 0x1fc8,&local_7a8);
      if (*(int *)(local_7c0 + 0x1fc4) != 5) {
        *(undefined4 *)(local_7c0 + 0xe00) = (undefined4)local_378;
        *(undefined4 *)(local_7c0 + 0xe04) = local_378._4_4_;
        *(undefined4 *)(local_7c0 + 0xe08) = (undefined4)uStack_370;
        *(undefined4 *)(local_7c0 + 0xe0c) = uStack_370._4_4_;
      }
      fVar42 = DAT_180380fd8;
      local_7c0 = CONCAT44(local_3b8[0] * DAT_180380fd8,local_3b8[0] * DAT_180380fd8);
      FUN_18026aad0(2,&local_7c0);
      local_7c0 = CONCAT44(fVar43,fVar51);
      cVar15 = FUN_180272fa0("##lua_scripts_panel",&local_7c0,1,0);
      if (cVar15 != '\0') {
        local_738 = local_728;
        FUN_1802aabb0(&local_328,"SCRIPTS");
        FUN_1802afb40();
        local_7c0 = (ulonglong)(uint)local_3b8[0] << 0x20;
        FUN_1802af260(&local_7c0);
        if (*(char *)(lVar23 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar27 = *(longlong *)(lVar23 + 0xec0);
        puVar1 = (uint *)(lVar27 + 0x1ec0);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(lVar27 + 0x1ed8) = 0xbf800000;
        local_7c0 = 0;
        local_7f0 = (char *)0x0;
        local_7f8 = (char ***)0x0;
        local_800 = (char **)((ulonglong)local_800 & 0xffffffff00000000);
        local_808 = &local_7c0;
        FUN_1802b74e0("##lua_script_name",0,local_728,0x60);
        cVar15 = FUN_18026ee60(0);
        if (cVar15 != '\0') {
          FUN_180280d00("File name Save writes to");
        }
        if (*(char *)(lVar23 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar51 = DAT_180381038;
        lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x1520);
        if ((*(longlong *)(lVar27 + 0x1c8) != 0) ||
           (pfVar26 = (float *)(lVar27 + 0x280),
           *(longlong *)(*(longlong *)(lVar23 + 0xec0) + 0x2368) != 0)) {
          pfVar26 = (float *)(lVar27 + 0x250);
        }
        fVar43 = ((*pfVar26 - *(float *)(lVar27 + 0x118)) - local_3b8[0] * fVar42) / DAT_180380e28;
        local_7c0 = CONCAT44(local_3b8[0] * DAT_180381038,fVar43);
        cVar15 = FUN_1802abf60(&DAT_18034f7fc,&local_7c0,0);
        if (cVar15 != '\0') {
          local_7a8._0_4_ = -4.766088e-39;
          local_7a8._4_4_ = 1.4013e-45;
          uStack_7a0._0_4_ = 0.0;
          uStack_7a0._4_4_ = 0.0;
          FUN_180015080(lVar37,&local_7a8);
          FUN_18024f460(lVar37);
          FUN_18024f770(lVar37);
          *(undefined4 *)(param_1 + 0xa80) = 0;
          strncpy_s(local_728,0x60,"script.lua",0xffffffffffffffff);
          *(undefined4 *)(param_1 + 0x9f0) = 0xffffffff;
          *(undefined4 *)(param_1 + 0xa7c) = 0;
          FUN_180212700(param_1 + 0xa58,"New script buffer.",0x12);
        }
        fVar42 = DAT_180380f40;
        FUN_18027f5b0();
        local_7c0 = CONCAT44(local_3b8[0] * fVar51,fVar43);
        cVar15 = FUN_1802abf60(&DAT_18034f558,&local_7c0,0);
        if (cVar15 != '\0') {
          FUN_1800eb7c0(param_1);
        }
        FUN_18027f5b0();
        local_7c0 = CONCAT44(local_3b8[0] * fVar51,0xbf800000);
        cVar15 = FUN_1802abf60("Refresh",&local_7c0,0);
        if (cVar15 != '\0') {
          FUN_1800eae40(param_1);
        }
        local_7c0 = (ulonglong)(uint)(local_3b8[0] * DAT_180380d30) << 0x20;
        FUN_1802af260(&local_7c0);
        local_7c0 = CONCAT44(local_3b8[0] * fVar42,local_3b8[0] * fVar42);
        FUN_18026aad0(2,&local_7c0);
        if (*(char *)(lVar23 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_7c0 = *(longlong *)(lVar23 + 0xec0);
        local_7a8._0_4_ = 4.2039e-45;
        local_7a8._4_4_ = (float)*(undefined8 *)(local_7c0 + 0xde0);
        uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(local_7c0 + 0xde0) >> 0x20);
        uStack_7a0._4_4_ = (float)*(undefined8 *)(local_7c0 + 0xde8);
        uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(local_7c0 + 0xde8) >> 0x20);
        FUN_18028a220(local_7c0 + 0x1fc8,&local_7a8);
        if (*(int *)(local_7c0 + 0x1fc4) != 3) {
          *(undefined4 *)(local_7c0 + 0xde0) = (undefined4)local_3a8;
          *(undefined4 *)(local_7c0 + 0xde4) = local_3a8._4_4_;
          *(undefined4 *)(local_7c0 + 0xde8) = (undefined4)uStack_3a0;
          *(undefined4 *)(local_7c0 + 0xdec) = uStack_3a0._4_4_;
        }
        local_7c0 = 0;
        cVar15 = FUN_180272fa0("##lua_script_list",&local_7c0,1,0);
        if (cVar15 != '\0') {
          if (*(char *)(lVar23 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar23 = *(longlong *)(lVar23 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar23 + 0x1520) + 0xce) = 1;
          if (*(longlong *)(lVar23 + 0x1520) != 0) {
            local_730 = 0;
            uVar25 = uVar30;
            while( true ) {
              lVar23 = *(longlong *)(param_1 + 0x9e0) - *(longlong *)(param_1 + 0x9d8);
              local_7a8._0_4_ = (float)(lVar23 >> 5);
              local_7a8._4_4_ = (float)(lVar23 >> 0x25);
              iVar16 = (int)uVar25;
              if ((int)(float)local_7a8 <= iVar16) break;
              puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x9d8) + (longlong)iVar16 * 0x20);
              if (puVar28[2] == 0) {
                local_730 = iVar16 + 1;
                uVar25 = (ulonglong)local_730;
              }
              else {
                local_7c0 = 0;
                if (0xf < (ulonglong)puVar28[3]) {
                  puVar28 = (undefined8 *)*puVar28;
                }
                cVar15 = FUN_1802c1850(puVar28,iVar16 == *(int *)(param_1 + 0x9f0),0,&local_7c0);
                if (cVar15 != '\0') {
                  *(int *)(param_1 + 0x9f0) = iVar16;
                  pcVar34 = (char *)(*(longlong *)(param_1 + 0x9d8) + (longlong)iVar16 * 0x20);
                  if (0xf < *(ulonglong *)(pcVar34 + 0x18)) {
                    pcVar34 = *(char **)pcVar34;
                  }
                  strncpy_s(local_728,0x60,pcVar34,0xffffffffffffffff);
                  FUN_18024f460(lVar37);
                  FUN_18024f770(lVar37);
                  *(undefined4 *)(param_1 + 0xa80) = 0;
                  *(undefined4 *)(param_1 + 0xa7c) = 0;
                  FUN_1800eb390(param_1);
                }
                local_730 = iVar16 + 1;
                uVar25 = (ulonglong)local_730;
              }
            }
          }
        }
        FUN_180273410();
        FUN_18026a890(1);
        FUN_18026abb0(1);
      }
      FUN_180273410();
      FUN_18026abb0(1);
      FUN_18026a890(2);
      FUN_18027f5b0();
      FUN_18027fc30();
      local_7a8 = (char *)&local_3a8;
      uStack_7a0 = local_3b8;
      uStack_798 = local_318;
      uVar25 = (ulonglong)_tls_index;
      lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
      if (*(char *)(lVar23 + local_768) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar51 = DAT_1803810b8;
      uVar17 = DAT_1803810a0;
      lVar27 = *(longlong *)(*(longlong *)(lVar23 + (longlong)local_7b8) + 0x1520);
      if ((*(longlong *)(lVar27 + 0x1c8) != 0) ||
         (pfVar26 = (float *)(lVar27 + 0x280),
         *(longlong *)(*(longlong *)(lVar23 + (longlong)local_7b8) + 0x2368) != 0)) {
        pfVar26 = (float *)(lVar27 + 0x250);
      }
      fVar43 = ((*pfVar26 - *(float *)(lVar27 + 0x118)) - fVar45) - local_3b8[0] * DAT_1803810b8;
      cVar15 = FUN_1800f50b0(&local_7a8,&DAT_180345d90,0,DAT_1803810a0);
      if (cVar15 != '\0') {
        FUN_18025a7b0(lVar37);
      }
      cVar15 = FUN_18026ee60(0);
      if (cVar15 != '\0') {
        FUN_180280d00("Find / replace  (Ctrl+F)");
      }
      fVar42 = DAT_180380f40;
      if (local_3b8[0] * fVar51 <= fVar43) {
        fVar43 = fVar43 - local_3b8[0] * fVar51;
        FUN_18027f5b0();
        cVar15 = FUN_1800f50b0(&local_7a8,&DAT_18034f86c,0,uVar17);
        if (((cVar15 != '\0') && (*(char *)(param_1 + 0x19) == '\0')) &&
           (*(longlong *)(param_1 + 0x138) != 0)) {
          FUN_180256b20(param_1 + 0x120,lVar37,param_1 + 0x58,param_1 + 0xf8);
          FUN_18024f370(lVar37);
        }
      }
      if (local_3b8[0] * fVar51 <= fVar43) {
        fVar43 = fVar43 - local_3b8[0] * fVar51;
        FUN_18027f5b0();
        cVar15 = FUN_1800f50b0(&local_7a8,&DAT_18034f874,0,uVar17);
        if (((cVar15 != '\0') && (*(char *)(param_1 + 0x19) == '\0')) &&
           (*(ulonglong *)(param_1 + 0x138) <
            (ulonglong)(*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x120) >> 4))) {
          FUN_180256e70((longlong *)(param_1 + 0x120),lVar37,param_1 + 0x58,param_1 + 0xf8);
          FUN_18024f370(lVar37);
        }
      }
      if (local_3b8[0] * fVar41 <= fVar43) {
        fVar43 = fVar43 - local_3b8[0] * fVar41;
        FUN_18027f5b0();
        cVar15 = FUN_1800f50b0(&local_7a8,&DAT_18034f87c,*(undefined1 *)(param_1 + 0x18),
                               DAT_1803810a8);
        if (cVar15 != '\0') {
          *(bool *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) == '\0';
        }
      }
      if (local_3b8[0] * _DAT_1803810d8 <= fVar43) {
        fVar43 = fVar43 - local_3b8[0] * _DAT_1803810d8;
        FUN_18027f5b0();
        cVar15 = FUN_1800f50b0(&local_7a8,"Minimap",*(undefined1 *)(param_1 + 0x28),DAT_1803810cc);
        if (cVar15 != '\0') {
          *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) == '\0';
        }
      }
      pfVar26 = uStack_798;
      if (local_3b8[0] * DAT_1803810cc <= fVar43) {
        FUN_18027f5b0();
        if ((*(char *)(param_1 + 0x1c) == '\0') || (*(char *)(param_1 + 0x1d) == '\0')) {
          uVar20 = 0;
        }
        else {
          uVar20 = 1;
        }
        cVar15 = FUN_1800f50b0(&local_7a8,"Blanks",uVar20,fVar51);
        if (cVar15 != '\0') {
          if ((*(char *)(param_1 + 0x1c) == '\0') || (*(char *)(param_1 + 0x1d) == '\0')) {
            cVar15 = '\x01';
          }
          else {
            cVar15 = '\0';
          }
          *(char *)(param_1 + 0x1c) = cVar15;
          *(char *)(param_1 + 0x1d) = cVar15;
        }
        cVar15 = FUN_18026ee60(0);
        pfVar26 = uStack_798;
        if (cVar15 != '\0') {
          FUN_180280d00("Show spaces and tabs");
          pfVar26 = uStack_798;
        }
      }
      uStack_798._4_4_ = (undefined4)((ulonglong)pfVar26 >> 0x20);
      lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
      if (*(char *)(lVar27 + 0x10) == '\0') {
        uStack_798 = pfVar26;
        __dyn_tls_on_demand_init();
      }
      lVar38 = *(longlong *)(lVar27 + 0xec0);
      local_7a8._0_4_ = 4.2039e-45;
      local_7a8._4_4_ = (float)*(undefined8 *)(lVar38 + 0xde0);
      uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar38 + 0xde0) >> 0x20);
      uStack_7a0._4_4_ = (float)*(undefined8 *)(lVar38 + 0xde8);
      uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar38 + 0xde8) >> 0x20);
      FUN_18028a220(lVar38 + 0x1fc8,&local_7a8);
      if (*(int *)(lVar38 + 0x1fc4) != 3) {
        *(undefined4 *)(lVar38 + 0xde0) = (undefined4)local_398;
        *(undefined4 *)(lVar38 + 0xde4) = local_398._4_4_;
        *(undefined4 *)(lVar38 + 0xde8) = (undefined4)uStack_390;
        *(undefined4 *)(lVar38 + 0xdec) = uStack_390._4_4_;
      }
      if (*(char *)(lVar27 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar38 = (longlong)local_7b8;
      lVar27 = *(longlong *)(lVar23 + (longlong)local_7b8);
      local_7a8._0_4_ = 7.00649e-45;
      local_7a8._4_4_ = (float)*(undefined8 *)(lVar27 + 0xe00);
      uStack_7a0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar27 + 0xe00) >> 0x20);
      uStack_7a0._4_4_ = (float)*(undefined8 *)(lVar27 + 0xe08);
      uStack_798._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0xe08) >> 0x20);
      FUN_18028a220(lVar27 + 0x1fc8,&local_7a8);
      if (*(int *)(lVar27 + 0x1fc4) != 5) {
        *(undefined4 *)(lVar27 + 0xe00) = (undefined4)local_378;
        *(undefined4 *)(lVar27 + 0xe04) = local_378._4_4_;
        *(undefined4 *)(lVar27 + 0xe08) = (undefined4)uStack_370;
        *(undefined4 *)(lVar27 + 0xe0c) = uStack_370._4_4_;
      }
      fVar51 = DAT_180380fa8;
      local_788 = CONCAT44(local_3b8[0] * DAT_180380fa8,local_3b8[0] * DAT_180380fcc);
      FUN_18026aad0(2,&local_788);
      local_788 = CONCAT44((local_75c - local_318[0]) - local_3b8[0] * fVar42,
                           (uint)fVar45 ^ DAT_1803817f0);
      cVar15 = FUN_180272fa0("##lua_editor_surface",&local_788,1,0x800);
      lVar27 = local_768;
      fVar45 = DAT_180380fdc;
      if (cVar15 != '\0') {
        lVar29 = DAT_1803fa5c8;
        if (DAT_1803fa5c8 == 0) {
          if (*(char *)(lVar23 + local_768) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar29 = *(longlong *)(*(longlong *)(lVar23 + lVar38) + 0x1228);
        }
        FUN_18027a8a0(lVar29);
        if (*(char *)(lVar23 + lVar27) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar29 = *(longlong *)(*(longlong *)(lVar23 + lVar38) + 0x1520);
        if ((*(longlong *)(lVar29 + 0x1c8) != 0) ||
           (pfVar26 = (float *)(lVar29 + 0x280),
           *(longlong *)(*(longlong *)(lVar23 + lVar38) + 0x2368) != 0)) {
          pfVar26 = (float *)(lVar29 + 0x250);
        }
        local_788 = CONCAT44(pfVar26[1] - *(float *)(lVar29 + 0x11c),
                             *pfVar26 - *(float *)(lVar29 + 0x118));
        local_808 = (undefined8 *)CONCAT44(local_808._4_4_,0x804);
        FUN_180244270(lVar37,"Lua Loader",&local_788,0);
        if (*(char *)(lVar23 + lVar27) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar37 = *(longlong *)(lVar23 + lVar38);
        if (*(int *)(lVar37 + 0x1fe8) < 1) {
          FUN_18027e9c0("Calling PopFont() too many times!");
        }
        else {
          FUN_18027a5f0(*(undefined8 *)
                         (*(longlong *)(lVar37 + 0x1ff0) + -0x10 +
                         (longlong)*(int *)(lVar37 + 0x1fe8) * 0x10));
          *(int *)(lVar37 + 0x1fe8) = *(int *)(lVar37 + 0x1fe8) + -1;
        }
      }
      FUN_180273410();
      FUN_18026abb0(1);
      FUN_18026a890(2);
      FUN_18027fda0();
      fVar43 = local_75c + local_70c + local_3b8[0] * fVar51;
      fVar51 = local_708 + fVar43;
      local_740 = CONCAT44(fVar51,fVar50);
      fVar41 = local_774 + fVar51;
      fVar50 = local_704 - local_778;
      local_788 = CONCAT44(fVar41,fVar50);
      fVar42 = local_3b8[0] * fVar42;
      uVar17 = FUN_180268ed0(&local_398);
      local_800 = (char **)((ulonglong)local_800 & 0xffffffff00000000);
      local_808._0_4_ = fVar42;
      FUN_180295000(local_758,&local_740,&local_788,uVar17);
      iVar16 = *(int *)(param_1 + 0xa7c);
      if (iVar16 == 1) {
        puVar28 = &local_358;
      }
      else if (iVar16 == 2) {
        puVar28 = &local_348;
      }
      else {
        puVar28 = &local_368;
        if (iVar16 != 3) {
          puVar28 = &local_328;
        }
      }
      local_7a8._0_4_ = (float)*puVar28;
      local_7a8._4_4_ = (float)((ulonglong)*puVar28 >> 0x20);
      uStack_7a0._0_4_ = (float)puVar28[1];
      uStack_7a0._4_4_ = (float)((ulonglong)puVar28[1] >> 0x20);
      uVar19 = FUN_180268ed0(&local_7a8);
      fVar42 = local_780;
      fVar48 = (fVar41 + fVar51) * fVar49;
      local_788 = CONCAT44(fVar48,local_3b8[0] * fVar45 + local_780);
      lVar37 = local_758;
      if (((uVar19 & 0xff000000) != 0) && (fVar49 <= local_3b8[0] * DAT_180380e68)) {
        local_800 = (char **)CONCAT44(local_800._4_4_,0xf);
        local_808._0_4_ = (float)DAT_180380f30;
        FUN_1802941e0(local_758,&local_788,local_3b8[0] * DAT_180380e68,0);
        lVar37 = local_758;
        FUN_1802938c0(local_758,*(undefined8 *)(local_758 + 0x58),*(undefined4 *)(local_758 + 0x50),
                      uVar19);
        *(undefined4 *)(lVar37 + 0x50) = 0;
      }
      lVar27 = *(longlong *)(param_1 + 0xf8);
      uVar24 = (*(longlong *)(param_1 + 0x100) - lVar27 >> 4) * -0x5555555555555555 - 1;
      uVar25 = *(ulonglong *)(param_1 + 0x118);
      if (uVar24 < *(ulonglong *)(param_1 + 0x118)) {
        uVar25 = uVar24;
      }
      if (DAT_1803fa5f0 == 0) {
        local_7f0 = "Client/shared";
      }
      else if (DAT_1803fa5f0 == 1) {
        local_7f0 = "Server";
      }
      else if (DAT_1803fa5f0 == 2) {
        local_7f0 = "Menu";
      }
      else {
        local_7f0 = "Unknown";
      }
      local_7f8 = (char ***)
                  CONCAT44(local_7f8._4_4_,
                           (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 5)
                           * -0x55555555);
      local_800 = (char **)CONCAT44(local_800._4_4_,*(int *)(lVar27 + 0x18 + uVar25 * 0x30) + 1);
      local_808 = (undefined8 *)
                  CONCAT44(local_808._4_4_,*(int *)(lVar27 + 0x10 + uVar25 * 0x30) + 1);
      FUN_180012b20(local_178,0xa0,0xffffffffffffffff,&DAT_18034f8d8);
      lVar27 = local_768;
      if (*(char *)(lVar23 + local_768) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_7d8 = 0;
      local_7e8 = 0;
      local_7f0 = (char *)0x0;
      local_7f8 = (char ***)0x0;
      local_800 = (char **)local_178;
      local_808 = (undefined8 *)CONCAT44(local_808._4_4_,DAT_180381384);
      FUN_18029e350(&local_738,*(undefined8 *)(*(longlong *)(lVar23 + lVar38) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar23 + lVar38) + 0x1238),DAT_180381308);
      fVar45 = DAT_180380fd8;
      fVar46 = (fVar50 - local_3b8[0] * DAT_180380fd8) -
               (float)(int)(local_738._0_4_ + DAT_180380ba8);
      fVar42 = local_3b8[0] * DAT_1803810c8 + fVar42;
      if (fVar46 <= fVar42) {
        fVar46 = fVar42;
      }
      if (*(char *)(lVar23 + lVar27) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar48 = fVar48 - *(float *)(*(longlong *)(lVar23 + lVar38) + 0x1238) * fVar49;
      uVar19 = FUN_180268ed0(&local_328);
      local_788 = CONCAT44(fVar48,fVar46);
      if ((uVar19 & 0xff000000) != 0) {
        if (local_178[0] != '\0') {
          local_7a8._0_4_ = (float)*(undefined8 *)(lVar37 + 0x60);
          local_7a8._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar37 + 0x60) >> 0x20);
          uStack_7a0._0_4_ = (float)*(undefined8 *)(lVar37 + 0x68);
          uStack_7a0._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar37 + 0x68) >> 0x20);
          local_7e0 = 0;
          local_7e8 = local_7e8 & 0xffffffff00000000;
          local_7f0 = (char *)0x0;
          local_7f8 = (char ***)local_178;
          local_800 = (char **)&local_7a8;
          local_808 = (undefined8 *)CONCAT44(local_808._4_4_,uVar19);
          FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar37 + 0x38) + 0x18),lVar37,
                        *(undefined4 *)(*(longlong *)(lVar37 + 0x38) + 0x20),&local_788);
        }
      }
      plVar32 = (longlong *)(param_1 + 0xa58);
      FUN_18016d4c0(&local_310,plVar32);
      if (*(int *)(param_1 + 0xa80) < 1) {
LAB_1800f43dc:
        fVar49 = DAT_180381038;
        fVar45 = local_3b8[0] * fVar45;
        fVar42 = local_3b8[0] * DAT_180381038 + local_780;
        ppppcVar39 = &local_310;
        if (0xf < uStack_2f8) {
          ppppcVar39 = (char ****)local_310;
        }
        puVar28 = &local_348;
        if (*(int *)(param_1 + 0xa7c) != 2) {
          puVar28 = &local_338;
        }
        uVar19 = FUN_180268ed0(puVar28);
        local_788 = CONCAT44(fVar48,fVar42);
        if (*(char *)(lVar23 + lVar27) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar48 = *(float *)(*(longlong *)(lVar23 + (longlong)local_7b8) + 0x1238);
        if (*(char *)(lVar23 + lVar27) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if ((((uVar19 & 0xff000000) != 0) && (ppppcVar39 != (char ****)0x0)) &&
           (*(char *)ppppcVar39 != '\0')) {
          fVar45 = fVar46 - fVar45;
          lVar23 = *(longlong *)(*(longlong *)(lVar23 + (longlong)local_7b8) + 0x1228);
          if (lVar23 == 0) {
            lVar23 = *(longlong *)(*(longlong *)(local_758 + 0x38) + 0x18);
          }
          if (fVar48 == 0.0) {
            fVar48 = *(float *)(*(longlong *)(local_758 + 0x38) + 0x20);
          }
          local_7a8._0_4_ = *(float *)(local_758 + 0x60);
          if (*(float *)(local_758 + 0x60) <= fVar42) {
            local_7a8._0_4_ = fVar42;
          }
          local_7a8._4_4_ = *(float *)(local_758 + 100);
          if (*(float *)(local_758 + 100) <= fVar51) {
            local_7a8._4_4_ = fVar51;
          }
          uStack_7a0._0_4_ = *(float *)(local_758 + 0x68);
          if (fVar45 <= *(float *)(local_758 + 0x68)) {
            uStack_7a0._0_4_ = fVar45;
          }
          uStack_7a0._4_4_ = *(float *)(local_758 + 0x6c);
          if (fVar41 <= *(float *)(local_758 + 0x6c)) {
            uStack_7a0._4_4_ = fVar41;
          }
          local_7e0 = 1;
          local_7e8 = local_7e8 & 0xffffffff00000000;
          local_7f0 = (char *)0x0;
          local_800 = (char **)&local_7a8;
          local_808 = (undefined8 *)CONCAT44(local_808._4_4_,uVar19);
          local_7f8 = (char ***)ppppcVar39;
          FUN_18029e990(lVar23,local_758,fVar48,&local_788);
        }
        local_788 = CONCAT44(fVar43,local_778);
        FUN_18027f6a0(&local_788);
        fVar48 = local_780;
        fVar45 = (fVar50 - local_780) - local_3b8[0] * fVar49;
        if (fVar45 <= DAT_180380bb0) {
          fVar45 = DAT_180380bb0;
        }
        local_788 = CONCAT44(local_774,fVar45);
        cVar15 = FUN_1802ac3c0("##lua_status_jump",&local_788);
        lVar38 = -0x5555555555555555;
        puVar36 = auStack_828;
        if ((cVar15 != '\0') && (puVar36 = auStack_828, 0 < *(int *)(param_1 + 0xa80))) {
          uVar24 = (longlong)*(int *)(param_1 + 0xa80) - 1;
          lVar37 = *(longlong *)(param_1 + 0x58);
          uVar25 = (*(longlong *)(param_1 + 0x60) - lVar37 >> 5) * -0x5555555555555555;
          puVar36 = auStack_828;
          if (uVar25 <= uVar24) {
            uVar24 = uVar25 - 1;
            if (uVar25 < uVar24 || uVar25 - uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180262180();
            }
            goto LAB_1800f464f;
          }
          goto LAB_1800f4669;
        }
      }
      else {
        uVar20 = FUN_180013ba0(local_3d8);
        puVar28 = (undefined8 *)FUN_18022a630(uVar20);
        local_620 = *puVar28;
        uStack_618 = puVar28[1];
        local_610 = puVar28[2];
        uStack_608 = puVar28[3];
        puVar28[2] = 0;
        puVar28[3] = 0xf;
        *(undefined1 *)puVar28 = 0;
        local_7c8 = uVar33 | 0x400;
        puVar28 = (undefined8 *)FUN_18021aef0(&local_620,&DAT_18034f900,6);
        local_640 = *puVar28;
        uStack_638 = puVar28[1];
        local_630 = puVar28[2];
        uStack_628 = puVar28[3];
        puVar28[2] = 0;
        puVar28[3] = 0xf;
        *(undefined1 *)puVar28 = 0;
        local_7c8 = uVar33 | 0xc00;
        lVar37 = *(longlong *)(param_1 + 0xa68);
        if (0xf < *(ulonglong *)(param_1 + 0xa70)) {
          plVar32 = (longlong *)*plVar32;
        }
        puVar28 = (undefined8 *)FUN_18021aef0(&local_640,plVar32);
        ppppcVar39 = (char ****)*puVar28;
        uVar20 = puVar28[1];
        uVar3 = puVar28[2];
        uVar25 = puVar28[3];
        puVar28[2] = 0;
        puVar28[3] = 0xf;
        *(undefined1 *)puVar28 = 0;
        uVar19 = uVar33 | 0xd00;
        local_6c0 = (char ***)ppppcVar39;
        uStack_6b8 = uVar20;
        if (uStack_2f8 < 0x10) {
LAB_1800f4345:
          local_6b0 = 0;
          uStack_6a8 = 0xf;
          local_6c0 = (char ***)((ulonglong)local_6c0 & 0xffffffffffffff00);
          local_7c8 = uVar33 | 0xc00;
          local_310 = (char ***)ppppcVar39;
          uStack_308 = uVar20;
          local_300 = uVar3;
          uStack_2f8 = uVar25;
          FUN_18020e450(&local_6c0);
          local_7c8 = uVar33 | 0x400;
          FUN_18020e450(&local_640);
          local_7c8 = uVar33;
          FUN_18020e450(&local_620);
          FUN_18020e450(local_3d8);
          goto LAB_1800f43dc;
        }
        uVar24 = uStack_2f8 + 1;
        _Memory = (char ****)local_310;
        local_7c8 = uVar19;
        local_6b0 = uVar3;
        uStack_6a8 = uVar25;
        if ((uVar24 < 0x1000) ||
           (_Memory = (char ****)local_310[-1],
           (char *)((longlong)local_310 + (-8 - (longlong)_Memory)) < (char *)0x20)) {
          free(_Memory);
          goto LAB_1800f4345;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar35 = auStack_820;
        fVar49 = fVar45;
        uVar33 = uVar19;
LAB_1800f464f:
        uVar30 = *(longlong *)(uVar24 * 0x60 + 8 + lVar37) - *(longlong *)(uVar24 * 0x60 + lVar37)
                 >> 4;
        puVar36 = puVar35;
LAB_1800f4669:
        *(ulonglong *)(puVar36 + 0x80) = uVar24;
        *(ulonglong *)(puVar36 + 0x88) = uVar30;
        *(undefined8 *)(puVar36 + -8) = 0x1800f468a;
        FUN_18024eda0(param_1 + 8,puVar36 + 0x80);
        iVar16 = *(int *)(param_1 + 0xa80);
        *(undefined8 *)(puVar36 + -8) = 0x1800f469d;
        FUN_1800151b0(param_1 + 8,(longlong)iVar16 + -1);
      }
      *(undefined8 *)(puVar36 + -8) = 0x1800f46a4;
      cVar15 = FUN_18026ee60(0);
      if (cVar15 != '\0') {
        if (*(int *)(param_1 + 0xa80) < 1) {
          puVar31 = puVar36 + 0x518;
          if (0xf < *(ulonglong *)(puVar36 + 0x530)) {
            puVar31 = *(undefined1 **)(puVar36 + 0x518);
          }
          lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar23 + 0x10) == '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1800f4718;
            __dyn_tls_on_demand_init();
          }
          if (puVar31 != (undefined1 *)0x0) {
            lVar23 = *(longlong *)(lVar23 + 0xec0);
            *(undefined4 *)(puVar36 + 0x50) = 0;
            *(undefined8 *)(puVar36 + 0x40) = 0;
            *(undefined8 *)(puVar36 + 0x38) = 0;
            *(undefined8 *)(puVar36 + 0x30) = 0;
            *(undefined1 **)(puVar36 + 0x28) = puVar31;
            *(undefined4 *)(puVar36 + 0x20) = DAT_180381384;
            uVar17 = *(undefined4 *)(lVar23 + 0x1238);
            uVar20 = *(undefined8 *)(lVar23 + 0x1228);
            *(undefined8 *)(puVar36 + -8) = 0x1800f4770;
            FUN_18029e350(puVar36 + 0xf0,uVar20,uVar17,DAT_180381308);
            fVar44 = (float)(int)(*(float *)(puVar36 + 0xf0) + DAT_180380ba8);
          }
          if ((fVar46 - *(float *)(puVar36 + 0x470) * DAT_180380fd8) -
              (*(float *)(puVar36 + 0x470) * fVar49 + fVar48) < fVar44) {
            plVar32 = (longlong *)(param_1 + 0xa58);
            if (0xf < *(ulonglong *)(param_1 + 0xa70)) {
              plVar32 = (longlong *)*plVar32;
            }
            *(undefined8 *)(puVar36 + -8) = 0x1800f47d7;
            FUN_180280d00(&DAT_1803431ac,plVar32);
          }
        }
        else {
          plVar32 = (longlong *)(param_1 + 0xa58);
          if (0xf < *(ulonglong *)(param_1 + 0xa70)) {
            plVar32 = (longlong *)*plVar32;
          }
          *(undefined8 *)(puVar36 + -8) = 0x1800f46d5;
          FUN_180280d00("%s\n\nClick to jump to line %d",plVar32);
        }
      }
      *(undefined8 *)(puVar36 + -8) = 0x1800f47e5;
      FUN_18020e450(puVar36 + 0x518);
      if (puVar36[200] != '\0') {
LAB_1800f482e:
        *(undefined8 *)(puVar36 + -8) = 0x1800f483f;
        FUN_1801fcbd0(param_1 + 0x58,puVar36 + 0x5c0);
        *(uint *)(puVar36 + 0x60) = uVar33 | 0x200;
        if (DAT_1803fa5f0 == 0) {
          pcVar34 = "Client/shared";
        }
        else if (DAT_1803fa5f0 == 1) {
          pcVar34 = "Server";
        }
        else if (DAT_1803fa5f0 == 2) {
          pcVar34 = "Menu";
        }
        else {
          pcVar34 = "Unknown";
        }
        *(undefined8 *)(puVar36 + -8) = 0x1800f4890;
        FUN_180014410("[LUAEDITOR] queued %d bytes for %s\n",*(undefined4 *)(puVar36 + 0x5d0),
                      pcVar34);
        if (DAT_1803fa5f0 == 2) {
LAB_1800f4b5d:
          lVar23 = *(longlong *)(param_1 + 0x60);
          lVar37 = *(longlong *)(param_1 + 0x58);
          *(undefined8 *)(puVar36 + -8) = 0x1800f4b82;
          FUN_1800efd50(puVar36 + 0x5e0,DAT_1803fa5f0,puVar36 + 0x5c0,
                        (lVar23 - lVar37 >> 5) * lVar38);
          if (puVar36[0x628] == '\0') {
            *(undefined8 *)(puVar36 + -8) = 0x1800f4dbc;
            FUN_18024f460(param_1 + 8);
            *(undefined8 *)(puVar36 + -8) = 0x1800f4dc5;
            FUN_18024f770(param_1 + 8);
            *(undefined8 *)(param_1 + 0xa7c) = 1;
            if (DAT_1803fa5f0 == 0) {
              pcVar34 = "Client/shared";
            }
            else if (DAT_1803fa5f0 == 1) {
              pcVar34 = "Server";
            }
            else if (DAT_1803fa5f0 == 2) {
              pcVar34 = "Menu";
            }
            else {
              pcVar34 = "Unknown";
            }
            *(undefined8 *)(puVar36 + 0x368) = 0;
            *(undefined8 *)(puVar36 + 0x370) = 0;
            *(undefined8 *)(puVar36 + 0x378) = 0;
            *(undefined8 *)(puVar36 + 0x380) = 0;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4e3b;
            FUN_18001d080(puVar36 + 0x368,"Ran on ",7);
            *(undefined8 *)(puVar36 + -8) = 0x1800f4e44;
            sVar22 = strlen(pcVar34);
            *(undefined8 *)(puVar36 + -8) = 0x1800f4e57;
            puVar28 = (undefined8 *)FUN_18021aef0(puVar36 + 0x368,pcVar34,sVar22);
            *(undefined8 *)(puVar36 + 0x188) = 0;
            *(undefined8 *)(puVar36 + 400) = 0;
            *(undefined8 *)(puVar36 + 0x198) = 0;
            *(undefined8 *)(puVar36 + 0x1a0) = 0;
            uVar20 = puVar28[1];
            *(undefined8 *)(puVar36 + 0x188) = *puVar28;
            *(undefined8 *)(puVar36 + 400) = uVar20;
            uVar20 = puVar28[3];
            *(undefined8 *)(puVar36 + 0x198) = puVar28[2];
            *(undefined8 *)(puVar36 + 0x1a0) = uVar20;
            puVar28[2] = 0;
            puVar28[3] = 0xf;
            *(undefined1 *)puVar28 = 0;
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x10200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4eba;
            puVar28 = (undefined8 *)FUN_18021aef0(puVar36 + 0x188," - OK",5);
            *(undefined8 *)(puVar36 + 0x358) = 0;
            *(undefined8 *)(puVar36 + 0x360) = 0;
            uVar20 = puVar28[1];
            *(undefined8 *)(puVar36 + 0x348) = *puVar28;
            *(undefined8 *)(puVar36 + 0x350) = uVar20;
            uVar20 = puVar28[3];
            *(undefined8 *)(puVar36 + 0x358) = puVar28[2];
            *(undefined8 *)(puVar36 + 0x360) = uVar20;
            puVar28[2] = 0;
            puVar28[3] = 0xf;
            *(undefined1 *)puVar28 = 0;
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x18200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4f0c;
            FUN_18020e8a0(param_1 + 0xa58,puVar36 + 0x348);
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x10200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4f21;
            FUN_18020e450(puVar36 + 0x348);
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4f36;
            FUN_18020e450(puVar36 + 0x188);
            puVar31 = puVar36 + 0x368;
          }
          else {
            *(undefined8 *)(puVar36 + -8) = 0x1800f4ba8;
            FUN_1800ebc90(param_1,*(undefined4 *)(puVar36 + 0x600),puVar36 + 0x608);
            *(undefined4 *)(param_1 + 0xa7c) = 2;
            if (DAT_1803fa5f0 == 0) {
              pcVar34 = "Client/shared";
            }
            else if (DAT_1803fa5f0 == 1) {
              pcVar34 = "Server";
            }
            else if (DAT_1803fa5f0 == 2) {
              pcVar34 = "Menu";
            }
            else {
              pcVar34 = "Unknown";
            }
            *(undefined8 *)(puVar36 + 0x328) = 0;
            *(undefined8 *)(puVar36 + 0x330) = 0;
            *(undefined8 *)(puVar36 + 0x338) = 0;
            *(undefined8 *)(puVar36 + 0x340) = 0;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4c1d;
            FUN_18001d080(puVar36 + 0x328,"Failed on ",10);
            *(undefined8 *)(puVar36 + -8) = 0x1800f4c26;
            sVar22 = strlen(pcVar34);
            *(undefined8 *)(puVar36 + -8) = 0x1800f4c39;
            puVar28 = (undefined8 *)FUN_18021aef0(puVar36 + 0x328,pcVar34,sVar22);
            *(undefined8 *)(puVar36 + 0x248) = 0;
            *(undefined8 *)(puVar36 + 0x250) = 0;
            *(undefined8 *)(puVar36 + 600) = 0;
            *(undefined8 *)(puVar36 + 0x260) = 0;
            uVar20 = puVar28[1];
            *(undefined8 *)(puVar36 + 0x248) = *puVar28;
            *(undefined8 *)(puVar36 + 0x250) = uVar20;
            uVar20 = puVar28[3];
            *(undefined8 *)(puVar36 + 600) = puVar28[2];
            *(undefined8 *)(puVar36 + 0x260) = uVar20;
            puVar28[2] = 0;
            puVar28[3] = 0xf;
            *(undefined1 *)puVar28 = 0;
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x4200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4c9c;
            puVar28 = (undefined8 *)FUN_18021aef0(puVar36 + 0x248,&DAT_18033e5b0,2);
            *(undefined8 *)(puVar36 + 0x1a8) = 0;
            *(undefined8 *)(puVar36 + 0x1b0) = 0;
            *(undefined8 *)(puVar36 + 0x1b8) = 0;
            *(undefined8 *)(puVar36 + 0x1c0) = 0;
            uVar20 = puVar28[1];
            *(undefined8 *)(puVar36 + 0x1a8) = *puVar28;
            *(undefined8 *)(puVar36 + 0x1b0) = uVar20;
            uVar20 = puVar28[3];
            *(undefined8 *)(puVar36 + 0x1b8) = puVar28[2];
            *(undefined8 *)(puVar36 + 0x1c0) = uVar20;
            puVar28[2] = 0;
            puVar28[3] = 0xf;
            *(undefined1 *)puVar28 = 0;
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x6200;
            puVar31 = puVar36 + 0x608;
            if (0xf < *(ulonglong *)(puVar36 + 0x620)) {
              puVar31 = *(undefined1 **)(puVar36 + 0x608);
            }
            *(undefined8 *)(puVar36 + -8) = 0x1800f4d14;
            puVar28 = (undefined8 *)
                      FUN_18021aef0(puVar36 + 0x1a8,puVar31,*(undefined8 *)(puVar36 + 0x618));
            *(undefined8 *)(puVar36 + 0x318) = 0;
            *(undefined8 *)(puVar36 + 800) = 0;
            uVar20 = puVar28[1];
            *(undefined8 *)(puVar36 + 0x308) = *puVar28;
            *(undefined8 *)(puVar36 + 0x310) = uVar20;
            uVar20 = puVar28[3];
            *(undefined8 *)(puVar36 + 0x318) = puVar28[2];
            *(undefined8 *)(puVar36 + 800) = uVar20;
            puVar28[2] = 0;
            puVar28[3] = 0xf;
            *(undefined1 *)puVar28 = 0;
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x7200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4d66;
            FUN_18020e8a0(param_1 + 0xa58,puVar36 + 0x308);
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x6200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4d7b;
            FUN_18020e450(puVar36 + 0x308);
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x4200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4d90;
            FUN_18020e450(puVar36 + 0x1a8);
            *(uint *)(puVar36 + 0x60) = uVar33 | 0x200;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4da5;
            FUN_18020e450(puVar36 + 0x248);
            puVar31 = puVar36 + 0x328;
          }
          *(undefined8 *)(puVar36 + -8) = 0x1800f4f44;
          FUN_18020e450(puVar31);
          if (puVar36[0x628] != '\0') {
            *(undefined1 **)(puVar36 + 0x80) = puVar36 + 0x5e0;
            *(undefined8 *)(puVar36 + -8) = 0x1800f4f6c;
            FUN_18020e450(puVar36 + 0x608);
            puVar31 = puVar36 + 0x5e0;
            goto LAB_1800f4f75;
          }
        }
        else {
          pcVar2 = *(code **)(*DAT_1803fa668 + 0xd0);
          *(undefined8 *)(puVar36 + -8) = 0x1800f48af;
          cVar15 = (*pcVar2)();
          if (cVar15 == '\0') goto LAB_1800f4b5d;
          *(undefined **)(puVar36 + 0x388) = &DAT_1803e84a0;
          *(undefined8 *)(puVar36 + -8) = 0x1800f48cf;
          iVar16 = _Mtx_lock(&DAT_1803e84a0);
          if (iVar16 != 0) {
            *(undefined8 *)(puVar36 + -8) = 0x1800f48de;
            std::_Throw_Cpp_error(5);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (DAT_1803e84ec == 0x7fffffff) {
            DAT_1803e84ec = 0x7ffffffe;
            *(undefined8 *)(puVar36 + -8) = 0x1800f48ff;
            std::_Throw_Cpp_error(6);
          }
          *(int *)(puVar36 + 0x138) = DAT_1803fa5f0;
          *(undefined8 *)(puVar36 + -8) = 0x1800f4922;
          FUN_18016d4c0(puVar36 + 0x140,puVar36 + 0x5c0);
          puVar7 = DAT_1803eb430;
          lVar38 = (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 5) * lVar38;
          uVar17 = (undefined4)lVar38;
          *(undefined4 *)(puVar36 + 0x160) = uVar17;
          if (DAT_1803eb430 == DAT_1803eb438) {
            *(undefined8 *)(puVar36 + -8) = 0x1800f49c1;
            FUN_180226b80(lVar38,DAT_1803eb430,puVar36 + 0x138);
          }
          else {
            *(undefined4 **)(puVar36 + 0x80) = DAT_1803eb430;
            *DAT_1803eb430 = *(undefined4 *)(puVar36 + 0x138);
            *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar36 + 0x140);
            *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar36 + 0x148);
            *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar36 + 0x150);
            *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar36 + 0x158);
            *(undefined8 *)(puVar36 + 0x150) = 0;
            *(undefined8 *)(puVar36 + 0x158) = 0xf;
            puVar36[0x140] = 0;
            puVar7[10] = uVar17;
            DAT_1803eb430 = DAT_1803eb430 + 0xc;
          }
          *(undefined8 *)(puVar36 + -8) = 0x1800f49cf;
          FUN_18020e450(puVar36 + 0x140);
          *(undefined8 *)(puVar36 + -8) = 0x1800f49d9;
          _Mtx_unlock(&DAT_1803e84a0);
          *(undefined4 *)(param_1 + 0xa7c) = 3;
          if (DAT_1803fa5f0 == 0) {
            pcVar34 = "Client/shared";
          }
          else if (DAT_1803fa5f0 == 1) {
            pcVar34 = "Server";
          }
          else if (DAT_1803fa5f0 == 2) {
            pcVar34 = "Menu";
          }
          else {
            pcVar34 = "Unknown";
          }
          *(undefined8 *)(puVar36 + 0x2e8) = 0;
          *(undefined8 *)(puVar36 + 0x2f0) = 0;
          *(undefined8 *)(puVar36 + 0x2f8) = 0;
          *(undefined8 *)(puVar36 + 0x300) = 0;
          *(undefined8 *)(puVar36 + -8) = 0x1800f4a4e;
          FUN_18001d080(puVar36 + 0x2e8,"Queued for ",0xb);
          *(undefined8 *)(puVar36 + -8) = 0x1800f4a57;
          sVar22 = strlen(pcVar34);
          *(undefined8 *)(puVar36 + -8) = 0x1800f4a6a;
          puVar28 = (undefined8 *)FUN_18021aef0(puVar36 + 0x2e8,pcVar34,sVar22);
          *(undefined8 *)(puVar36 + 0x228) = 0;
          *(undefined8 *)(puVar36 + 0x230) = 0;
          *(undefined8 *)(puVar36 + 0x238) = 0;
          *(undefined8 *)(puVar36 + 0x240) = 0;
          uVar20 = puVar28[1];
          *(undefined8 *)(puVar36 + 0x228) = *puVar28;
          *(undefined8 *)(puVar36 + 0x230) = uVar20;
          uVar20 = puVar28[3];
          *(undefined8 *)(puVar36 + 0x238) = puVar28[2];
          *(undefined8 *)(puVar36 + 0x240) = uVar20;
          puVar28[2] = 0;
          puVar28[3] = 0xf;
          *(undefined1 *)puVar28 = 0;
          *(uint *)(puVar36 + 0x60) = uVar33 | 0x100200;
          *(undefined8 *)(puVar36 + -8) = 0x1800f4acd;
          puVar28 = (undefined8 *)FUN_18021aef0(puVar36 + 0x228,&DAT_18034f96c,3);
          *(undefined8 *)(puVar36 + 0x2d8) = 0;
          *(undefined8 *)(puVar36 + 0x2e0) = 0;
          uVar20 = puVar28[1];
          *(undefined8 *)(puVar36 + 0x2c8) = *puVar28;
          *(undefined8 *)(puVar36 + 0x2d0) = uVar20;
          uVar20 = puVar28[3];
          *(undefined8 *)(puVar36 + 0x2d8) = puVar28[2];
          *(undefined8 *)(puVar36 + 0x2e0) = uVar20;
          puVar28[2] = 0;
          puVar28[3] = 0xf;
          *(undefined1 *)puVar28 = 0;
          *(uint *)(puVar36 + 0x60) = uVar33 | 0x180200;
          *(undefined8 *)(puVar36 + -8) = 0x1800f4b1f;
          FUN_18020e8a0(param_1 + 0xa58,puVar36 + 0x2c8);
          *(uint *)(puVar36 + 0x60) = uVar33 | 0x100200;
          *(undefined8 *)(puVar36 + -8) = 0x1800f4b34;
          FUN_18020e450(puVar36 + 0x2c8);
          uVar33 = uVar33 | 0x200;
          *(uint *)(puVar36 + 0x60) = uVar33;
          *(undefined8 *)(puVar36 + -8) = 0x1800f4b49;
          FUN_18020e450(puVar36 + 0x228);
          puVar31 = puVar36 + 0x2e8;
LAB_1800f4f75:
          *(undefined8 *)(puVar36 + -8) = 0x1800f4f7a;
          FUN_18020e450(puVar31);
        }
        *(uint *)(puVar36 + 0x60) = uVar33 & 0xfffffdff;
        *(undefined8 *)(puVar36 + -8) = 0x1800f4f8f;
        FUN_18020e450(puVar36 + 0x5c0);
        goto LAB_1800f4f8f;
      }
      *(undefined8 *)(puVar36 + -8) = 0x1800f47f9;
      cVar15 = FUN_1802822b0(3);
      lVar23 = *(longlong *)(puVar36 + 0xd8);
      if ((cVar15 != '\0') && (*(char *)(lVar23 + 0x11c) != '\0')) {
        *(undefined8 *)(puVar36 + -8) = 0x1800f4826;
        cVar15 = FUN_18027bb30(0x20d,0,0);
        if (cVar15 != '\0') goto LAB_1800f482e;
      }
      goto LAB_1800f4f97;
    }
    DAT_180409bc1 = '\0';
    FUN_18026a890(3);
    FUN_180278d40();
    FUN_18026a890(5);
    FUN_18026abb0(2);
    FUN_18026abb0(2);
    if (*(char *)(lVar23 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar23 = *(longlong *)(lVar23 + 0xec0);
    if (*(int *)(lVar23 + 0x1fe8) < 1) {
      FUN_18027e9c0("Calling PopFont() too many times!");
      *(undefined1 *)(local_750 + 0x7e) = local_77c;
      puVar36 = auStack_828;
    }
    else {
      FUN_18027a5f0(*(undefined8 *)
                     (*(longlong *)(lVar23 + 0x1ff0) + -0x10 +
                     (longlong)*(int *)(lVar23 + 0x1fe8) * 0x10));
      *(int *)(lVar23 + 0x1fe8) = *(int *)(lVar23 + 0x1fe8) + -1;
      *(undefined1 *)(local_750 + 0x7e) = local_77c;
      puVar36 = auStack_828;
    }
  }
  *(undefined8 *)(puVar36 + -8) = 0x1800f5036;
  FUN_1800ebf00();
  puVar31 = puVar36;
LAB_1800f5036:
  *(undefined8 *)(puVar31 + -8) = 0x1800f5046;
  return;
}


