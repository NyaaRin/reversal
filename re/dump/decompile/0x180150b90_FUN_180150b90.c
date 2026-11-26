// 0x180150b90  FUN_180150b90
// size=3508 thunk=false
// signature: undefined FUN_180150b90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180150b90(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined8 uVar7;
  int *piVar8;
  __time64_t _Var9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t ****ppppwVar12;
  char *pcVar13;
  undefined **ppuVar14;
  wchar_t **ppwVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  int local_420;
  undefined4 local_418;
  wchar_t ***local_410 [2];
  undefined4 local_400 [2];
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  wchar_t **local_3f0;
  wchar_t **local_3e8;
  wchar_t **ppwStack_3e0;
  undefined4 local_3d8 [2];
  undefined1 local_3d0;
  undefined7 uStack_3cf;
  wchar_t **local_3c8;
  wchar_t **local_3c0;
  wchar_t **ppwStack_3b8;
  undefined4 local_3b0 [2];
  undefined1 local_3a8;
  undefined7 uStack_3a7;
  wchar_t **local_3a0;
  wchar_t **local_398;
  wchar_t **ppwStack_390;
  undefined8 *local_388;
  wchar_t *local_380 [3];
  wchar_t *local_368 [4];
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined *local_328;
  undefined *local_320;
  undefined *local_318;
  undefined1 local_310 [32];
  wchar_t *local_2f0;
  ulonglong uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  wchar_t ***local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  ulonglong uStack_2b8;
  longlong local_2b0;
  longlong lStack_2a8;
  undefined8 local_2a0;
  longlong local_298;
  longlong lStack_290;
  undefined8 local_288;
  longlong local_280;
  longlong lStack_278;
  undefined8 local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [16];
  longlong local_238;
  char local_228 [32];
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1f8 [32];
  char *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [32];
  char *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [32];
  char *local_178;
  undefined4 local_170;
  undefined1 local_168 [32];
  char *local_148;
  undefined4 local_140;
  char local_138 [224];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_448;
  uVar18 = 0;
  iVar4 = 0;
  local_418 = 0;
  FUN_18014e3b0(local_248);
  if (local_238 == 0) {
    local_2d0 = (wchar_t ***)0x0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    FUN_18001d080(&local_2d0,"Game folder not found - file checks unavailable",0x2f);
    FUN_18014df00(1,&local_2d0);
    FUN_18020e450(&local_2d0);
    DAT_180400aed = 0;
  }
  else {
    local_348 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"garrysmod",9);
    local_418 = 0;
    FUN_180066720(local_268,local_248,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_340 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"data",4);
    local_418 = 0;
    FUN_180066720(local_228,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_208 = &DAT_18035ef0c;
    local_200 = 2;
    local_338 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"download",8);
    local_418 = 0;
    FUN_180066720(local_1f8,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_1d8 = "download/";
    local_1d0 = 1;
    local_330 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"downloads",9);
    local_418 = 0;
    FUN_180066720(local_1c8,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_1a8 = "downloads/";
    local_1a0 = 1;
    local_388 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"downloadlists",0xd);
    local_418 = 0;
    FUN_180066720(local_198,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_178 = "downloadlists/";
    local_170 = 1;
    local_410[0] = (wchar_t ***)&local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"cache",5);
    local_418 = 0;
    FUN_180066720(local_168,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_148 = "cache/";
    local_140 = 1;
    pcVar13 = local_228;
    do {
      iVar3 = FUN_18014e9d0(pcVar13);
      if (0 < iVar3) {
        local_428 = &DAT_18033e5ea;
        if (4999 < iVar3) {
          local_428 = &DAT_18035efac;
        }
        local_420 = iVar3;
        FUN_180012ac0(local_138,0xe0,"%s still holds %s%d file(s)",*(undefined8 *)(pcVar13 + 0x20));
        local_2d0 = (wchar_t ***)0x0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        sVar6 = strlen(local_138);
        FUN_18001d080(&local_2d0,local_138,sVar6);
        FUN_18014df00(*(undefined4 *)(pcVar13 + 0x28),&local_2d0);
        FUN_18020e450(&local_2d0);
      }
      pcVar13 = pcVar13 + 0x30;
    } while (pcVar13 != local_138);
    local_280 = 0;
    lStack_278 = 0;
    local_270 = 0;
    FUN_18014f070(local_248,&local_280);
    if (local_280 != lStack_278) {
      FUN_180012ac0(local_138,0xe0,
                    "%d crash dump(s) not cleared - a dump taken while injected lists our module",
                    lStack_278 - local_280 >> 5);
      local_2d0 = (wchar_t ***)0x0;
      uStack_2c8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      sVar6 = strlen(local_138);
      FUN_18001d080(&local_2d0,local_138,sVar6);
      FUN_18014df00(2,&local_2d0);
      FUN_18020e450(&local_2d0);
    }
    local_380[0] = L"cl.db";
    local_380[1] = L"mn.db";
    local_380[2] = L"sv.db";
    ppwVar15 = local_380;
    do {
      if (DAT_180423571 != '\0') break;
      local_410[0] = (wchar_t ***)&local_2f0;
      sVar6 = wcslen(*ppwVar15);
      local_2f0 = (wchar_t *)0x0;
      uStack_2e8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      FUN_180211510(&local_2f0,*ppwVar15,sVar6);
      local_418 = 0;
      uVar7 = FUN_180066720(&local_2d0,local_268,&local_2f0);
      FUN_180150550(uVar7);
      FUN_18021e290(&local_2d0);
      FUN_18021e290(&local_2f0);
      ppwVar15 = ppwVar15 + 1;
    } while (ppwVar15 != local_368);
    local_410[0] = (wchar_t ***)&local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"sv.db",5);
    local_418 = 0;
    FUN_180066720(&local_2d0,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    piVar8 = (int *)FUN_180067c80(local_410,&local_2d0);
    uVar11 = uVar18;
    if (*piVar8 == 0) {
      iVar4 = piVar8[2];
    }
    else if (*piVar8 != 1) {
      ppppwVar12 = &local_2d0;
      if (7 < uStack_2b8) {
        ppppwVar12 = (wchar_t ****)local_2d0;
      }
      iVar4 = FUN_1802d7a0c(ppppwVar12,&local_2f0,9,0xffffffff);
      uVar11 = 0xffffffffffffffff;
      if (iVar4 == 0) {
        uVar11 = uStack_2e8;
      }
    }
    if ((iVar4 == 0) && (uVar11 != 0)) {
      FUN_180012ac0(local_138,0xe0,
                    "sv.db still on disk (%llu KB) - deletable only while you are not hosting",
                    uVar11 >> 10);
      local_2f0 = (wchar_t *)0x0;
      uStack_2e8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      sVar6 = strlen(local_138);
      FUN_18001d080(&local_2f0,local_138,sVar6);
      FUN_18014df00(1,&local_2f0);
      FUN_18020e450(&local_2f0);
    }
    FUN_18021e290(&local_2d0);
    local_298 = 0;
    lStack_290 = 0;
    local_288 = 0;
    local_410[0] = (wchar_t ***)&local_2d0;
    local_2d0 = (wchar_t ***)0x0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    FUN_180211510(&local_2d0,&DAT_18035eab0,3);
    local_418 = 0;
    local_388 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,&DAT_18035eab8,3);
    local_418 = 0;
    uVar7 = FUN_180066720(local_368,local_268,&local_2f0);
    uVar7 = FUN_180066720(local_310,uVar7,&local_2d0);
    cVar2 = FUN_18014e6f0(uVar7,&local_298,1);
    FUN_18021e290(local_310);
    FUN_18021e290(local_368);
    FUN_18021e290(&local_2f0);
    FUN_18021e290(&local_2d0);
    lVar10 = lStack_290;
    if ((cVar2 != '\0') && (lVar16 = local_298, uVar11 = uVar18, local_298 != lStack_290)) {
      do {
        uVar7 = FUN_180066000(lVar16,local_368);
        FUN_18020e540(&local_2d0,uVar7);
        local_418 = 1;
        ppppwVar12 = &local_2d0;
        if (7 < uStack_2b8) {
          ppppwVar12 = (wchar_t ****)local_2d0;
        }
        iVar4 = _wcsicmp((wchar_t *)ppppwVar12,L".dll");
        local_418 = 0;
        FUN_18021e290(&local_2d0);
        FUN_18021e290(local_368);
        uVar5 = (uint)uVar11 + 1;
        if (iVar4 != 0) {
          uVar5 = (uint)uVar11;
        }
        uVar11 = (ulonglong)uVar5;
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != lVar10);
      if (0 < (int)uVar5) {
        FUN_180012ac0(local_138,0xe0,"lua/bin: %d binary module(s) still there (scored indicator)",
                      uVar5);
        local_2d0 = (wchar_t ***)0x0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        sVar6 = strlen(local_138);
        FUN_18001d080(&local_2d0,local_138,sVar6);
        local_328 = &DAT_1803e7a40;
        iVar4 = _Mtx_lock(&DAT_1803e7a40);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e7a8c == 0x7fffffff) {
          DAT_1803e7a8c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        local_400[0] = 1;
        uVar7 = FUN_18016d4c0(&local_3f8,&local_2d0);
        ppppwVar12 = DAT_1803edc28;
        if (DAT_1803edc28 == DAT_1803edc30) {
          FUN_180224570(uVar7,DAT_1803edc28,local_400);
        }
        else {
          local_410[0] = (wchar_t ***)DAT_1803edc28;
          *(undefined4 *)DAT_1803edc28 = local_400[0];
          ppppwVar12[1] = (wchar_t ***)CONCAT71(uStack_3f7,local_3f8);
          ppppwVar12[2] = (wchar_t ***)local_3f0;
          ppppwVar12[3] = (wchar_t ***)local_3e8;
          ppppwVar12[4] = (wchar_t ***)ppwStack_3e0;
          local_3e8 = (wchar_t **)_DAT_1803814b0;
          ppwStack_3e0 = (wchar_t **)_UNK_1803814b8;
          local_3f8 = 0;
          DAT_1803edc28 = DAT_1803edc28 + 5;
        }
        FUN_18020e450(&local_3f8);
        _Mtx_unlock(&DAT_1803e7a40);
        LOCK();
        DAT_180400b0c = DAT_180400b0c + 1;
        UNLOCK();
        FUN_18020e450(&local_2d0);
      }
    }
    _Var9 = _time64((__time64_t *)0x0);
    ppuVar14 = &PTR_u_gameinfo_txt_18033beb0;
    uVar11 = uVar18;
    do {
      uVar7 = FUN_18014fa80(local_368,local_248,ppuVar14);
      lVar10 = FUN_18014fdb0(uVar7);
      FUN_18021e290(local_368);
      uVar17 = uVar11;
      if ((0 < lVar10) && (uVar17 = (ulonglong)((int)uVar11 + 1), 0x2a2ff < _Var9 - lVar10)) {
        uVar17 = uVar11;
      }
      ppuVar14 = ppuVar14 + 4;
      uVar11 = uVar17;
    } while (ppuVar14 != (undefined **)&DAT_18033bf30);
    if (0 < (int)uVar17) {
      FUN_180012ac0(local_138,0xe0,
                    "%d fingerprinted file(s) modified in the last 2 days - reads as a reinstall",
                    uVar17);
      local_2d0 = (wchar_t ***)0x0;
      uStack_2c8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      sVar6 = strlen(local_138);
      FUN_18001d080(&local_2d0,local_138,sVar6);
      local_320 = &DAT_1803e7a40;
      iVar4 = _Mtx_lock(&DAT_1803e7a40);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e7a8c == 0x7fffffff) {
        DAT_1803e7a8c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      local_3d8[0] = 1;
      uVar7 = FUN_18016d4c0(&local_3d0,&local_2d0);
      ppppwVar12 = DAT_1803edc28;
      if (DAT_1803edc28 == DAT_1803edc30) {
        FUN_180224570(uVar7,DAT_1803edc28,local_3d8);
      }
      else {
        local_410[0] = (wchar_t ***)DAT_1803edc28;
        *(undefined4 *)DAT_1803edc28 = local_3d8[0];
        ppppwVar12[1] = (wchar_t ***)CONCAT71(uStack_3cf,local_3d0);
        ppppwVar12[2] = (wchar_t ***)local_3c8;
        ppppwVar12[3] = (wchar_t ***)local_3c0;
        ppppwVar12[4] = (wchar_t ***)ppwStack_3b8;
        local_3c0 = (wchar_t **)_DAT_1803814b0;
        ppwStack_3b8 = (wchar_t **)_UNK_1803814b8;
        local_3d0 = 0;
        DAT_1803edc28 = DAT_1803edc28 + 5;
      }
      FUN_18020e450(&local_3d0);
      _Mtx_unlock(&DAT_1803e7a40);
      LOCK();
      DAT_180400b0c = DAT_180400b0c + 1;
      UNLOCK();
      FUN_18020e450(&local_2d0);
    }
    local_2b0 = 0;
    lStack_2a8 = 0;
    local_2a0 = 0;
    cVar2 = FUN_18014e6f0(local_248,&local_2b0,1);
    lVar10 = lStack_2a8;
    if ((cVar2 != '\0') && (lVar16 = local_2b0, local_2b0 != lStack_2a8)) {
      do {
        uVar11 = FUN_18014fdb0(lVar16);
        if ((0 < (longlong)uVar11) && ((uVar18 == 0 || ((longlong)uVar11 < (longlong)uVar18)))) {
          uVar18 = uVar11;
        }
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != lVar10);
      if ((0 < (longlong)uVar18) && ((longlong)(_Var9 - uVar18) < 0x2a300)) {
        local_2d0 = (wchar_t ***)0x0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        FUN_18001d080(&local_2d0,"Game root reads as a FRESH INSTALL (oldest file < 2 days)",0x39);
        local_318 = &DAT_1803e7a40;
        iVar4 = _Mtx_lock(&DAT_1803e7a40);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e7a8c == 0x7fffffff) {
          DAT_1803e7a8c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        local_3b0[0] = 2;
        uVar7 = FUN_18016d4c0(&local_3a8,&local_2d0);
        ppppwVar12 = DAT_1803edc28;
        if (DAT_1803edc28 == DAT_1803edc30) {
          FUN_180224570(uVar7,DAT_1803edc28,local_3b0);
        }
        else {
          local_410[0] = (wchar_t ***)DAT_1803edc28;
          *(undefined4 *)DAT_1803edc28 = local_3b0[0];
          ppppwVar12[1] = (wchar_t ***)CONCAT71(uStack_3a7,local_3a8);
          ppppwVar12[2] = (wchar_t ***)local_3a0;
          ppppwVar12[3] = (wchar_t ***)local_398;
          ppppwVar12[4] = (wchar_t ***)ppwStack_390;
          local_398 = (wchar_t **)_DAT_1803814b0;
          ppwStack_390 = (wchar_t **)_UNK_1803814b8;
          local_3a8 = 0;
          DAT_1803edc28 = DAT_1803edc28 + 5;
        }
        FUN_18020e450(&local_3a8);
        _Mtx_unlock(&DAT_1803e7a40);
        LOCK();
        DAT_180400b0c = DAT_180400b0c + 1;
        UNLOCK();
        FUN_18020e450(&local_2d0);
      }
    }
    DAT_180400aed = 0;
    FUN_18021c690(&local_2b0);
    FUN_18021c690(&local_298);
    FUN_18021c690(&local_280);
    _eh_vector_destructor_iterator_(local_228,0x30,5,FUN_180151950);
    FUN_18021e290(local_268);
  }
  FUN_18021e290(local_248);
  return;
}


