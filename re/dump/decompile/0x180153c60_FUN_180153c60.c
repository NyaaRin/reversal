// 0x180153c60  FUN_180153c60
// size=1636 thunk=false
// signature: undefined FUN_180153c60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180153c60(int param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  UINT UVar3;
  BOOL BVar4;
  DWORD DVar5;
  size_t sVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  LPWSTR _Dst;
  longlong lVar11;
  LPCWSTR ***lpApplicationName;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 ****_Src;
  undefined1 auStack_4f8 [8];
  undefined1 auStack_4f0 [72];
  undefined4 local_4a8;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 *local_3d8 [2];
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined1 local_3b0 [32];
  undefined1 local_390 [32];
  undefined1 local_370 [32];
  undefined8 local_350;
  HANDLE pvStack_348;
  ulonglong local_340;
  LPWSTR local_338;
  LPWSTR pWStack_330;
  LPWSTR local_328;
  undefined8 ***local_320 [2];
  longlong local_310;
  ulonglong local_308;
  LPCWSTR **local_300 [3];
  ulonglong local_2e8;
  undefined1 local_2e0 [40];
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined4 local_254;
  WCHAR local_248 [264];
  ulonglong local_38;
  
  puVar12 = auStack_4f8;
  puVar13 = auStack_4f8;
  puVar14 = auStack_4f8;
  puVar15 = auStack_4f8;
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_4f8;
  _Dst = (LPWSTR)0x0;
  local_4a8 = 0;
  memset(local_248,0,0x208);
  UVar3 = GetSystemDirectoryW(local_248,0x104);
  uVar16 = (ulonglong)(UVar3 - 1);
  if (UVar3 - 1 < 0x103) {
    local_3c8 = &local_438;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    local_420 = 0;
    FUN_180211510(&local_438,L"powershell.exe",0xe);
    local_4a8 = 0;
    local_3c0 = &local_458;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0;
    local_440 = 0;
    FUN_180211510(&local_458,L"v1.0",4);
    local_4a8 = 0;
    local_3b8 = &local_478;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    local_460 = 0;
    FUN_180211510(&local_478,L"WindowsPowerShell",0x11);
    local_4a8 = 0;
    local_3d8[0] = &local_498;
    sVar6 = wcslen(local_248);
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    local_480 = 0;
    FUN_180211510(&local_498,local_248,sVar6);
    local_4a8 = 0;
    uVar7 = FUN_180066720(local_3b0,&local_498,&local_478);
    uVar7 = FUN_180066720(local_370,uVar7,&local_458);
    FUN_180066720(local_300,uVar7,&local_438);
    FUN_18021e290(local_370);
    FUN_18021e290(local_3b0);
    FUN_18021e290(&local_498);
    FUN_18021e290(&local_478);
    FUN_18021e290(&local_458);
    FUN_18021e290(&local_438);
    piVar8 = (int *)FUN_180067c80(local_3d8,local_300);
    if ((*piVar8 == 2) && (piVar8[2] == 0)) {
      uVar7 = FUN_180152a90(local_3b0,param_1,param_2);
      FUN_180152810(local_2e0,uVar7);
      FUN_18021e290(local_3b0);
      FUN_18020e540(local_390,local_300);
      local_4a8 = 0x100;
      puVar9 = (undefined8 *)FUN_180211640(local_390);
      local_3f8 = *puVar9;
      uStack_3f0 = puVar9[1];
      local_3e8 = puVar9[2];
      uStack_3e0 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 7;
      *(undefined2 *)puVar9 = 0;
      local_4a8 = 0x300;
      puVar9 = (undefined8 *)
               FUN_180211740(&local_3f8,
                             L"\" -NoLogo -NoProfile -NonInteractive -WindowStyle Hidden -EncodedCommand "
                             ,0x49);
      local_418 = *puVar9;
      uStack_410 = puVar9[1];
      local_408 = puVar9[2];
      uStack_400 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 7;
      *(undefined2 *)puVar9 = 0;
      local_4a8 = 0x700;
      FUN_1802052e0(local_320,&local_418,local_2e0);
      local_4a8 = 0x300;
      FUN_18021e290(&local_418);
      local_4a8 = 0x100;
      FUN_18021e290(&local_3f8);
      local_4a8 = 0;
      FUN_18021e290(local_390);
      if (local_308 < 8) {
        lVar17 = (longlong)local_320 + local_310 * 2;
        _Src = local_320;
      }
      else {
        lVar17 = (longlong)local_320[0] + local_310 * 2;
        _Src = (undefined8 ****)local_320[0];
      }
      local_338 = (LPWSTR)0x0;
      pWStack_330 = (LPWSTR)0x0;
      local_328 = (LPWSTR)0x0;
      uVar16 = lVar17 - (longlong)_Src >> 1;
      puVar14 = auStack_4f8;
      if (uVar16 != 0) {
        if (0x7fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_18020cc40();
        }
        uVar2 = uVar16 * 2;
        if (uVar2 != 0) {
          if (uVar2 < 0x1000) {
            _Dst = (LPWSTR)FUN_1802d8350(uVar2);
            puVar13 = auStack_4f8;
          }
          else {
            if (uVar2 + 0x27 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_180012fe0();
            }
            lVar10 = FUN_1802d8350();
            lVar11 = lVar10;
            if (lVar10 == 0) {
              lVar11 = 5;
              pcVar1 = (code *)swi(0x29);
              lVar10 = (*pcVar1)();
              puVar12 = auStack_4f0;
            }
            _Dst = (LPWSTR)(lVar10 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(_Dst + -4) = lVar11;
            puVar13 = puVar12;
          }
        }
        local_328 = _Dst + uVar16;
        *(LPWSTR **)(puVar13 + 0x58) = &local_338;
        *(undefined8 *)(puVar13 + -8) = 0x1801540c2;
        local_338 = _Dst;
        pWStack_330 = _Dst;
        memmove(_Dst,_Src,lVar17 - (longlong)_Src);
        pWStack_330 = _Dst + uVar16;
        *(undefined8 *)(puVar13 + 0x58) = 0;
        puVar14 = puVar13;
      }
      *(undefined2 *)(puVar14 + 0x54) = 0;
      if (pWStack_330 == local_328) {
        *(undefined8 *)(puVar14 + -8) = 0x180154107;
        FUN_180223f60(&local_338,pWStack_330,puVar14 + 0x54);
      }
      else {
        *pWStack_330 = L'\0';
        pWStack_330 = pWStack_330 + 1;
      }
      local_2b4 = 0;
      uStack_2ac = 0;
      local_2a4 = 0;
      uStack_29c = 0;
      local_294 = 0;
      uStack_28c = 0;
      local_284 = 0;
      uStack_27c = 0;
      local_274 = 0;
      uStack_26c = 0;
      local_264 = 0;
      uStack_25c = 0;
      local_254 = 0;
      local_2b8 = 0x68;
      local_350 = 0;
      pvStack_348 = (HANDLE)0x0;
      local_340 = 0;
      lpApplicationName = local_300;
      if (7 < local_2e8) {
        lpApplicationName = (LPCWSTR ***)local_300[0];
      }
      *(undefined8 **)(puVar14 + 0x48) = &local_350;
      *(undefined4 **)(puVar14 + 0x40) = &local_2b8;
      *(undefined8 *)(puVar14 + 0x38) = 0;
      *(undefined8 *)(puVar14 + 0x30) = 0;
      *(undefined4 *)(puVar14 + 0x28) = 0x8000400;
      *(undefined4 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + -8) = 0x1801541ad;
      BVar4 = CreateProcessW((LPCWSTR)lpApplicationName,local_338,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,*(BOOL *)(puVar14 + 0x20),
                             *(DWORD *)(puVar14 + 0x28),*(LPVOID *)(puVar14 + 0x30),
                             *(LPCWSTR *)(puVar14 + 0x38),*(LPSTARTUPINFOW *)(puVar14 + 0x40),
                             *(LPPROCESS_INFORMATION *)(puVar14 + 0x48));
      if (BVar4 == 0) {
        if (DAT_180400b00 != param_1) {
          *(undefined8 *)(puVar14 + -8) = 0x1801541bf;
          DVar5 = GetLastError();
          *(undefined8 *)(puVar14 + -8) = 0x1801541cd;
          FUN_180014410("[DATA] post-exit cleaner failed: CreateProcessW err=%lu\n",DVar5);
        }
        uVar16 = 0;
        DAT_180400b00 = param_1;
      }
      else {
        *(undefined8 *)(puVar14 + -8) = 0x1801541e4;
        CloseHandle(pvStack_348);
        DAT_180400af8 = local_350;
        DAT_180400b00 = 0;
        *(undefined8 *)(puVar14 + -8) = 0x180154214;
        DAT_180400b04 = param_1;
        FUN_180014410("[DATA] post-exit cleaner armed: helper=%lu mask=0x%X\n",
                      local_340 & 0xffffffff,param_1);
        uVar16 = 1;
      }
      *(undefined8 *)(puVar14 + -8) = 0x180154222;
      FUN_18021c620(&local_338);
      *(undefined8 *)(puVar14 + -8) = 0x18015422f;
      FUN_18021e290(local_320);
      *(undefined8 *)(puVar14 + -8) = 0x18015423c;
      FUN_18021e290(local_2e0);
    }
    else {
      if (DAT_180400b00 != param_1) {
        FUN_180014410("[DATA] post-exit cleaner failed: PowerShell unavailable ec=%d\n");
      }
      uVar16 = 0;
      DAT_180400b00 = param_1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x180154266;
    FUN_18021e290(local_300);
    puVar15 = puVar14;
  }
  else {
    if (DAT_180400b00 != param_1) {
      DVar5 = GetLastError();
      uVar16 = FUN_180014410("[DATA] post-exit cleaner failed: GetSystemDirectoryW err=%lu\n",DVar5)
      ;
    }
    uVar16 = uVar16 & 0xffffffffffffff00;
    DAT_180400b00 = param_1;
  }
  *(undefined8 *)(puVar15 + -8) = 0x18015429e;
  return uVar16;
}


