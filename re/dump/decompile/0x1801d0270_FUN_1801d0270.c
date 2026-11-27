// 0x1801d0270  FUN_1801d0270
// size=14012 thunk=false
// signature: undefined FUN_1801d0270()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d0270(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  size_t *psVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  size_t sVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  float *pfVar21;
  undefined8 ******ppppppuVar22;
  float *pfVar23;
  longlong lVar24;
  int *piVar25;
  undefined **ppuVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *_Buf1;
  undefined8 *puVar29;
  int *piVar30;
  undefined8 *puVar31;
  int iVar32;
  longlong lVar33;
  char **ppcVar34;
  int *piVar35;
  ulonglong uVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  ulonglong uVar39;
  uint uVar40;
  undefined *puVar41;
  int *piVar42;
  int **ppiVar43;
  char *pcVar44;
  undefined1 *puVar45;
  longlong lVar46;
  undefined **ppuVar47;
  bool bVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [24];
  ulonglong *local_488;
  size_t **local_480;
  undefined1 *local_478;
  undefined8 local_470;
  float local_468 [2];
  ulonglong local_460;
  undefined8 local_458;
  char local_448;
  undefined4 local_444;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 *****local_420;
  undefined8 uStack_418;
  ulonglong local_410;
  ulonglong local_408;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  undefined **local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 *****local_3c8;
  undefined8 uStack_3c0;
  ulonglong local_3b8;
  ulonglong local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined *local_388;
  int *local_380;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 *puStack_360;
  undefined8 local_358;
  ulonglong local_350;
  size_t *local_348;
  undefined *puStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 *local_328;
  undefined8 *puStack_320;
  undefined8 local_318;
  longlong local_310;
  longlong lStack_308;
  undefined8 local_300;
  longlong local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  int local_2d8 [2];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 *****local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  ulonglong uStack_2a0;
  undefined2 local_298;
  undefined1 local_296;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 *****local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  ulonglong local_250;
  int local_248 [2];
  undefined8 *****local_240;
  undefined8 uStack_238;
  ulonglong local_230;
  ulonglong local_228;
  longlong local_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined2 local_208;
  undefined1 local_206;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int *local_1d8;
  int *piStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 *****local_1a0 [2];
  size_t local_190;
  ulonglong local_188;
  longlong local_178;
  longlong local_170;
  char local_160;
  undefined8 *****local_158 [3];
  ulonglong local_140;
  char *local_138 [31];
  
  puVar45 = auStack_4a8;
  puVar38 = auStack_4a8;
  puVar37 = auStack_4a8;
  local_138[0xc] = (char *)(DAT_1803da4c0 ^ (ulonglong)auStack_4a8);
  local_444 = 1;
  local_468[0] = 5.60519e-45;
  local_378 = local_378 & 0xffffffff00000000;
  pfVar23 = (float *)&local_378;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar23 = &DAT_1803fb24c;
  }
  pfVar21 = local_468;
  if ((int)DAT_1803fb24c < 5) {
    pfVar21 = pfVar23;
  }
  DAT_1803fb24c = *pfVar21;
  lVar33 = (longlong)(int)DAT_1803fb24c;
  if ((DAT_1805c7af0 & 1) == 0) {
    DAT_1805c7af0 = DAT_1805c7af0 | 1;
    atexit((_func_5014 *)&LAB_18030b350);
  }
  if ((DAT_1805c7af0 & 2) == 0) {
    DAT_1805c7af0 = DAT_1805c7af0 | 2;
    atexit((_func_5014 *)&LAB_18030b340);
  }
  uVar3 = DAT_180381384;
  cVar14 = FUN_18019fbc0("Netvars",0xc,CONCAT44(DAT_180381384,DAT_180381384),0);
  if (cVar14 == '\0') goto LAB_1801d321c;
  if (DAT_1803facfd == '\0') {
    DAT_180423754 = GetTickCount();
  }
  local_1d8 = (int *)0x0;
  piStack_1d0 = (int *)0x0;
  local_1c8 = 0;
  FUN_1800269c0(&local_1d8);
  local_328 = (undefined8 *)0x0;
  puStack_320 = (undefined8 *)0x0;
  local_318 = 0;
  FUN_180026b00(&local_328);
  local_388 = &DAT_1803e9140;
  iVar16 = _Mtx_lock(&DAT_1803e9140);
  if (iVar16 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (DAT_1803e918c == 0x7fffffff) {
    DAT_1803e918c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar46 = lVar33 * 200;
  local_3f0 = &PTR_s_Obsidian_1803dc970 + lVar33 * 0x19;
  if (DAT_180423751 == '\0') {
    FUN_180029fc0();
  }
  local_458 = (ulonglong)_tls_index;
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_458 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar19 + 0x1c8) != 0) ||
     (pfVar23 = (float *)(lVar19 + 0x280),
     *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x2368) != 0)) {
    pfVar23 = (float *)(lVar19 + 0x250);
  }
  fVar54 = (*pfVar23 - *(float *)(lVar19 + 0x118)) * DAT_180380ab4;
  FUN_18027fc30();
  local_368 = (int **)(&DAT_1803dca28 + lVar46);
  FUN_1802aabb0(local_368,"Sources (%d/%d)",
                ((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5,8);
  FUN_18027f5b0(0,uVar3);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar33 + 0xec0);
  uVar50 = *(undefined4 *)(lVar19 + 0xcc8);
  *(undefined4 *)(lVar19 + 0xcc8) = 0;
  local_378 = 0;
  cVar14 = FUN_1802abf60("Refresh##nv",&local_378,0x8000);
  *(undefined4 *)(lVar19 + 0xcc8) = uVar50;
  if (cVar14 != '\0') {
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  cVar14 = FUN_18026ee60(0);
  if (cVar14 != '\0') {
    FUN_180280d00(
                 "Release every cached table reference and walk the paths again.\nNeeded when an addon replaces the table object itself:\na type check cannot see that, the replacement is still a table."
                 );
  }
  FUN_18027f5b0(0,uVar3);
  cVar14 = DAT_180423750;
  local_448 = DAT_180423750;
  if ((DAT_180423750 == '\0') && (DAT_1803facfd == '\0')) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  FUN_180279170(uVar18);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar33 + 0xec0);
  uVar50 = *(undefined4 *)(lVar19 + 0xcc8);
  *(undefined4 *)(lVar19 + 0xcc8) = 0;
  local_378 = 0;
  cVar15 = FUN_1802abf60("Scan##nv",&local_378,0x8000);
  *(undefined4 *)(lVar19 + 0xcc8) = uVar50;
  if (cVar15 != '\0') {
    DAT_180423758 = 1;
  }
  FUN_180279200();
  cVar15 = FUN_18026ee60(0);
  if (cVar15 != '\0') {
    FUN_180280d00(
                 "Walk _G looking for tables that hold per-player data.\nA table counts only if connected players are actually\nfound inside it, so config arrays do not show up."
                 );
  }
  FUN_18027f5b0(0,uVar3);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar33 + 0xec0);
  uVar50 = *(undefined4 *)(lVar19 + 0xcc8);
  *(undefined4 *)(lVar19 + 0xcc8) = 0;
  local_378 = 0;
  cVar15 = FUN_1802abf60("Fields##nv",&local_378,0x8000);
  *(undefined4 *)(lVar19 + 0xcc8) = uVar50;
  local_460 = 0xffffffffffffffff;
  if (cVar15 != '\0') {
    pcVar44 = (char *)&DAT_1803ebb90;
    if (0xf < DAT_1803ebba8) {
      pcVar44 = DAT_1803ebb90;
    }
    strncpy_s(&DAT_1803ffc60,0x81,pcVar44,0xffffffffffffffff);
    pcVar44 = (char *)&DAT_1803e9ae8;
    if (0xf < DAT_1803e9b00) {
      pcVar44 = DAT_1803e9ae8;
    }
    strncpy_s(&DAT_1803fe6b0,0x81,pcVar44,0xffffffffffffffff);
    pcVar44 = (char *)&DAT_1803ea258;
    if (0xf < DAT_1803ea270) {
      pcVar44 = DAT_1803ea258;
    }
    strncpy_s(&DAT_1803fea50,0x81,pcVar44,0xffffffffffffffff);
    FUN_180280fd0("nv_fields");
  }
  cVar15 = FUN_18026ee60(0);
  if (cVar15 != '\0') {
    FUN_180280d00(
                 "Point the BUILT-IN elements (Nickname, Usergroup, Team/Job)\nat your own template. Configure a server once here instead of\ncloning a Netvar element into every layout.\n\nThe override feeds the JOB side of both job elements; the team side\nalways comes from the networked team, so disguise detection keeps\nworking whatever you put here."
                 );
  }
  fVar12 = DAT_180380c50;
  fVar11 = DAT_180380b20;
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar21 = pfVar23;
  }
  fVar51 = *pfVar21 * _DAT_180381220;
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(lVar33 + 0xec0);
  *(uint *)(lVar19 + 0x1f48) = *(uint *)(lVar19 + 0x1f48) | 2;
  *(float *)(lVar19 + 0x1f68) = fVar51;
  *(undefined4 *)(lVar19 + 0x1f6c) = 0;
  *(undefined4 *)(lVar19 + 0x1f50) = 1;
  cVar15 = FUN_18019a680("nv_fields");
  if (cVar15 != '\0') {
    FUN_1802aabb0(&DAT_1803dca28 + lVar46,"Leave a field empty to keep the built-in behaviour.");
    FUN_1802afb40();
    local_138[0] = "Nickname";
    local_138[1] = "##ov_name";
    local_138[2] = &DAT_1803ffc60;
    local_138[3] = "{Name}";
    local_138[4] = "Usergroup";
    local_138[5] = "##ov_group";
    local_138[6] = &DAT_1803fe6b0;
    local_138[7] = "{UserGroup=1@ba.ranks.Stored.NiceName}";
    local_138[8] = "Team/Job";
    local_138[9] = "##ov_job";
    local_138[10] = &DAT_1803fea50;
    local_138[0xb] = "{job}";
    ppcVar34 = local_138;
    do {
      FUN_1802aabb0(&DAT_1803dca28 + lVar46,&DAT_1803431ac,*ppcVar34);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = *(longlong *)(lVar33 + 0xec0);
      puVar1 = (uint *)(lVar19 + 0x1ec0);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(lVar19 + 0x1ed8) = 0xbf800000;
      pcVar44 = ppcVar34[2];
      local_378 = 0;
      local_470 = 0;
      local_478 = (undefined1 *)0x0;
      local_480 = (size_t **)((ulonglong)local_480 & 0xffffffff00000000);
      local_488 = &local_378;
      FUN_1802b74e0(ppcVar34[1],ppcVar34[3],pcVar44,0x81);
      if (*pcVar44 != '\0') {
        local_348 = (size_t *)0x0;
        puStack_340 = (undefined *)0x0;
        local_338 = 0;
        local_330 = 0;
        sVar17 = strlen(pcVar44);
        FUN_18001d080(&local_348,pcVar44,sVar17);
        FUN_1800275b0(local_2d8,&local_348);
        FUN_18020e450(&local_348);
        if ((char)local_2c0 == '\0') {
          ppppppuVar22 = &local_2b8;
          if (0xf < uStack_2a0) {
            ppppppuVar22 = (undefined8 ******)local_2b8;
          }
          FUN_1802aabb0(&DAT_1803dca08 + lVar46,&DAT_1803431ac,ppppppuVar22);
        }
        FUN_18020e450(&local_2b8);
        FUN_18021d530(local_2d8);
      }
      ppcVar34 = ppcVar34 + 4;
    } while (ppcVar34 != local_138 + 0xc);
    FUN_1802afb40();
    local_378 = 0x41d00000bf800000;
    local_348 = *(size_t **)(&DAT_1803dc9e8 + lVar46);
    puStack_340 = *(undefined **)(&DAT_1803dc9f0 + lVar46);
    local_480 = (size_t **)CONCAT71(local_480._1_7_,1);
    local_488 = (ulonglong *)CONCAT71(local_488._1_7_,1);
    cVar15 = FUN_18019cb40("Apply##nv_fields",7,&local_378,&local_348);
    cVar14 = local_448;
    if (cVar15 != '\0') {
      local_348 = (size_t *)0x0;
      puStack_340 = (undefined *)0x0;
      local_338 = 0;
      local_330 = 0;
      sVar17 = strlen(&DAT_1803ffc60);
      FUN_18001d080(&local_348,&DAT_1803ffc60,sVar17);
      uVar18 = FUN_180029880(local_2d8,&local_348,0x80);
      FUN_18020e8a0(&DAT_1803ebb90,uVar18);
      FUN_18020e450(local_2d8);
      FUN_18020e450(&local_348);
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      local_3d0 = 0;
      sVar17 = strlen(&DAT_1803fe6b0);
      FUN_18001d080(&local_3e8,&DAT_1803fe6b0,sVar17);
      uVar18 = FUN_180029880(local_2d8,&local_3e8,0x80);
      FUN_18020e8a0(&DAT_1803e9ae8,uVar18);
      FUN_18020e450(local_2d8);
      FUN_18020e450(&local_3e8);
      local_440 = 0;
      uStack_438 = 0;
      local_430 = 0;
      local_428 = 0;
      sVar17 = strlen(&DAT_1803fea50);
      FUN_18001d080(&local_440,&DAT_1803fea50,sVar17);
      uVar18 = FUN_180029880(local_2d8,&local_440,0x80);
      FUN_18020e8a0(&DAT_1803ea258,uVar18);
      FUN_18020e450(local_2d8);
      FUN_18020e450(&local_440);
      LOCK();
      DAT_1803e9190 = DAT_1803e9190 + 1;
      UNLOCK();
      FUN_180281560();
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  puVar41 = &DAT_1803dca28 + lVar46;
  if (cVar14 == '\0') {
    if (DAT_180423744 < 1) {
      FUN_1802aabb0(puVar41,"Press Scan to look for stores.");
    }
    else {
      local_488 = (ulonglong *)CONCAT44(local_488._4_4_,DAT_18042374c);
      FUN_1802aabb0(puVar41,"Found %d in %d nodes / %dms",
                    (longlong)puStack_320 - (longlong)local_328 >> 6,DAT_180423744);
    }
  }
  else {
    FUN_1802aabb0(puVar41,"Scanning... %d nodes",DAT_180423748);
  }
  local_3fc = 1.5;
  local_400 = 0.75;
  pfVar23 = &local_400;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = &local_3fc;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  fVar51 = *pfVar21;
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar19 + 0x1c8) != 0) ||
     (pfVar23 = (float *)(lVar19 + 0x284),
     *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x2368) != 0)) {
    pfVar23 = (float *)(lVar19 + 0x254);
  }
  fVar52 = (*pfVar23 - *(float *)(lVar19 + 0x11c)) - fVar51 * _DAT_180381128;
  FUN_18026a810(3,&DAT_1803dc9a8 + lVar46);
  FUN_18026a810(5,&DAT_1803dc9b8 + lVar46);
  fVar51 = DAT_1803810c8;
  local_3f4 = 1.5;
  local_3f8 = 0.75;
  pfVar23 = &local_3f8;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = &local_3f4;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  if (fVar52 <= *pfVar21 * DAT_1803810c8) {
    local_468[0] = 1.5;
    local_378 = CONCAT44(local_378._4_4_,0x3f400000);
    pfVar23 = (float *)&local_378;
    if (fVar11 <= DAT_1803da6a4) {
      pfVar23 = &DAT_1803da6a4;
    }
    pfVar21 = local_468;
    if (DAT_1803da6a4 <= fVar12) {
      pfVar21 = pfVar23;
    }
    fVar52 = *pfVar21 * DAT_1803810c8;
  }
  local_378 = CONCAT44(fVar52,fVar54);
  FUN_180272fa0("##nv_list",&local_378,1,0);
  iVar16 = 0;
  if (0 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b) {
    do {
      piVar42 = DAT_1803e9b08;
      lVar19 = (longlong)iVar16;
      if (local_1d8 != piStack_1d0) {
        piVar35 = local_1d8;
        do {
          if (*piVar35 == DAT_1803e9b08[lVar19 * 0x1a]) goto LAB_1801d0daf;
          piVar35 = piVar35 + 8;
        } while (piVar35 != piStack_1d0);
      }
      piVar35 = (int *)0x0;
LAB_1801d0daf:
      if ((char)DAT_1803e9b08[lVar19 * 0x1a + 0x10] == '\0') {
        pcVar44 = "disabled";
      }
      else if (piVar35 == (int *)0x0) {
LAB_1801d0de1:
        pcVar44 = "waiting";
      }
      else if ((char)piVar35[1] == '\0') {
        pcVar44 = "not on this server";
        if (*(char *)((longlong)piVar35 + 5) == '\0') goto LAB_1801d0de1;
      }
      else {
        pcVar44 = "resolved";
      }
      lVar24 = *(longlong *)(DAT_1803e9b08 + lVar19 * 0x1a + 0xc) -
               *(longlong *)(DAT_1803e9b08 + lVar19 * 0x1a + 10) >> 5;
      local_480 = (size_t **)&DAT_18034e198;
      if (lVar24 == 1) {
        local_480 = (size_t **)&DAT_18033e5ea;
      }
      local_488 = (ulonglong *)CONCAT44(local_488._4_4_,(int)lVar24);
      FUN_180012ac0(local_2d8,0x60,"%s - %d key%s",pcVar44);
      if ((char)piVar42[lVar19 * 0x1a + 0x10] == '\0') {
        puVar27 = (undefined8 *)(&DAT_1803dca28 + lVar46);
      }
      else if (piVar35 == (int *)0x0) {
LAB_1801d0e54:
        puVar27 = (undefined8 *)(&DAT_1803dca28 + lVar46);
      }
      else if ((char)piVar35[1] == '\0') {
        puVar27 = (undefined8 *)(&DAT_1803dca08 + lVar46);
        if (*(char *)((longlong)piVar35 + 5) == '\0') goto LAB_1801d0e54;
      }
      else {
        puVar27 = (undefined8 *)(&DAT_1803dc9e8 + lVar46);
      }
      psVar8 = (size_t *)*puVar27;
      puVar41 = (undefined *)puVar27[1];
      FUN_18027ae00(iVar16);
      if ((DAT_1803e7038 == 0) && (piVar42[lVar19 * 0x1a] == DAT_18042610c)) {
        uVar18 = 1;
      }
      else {
        uVar18 = 0;
      }
      if (*(longlong *)(piVar42 + lVar19 * 0x1a + 6) == 0) {
        pcVar44 = "(empty path)";
      }
      else {
        pcVar44 = (char *)(piVar42 + lVar19 * 0x1a + 2);
        if (0xf < *(ulonglong *)((longlong)pcVar44 + 0x18)) {
          pcVar44 = *(char **)pcVar44;
        }
      }
      local_478 = (undefined1 *)((ulonglong)local_478 & 0xffffffffffffff00);
      local_480 = &local_348;
      local_488 = (ulonglong *)CONCAT71(local_488._1_7_,1);
      local_348 = psVar8;
      puStack_340 = puVar41;
      cVar14 = FUN_1801c81a0(&DAT_180370c08,pcVar44,local_2d8,uVar18);
      if (cVar14 != '\0') {
        DAT_18042610c = piVar42[lVar19 * 0x1a];
        DAT_1803e7038 = 0;
        puVar27 = &DAT_1803e7028;
        if (0xf < DAT_1803e7040) {
          puVar27 = DAT_1803e7028;
        }
        *(undefined1 *)puVar27 = 0;
      }
      if (*(char *)(lVar33 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
      iVar32 = *(int *)(lVar19 + 0x108);
      if (iVar32 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar19 + 0x108) = iVar32 + -1;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  }
  if (DAT_1803e9b08 == DAT_1803e9b10) {
    FUN_1802aabb0(&DAT_1803dca28 + lVar46,"No sources. Press Add or Scan.");
  }
  if (0 < (int)((longlong)puStack_320 - (longlong)local_328 >> 6)) {
    fVar52 = 0.0;
    local_468[0] = 0.0;
    iVar16 = 0;
    local_378 = local_378 & 0xffffffff00000000;
    puVar27 = local_328;
    piVar42 = DAT_1803e9b08;
    do {
      piVar35 = DAT_1803e9b10;
      puVar31 = puVar27 + (longlong)iVar16 * 8;
      local_348 = puVar31 + 2;
      if (piVar42 != DAT_1803e9b10) {
        uVar39 = puVar31[3];
        sVar17 = *local_348;
        piVar30 = piVar42;
        do {
          piVar25 = piVar30 + 2;
          puVar28 = puVar31;
          if (0xf < uVar39) {
            puVar28 = (undefined8 *)*puVar31;
          }
          sVar4 = *(size_t *)(piVar30 + 6);
          if (0xf < *(ulonglong *)(piVar30 + 8)) {
            piVar25 = *(int **)piVar25;
          }
          if ((sVar4 == sVar17) &&
             ((fVar52 = local_468[0], sVar4 == 0 ||
              (iVar16 = memcmp(piVar25,puVar28,sVar4), fVar52 = local_468[0], iVar16 == 0))))
          goto LAB_1801d1252;
          piVar30 = piVar30 + 0x1a;
          fVar52 = local_468[0];
        } while (piVar30 != piVar35);
      }
      psVar8 = local_348;
      uVar39 = local_458;
      pvVar13 = ThreadLocalStoragePointer;
      if (fVar52 == 0.0) {
        lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_458 * 8);
        if (*(char *)(lVar33 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar33 = *(longlong *)(lVar33 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar33 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar33 + 0x1520) + 0xd1) == '\0') {
          local_3e8 = 0;
          FUN_18027f400(&local_3e8,uVar3);
        }
        FUN_1802aabb0(local_368,"Found by scan");
      }
      fVar52 = (float)((int)fVar52 + 1);
      lVar33 = (longlong)(puVar31[6] - puVar31[5]) >> 5;
      local_488 = (ulonglong *)&DAT_18034e198;
      local_478 = &DAT_18034e198;
      if (lVar33 == 1) {
        local_478 = &DAT_18033e5ea;
      }
      if (*(int *)(puVar31 + 4) == 1) {
        local_488 = (ulonglong *)&DAT_18033e5ea;
      }
      local_480 = (size_t **)CONCAT44(local_480._4_4_,(int)lVar33);
      local_468[0] = fVar52;
      FUN_180012ac0(local_2d8,0x60,"%d player%s - %d key%s");
      FUN_18027ae00((int)(float)local_378 + 10000);
      uVar36 = puVar31[3];
      puVar27 = puVar31;
      if (0xf < uVar36) {
        puVar27 = (undefined8 *)*puVar31;
      }
      puVar28 = &DAT_1803e7028;
      if (0xf < DAT_1803e7040) {
        puVar28 = DAT_1803e7028;
      }
      if (DAT_1803e7038 == *psVar8) {
        if (DAT_1803e7038 == 0) {
          bVar48 = true;
        }
        else {
          iVar16 = memcmp(puVar28,puVar27,DAT_1803e7038);
          bVar48 = iVar16 == 0;
        }
      }
      else {
        bVar48 = false;
      }
      puVar27 = puVar31;
      if (0xf < uVar36) {
        puVar27 = (undefined8 *)*puVar31;
      }
      local_348 = (size_t *)local_3f0[0xb];
      puStack_340 = local_3f0[0xc];
      local_478 = (undefined1 *)((ulonglong)local_478 & 0xffffffffffffff00);
      local_480 = &local_348;
      local_488 = (ulonglong *)CONCAT71(local_488._1_7_,1);
      cVar14 = FUN_1801c81a0(&DAT_180370c58,puVar27,local_2d8,bVar48);
      if (cVar14 != '\0') {
        if ((undefined8 **)puVar31 != &DAT_1803e7028) {
          puVar27 = puVar31 + 2;
          if (0xf < (ulonglong)puVar31[3]) {
            puVar31 = (undefined8 *)*puVar31;
          }
          FUN_180212700(&DAT_1803e7028,puVar31,*puVar27);
        }
        DAT_18042610c = 0;
      }
      lVar33 = *(longlong *)((longlong)pvVar13 + uVar39 * 8);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar33 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
      iVar16 = *(int *)(lVar33 + 0x108);
      if (iVar16 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
        puVar27 = local_328;
        piVar42 = DAT_1803e9b08;
      }
      else {
        *(int *)(lVar33 + 0x108) = iVar16 + -1;
        puVar27 = local_328;
        piVar42 = DAT_1803e9b08;
      }
LAB_1801d1252:
      iVar16 = (int)(float)local_378 + 1;
      local_378 = CONCAT44(local_378._4_4_,iVar16);
    } while (iVar16 < (int)((longlong)puStack_320 - (longlong)puVar27 >> 6));
  }
  FUN_180273410();
  FUN_18026a890(2);
  fVar52 = DAT_180380f40;
  fVar54 = (fVar54 - DAT_180380f40) * DAT_180380ac0;
  FUN_180279170(7 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  ppuVar47 = local_3f0;
  local_458 = CONCAT44(0x41d00000,fVar54);
  local_368 = (int **)local_3f0[0xf];
  puStack_360 = (undefined8 *)local_3f0[0x10];
  local_480 = (size_t **)CONCAT71(local_480._1_7_,1);
  local_488 = (ulonglong *)CONCAT71(local_488._1_7_,1);
  cVar14 = FUN_18019cb40("Add##nv",10,&local_458,&local_368);
  iVar16 = DAT_1803e9130;
  piVar42 = (int *)0x0;
  if (cVar14 != '\0') {
    uStack_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = (undefined8 ******)0xf;
    local_2d0 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 1;
    local_296 = 1;
    uStack_288 = 0;
    local_280 = 0;
    local_278 = 0xf;
    local_290 = 0;
    local_2d8[0] = DAT_1803e9130;
    if (DAT_1803e9b10 == DAT_1803e9b18) {
      DAT_1803e9130 = DAT_1803e9130 + 1;
      FUN_180229900(iVar16,DAT_1803e9b10,local_2d8);
    }
    else {
      DAT_1803e9130 = DAT_1803e9130 + 1;
      FUN_180233350();
      DAT_1803e9b10 = DAT_1803e9b10 + 0x1a;
    }
    DAT_18042610c = local_2d8[0];
    DAT_180426180 = 0;
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
    FUN_18020e450(&local_290);
    FUN_18020d5c0(&local_2b0);
    FUN_18020e450(&local_2d0);
  }
  FUN_180279200();
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  FUN_18027f5b0(0,*pfVar21 * fVar52);
  piVar35 = piVar42;
  if (0 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b) {
    do {
      uVar40 = (uint)piVar35;
      if (DAT_1803e9b08[(longlong)(int)uVar40 * 0x1a] == DAT_18042610c) goto LAB_1801d14bf;
      piVar35 = (int *)(ulonglong)(uVar40 + 1);
    } while ((int)(uVar40 + 1) <
             (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  }
  uVar40 = 0xffffffff;
LAB_1801d14bf:
  FUN_180279170(uVar40 >> 0x1f);
  local_458 = CONCAT44(0x41d00000,fVar54);
  local_368 = (int **)ppuVar47[0x13];
  puStack_360 = (undefined8 *)ppuVar47[0x14];
  local_480 = (size_t **)CONCAT71(local_480._1_7_,1);
  local_488 = (ulonglong *)CONCAT71(local_488._1_7_,1);
  cVar14 = FUN_18019cb40("Remove##nv",9,&local_458,&local_368);
  piVar35 = DAT_1803e9b10;
  if ((cVar14 != '\0') &&
     (piVar30 = piVar42,
     0 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b)) {
    do {
      iVar16 = (int)piVar30;
      if (DAT_1803e9b08[(longlong)iVar16 * 0x1a] == DAT_18042610c) {
        if (-1 < iVar16) {
          piVar30 = DAT_1803e9b08 + (longlong)iVar16 * 0x1a;
          piVar25 = DAT_1803e9b10;
          piVar10 = piVar30;
          while (piVar9 = piVar10 + 0x1a, DAT_1803e9b10 = piVar25, piVar9 != piVar35) {
            *piVar30 = *piVar9;
            FUN_18020e8a0(piVar30 + 2,piVar9 + 2);
            FUN_18020d830(piVar30 + 10,piVar9 + 10);
            *(char *)(piVar30 + 0x10) = (char)piVar9[0x10];
            *(undefined1 *)((longlong)piVar30 + 0x41) = *(undefined1 *)((longlong)piVar10 + 0xa9);
            *(undefined1 *)((longlong)piVar30 + 0x42) = *(undefined1 *)((longlong)piVar10 + 0xaa);
            FUN_18020e8a0(piVar30 + 0x12,piVar9 + 0x12);
            piVar30 = piVar30 + 0x1a;
            piVar25 = DAT_1803e9b10;
            piVar10 = piVar9;
          }
          local_368 = (int **)(piVar25 + -0x1a);
          FUN_18020e450(piVar25 + -8);
          FUN_18020d5c0(piVar25 + -0x10);
          FUN_18020e450(piVar25 + -0x18);
          DAT_1803e9b10 = DAT_1803e9b10 + -0x1a;
          DAT_18042610c = 0;
          LOCK();
          DAT_1803e9190 = DAT_1803e9190 + 1;
          UNLOCK();
        }
        break;
      }
      piVar30 = (int *)(ulonglong)(iVar16 + 1U);
    } while ((int)(iVar16 + 1U) <
             (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  }
  FUN_180279200();
  piVar35 = piVar42;
  if (0 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b) {
    do {
      iVar16 = (int)piVar35;
      if (DAT_1803e9b08[(longlong)iVar16 * 0x1a] == DAT_18042610c) goto LAB_1801d1684;
      piVar35 = (int *)(ulonglong)(iVar16 + 1U);
    } while ((int)(iVar16 + 1U) <
             (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  }
  iVar16 = -1;
LAB_1801d1684:
  FUN_180279170(iVar16 < 1);
  fVar53 = DAT_180381038;
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  local_458 = CONCAT44(*pfVar21 * DAT_180381038,fVar54);
  cVar14 = FUN_1802abf60("Up##nv",&local_458,0);
  if ((cVar14 != '\0') &&
     (piVar35 = piVar42,
     0 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b)) {
    do {
      iVar16 = (int)piVar35;
      if (DAT_1803e9b08[(longlong)iVar16 * 0x1a] == DAT_18042610c) {
        if (0 < iVar16) {
          FUN_180208b60(DAT_1803e9b08 + (longlong)iVar16 * 0x1a,
                        DAT_1803e9b08 + (longlong)(iVar16 + -1) * 0x1a);
          LOCK();
          DAT_1803e9190 = DAT_1803e9190 + 1;
          UNLOCK();
        }
        break;
      }
      piVar35 = (int *)(ulonglong)(iVar16 + 1U);
    } while ((int)(iVar16 + 1U) <
             (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  }
  FUN_180279200();
  local_468[0] = 1.5;
  local_378._0_4_ = 0.75;
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  FUN_18027f5b0(0,*pfVar21 * fVar52);
  piVar35 = piVar42;
  if (0 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b) {
    do {
      iVar16 = (int)piVar35;
      if (DAT_1803e9b08[(longlong)iVar16 * 0x1a] == DAT_18042610c) {
        if (iVar16 < 0) goto LAB_1801d180b;
        iVar32 = iVar16 + 1;
        if ((int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b <= iVar32)
        goto LAB_1801d180e;
        uVar18 = 0;
        goto LAB_1801d1810;
      }
      piVar35 = (int *)(ulonglong)(iVar16 + 1U);
    } while ((int)(iVar16 + 1U) <
             (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b);
  }
  iVar16 = -1;
LAB_1801d180b:
  iVar32 = iVar16 + 1;
LAB_1801d180e:
  uVar18 = 1;
LAB_1801d1810:
  FUN_180279170(uVar18);
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  local_458 = CONCAT44(*pfVar21 * fVar53,fVar54);
  cVar14 = FUN_1802abf60("Down##nv",&local_458,0);
  if (((cVar14 != '\0') && (-1 < iVar16)) &&
     (iVar32 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) * -0x3b13b13b)) {
    FUN_180208b60(DAT_1803e9b08 + (longlong)iVar16 * 0x1a,DAT_1803e9b08 + (longlong)iVar32 * 0x1a);
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  FUN_180279200();
  FUN_1802aabb0(ppuVar47 + 0x17,"Order = priority.");
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  FUN_18027f5b0(0,*pfVar21 * DAT_180380fcc);
  uVar39 = (ulonglong)_tls_index;
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar46 = *(longlong *)(lVar33 + 0xec0);
  uVar50 = *(undefined4 *)(lVar46 + 0xcc8);
  *(undefined4 *)(lVar46 + 0xcc8) = 0;
  local_458 = 0;
  cVar14 = FUN_1802abf60("Debug##nv_dbg",&local_458,0x8000);
  *(undefined4 *)(lVar46 + 0xcc8) = uVar50;
  if (cVar14 != '\0') {
    if (*(char *)(lVar33 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar33 = *(longlong *)(lVar33 + 0xec0);
    plVar20 = *(longlong **)(lVar33 + 0x1520);
    iVar16 = FUN_180268980("nv_debug",0,
                           *(undefined4 *)(plVar20[0x22] + -4 + (longlong)(int)plVar20[0x21] * 4));
    if (*(int *)(*plVar20 + 0x1578) == iVar16) {
      FUN_1802899e0(iVar16,0xb,"nv_debug");
    }
    if ((*(byte *)(lVar33 + 0x28e4) & 8) != 0) {
      FUN_180289170("[popup] OpenPopup(\"%s\" -> 0x%08X)\n","nv_debug",iVar16);
    }
    FUN_180281080(iVar16,0);
    uVar39 = (ulonglong)_tls_index;
  }
  cVar14 = FUN_18026ee60(0);
  if (cVar14 != '\0') {
    FUN_180280d00(
                 "Diagnostics for reversing where a value comes from.\nThey report to the log only."
                 );
  }
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  fVar54 = *pfVar21 * _DAT_180381224;
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  *(uint *)(lVar33 + 0x1f48) = *(uint *)(lVar33 + 0x1f48) | 2;
  *(float *)(lVar33 + 0x1f68) = fVar54;
  *(undefined4 *)(lVar33 + 0x1f6c) = 0;
  *(undefined4 *)(lVar33 + 0x1f50) = 1;
  cVar14 = FUN_18019a680("nv_debug");
  if (cVar14 != '\0') {
    FUN_1802aabb0(ppuVar47 + 0x17,
                  "These write to the log. Nothing here changes what you see in game,");
    FUN_1802aabb0(ppuVar47 + 0x17,"except the read path below, which verifies itself either way.");
    FUN_1802afb40();
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0x1efab65b168823bb;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    uVar18 = FUN_1801fcfc0(*plVar20 + 0x28);
    FUN_1801a0b60("Native NW reads##nv_nativeread",uVar18);
    cVar14 = FUN_18026ee60(0);
    if (cVar14 != '\0') {
      FUN_180280d00(&DAT_180370de0);
    }
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0x1efab65b168823bb;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    pcVar44 = (char *)FUN_1801fcfc0(*plVar20 + 0x28);
    if (*pcVar44 != '\0') {
      FUN_18027f5b0(0,uVar3);
      if (DAT_1803ffc2c == '\0') {
        ppuVar26 = ppuVar47 + 0xf;
        pcVar44 = "live";
      }
      else {
        ppuVar26 = ppuVar47 + 0x13;
        pcVar44 = "self-check failed - using Lua";
      }
      FUN_1802aabb0(ppuVar26,pcVar44);
    }
    FUN_1802afb40();
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0xf13ca7dd4fb3e293;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    uVar18 = FUN_1801fcfc0(*plVar20 + 0x28);
    FUN_1801a0b60("Native store probe (log)##nv_native",uVar18);
    cVar14 = FUN_18026ee60(0);
    if (cVar14 != '\0') {
      FUN_180280d00(
                   "Walks the native NW store and compares every key against the\nLua route, counting agreements and mismatches. Full detail on\nthe first pass after you enable it, then only summaries and\nanything that disagrees."
                   );
    }
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0xf13ca7dd4fb3e293;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    pcVar44 = (char *)FUN_1801fcfc0(*plVar20 + 0x28);
    if (*pcVar44 != '\0') {
      FUN_18027f5b0(0,uVar3);
      if (DAT_1803e7830 == -1) {
        ppuVar26 = ppuVar47 + 0x17;
        pcVar44 = "resolving";
      }
      else if (DAT_1803e7830 == 0) {
        ppuVar26 = ppuVar47 + 0x13;
        pcVar44 = "manager not found";
      }
      else {
        ppuVar26 = ppuVar47 + 0xf;
        pcVar44 = "mgr ok";
      }
      FUN_1802aabb0(ppuVar26,pcVar44);
    }
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0xf25e6b861d4180c9;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    uVar18 = FUN_1801fcfc0(*plVar20 + 0x28);
    FUN_1801a0b60("Wire probe (log)##nv_wire",uVar18);
    cVar14 = FUN_18026ee60(0);
    if (cVar14 != '\0') {
      FUN_180280d00(&DAT_1803710c0);
    }
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0xf25e6b861d4180c9;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    pcVar44 = (char *)FUN_1801fcfc0(*plVar20 + 0x28);
    if (*pcVar44 != '\0') {
      FUN_18027f5b0(0,uVar3);
      pcVar44 = "checking layout";
      ppuVar26 = ppuVar47 + 0xf;
      if (DAT_1803fe378 < 1) {
        ppuVar26 = ppuVar47 + 0x17;
      }
      else {
        pcVar44 = "layout ok";
      }
      FUN_1802aabb0(ppuVar26,pcVar44);
    }
    local_368 = (int **)0x93fd561a96ab0c67;
    plVar20 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_458,&local_368);
    local_348 = (size_t *)0xd1ec5445d87064a8;
    plVar20 = (longlong *)FUN_180241a30(*plVar20 + 0x28,&local_3e8,&local_348);
    uVar18 = FUN_1801fcfc0(*plVar20 + 0x28);
    FUN_1801a0b60("SWEP Lua calls (log)##se_probe",uVar18);
    cVar14 = FUN_18026ee60(0);
    if (cVar14 != '\0') {
      FUN_180280d00(&DAT_180371220);
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  FUN_18027fda0();
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  FUN_18027f5b0(0);
  FUN_18027fc30();
  puVar31 = puStack_320;
  uVar36 = DAT_1803e7040;
  sVar17 = DAT_1803e7038;
  puVar27 = DAT_1803e7028;
  local_380 = DAT_1803e9b08;
joined_r0x0001801d1eeb:
  if (local_380 == DAT_1803e9b10) goto LAB_1801d1f00;
  if (*local_380 != DAT_18042610c) goto code_r0x0001801d1ef7;
  if (local_380 == (int *)0x0) goto LAB_1801d1f04;
  if (DAT_180426180 != *local_380) {
    piVar35 = local_380 + 2;
    if (0xf < *(ulonglong *)(local_380 + 8)) {
      piVar35 = *(int **)piVar35;
    }
    strncpy_s(&DAT_1803fe5c0,0x81,(char *)piVar35,0xffffffffffffffff);
    DAT_180426180 = *local_380;
    DAT_1803da5a8 = 0;
    puVar45 = &DAT_1803da598;
    if (0xf < DAT_1803da5b0) {
      puVar45 = _DAT_1803da598;
    }
    *puVar45 = 0;
  }
  FUN_1802aabb0(ppuVar47 + 0x17,"Table path");
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar54 = DAT_1803810d4;
  lVar46 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar46 + 0x1c8) != 0) ||
     (pfVar23 = (float *)(lVar46 + 0x280),
     *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x2368) != 0)) {
    pfVar23 = (float *)(lVar46 + 0x250);
  }
  fVar53 = (*pfVar23 - *(float *)(lVar46 + 0x118)) - DAT_1803810d4;
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  puVar1 = (uint *)(lVar33 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar33 + 0x1ed8) = fVar53;
  local_458 = 0;
  local_470 = 0;
  local_478 = (undefined1 *)0x0;
  local_480 = (size_t **)CONCAT44(local_480._4_4_,0x40);
  local_488 = &local_458;
  cVar14 = FUN_1802b74e0("##nv_path","axe.netvar.data  or  @nwvars",&DAT_1803fe5c0,0x81);
  local_468[0] = 1.5;
  local_378._0_4_ = 0.75;
  FUN_18027f5b0(0);
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  local_458 = (ulonglong)(uint)(*pfVar21 * fVar51);
  cVar15 = FUN_1802abf60("Apply##nv_path",&local_458,0);
  if ((cVar14 != '\0') || (cVar15 != '\0')) {
    local_310 = 0;
    lStack_308 = 0;
    local_300 = 0;
    uStack_260 = 0;
    local_258 = 0;
    local_250 = 0xf;
    local_268 = (undefined8 ******)0x0;
    local_440 = 0;
    uStack_438 = 0;
    local_430 = 0;
    local_428 = 0;
    sVar17 = strlen(&DAT_1803fe5c0);
    FUN_18001d080(&local_440,&DAT_1803fe5c0,sVar17);
    cVar14 = FUN_180026bc0(&local_440,&local_310,&local_268);
    FUN_18020e450(&local_440);
    if (cVar14 == '\0') {
      ppppppuVar22 = &local_268;
      if (0xf < local_250) {
        ppppppuVar22 = (undefined8 ******)local_268;
      }
      FUN_180212700(&DAT_1803da598,ppppppuVar22,local_258);
    }
    else {
      cVar14 = FUN_180027310(&local_310,*local_380);
      if (cVar14 == '\0') {
        uStack_3c0 = 0;
        local_3b8 = 0;
        local_3b0 = 0xf;
        local_3c8 = (undefined8 ******)0x0;
        local_444 = 0x101;
        piVar35 = piVar42;
        if (lStack_308 - local_310 >> 5 != 0) {
          do {
            if (piVar35 != (int *)0x0) {
              if (local_3b8 < local_3b0) {
                ppppppuVar22 = &local_3c8;
                if (0xf < local_3b0) {
                  ppppppuVar22 = (undefined8 ******)local_3c8;
                }
                puVar2 = (undefined2 *)(local_3b8 + (longlong)ppppppuVar22);
                local_3b8 = local_3b8 + 1;
                *puVar2 = 0x2e;
              }
              else {
                FUN_18021abd0(&local_3c8);
              }
            }
            puVar31 = (undefined8 *)((longlong)piVar35 * 0x20 + local_310);
            puVar27 = puVar31 + 2;
            if (0xf < (ulonglong)puVar31[3]) {
              puVar31 = (undefined8 *)*puVar31;
            }
            FUN_18021aef0(&local_3c8,puVar31,*puVar27);
            piVar35 = (int *)((longlong)piVar35 + 1);
          } while (piVar35 < (int *)(lStack_308 - local_310 >> 5));
        }
        FUN_18020e8a0(local_380 + 2,&local_3c8);
        local_444 = 1;
        FUN_18020e450(&local_3c8);
        DAT_1803da5a8 = 0;
        puVar45 = &DAT_1803da598;
        if (0xf < DAT_1803da5b0) {
          puVar45 = _DAT_1803da598;
        }
        *puVar45 = 0;
        LOCK();
        DAT_1803e9190 = DAT_1803e9190 + 1;
        UNLOCK();
        uVar39 = (ulonglong)_tls_index;
      }
      else {
        FUN_180212700(&DAT_1803da598,"another source already uses this path",0x25);
      }
    }
    FUN_18020e450(&local_268);
    FUN_18020d5c0(&local_310);
  }
  if (DAT_1803da5a8 != 0) {
    puVar45 = &DAT_1803da598;
    if (0xf < DAT_1803da5b0) {
      puVar45 = _DAT_1803da598;
    }
    FUN_1802aabb0(ppuVar47 + 0x13,&DAT_1803431ac,puVar45);
  }
  piVar35 = local_380;
  iVar16 = FUN_180026950(local_380 + 2);
  if (iVar16 != 0) {
    FUN_1802aabb0(ppuVar47 + 0x17,&DAT_1803714d0);
    piVar35 = local_380;
  }
  cVar14 = FUN_1801a0b60("Enabled##nv_on",piVar35 + 0x10);
  if (cVar14 != '\0') {
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  if (local_1d8 == piStack_1d0) {
LAB_1801d2434:
    ppuVar26 = ppuVar47 + 0x17;
    pcVar44 = "Waiting for the game...";
    piVar35 = piVar42;
LAB_1801d2442:
    FUN_1802aabb0(ppuVar26,pcVar44);
  }
  else {
    piVar35 = local_1d8;
    while (*piVar35 != *local_380) {
      piVar35 = piVar35 + 8;
      if (piVar35 == piStack_1d0) goto LAB_1801d2434;
    }
    piVar42 = piVar35;
    if (piVar35 == (int *)0x0) goto LAB_1801d2434;
    if ((char)piVar35[1] == '\0') {
      if (*(char *)((longlong)piVar35 + 5) == '\0') goto LAB_1801d2434;
      ppuVar26 = ppuVar47 + 0x13;
      pcVar44 = "Not found on this server";
      goto LAB_1801d2442;
    }
    lVar33 = (*(longlong *)(piVar35 + 4) - *(longlong *)(piVar35 + 2) >> 4) * -0x3333333333333333;
    puVar45 = &DAT_18034e198;
    if (lVar33 == 1) {
      puVar45 = &DAT_18033e5ea;
    }
    FUN_1802aabb0(ppuVar47 + 0xf,"Resolved - %d key%s on you",lVar33,puVar45);
  }
  FUN_1802afb40();
  cVar14 = *(char *)((longlong)local_380 + 0x41);
  FUN_1801a0b60("Name template##nv_tpl_on");
  if (*(char *)((longlong)local_380 + 0x41) != cVar14) {
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  cVar14 = FUN_18026ee60(0);
  if (cVar14 != '\0') {
    FUN_180280d00(
                 "For names the server computes instead of storing.\nExample: a Class D whose netvar holds 16305 but who\nis shown as D-16305 -> write  D-{id:05d}\n\nIf any key in the template is missing, the template\nyields nothing and the key list is used instead, so it\ndoubles as its own condition."
                 );
  }
  if (*(char *)((longlong)local_380 + 0x41) == '\0') goto LAB_1801d28e4;
  if (DAT_1803ff258 != *local_380) {
    piVar42 = local_380 + 0x12;
    if (0xf < *(ulonglong *)(local_380 + 0x18)) {
      piVar42 = *(int **)piVar42;
    }
    strncpy_s(&DAT_1804257c0,0x81,(char *)piVar42,0xffffffffffffffff);
    DAT_1803ff258 = *local_380;
  }
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar46 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar46 + 0x1c8) != 0) ||
     (pfVar23 = (float *)(lVar46 + 0x280),
     *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x2368) != 0)) {
    pfVar23 = (float *)(lVar46 + 0x250);
  }
  fVar53 = *pfVar23;
  fVar49 = *(float *)(lVar46 + 0x118);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  puVar1 = (uint *)(lVar33 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar33 + 0x1ed8) = (fVar53 - fVar49) - fVar54;
  local_458 = 0;
  local_470 = 0;
  local_478 = (undefined1 *)0x0;
  local_480 = (size_t **)CONCAT44(local_480._4_4_,0x40);
  local_488 = &local_458;
  cVar14 = FUN_1802b74e0("##nv_tpl","D-{id:05d}",&DAT_1804257c0,0x81);
  local_468[0] = 1.5;
  local_378._0_4_ = 0.75;
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  FUN_18027f5b0(0,*pfVar21 * fVar52);
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  local_458 = (ulonglong)(uint)(*pfVar21 * fVar51);
  cVar15 = FUN_1802abf60("Apply##nv_tpl",&local_458,0);
  if ((cVar14 != '\0') || (cVar15 != '\0')) {
    local_440 = 0;
    uStack_438 = 0;
    local_430 = 0;
    local_428 = 0;
    sVar17 = strlen(&DAT_1804257c0);
    FUN_18001d080(&local_440,&DAT_1804257c0,sVar17);
    uVar18 = FUN_180029880(local_2d8,&local_440,0x80);
    FUN_18020e8a0(local_380 + 0x12,uVar18);
    FUN_18020e450(local_2d8);
    FUN_18020e450(&local_440);
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  cVar14 = *(char *)((longlong)local_380 + 0x42);
  FUN_1801a0b60("Try before key list##nv_tpl_first");
  if (*(char *)((longlong)local_380 + 0x42) != cVar14) {
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  sVar17 = strlen(&DAT_1804257c0);
  FUN_18001d080(&local_3a8,&DAT_1804257c0,sVar17);
  FUN_1800275b0(&local_178,&local_3a8);
  FUN_18020e450(&local_3a8);
  if (DAT_1804257c0 == '\0') {
    pcVar44 = "Empty - the key list is used.";
LAB_1801d28b6:
    FUN_1802aabb0(ppuVar47 + 0x17,pcVar44);
  }
  else {
    if (local_160 != '\0') {
      for (; local_178 != local_170; local_178 = local_178 + 0x90) {
        if (*(longlong *)(local_178 + 0x40) != *(longlong *)(local_178 + 0x48)) {
          pcVar44 = "Syntax OK. @lookup is resolved in game, not here.";
          goto LAB_1801d28b6;
        }
      }
      if ((piVar35 != (int *)0x0) && (*(longlong *)(piVar35 + 2) != *(longlong *)(piVar35 + 4))) {
        puStack_360 = (undefined8 *)0x0;
        local_358 = 0;
        local_350 = 0xf;
        local_368 = (int **)0x0;
        cVar14 = FUN_180029700(&local_178,piVar35 + 2,&local_368);
        if (cVar14 == '\0') {
          FUN_1802aabb0(ppuVar47 + 0x17,"No match on you - key list is used.");
        }
        else {
          ppiVar43 = (int **)&local_368;
          if (0xf < local_350) {
            ppiVar43 = local_368;
          }
          FUN_1802aabb0(ppuVar47 + 0xf,"You: %s",ppiVar43);
        }
        FUN_18020e450(&local_368);
        goto LAB_1801d28c3;
      }
      pcVar44 = "Join a server to preview.";
      goto LAB_1801d28b6;
    }
    ppppppuVar22 = local_158;
    if (0xf < local_140) {
      ppppppuVar22 = (undefined8 ******)local_158[0];
    }
    FUN_1802aabb0(ppuVar47 + 0x13,&DAT_1803431ac,ppppppuVar22);
  }
LAB_1801d28c3:
  FUN_18020e450(local_158);
  FUN_18021d530(&local_178);
LAB_1801d28e4:
  FUN_1802afb40();
  FUN_1802aabb0(ppuVar47 + 0x17,"Name keys (%d/%d) - tried in order",
                *(longlong *)(local_380 + 0xc) - *(longlong *)(local_380 + 10) >> 5,0x10);
  FUN_18027f5b0(0,uVar3);
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  uVar50 = *(undefined4 *)(lVar33 + 0xcc8);
  *(undefined4 *)(lVar33 + 0xcc8) = 0;
  local_458 = 0;
  cVar14 = FUN_1802abf60("Suggest##nv_keys",&local_458,0x8000);
  *(undefined4 *)(lVar33 + 0xcc8) = uVar50;
  if (cVar14 != '\0') {
    FUN_180280fd0("nv_suggest");
  }
  cVar14 = FUN_18019a680("nv_suggest");
  puVar27 = puStack_320;
  piVar42 = local_380;
  if (cVar14 != '\0') {
    if (local_328 == puStack_320) {
LAB_1801d2a02:
      puVar31 = (undefined8 *)0x0;
    }
    else {
      uVar39 = *(ulonglong *)(local_380 + 8);
      sVar17 = *(size_t *)(local_380 + 6);
      puVar31 = local_328;
      while( true ) {
        if (uVar39 < 0x10) {
          piVar30 = piVar42 + 2;
        }
        else {
          piVar30 = *(int **)(piVar42 + 2);
        }
        sVar4 = puVar31[2];
        puVar28 = puVar31;
        if (0xf < (ulonglong)puVar31[3]) {
          puVar28 = (undefined8 *)*puVar31;
        }
        if ((sVar4 == sVar17) &&
           ((sVar4 == 0 || (iVar16 = memcmp(puVar28,piVar30,sVar4), iVar16 == 0)))) break;
        puVar31 = puVar31 + 8;
        if (puVar31 == puVar27) goto LAB_1801d2a02;
      }
    }
    if ((piVar35 == (int *)0x0) || (*(longlong *)(piVar35 + 2) == *(longlong *)(piVar35 + 4))) {
      bVar48 = false;
    }
    else {
      bVar48 = true;
    }
    pcVar44 = "Keys seen by the last scan";
    if (bVar48) {
      pcVar44 = "Keys on you right now";
    }
    FUN_1802aabb0(ppuVar47 + 0x17,pcVar44);
    FUN_1802afb40();
    local_378 = local_378 & 0xffffffff00000000;
    local_368 = &local_380;
    puStack_360 = &local_378;
    if (bVar48) {
      lVar33 = *(longlong *)(piVar35 + 2);
      lVar46 = *(longlong *)(piVar35 + 4);
      if (lVar33 == lVar46) goto LAB_1801d2ace;
      puVar27 = (undefined8 *)(lVar33 + 0x20);
      do {
        puVar31 = puVar27;
        if (0xf < (ulonglong)puVar27[3]) {
          puVar31 = (undefined8 *)*puVar27;
        }
        FUN_1801d3930(&local_368,lVar33,puVar31);
        lVar33 = lVar33 + 0x50;
        puVar27 = puVar27 + 10;
      } while (lVar33 != lVar46);
LAB_1801d2ac8:
      if ((float)local_378 == 0.0) goto LAB_1801d2ace;
    }
    else {
      if (puVar31 != (undefined8 *)0x0) {
        lVar33 = puVar31[6];
        lVar46 = puVar31[5];
        if (lVar46 != lVar33) {
          do {
            FUN_1801d3930(&local_368,lVar46,0);
            lVar46 = lVar46 + 0x20;
          } while (lVar46 != lVar33);
          goto LAB_1801d2ac8;
        }
      }
LAB_1801d2ace:
      FUN_1802aabb0(ppuVar47 + 0x17,"Nothing new to suggest.");
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
      uVar39 = (ulonglong)_tls_index;
    }
    else {
      uVar39 = (ulonglong)_tls_index;
      if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
  }
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar46 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar46 + 0x1c8) != 0) ||
     (pfVar23 = (float *)(lVar46 + 0x284),
     *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x2368) != 0)) {
    pfVar23 = (float *)(lVar46 + 0x254);
  }
  fVar49 = (*pfVar23 - *(float *)(lVar46 + 0x11c)) - DAT_180381078;
  fVar53 = DAT_1803810a0;
  if (DAT_1803810a0 <= fVar49) {
    fVar53 = fVar49;
  }
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  puStack_360 = *(undefined8 **)(lVar33 + 0xde4);
  local_368 = (int **)CONCAT44(*(undefined4 *)(lVar33 + 0xde0),3);
  local_358 = CONCAT44(local_358._4_4_,*(undefined4 *)(lVar33 + 0xdec));
  FUN_18028a220(lVar33 + 0x1fc8,&local_368);
  if (*(int *)(lVar33 + 0x1fc4) != 3) {
    uVar50 = *(undefined4 *)((longlong)ppuVar47 + 0x3c);
    uVar6 = *(undefined4 *)(ppuVar47 + 8);
    uVar7 = *(undefined4 *)((longlong)ppuVar47 + 0x44);
    *(undefined4 *)(lVar33 + 0xde0) = *(undefined4 *)(ppuVar47 + 7);
    *(undefined4 *)(lVar33 + 0xde4) = uVar50;
    *(undefined4 *)(lVar33 + 0xde8) = uVar6;
    *(undefined4 *)(lVar33 + 0xdec) = uVar7;
  }
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar46 = *(longlong *)(lVar33 + 0xec0);
  puStack_360 = *(undefined8 **)(lVar46 + 0xe04);
  local_368 = (int **)CONCAT44(*(undefined4 *)(lVar46 + 0xe00),5);
  local_358 = CONCAT44(local_358._4_4_,*(undefined4 *)(lVar46 + 0xe0c));
  FUN_18028a220(lVar46 + 0x1fc8,&local_368);
  if (*(int *)(lVar46 + 0x1fc4) != 5) {
    uVar50 = *(undefined4 *)((longlong)ppuVar47 + 0x4c);
    uVar6 = *(undefined4 *)(ppuVar47 + 10);
    uVar7 = *(undefined4 *)((longlong)ppuVar47 + 0x54);
    *(undefined4 *)(lVar46 + 0xe00) = *(undefined4 *)(ppuVar47 + 9);
    *(undefined4 *)(lVar46 + 0xe04) = uVar50;
    *(undefined4 *)(lVar46 + 0xe08) = uVar6;
    *(undefined4 *)(lVar46 + 0xe0c) = uVar7;
  }
  local_458 = (ulonglong)(uint)fVar53 << 0x20;
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar46 = *(longlong *)(lVar33 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar46 + 0x1520) + 0xce) = 1;
  plVar20 = *(longlong **)(lVar46 + 0x1520);
  iVar16 = FUN_180268980("##nv_keys",0,
                         *(undefined4 *)(plVar20[0x22] + -4 + (longlong)(int)plVar20[0x21] * 4));
  if (*(int *)(*plVar20 + 0x1578) == iVar16) {
    FUN_1802899e0(iVar16,0xb,"##nv_keys");
  }
  local_488 = (ulonglong *)((ulonglong)local_488 & 0xffffffff00000000);
  FUN_180273060("##nv_keys",iVar16,&local_458,1);
  uVar39 = 0;
  if ((int)(*(longlong *)(local_380 + 0xc) - *(longlong *)(local_380 + 10) >> 5) < 1) {
    uVar36 = 0xffffffffffffffff;
  }
  else {
    do {
      FUN_18027ae00(uVar39);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar46 = *(longlong *)(lVar33 + 0xec0);
      uVar50 = *(undefined4 *)(lVar46 + 0xcc8);
      *(undefined4 *)(lVar46 + 0xcc8) = 0;
      local_458 = 0;
      cVar14 = FUN_1802abf60(&DAT_18034ede4,&local_458,0x8000);
      *(undefined4 *)(lVar46 + 0xcc8) = uVar50;
      uVar36 = local_460 & 0xffffffff;
      if (cVar14 != '\0') {
        uVar36 = uVar39;
      }
      local_460 = uVar36;
      FUN_18027f5b0(0,uVar3);
      puVar27 = (undefined8 *)(*(longlong *)(local_380 + 10) + (longlong)(int)uVar39 * 0x20);
      if (0xf < (ulonglong)puVar27[3]) {
        puVar27 = (undefined8 *)*puVar27;
      }
      FUN_1802aa3c0(puVar27,0,1);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar46 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
      iVar16 = *(int *)(lVar46 + 0x108);
      if (iVar16 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
      }
      else {
        *(int *)(lVar46 + 0x108) = iVar16 + -1;
      }
      uVar40 = (int)uVar39 + 1;
      uVar39 = (ulonglong)uVar40;
      ppuVar47 = local_3f0;
    } while ((int)uVar40 <
             (int)(*(longlong *)(local_380 + 0xc) - *(longlong *)(local_380 + 10) >> 5));
  }
  if (*(longlong *)(local_380 + 10) == *(longlong *)(local_380 + 0xc)) {
    FUN_1802aabb0(ppuVar47 + 0x17,"No keys - this source can never answer.");
  }
  FUN_180273410();
  FUN_18026a890(2);
  piVar42 = local_380;
  if (-1 < (int)uVar36) {
    lVar46 = (longlong)(int)uVar36 * 0x20 + *(longlong *)(local_380 + 10);
    lVar33 = *(longlong *)(local_380 + 0xc);
    lVar19 = lVar46;
    while (lVar19 = lVar19 + 0x20, lVar19 != lVar33) {
      FUN_18020e8a0(lVar46,lVar19);
      lVar46 = lVar46 + 0x20;
    }
    FUN_18020e450(*(longlong *)(piVar42 + 0xc) + -0x20);
    plVar20 = (longlong *)(piVar42 + 0xc);
    *plVar20 = *plVar20 + -0x20;
    LOCK();
    DAT_1803e9190 = DAT_1803e9190 + 1;
    UNLOCK();
  }
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar46 = *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar46 + 0x1c8) != 0) ||
     (pfVar23 = (float *)(lVar46 + 0x280),
     *(longlong *)(*(longlong *)(lVar33 + 0xec0) + 0x2368) != 0)) {
    pfVar23 = (float *)(lVar46 + 0x250);
  }
  fVar53 = *pfVar23;
  fVar49 = *(float *)(lVar46 + 0x118);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  puVar1 = (uint *)(lVar33 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(float *)(lVar33 + 0x1ed8) = (fVar53 - fVar49) - fVar54;
  local_460 = 0;
  local_470 = 0;
  local_478 = (undefined1 *)0x0;
  local_480 = (size_t **)CONCAT44(local_480._4_4_,0x40);
  local_488 = &local_460;
  cVar14 = FUN_1802b74e0("##nv_newkey",&DAT_180341148,&DAT_1803fe740,0x41);
  local_468[0] = 1.5;
  local_378._0_4_ = 0.75;
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  FUN_18027f5b0(0,*pfVar21 * fVar52);
  local_468[0] = 1.5;
  local_378 = CONCAT44(local_378._4_4_,0x3f400000);
  pfVar23 = (float *)&local_378;
  if (fVar11 <= DAT_1803da6a4) {
    pfVar23 = &DAT_1803da6a4;
  }
  pfVar21 = local_468;
  if (DAT_1803da6a4 <= fVar12) {
    pfVar21 = pfVar23;
  }
  local_460 = (ulonglong)(uint)(*pfVar21 * fVar51);
  cVar15 = FUN_1802abf60("Add##nv_key",&local_460,0);
  if (((cVar14 != '\0') || (puVar45 = auStack_4a8, cVar15 != '\0')) &&
     (puVar45 = auStack_4a8,
     (int)(*(longlong *)(local_380 + 0xc) - *(longlong *)(local_380 + 10) >> 5) < 0x10)) {
    local_440 = 0;
    uStack_438 = 0;
    local_430 = 0;
    local_428 = 0;
    sVar17 = strlen(&DAT_1803fe740);
    FUN_18001d080(&local_440,&DAT_1803fe740,sVar17);
    FUN_180029880(local_1a0,&local_440,0x40);
    FUN_18020e450(&local_440);
    piVar42 = local_380;
    if (local_190 != 0) {
      puVar27 = *(undefined8 **)(local_380 + 0xc);
      puVar31 = *(undefined8 **)(local_380 + 10);
      if (puVar31 != puVar27) {
        do {
          ppppppuVar22 = local_1a0;
          if (0xf < local_188) {
            ppppppuVar22 = (undefined8 ******)local_1a0[0];
          }
          sVar17 = puVar31[2];
          puVar28 = puVar31;
          if (0xf < (ulonglong)puVar31[3]) {
            puVar28 = (undefined8 *)*puVar31;
          }
        } while (((sVar17 != local_190) ||
                 ((sVar17 != 0 && (iVar16 = memcmp(puVar28,ppppppuVar22,sVar17), iVar16 != 0)))) &&
                (puVar31 = puVar31 + 4, puVar31 != puVar27));
        if (puVar31 != puVar27) goto LAB_1801d3101;
      }
      FUN_18020d6f0(piVar42 + 10,local_1a0);
      DAT_1803fe740 = 0;
      LOCK();
      DAT_1803e9190 = DAT_1803e9190 + 1;
      UNLOCK();
    }
LAB_1801d3101:
    FUN_18020e450(local_1a0);
    puVar45 = auStack_4a8;
  }
  goto LAB_1801d31ef;
code_r0x0001801d1ef7:
  local_380 = local_380 + 0x1a;
  goto joined_r0x0001801d1eeb;
LAB_1801d3130:
  puVar28 = puVar28 + 8;
  if (puVar28 == puVar31) goto LAB_1801d3143;
  goto LAB_1801d1f40;
LAB_1801d1f00:
  local_380 = (int *)0x0;
LAB_1801d1f04:
  if ((DAT_1803e7038 != 0) && (local_328 != puStack_320)) {
    puVar28 = local_328;
LAB_1801d1f40:
    puVar29 = &DAT_1803e7028;
    if (0xf < uVar36) {
      puVar29 = puVar27;
    }
    sVar4 = puVar28[2];
    _Buf1 = puVar28;
    if (0xf < (ulonglong)puVar28[3]) {
      _Buf1 = (undefined8 *)*puVar28;
    }
    if ((sVar4 != sVar17) || ((sVar4 != 0 && (iVar16 = memcmp(_Buf1,puVar29,sVar4), iVar16 != 0))))
    goto LAB_1801d3130;
    if (puVar28 != (undefined8 *)0x0) {
      puVar27 = puVar28;
      if (0xf < (ulonglong)puVar28[3]) {
        puVar27 = (undefined8 *)*puVar28;
      }
      FUN_1802aabb0(ppuVar47 + 0xb,&DAT_1803431ac,puVar27);
      puVar45 = &DAT_18034e198;
      if (*(int *)(puVar28 + 4) == 1) {
        puVar45 = &DAT_18033e5ea;
      }
      FUN_1802aabb0(ppuVar47 + 0x17,"Found on %d connected player%s",*(int *)(puVar28 + 4),puVar45);
      uVar39 = (ulonglong)_tls_index;
      lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar33 = *(longlong *)(lVar33 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar33 + 0x1520) + 0xce) = 1;
      if (*(char *)(*(longlong *)(lVar33 + 0x1520) + 0xd1) == '\0') {
        local_460 = 0;
        FUN_18027f400(&local_460);
      }
      FUN_180279170(CONCAT71(0x4ec4ec4ec4ec4e,
                             7 < (int)((longlong)DAT_1803e9b10 - (longlong)DAT_1803e9b08 >> 3) *
                                 -0x3b13b13b));
      local_460 = 0x41d00000bf800000;
      local_368 = (int **)ppuVar47[0xf];
      puStack_360 = (undefined8 *)ppuVar47[0x10];
      local_480 = (size_t **)CONCAT71(local_480._1_7_,1);
      local_488 = (ulonglong *)CONCAT71(local_488._1_7_,1);
      cVar14 = FUN_18019cb40("Add as source##nvc",10,&local_460,&local_368);
      uVar36 = 0;
      if (cVar14 != '\0') {
        local_2f8 = 0;
        lStack_2f0 = 0;
        local_2e8 = 0;
        uStack_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0xf;
        local_1c0 = 0;
        cVar14 = FUN_180026bc0(puVar28,&local_2f8,&local_1c0);
        puVar38 = auStack_4a8;
        if (cVar14 != '\0') {
          cVar14 = FUN_180027310(&local_2f8,0);
          puVar38 = auStack_4a8;
          if (cVar14 == '\0') {
            uStack_238 = 0;
            local_230 = 0;
            local_228 = 0xf;
            local_240 = (undefined8 ******)0x0;
            local_220 = 0;
            local_218 = 0;
            uStack_210 = 0;
            local_208 = 1;
            local_206 = 1;
            uStack_1f8 = 0;
            local_1f0 = 0;
            local_1e8 = 0xf;
            local_200 = 0;
            iVar16 = DAT_1803e9130 + 1;
            local_248[0] = DAT_1803e9130;
            uStack_418 = 0;
            local_410 = 0;
            local_408 = 0xf;
            local_420 = (undefined8 ******)0x0;
            local_444 = 0x201;
            DAT_1803e9130 = iVar16;
            if (lStack_2f0 - local_2f8 >> 5 != 0) {
              do {
                if (uVar36 != 0) {
                  if (local_410 < local_408) {
                    ppppppuVar22 = &local_420;
                    if (0xf < local_408) {
                      ppppppuVar22 = (undefined8 ******)local_420;
                    }
                    puVar2 = (undefined2 *)(local_410 + (longlong)ppppppuVar22);
                    local_410 = local_410 + 1;
                    *puVar2 = 0x2e;
                  }
                  else {
                    FUN_18021abd0(&local_420);
                  }
                }
                puVar31 = (undefined8 *)(uVar36 * 0x20 + local_2f8);
                puVar27 = puVar31 + 2;
                if (0xf < (ulonglong)puVar31[3]) {
                  puVar31 = (undefined8 *)*puVar31;
                }
                FUN_18021aef0(&local_420,puVar31,*puVar27);
                uVar36 = uVar36 + 1;
              } while (uVar36 < (ulonglong)(lStack_2f0 - local_2f8 >> 5));
            }
            uVar36 = local_408;
            if (local_228 < 0x10) {
LAB_1801d35d0:
              local_240 = local_420;
              uStack_238 = uStack_418;
              local_230 = local_410;
              local_410 = 0;
              local_408 = 0xf;
              local_420 = (undefined8 *****)((ulonglong)local_420 & 0xffffffffffffff00);
              local_444 = 1;
              local_228 = uVar36;
              uVar50 = FUN_18020e450(&local_420);
              lVar33 = puVar28[5];
              lVar46 = puVar28[6];
              uVar18 = local_358;
              while ((lVar33 != lVar46 &&
                     (local_358._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20),
                     (int)(local_218 - local_220 >> 5) < 0x10))) {
                local_358 = uVar18;
                uVar50 = FUN_18020d6f0(&local_220,lVar33);
                lVar33 = lVar33 + 0x20;
                uVar18 = local_358;
              }
              if (DAT_1803e9b10 == DAT_1803e9b18) goto LAB_1801d369c;
              FUN_180233350(uVar50,DAT_1803e9b10,local_248);
              DAT_1803e9b10 = DAT_1803e9b10 + 0x1a;
              puVar37 = auStack_4a8;
            }
            else {
              ppppppuVar22 = (undefined8 ******)local_240;
              if ((local_228 + 1 < 0x1000) ||
                 (ppppppuVar22 = (undefined8 ******)local_240[-1],
                 (ulonglong)((longlong)local_240 + (-8 - (longlong)ppppppuVar22)) < 0x20)) {
                free(ppppppuVar22);
                uVar36 = local_408;
                goto LAB_1801d35d0;
              }
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              puVar37 = auStack_4a0;
LAB_1801d369c:
              *(undefined8 *)(puVar37 + -8) = 0x1801d36a1;
              FUN_180229900();
            }
            DAT_18042610c = local_248[0];
            DAT_1803e7038 = 0;
            puVar27 = &DAT_1803e7028;
            if (0xf < DAT_1803e7040) {
              puVar27 = DAT_1803e7028;
            }
            *(undefined1 *)puVar27 = 0;
            DAT_180426180 = 0;
            LOCK();
            DAT_1803e9190 = DAT_1803e9190 + 1;
            UNLOCK();
            *(undefined8 *)(puVar37 + -8) = 0x1801d36e3;
            FUN_18020e450(&local_200);
            *(undefined8 *)(puVar37 + -8) = 0x1801d36f0;
            FUN_18020d5c0(&local_220);
            *(undefined8 *)(puVar37 + -8) = 0x1801d36fd;
            FUN_18020e450(&local_240);
            puVar38 = puVar37;
          }
        }
        *(undefined8 *)(puVar38 + -8) = 0x1801d370e;
        FUN_18020e450(&local_1c0);
        *(undefined8 *)(puVar38 + -8) = 0x1801d371b;
        FUN_18020d5c0(&local_2f8);
      }
      *(undefined8 *)(puVar38 + -8) = 0x1801d3720;
      FUN_180279200();
      lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        *(undefined8 *)(puVar38 + -8) = 0x1801d373f;
        __dyn_tls_on_demand_init();
      }
      lVar46 = *(longlong *)(lVar33 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar46 + 0x1520) + 0xce) = 1;
      if (*(char *)(*(longlong *)(lVar46 + 0x1520) + 0xd1) == '\0') {
        *(undefined8 *)(puVar38 + 0x48) = 0;
        *(undefined8 *)(puVar38 + -8) = 0x1801d377a;
        FUN_18027f400(puVar38 + 0x48,uVar3);
      }
      lVar46 = puVar28[6];
      lVar19 = puVar28[5];
      *(undefined8 *)(puVar38 + -8) = 0x1801d3799;
      FUN_1802aabb0(ppuVar47 + 0x17,"Keys on you (%d)",lVar46 - lVar19 >> 5);
      if (*(char *)(lVar33 + 0x10) == '\0') {
        *(undefined8 *)(puVar38 + -8) = 0x1801d37a5;
        __dyn_tls_on_demand_init();
      }
      lVar46 = *(longlong *)(lVar33 + 0xec0);
      puStack_360 = *(undefined8 **)(lVar46 + 0xde4);
      local_368 = (int **)CONCAT44(*(undefined4 *)(lVar46 + 0xde0),3);
      local_358 = CONCAT44(local_358._4_4_,*(undefined4 *)(lVar46 + 0xdec));
      *(undefined8 *)(puVar38 + -8) = 0x1801d37cd;
      FUN_18028a220(lVar46 + 0x1fc8,&local_368);
      if (*(int *)(lVar46 + 0x1fc4) != 3) {
        uVar3 = *(undefined4 *)((longlong)ppuVar47 + 0x3c);
        uVar50 = *(undefined4 *)(ppuVar47 + 8);
        uVar6 = *(undefined4 *)((longlong)ppuVar47 + 0x44);
        *(undefined4 *)(lVar46 + 0xde0) = *(undefined4 *)(ppuVar47 + 7);
        *(undefined4 *)(lVar46 + 0xde4) = uVar3;
        *(undefined4 *)(lVar46 + 0xde8) = uVar50;
        *(undefined4 *)(lVar46 + 0xdec) = uVar6;
      }
      if (*(char *)(lVar33 + 0x10) == '\0') {
        *(undefined8 *)(puVar38 + -8) = 0x1801d37ee;
        __dyn_tls_on_demand_init();
      }
      lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
      lVar46 = *(longlong *)(lVar33 + 0xec0);
      puStack_360 = *(undefined8 **)(lVar46 + 0xe04);
      local_368 = (int **)CONCAT44(*(undefined4 *)(lVar46 + 0xe00),5);
      local_358 = CONCAT44(local_358._4_4_,*(undefined4 *)(lVar46 + 0xe0c));
      *(undefined8 *)(puVar38 + -8) = 0x1801d3827;
      FUN_18028a220(lVar46 + 0x1fc8,&local_368);
      if (*(int *)(lVar46 + 0x1fc4) != 5) {
        uVar3 = *(undefined4 *)((longlong)ppuVar47 + 0x4c);
        uVar50 = *(undefined4 *)(ppuVar47 + 10);
        uVar6 = *(undefined4 *)((longlong)ppuVar47 + 0x54);
        *(undefined4 *)(lVar46 + 0xe00) = *(undefined4 *)(ppuVar47 + 9);
        *(undefined4 *)(lVar46 + 0xe04) = uVar3;
        *(undefined4 *)(lVar46 + 0xe08) = uVar50;
        *(undefined4 *)(lVar46 + 0xe0c) = uVar6;
      }
      *(undefined8 *)(puVar38 + 0x48) = 0;
      if (*(char *)(lVar33 + 0x10) == '\0') {
        *(undefined8 *)(puVar38 + -8) = 0x1801d3851;
        __dyn_tls_on_demand_init();
      }
      lVar33 = *(longlong *)(lVar33 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar33 + 0x1520) + 0xce) = 1;
      plVar20 = *(longlong **)(lVar33 + 0x1520);
      uVar3 = *(undefined4 *)(plVar20[0x22] + -4 + (longlong)(int)plVar20[0x21] * 4);
      *(undefined8 *)(puVar38 + -8) = 0x1801d388b;
      iVar16 = FUN_180268980("##nvc_keys",0,uVar3);
      if (*(int *)(*plVar20 + 0x1578) == iVar16) {
        *(undefined8 *)(puVar38 + -8) = 0x1801d38ab;
        FUN_1802899e0(iVar16,0xb,"##nvc_keys");
      }
      *(undefined4 *)(puVar38 + 0x20) = 0;
      *(undefined8 *)(puVar38 + -8) = 0x1801d38c9;
      FUN_180273060("##nvc_keys",iVar16,puVar38 + 0x48,1);
      puVar27 = (undefined8 *)puVar28[6];
      for (puVar31 = (undefined8 *)puVar28[5]; puVar31 != puVar27; puVar31 = puVar31 + 4) {
        puVar29 = puVar31;
        if (0xf < (ulonglong)puVar31[3]) {
          puVar29 = (undefined8 *)*puVar31;
        }
        *(undefined8 *)(puVar38 + -8) = 0x1801d38f2;
        FUN_1802aa3c0(puVar29,0,1);
      }
      if (puVar28[5] == puVar28[6]) {
        *(undefined8 *)(puVar38 + -8) = 0x1801d3918;
        FUN_1802aabb0(ppuVar47 + 0x17,"None sampled.");
      }
      *(undefined8 *)(puVar38 + -8) = 0x1801d391d;
      FUN_180273410();
      *(undefined8 *)(puVar38 + -8) = 0x1801d3927;
      FUN_18026a890(2);
      puVar45 = puVar38;
      goto LAB_1801d31ef;
    }
  }
LAB_1801d3143:
  FUN_1802aabb0(ppuVar47 + 0x17,"No source selected.");
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar33 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(lVar33 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar33 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar33 + 0x1520) + 0xd1) == '\0') {
    local_460 = 0;
    FUN_18027f400(&local_460,uVar3);
  }
  FUN_1802aabb0(ppuVar47 + 0x17,"Press Scan to find stores automatically,");
  FUN_1802aabb0(ppuVar47 + 0x17,"or Add and type the dotted path yourself,");
  FUN_1802aabb0(ppuVar47 + 0x17,"e.g. axe.netvar.data or netvars.stored.");
  puVar45 = auStack_4a8;
LAB_1801d31ef:
  *(undefined8 *)(puVar45 + -8) = 0x1801d31f4;
  FUN_18027fda0();
  *(undefined8 *)(puVar45 + -8) = 0x1801d3202;
  _Mtx_unlock(&DAT_1803e9140);
  *(undefined8 *)(puVar45 + -8) = 0x1801d320f;
  FUN_18021d5c0(&local_328);
  *(undefined8 *)(puVar45 + -8) = 0x1801d321c;
  FUN_18021d670(&local_1d8);
LAB_1801d321c:
  *(undefined8 *)(puVar45 + -8) = 0x1801d3221;
  FUN_180273410();
  *(undefined8 *)(puVar45 + -8) = 0x1801d322b;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar45 + -8) = 0x1801d3235;
  FUN_18026a890(2);
  *(undefined8 *)(puVar45 + -8) = 0x1801d3244;
  return;
}


