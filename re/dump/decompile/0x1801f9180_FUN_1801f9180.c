// 0x1801f9180  FUN_1801f9180
// size=7719 thunk=false
// signature: undefined FUN_1801f9180()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f9180(void)

{
  longlong **pplVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  HMODULE pHVar8;
  undefined8 *puVar9;
  char *pcVar10;
  FARPROC pFVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined1 local_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong **local_88 [2];
  undefined8 ***local_78;
  longlong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)local_108;
  LOCK();
  bVar14 = DAT_1803fa5f4 == 0;
  if (bVar14) {
    DAT_1803fa5f4 = 1;
  }
  UNLOCK();
  pFVar11 = (FARPROC)0x0;
  while (!bVar14) {
    Sleep((uint)((FARPROC)0x1f < pFVar11));
    pFVar11 = pFVar11 + 1;
    LOCK();
    bVar14 = DAT_1803fa5f4 == 0;
    if (bVar14) {
      DAT_1803fa5f4 = 1;
    }
    UNLOCK();
  }
  if (DAT_1803fa7a0 == (HANDLE)0x0) {
    DAT_1803fa7a0 = HeapCreate(0,0,0);
  }
  LOCK();
  DAT_1803fa5f4 = 0;
  UNLOCK();
  FUN_180014410("\n=== mayrrX64 Hook Setup ===\n");
  FUN_180014410("[IFACE] D3D=%p Client=%p CMode=%p\n",DAT_1803fa5e0,DAT_1803f9278,DAT_1803fa638);
  FUN_180014410("[IFACE] Panel=%p View=%p Eng=%p\n",DAT_1803fa600,DAT_1803fa680,DAT_1803fa668);
  FUN_180014410("[IFACE] MdlR=%p LuaSh=%p VGui=%p\n",DAT_1803fa598,DAT_1803fa678,DAT_1803fa350);
  local_50 = &local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,
                "48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC 60"
                ,0x59);
  local_78 = &local_a8;
  local_a8 = (longlong **)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"client.dll",10);
  lVar6 = FUN_180015f40(&local_a8,&local_c8);
  puVar12 = &DAT_180346a84;
  puVar13 = &DAT_180346a84;
  if (lVar6 != 0) {
    puVar13 = &DAT_180346438;
  }
  FUN_180014410("[PAT] DispatchEffect     = %p %s\n",lVar6,puVar13);
  if (lVar6 != 0) {
    uVar3 = FUN_180242fc0(lVar6,FUN_1801f6cc0,&DAT_1803fa3e0);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[MH] DispatchEffect: %s\n",uVar7);
  }
  pHVar8 = GetModuleHandleA("lua_shared.dll");
  pFVar11 = GetProcAddress(pHVar8,"lua_getstack");
  puVar13 = &DAT_180346a84;
  if (pFVar11 != (FARPROC)0x0) {
    puVar13 = &DAT_180346438;
  }
  FUN_180014410("[PAT] lua_getstack       = %p %s\n",pFVar11,puVar13);
  if (pFVar11 != (FARPROC)0x0) {
    uVar3 = FUN_180242fc0(pFVar11,&LAB_1800228b0,&DAT_1803fa5b0);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[MH] lua_getstack: %s\n",uVar7);
  }
  if (((DAT_1804096f8 == 0) || (DAT_1804096e8 == (FARPROC)0x0)) &&
     (pHVar8 = GetModuleHandleA("lua_shared.dll"), pHVar8 != (HMODULE)0x0)) {
    pFVar11 = GetProcAddress(pHVar8,"luaL_loadbufferx");
    if (pFVar11 == (FARPROC)0x0) {
      FUN_180014410("[DUMP] luaL_loadbufferx not found in lua_shared.dll\n");
    }
    else {
      iVar4 = FUN_180242fc0(pFVar11,FUN_1801993a0,&DAT_1804096f8);
      DAT_1804096e8 = (FARPROC)0x0;
      if (iVar4 == 0) {
        DAT_1804096e8 = pFVar11;
      }
      FUN_180014410("[PAT] luaL_loadbufferx   = %p %s\n",pFVar11,&DAT_180346438);
      uVar7 = FUN_1802436b0(iVar4);
      FUN_180014410("[MH] luaL_loadbufferx: %s\n",uVar7);
    }
  }
  if (DAT_180409b90 == 0) {
    FUN_180147130();
    local_78 = &local_c8;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"40 53 48 83 EC 20 66 89 91 ? ? ? ? 48 8B D9 83 FA FF",0x34);
    local_50 = &local_a8;
    local_a8 = (longlong **)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"client.dll",10);
    lVar6 = FUN_180015f40(&local_a8,&local_c8);
    if (lVar6 == 0) {
      FUN_180014410("[Toolbox] SetModelIndex sig OUTDATED - model revert guard disabled\n");
    }
    else {
      iVar4 = FUN_180242fc0(lVar6,&LAB_180147890,&DAT_180409b90);
      uVar7 = FUN_1802436b0(iVar4);
      FUN_180014410("[PAT] SetModelIndex      = %p OK\n[MH] SetModelIndex guard: %s\n",lVar6,uVar7);
      if (iVar4 == 0) {
        FUN_180243560(lVar6,1);
      }
      else {
        DAT_180409b90 = 0;
      }
    }
  }
  FUN_18011f150();
  FUN_18011fca0();
  if (DAT_180409ca8 == 0) {
    local_78 = &local_c8;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"48 89 5C 24 ? 57 48 83 EC ? 48 8B B9 ? ? ? ? 48 8B D9 0F 29 74 24",0x41
                 );
    local_50 = &local_a8;
    local_a8 = (longlong **)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"client.dll",10);
    lVar6 = FUN_180015f40(&local_a8,&local_c8);
    puVar13 = &DAT_180346a84;
    if (lVar6 != 0) {
      puVar13 = &DAT_180346438;
    }
    FUN_180014410("[PAT] AnimState::Update  = %p %s\n",lVar6,puVar13);
    if (lVar6 != 0) {
      iVar4 = FUN_180242fc0(lVar6,FUN_1800c15f0,&DAT_180409ca8);
      uVar7 = FUN_1802436b0(iVar4);
      FUN_180014410("[MH] AnimState::Update: %s\n",uVar7);
      if ((iVar4 == 0) && (iVar4 = FUN_180243560(lVar6,1), iVar4 == 0)) {
        DAT_180409cb4 = 1;
      }
      else {
        DAT_180409ca8 = 0;
      }
    }
  }
  local_78 = &local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"4C 8B C1 85 D2 7E 24 48 8B 41 20 48 63 D2 48 8D 04 D0 48 83",0x3b);
  local_50 = &local_a8;
  local_a8 = (longlong **)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"lua_shared.dll",0xe);
  lVar6 = FUN_180015f40(&local_a8,&local_c8);
  puVar13 = &DAT_180346a84;
  if (lVar6 != 0) {
    puVar13 = &DAT_180346438;
  }
  FUN_180014410("[PAT] lua index2adr      = %p %s\n",lVar6,puVar13);
  if (lVar6 != 0) {
    uVar3 = FUN_180242fc0(lVar6,&LAB_180023570,&DAT_1803fa648);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[MH] lua index2adr: %s\n",uVar7);
  }
  local_78 = &local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,
                "40 53 48 83 EC 20 4C 8B C9 4C 8D 91 ? ? ? ? 48 BB FF FF FF FF FF 7F 00 00 41 BB 24 00 00 00"
                ,0x5b);
  local_50 = &local_a8;
  local_a8 = (longlong **)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"lua_shared.dll",0xe);
  lVar6 = FUN_180015f40(&local_a8,&local_c8);
  puVar13 = &DAT_180346a84;
  if (lVar6 != 0) {
    puVar13 = &DAT_180346438;
  }
  FUN_180014410("[PAT] lua gc_mark_root   = %p %s\n",lVar6,puVar13);
  if (lVar6 != 0) {
    iVar4 = FUN_180242fc0(lVar6,FUN_180023650,&DAT_1803fa5b8);
    uVar7 = FUN_1802436b0(iVar4);
    FUN_180014410("[MH] lua gc_mark_root: %s\n",uVar7);
    if ((iVar4 == 0) && (lVar6 = FUN_180023290(), lVar6 != 0)) {
      DAT_1803fa56c = '\x01';
    }
    else {
      DAT_1803fa56c = '\0';
    }
  }
  pcVar10 = "registry refs (fallback)";
  if (DAT_1803fa56c != '\0') {
    pcVar10 = "raw TValue + gc_mark_root";
  }
  FUN_180014410("[INFO] lua persistence  = %s\n",pcVar10);
  pHVar8 = GetModuleHandleA("lua_shared.dll");
  pFVar11 = GetProcAddress(pHVar8,"lua_close");
  if (pFVar11 == (FARPROC)0x0) {
    FUN_180014410(
                 "[MH] lua_close: export not found -- stale persist entries are left to the gcroot guard\n"
                 );
  }
  else {
    uVar3 = FUN_180242fc0(pFVar11,FUN_1801f6f30,&DAT_1803fa458);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[MH] lua_close: %s\n",uVar7);
  }
  pHVar8 = GetModuleHandleA("USER32.dll");
  pFVar11 = GetProcAddress(pHVar8,"SetCursorPos");
  uVar3 = FUN_180242fc0(pFVar11,&LAB_1801f7050,&DAT_1803fa3e8);
  uVar7 = FUN_1802436b0(uVar3);
  FUN_180014410("[MH] SetCursorPos: %s\n",uVar7);
  pHVar8 = GetModuleHandleA("USER32.dll");
  pFVar11 = GetProcAddress(pHVar8,"GetCursorPos");
  uVar3 = FUN_180242fc0(pFVar11,FUN_1801f7090,&DAT_1803fa490);
  uVar7 = FUN_1802436b0(uVar3);
  FUN_180014410("[MH] GetCursorPos: %s\n",uVar7);
  pHVar8 = GetModuleHandleA("USER32.dll");
  pFVar11 = GetProcAddress(pHVar8,"SetCursor");
  uVar3 = FUN_180242fc0(pFVar11,FUN_1801f7140,&DAT_1803fa390);
  uVar7 = FUN_1802436b0(uVar3);
  FUN_180014410("[MH] SetCursor: %s\n",uVar7);
  local_78 = &local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"40 55 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 48 8D 6C 24 40",0x3d);
  local_50 = &local_a8;
  local_a8 = (longlong **)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"client.dll",10);
  lVar6 = FUN_180015f40(&local_a8,&local_c8);
  pcVar10 = "(x64 not found)";
  if (lVar6 != 0) {
    pcVar10 = "OK";
  }
  FUN_180014410("[PAT] DrawTranslucent    = %p %s\n",lVar6,pcVar10);
  if (lVar6 != 0) {
    uVar3 = FUN_180242fc0(lVar6,FUN_1801f7190,&DAT_1803fa3b8);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[MH] DrawTranslucent: %s\n",uVar7);
  }
  local_78 = &local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,
                "48 89 5C 24 10 48 89 74 24 18 57 41 54 41 55 41 56 41 57 48 83 EC 50 8B 71 34 45 33 FF 8B 79 38"
                ,0x5f);
  local_50 = &local_a8;
  local_a8 = (longlong **)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_18001d080(&local_a8,"client.dll",10);
  lVar6 = FUN_180015f40(&local_a8,&local_c8);
  pcVar10 = "FAIL (anim-block crash guard off)";
  if (lVar6 != 0) {
    pcVar10 = "OK";
  }
  FUN_180014410("[PAT] studio pAnim       = %p %s\n",lVar6,pcVar10);
  if (lVar6 != 0) {
    uVar3 = FUN_180242fc0(lVar6,FUN_1801f7310,&DAT_1803fa4a0);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[MH] studio pAnim: %s\n",uVar7);
  }
  if (DAT_1803fa5a0 == (longlong *)0x0) {
    FUN_180014410("[MH-WARN] g_pMoveHelper null - sim footstep audio stays doubled\n");
  }
  else {
    lVar6 = *DAT_1803fa5a0;
    FUN_180014410("[PAT] MoveHelper vt      = %p\n",lVar6);
    if (lVar6 != 0) {
      uVar3 = FUN_180242fc0(*(undefined8 *)(lVar6 + 0x20),&LAB_180024c80,&DAT_1803fe4b8);
      uVar7 = FUN_1802436b0(uVar3);
      FUN_180014410("[MH] MoveHelper StartSound(full): %s\n",uVar7);
      uVar3 = FUN_180242fc0(*(undefined8 *)(lVar6 + 0x28),&LAB_180024ca0,&DAT_1803fe4b0);
      uVar7 = FUN_1802436b0(uVar3);
      FUN_180014410("[MH] MoveHelper StartSound(name): %s\n",uVar7);
    }
  }
  local_78 = &local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"40 53 48 83 EC 40 4C 63 49 10 48 8B D9",0x26);
  local_50 = (undefined8 ***)&local_70;
  local_70 = (longlong *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_18001d080(&local_70,"client.dll",10);
  lVar6 = FUN_180015f40(&local_70,&local_c8);
  puVar13 = &DAT_180346a84;
  if (lVar6 != 0) {
    puVar13 = &DAT_180346438;
  }
  FUN_180014410("[PAT] WriteUsercmd       = %p %s\n",lVar6,puVar13);
  local_88[0] = &local_70;
  local_70 = (longlong *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_18001d080(&local_70,
                "8B 05 ? ? ? ? FF C8 89 81 ? ? ? ? 48 B8 00 00 00 E0 FF FF EF C7 48 89 81 ? ? ? ? C3"
                ,0x53);
  local_a8 = (longlong **)&local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"client.dll",10);
  lVar6 = FUN_180015f40(&local_c8,&local_70);
  if (lVar6 != 0) {
    puVar12 = &DAT_180346438;
  }
  FUN_180014410("[PAT] InvalidateBoneCache= %p %s\n",lVar6,puVar12);
  if (DAT_1803fa5e0 == 0) {
    FUN_180014410("[VMT-FAIL] D3D device is null!\n");
  }
  else {
    puVar9 = (undefined8 *)FUN_1801e97c0();
    if (puVar9 == (undefined8 *)0x0) {
      FUN_180014410("[VMT-FAIL] no verified IDirect3DDevice9 behind raw=%p; D3D hooks skipped\n",
                    DAT_1803fa5e0);
    }
    else {
      pplVar1 = (longlong **)*puVar9;
      local_c8 = (longlong **)0x0;
      uStack_c0 = 0;
      local_a8 = &local_b8;
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      DAT_1803fa4e8 = puVar9;
      local_b8 = (longlong *)FUN_1802d8350(0x30);
      *local_b8 = (longlong)local_b8;
      local_b8[1] = (longlong)local_b8;
      local_b8[2] = (longlong)local_b8;
      *(undefined2 *)(local_b8 + 3) = 0x101;
      local_c8 = pplVar1;
      FUN_1801ecdc0(&DAT_1803fa960,&local_c8);
      local_88[0] = &local_b8;
      FUN_1802095f0(&local_b8);
      local_a8._0_4_ = 0x25;
      uStack_a0 = *(undefined8 *)(DAT_1803fa960 + 0x128);
      FUN_180208e00(&DAT_1803fa970,local_88,&local_a8);
      DAT_1803fa370 = local_88[0][5];
      LOCK();
      UNLOCK();
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x128),8,0x40,(PDWORD)&local_50);
      *(code **)(DAT_1803fa960 + 0x128) = FUN_1801f5ad0;
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x128),8,(DWORD)local_50,(PDWORD)0x0);
      local_a8._0_4_ = 0x22;
      uStack_a0 = *(undefined8 *)(DAT_1803fa960 + 0x110);
      FUN_180208e00(&DAT_1803fa970,local_88,&local_a8);
      DAT_1803fa4f8 = local_88[0][5];
      LOCK();
      UNLOCK();
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x110),8,0x40,(PDWORD)&local_50);
      *(code **)(DAT_1803fa960 + 0x110) = FUN_1801ebcd0;
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x110),8,(DWORD)local_50,(PDWORD)0x0);
      local_a8._0_4_ = 0x20;
      uStack_a0 = *(undefined8 *)(DAT_1803fa960 + 0x100);
      FUN_180208e00(&DAT_1803fa970,local_88,&local_a8);
      DAT_1804235a0 = local_88[0][5];
      LOCK();
      UNLOCK();
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x100),8,0x40,(PDWORD)&local_50);
      *(code **)(DAT_1803fa960 + 0x100) = FUN_180118fa0;
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x100),8,(DWORD)local_50,(PDWORD)0x0);
      local_a8._0_4_ = 0x11;
      uStack_a0 = *(undefined8 *)(DAT_1803fa960 + 0x88);
      FUN_180208e00(&DAT_1803fa970,local_88,&local_a8);
      DAT_1803fa4e0 = local_88[0][5];
      LOCK();
      UNLOCK();
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x88),8,0x40,(PDWORD)&local_50);
      *(code **)(DAT_1803fa960 + 0x88) = FUN_1801ebf30;
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x88),8,(DWORD)local_50,(PDWORD)0x0);
      local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x10);
      uStack_a0 = *(undefined8 *)(DAT_1803fa960 + 0x80);
      FUN_180208e00(&DAT_1803fa970,local_88,&local_a8);
      DAT_1803fa4d8 = local_88[0][5];
      LOCK();
      UNLOCK();
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x80),8,0x40,(PDWORD)&local_50);
      *(code **)(DAT_1803fa960 + 0x80) = FUN_1801ebe00;
      VirtualProtect((LPVOID)(DAT_1803fa960 + 0x80),8,(DWORD)local_50,(PDWORD)0x0);
      local_d8 = DAT_1803fa4d8;
      local_e0 = DAT_1803fa4e0;
      local_e8 = DAT_1804235a0;
      FUN_180014410("[VMT] D3D: dev=%p RT=%p Stretch=%p GRTD=%p Present=%p Reset=%p\n",puVar9,
                    DAT_1803fa370,DAT_1803fa4f8);
    }
  }
  FUN_1801ecae0();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
  DAT_18040a288 = FUN_1801ed510;
  DAT_18040a278 = FUN_180119da0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
  if (DAT_1803fa640 != (undefined8 *)0x0) {
    pplVar1 = (longlong **)*DAT_1803fa640;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803fa9e0,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x14);
    uStack_a0 = *(undefined8 *)(DAT_1803fa9e0 + 0xa0);
    FUN_180208e00(&DAT_1803fa9f0,local_88,&local_a8);
    DAT_1803fa3d8 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fa9e0 + 0xa0),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803fa9e0 + 0xa0) = FUN_1801ed5d0;
    VirtualProtect((LPVOID)(DAT_1803fa9e0 + 0xa0),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] MaterialSystem: OverrideConfig(20)=%p\n",DAT_1803fa3d8);
    FUN_180115a50();
  }
  if (DAT_1803f9278 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] CHLClient is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803f9278;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803faa60,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8._0_4_ = 0x1a;
    uStack_a0 = *(undefined8 *)(DAT_1803faa60 + 0xd0);
    FUN_180208e00(&DAT_1803faa70,local_88,&local_a8);
    DAT_1803fa440 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0xd0),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa60 + 0xd0) = FUN_1801f6a20;
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0xd0),8,(DWORD)local_50,(PDWORD)0x0);
    local_a8._0_4_ = 0x17;
    uStack_a0 = *(undefined8 *)(DAT_1803faa60 + 0xb8);
    FUN_180208e00(&DAT_1803faa70,local_88,&local_a8);
    DAT_1803fa438 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0xb8),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa60 + 0xb8) = FUN_1801f3490;
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0xb8),8,(DWORD)local_50,(PDWORD)0x0);
    local_a8._0_4_ = 0xb;
    uStack_a0 = *(undefined8 *)(DAT_1803faa60 + 0x58);
    FUN_180208e00(&DAT_1803faa70,local_88,&local_a8);
    DAT_1803fa388 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0x58),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa60 + 0x58) = FUN_1801f6950;
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0x58),8,(DWORD)local_50,(PDWORD)0x0);
    local_a8._0_4_ = 5;
    uStack_a0 = *(undefined8 *)(DAT_1803faa60 + 0x28);
    FUN_180208e00(&DAT_1803faa70,local_88,&local_a8);
    DAT_1803fa410 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0x28),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa60 + 0x28) = FUN_1801f6840;
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0x28),8,(DWORD)local_50,(PDWORD)0x0);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,7);
    uStack_a0 = *(undefined8 *)(DAT_1803faa60 + 0x38);
    FUN_180208e00(&DAT_1803faa70,local_88,&local_a8);
    DAT_1803fa420 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0x38),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa60 + 0x38) = FUN_1801f68d0;
    VirtualProtect((LPVOID)(DAT_1803faa60 + 0x38),8,(DWORD)local_50,(PDWORD)0x0);
    local_e0 = DAT_1803fa420;
    local_e8 = DAT_1803fa410;
    FUN_180014410("[VMT] VR(26)=%p WU(23)=%p HU(11)=%p LI(5)=%p LS(7)=%p ESP->ClViewRender\n",
                  DAT_1803fa440,DAT_1803fa438,DAT_1803fa388);
  }
  if (DAT_1803fa638 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] ClientMode is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa638;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803fa9c0,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x15);
    uStack_a0 = *(undefined8 *)(DAT_1803fa9c0 + 0xa8);
    FUN_180208e00(&DAT_1803fa9d0,local_88,&local_a8);
    DAT_1803fa3d0 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fa9c0 + 0xa8),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803fa9c0 + 0xa8) = FUN_1801ee530;
    VirtualProtect((LPVOID)(DAT_1803fa9c0 + 0xa8),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] CM(21)=%p\n",DAT_1803fa3d0);
  }
  if (DAT_1803fa600 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] Panel is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa600;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803faa20,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x29);
    uStack_a0 = *(undefined8 *)(DAT_1803faa20 + 0x148);
    FUN_180208e00(&DAT_1803faa30,local_88,&local_a8);
    DAT_1803fa508 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa20 + 0x148),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa20 + 0x148) = FUN_1801ed360;
    VirtualProtect((LPVOID)(DAT_1803faa20 + 0x148),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] PT(41)=%p\n",DAT_1803fa508);
  }
  if ((DAT_1803fa680 == (undefined8 *)0x0) || (DAT_1803f9258 == '\0')) {
    FUN_180014410("[VMT-FAIL] ViewRender is null or not verified; slots 6/37 left untouched\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa680;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803fa980,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8._0_4_ = 6;
    uStack_a0 = *(undefined8 *)(DAT_1803fa980 + 0x30);
    FUN_180208e00(&DAT_1803fa990,local_88,&local_a8);
    DAT_1803fa478 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fa980 + 0x30),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803fa980 + 0x30) = FUN_1801f1b80;
    VirtualProtect((LPVOID)(DAT_1803fa980 + 0x30),8,(DWORD)local_50,(PDWORD)0x0);
    local_a8._0_4_ = 0x25;
    uStack_a0 = *(undefined8 *)(DAT_1803fa980 + 0x128);
    FUN_180208e00(&DAT_1803fa990,local_88,&local_a8);
    DAT_1803fa3a0 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fa980 + 0x128),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803fa980 + 0x128) = FUN_1801f32a0;
    VirtualProtect((LPVOID)(DAT_1803fa980 + 0x128),8,(DWORD)local_50,(PDWORD)0x0);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x28);
    uStack_a0 = *(undefined8 *)(DAT_1803fa980 + 0x140);
    FUN_180208e00(&DAT_1803fa990,local_88,&local_a8);
    DAT_1803fa498 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fa980 + 0x140),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803fa980 + 0x140) = FUN_1801f73b0;
    VirtualProtect((LPVOID)(DAT_1803fa980 + 0x140),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] RV(6)=%p PreHUD(37)=%p DrawViewModels(40)=%p\n",DAT_1803fa478,DAT_1803fa3a0
                  ,DAT_1803fa498);
  }
  if (DAT_1803fa668 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] Engine is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa668;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803faaf0,&local_c8);
    local_88[0] = &local_b8;
    uVar3 = FUN_1802095f0(&local_b8);
    uVar3 = FUN_180209520(uVar3,0x14,FUN_1801f3360,&DAT_1803fa380);
    FUN_180209520(uVar3,0x13,&LAB_1801f3440,&DAT_1803fa3f0);
    FUN_180014410("[VMT] SVA(20)=%p GVA(19)=%p\n",DAT_1803fa380,DAT_1803fa3f0);
  }
  if (DAT_1803fa598 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] ModelRender is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa598;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803faa40,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0x14);
    uStack_a0 = *(undefined8 *)(DAT_1803faa40 + 0xa0);
    FUN_180208e00(&DAT_1803faa50,local_88,&local_a8);
    DAT_1803fa378 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faa40 + 0xa0),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faa40 + 0xa0) = FUN_1801f5340;
    VirtualProtect((LPVOID)(DAT_1803faa40 + 0xa0),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] DME(20)=%p\n",DAT_1803fa378);
  }
  if (DAT_1803fa678 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] LuaShared is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa678;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803faad0,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,5);
    uStack_a0 = *(undefined8 *)(DAT_1803faad0 + 0x28);
    FUN_180208e00(&DAT_1803faae0,local_88,&local_a8);
    DAT_1803fa3c0 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803faad0 + 0x28),8,0x40,(PDWORD)&local_50);
    *(code **)(DAT_1803faad0 + 0x28) = FUN_1801f6f60;
    VirtualProtect((LPVOID)(DAT_1803faad0 + 0x28),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] CloseLuaInterface(5)=%p\n",DAT_1803fa3c0);
  }
  if (DAT_1803fa350 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] VGui is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa350;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803faaa0,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
  }
  if (DAT_1803fa5a8 == (undefined8 *)0x0) {
    FUN_180014410("[VMT-FAIL] InputSystem is null!\n");
  }
  else {
    pplVar1 = (longlong **)*DAT_1803fa5a8;
    local_c8 = (longlong **)0x0;
    uStack_c0 = 0;
    local_a8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_b8 = (longlong *)FUN_1802d8350(0x30);
    *local_b8 = (longlong)local_b8;
    local_b8[1] = (longlong)local_b8;
    local_b8[2] = (longlong)local_b8;
    *(undefined2 *)(local_b8 + 3) = 0x101;
    local_c8 = pplVar1;
    FUN_1801ecdc0(&DAT_1803fad80,&local_c8);
    local_88[0] = &local_b8;
    FUN_1802095f0(&local_b8);
    local_a8 = (longlong **)CONCAT44(local_a8._4_4_,0xf);
    uStack_a0 = *(undefined8 *)(DAT_1803fad80 + 0x78);
    FUN_180208e00(&DAT_1803fad90,local_88,&local_a8);
    DAT_1803fa3c8 = local_88[0][5];
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fad80 + 0x78),8,0x40,(PDWORD)&local_50);
    *(undefined1 **)(DAT_1803fad80 + 0x78) = &LAB_1801f7440;
    VirtualProtect((LPVOID)(DAT_1803fad80 + 0x78),8,(DWORD)local_50,(PDWORD)0x0);
    FUN_180014410("[VMT] IsButtonDown(15)=%p\n",DAT_1803fa3c8);
  }
  local_a8 = &local_70;
  local_70 = (longlong *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_18001d080(&local_70,"40 55 53 48 8D AC 24 38 F0 FF FF B8 C8 10 00 00",0x2f);
  local_88[0] = (longlong **)&local_c8;
  local_c8 = (longlong **)0x0;
  uStack_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"engine.dll",10);
  lVar6 = FUN_180015f40(&local_c8,&local_70);
  if (lVar6 == 0) {
    FUN_180014410("[DT] CL_Move signature not found; doubletap disabled\n");
  }
  else {
    uVar3 = FUN_180242fc0(lVar6,FUN_1801f74b0,&DAT_1803fa430);
    uVar7 = FUN_1802436b0(uVar3);
    FUN_180014410("[DT] CL_Move=%p hook=%s\n",lVar6,uVar7);
  }
  FUN_1800b5200();
  cVar2 = FUN_1801ecf50();
  if (cVar2 != '\0') {
    if ((DAT_1803ff248 == (PVOID)0x0) &&
       (DAT_1803ff248 = AddVectoredExceptionHandler(1,(PVECTORED_EXCEPTION_HANDLER)&LAB_1801ed240),
       DAT_1803ff248 == (PVOID)0x0)) {
      DVar5 = GetLastError();
      FUN_180014410("[SENDPKT-FAIL] AddVectoredExceptionHandler failed (%lu); choke disabled\n",
                    DVar5);
    }
    else {
      FUN_180014410("[SENDPKT] trap installed (VEH=%p); DR0 arms on the first live CreateMove\n",
                    DAT_1803ff248);
    }
  }
  FUN_1801f7fa0();
  FUN_1801f7d00();
  FUN_1801f7a80();
  FUN_1800713d0();
  uVar3 = FUN_180243560(0,1);
  uVar7 = FUN_1802436b0(uVar3);
  FUN_180014410("[MH] EnableAll: %s\n",uVar7);
  FUN_1800200b0();
  FUN_180014410("=== Hook setup done ===\n\n");
  return;
}


