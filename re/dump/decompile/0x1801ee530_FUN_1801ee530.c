// 0x1801ee530  FUN_1801ee530
// size=10142 thunk=false
// signature: undefined FUN_1801ee530()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801ee530(undefined8 param_1,float param_2,int *param_3)

{
  float *pfVar1;
  FILE *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  char cVar8;
  byte bVar9;
  DWORD DVar10;
  int iVar11;
  BOOL BVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  HANDLE pvVar17;
  FILE *pFVar18;
  HMODULE pHVar19;
  HMODULE pHVar20;
  FILE *pFVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 **ppuVar26;
  longlong *plVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  undefined8 uVar31;
  void *lp;
  ulonglong uVar32;
  undefined8 *puVar33;
  float *pfVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  uint uVar40;
  uint uVar41;
  int *piVar42;
  uint7 uVar44;
  char *pcVar43;
  int iVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 local_9a8 [32];
  FILE *local_988;
  char **local_980;
  double local_978;
  uint local_970;
  uint local_968;
  char local_958;
  float local_954;
  float local_950 [2];
  uint local_948;
  int *local_940;
  uint local_938;
  undefined8 local_930;
  FILE *local_928;
  undefined1 local_920;
  undefined4 local_91f;
  undefined2 local_91b;
  undefined1 local_919;
  int local_918;
  FILE *local_910;
  FILE *local_908;
  undefined1 local_900;
  undefined4 local_8ff;
  undefined2 local_8fb;
  undefined1 local_8f9;
  undefined1 *local_8f8;
  undefined8 *local_8f0;
  ulonglong local_8e8;
  undefined8 *local_8e0;
  undefined4 uStack_8d8;
  FILE *local_8d0;
  longlong *local_8c8;
  undefined8 *puStack_8c0;
  FILE *local_8b8;
  undefined *local_8b0;
  undefined8 *local_8a8;
  undefined8 *local_8a0 [2];
  FILE *local_890;
  undefined1 local_888 [24];
  HMODULE local_870;
  float *local_868;
  HMODULE local_860;
  undefined1 local_858 [8];
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  code *local_838;
  undefined8 *puStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  char *pcStack_810;
  code *local_808;
  undefined8 *puStack_800;
  char *local_7f8;
  code *pcStack_7f0;
  undefined8 *local_7e8;
  char *pcStack_7e0;
  code *local_7d8;
  undefined8 *puStack_7d0;
  char *local_7c8;
  code *pcStack_7c0;
  undefined8 *local_7b8;
  char *pcStack_7b0;
  code *local_7a8;
  undefined8 *puStack_7a0;
  char *local_798;
  code *local_790;
  undefined8 *local_788;
  char *local_780;
  code *local_778;
  undefined8 *local_770;
  char *local_768;
  code *local_760;
  undefined1 local_758 [16];
  code *local_748;
  undefined8 local_740;
  char *local_738;
  code *local_730;
  undefined8 local_728;
  char *local_720;
  code *local_718;
  undefined8 local_710;
  undefined1 local_388 [12];
  float fStack_37c;
  float local_378;
  undefined8 local_370;
  float local_368;
  undefined8 local_360;
  uint local_358;
  undefined1 local_350 [8];
  undefined8 local_348;
  float local_340;
  FILE *local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  FILE *local_300;
  ulonglong uStack_2f8;
  undefined8 local_2f0;
  undefined8 *local_2e8;
  HMODULE *local_2e0;
  HMODULE *local_2d8;
  float **local_2d0;
  undefined8 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  uint local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  uint local_2a8;
  char cStack_28a;
  float local_288;
  float fStack_284;
  float fStack_280;
  FILE *local_188;
  undefined1 *puStack_180;
  FILE local_178;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)local_9a8;
  uVar32 = 0;
  uVar35 = 0;
  local_948 = 0;
  if (DAT_1803fa3d0 == (code *)0x0) {
    return local_e8 & 0xffffffffffffff00;
  }
  local_950[0] = param_2;
  local_940 = param_3;
  local_930 = param_1;
  DVar10 = GetCurrentThreadId();
  if (DAT_1803ff984 != DVar10) {
    DAT_1803ff984 = DVar10;
  }
  if (DAT_18040a250 == 1) {
    FUN_1801f66a0();
    DAT_18040a250 = 2;
    goto LAB_1801f0cb7;
  }
  if (DAT_1803ff270 == '\0') goto LAB_1801f0cb7;
  if (DAT_1803fa678 == (longlong *)0x0) {
    local_348 = (longlong *)0x0;
LAB_1801ee64d:
    local_388._8_4_ = 0.0;
    fStack_37c = 0.0;
    local_954 = 0.0;
  }
  else {
    local_348 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))();
    if (local_348 == (longlong *)0x0) goto LAB_1801ee64d;
    local_388._8_4_ = (undefined4)local_348[1];
    fStack_37c = (float)((ulonglong)local_348[1] >> 0x20);
    local_954 = (float)(**(code **)*local_348)(local_348);
  }
  FUN_18006eb10();
  while( true ) {
    uStack_318 = 0;
    local_310 = 0;
    uStack_308 = 0xf;
    local_320 = 0;
    local_8b0 = &DAT_1803e72b0;
    iVar11 = _Mtx_lock(&DAT_1803e72b0);
    if (iVar11 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      uVar32 = (*pcVar4)();
      return uVar32;
    }
    if (DAT_1803e72fc == 0x7fffffff) {
      DAT_1803e72fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1805c3960 == 0) break;
    puVar3 = *(undefined8 **)(DAT_1805c3948 + (DAT_1805c3950 - 1U & DAT_1805c3958) * 8);
    if (&local_320 != puVar3) {
      local_320 = *puVar3;
      uStack_318 = puVar3[1];
      local_310 = puVar3[2];
      uStack_308 = puVar3[3];
      puVar3[2] = 0;
      puVar3[3] = 0xf;
      *(undefined1 *)puVar3 = 0;
    }
    FUN_18020e450(*(undefined8 *)(DAT_1805c3948 + (DAT_1805c3950 - 1U & DAT_1805c3958) * 8));
    DAT_1805c3960 = DAT_1805c3960 + -1;
    if (DAT_1805c3960 == 0) {
      DAT_1805c3958 = 0;
    }
    else {
      DAT_1805c3958 = DAT_1805c3958 + 1;
    }
    _Mtx_unlock(&DAT_1803e72b0);
    FUN_1800704d0(&local_320);
    FUN_18020e450(&local_320);
  }
  _Mtx_unlock(&DAT_1803e72b0);
  FUN_18020e450(&local_320);
  if (DAT_1803fefc8 == '\0') {
    local_858 = (undefined1  [8])0x180343ebc;
    uStack_850 = FUN_18006f1a0;
    local_848 = &DAT_1803fefd8;
    uStack_840 = "SendToServer";
    local_838 = FUN_18006f280;
    puStack_830 = &DAT_1803ff018;
    local_828 = "WriteString";
    uStack_820 = FUN_18006f3a0;
    local_818 = &DAT_1803fefa0;
    pcStack_810 = "WriteInt";
    local_808 = FUN_18006f4e0;
    puStack_800 = &DAT_1803ff020;
    local_7f8 = "WriteUInt";
    pcStack_7f0 = FUN_18006f670;
    local_7e8 = &DAT_1803fefe8;
    pcStack_7e0 = "WriteUInt64";
    local_7d8 = FUN_18006f800;
    puStack_7d0 = &DAT_1803fefd0;
    local_7c8 = "WriteFloat";
    pcStack_7c0 = FUN_18006f940;
    local_7b8 = &DAT_1803fefb0;
    pcStack_7b0 = "WriteDouble";
    local_7a8 = FUN_18006fa30;
    puStack_7a0 = &DAT_1803ff008;
    local_798 = "WriteBit";
    local_790 = FUN_18006fb20;
    local_788 = &DAT_1803ff000;
    local_780 = "WriteData";
    local_778 = FUN_18006fd00;
    local_770 = &DAT_1803fef88;
    local_768 = "WriteVector";
    local_760 = FUN_18006fe30;
    local_758._0_8_ = &DAT_1803fef80;
    local_758._8_8_ = "WriteNormal";
    local_748 = FUN_180070030;
    local_740 = &DAT_1803feff8;
    local_738 = "WriteAngle";
    local_730 = FUN_180070230;
    local_728 = &DAT_1803fef98;
    local_720 = "WriteMatrix";
    local_718 = FUN_180070430;
    local_710 = &DAT_1803feef8;
    uVar38 = uVar32;
    do {
      pcVar16 = (char *)FUN_18002e990(&DAT_180340e30);
      (&local_178._base)[uVar38] = pcVar16;
      uVar38 = uVar38 + 1;
    } while (uVar38 != 0xe);
    if ((local_178._base != (char *)0x0) &&
       (uVar38 = uVar32, uVar36 = uVar32, local_178._24_8_ != 0)) {
      do {
        pcVar16 = (&local_178._base)[uVar38];
        if ((pcVar16 != (char *)0x0) &&
           ((iVar11 = FUN_180242fc0(pcVar16,(&uStack_850)[uVar38 * 3],(&local_848)[uVar38 * 3]),
            iVar11 == 0 && (iVar11 = FUN_180243560(pcVar16,1), iVar11 == 0)))) {
          uVar36 = (ulonglong)((int)uVar36 + 1);
        }
        uVar38 = uVar38 + 1;
      } while (uVar38 != 0xe);
      DAT_1803fefc8 = '\x01';
      FUN_180014410("[NETLOG] Lua net.* hooks installed (%d/%d)\n",uVar36,0xe);
    }
  }
  FUN_1801180a0();
  DAT_1803da694 = 1;
  FUN_1801ed2e0(1);
  pcVar16 = DAT_1803ff228;
  if ((((DAT_1803ff238 == 0) && (DAT_1803ff233 == '\0')) && (DAT_1803ff228 != (char *)0x0)) &&
     (DAT_1803ff228 != (char *)0x0)) {
    memset(local_858,0,0x4d0);
    local_828 = (char *)CONCAT44(local_828._4_4_,0x100010);
    pvVar17 = GetCurrentThread();
    BVar12 = GetThreadContext(pvVar17,(LPCONTEXT)local_858);
    if (BVar12 != 0) {
      if ((pcStack_810 == (char *)0x0) || (pcStack_810 == pcVar16)) {
        pcStack_810 = pcVar16;
        pcStack_7f0 = (code *)0x0;
        local_7e8 = (undefined8 *)((ulonglong)local_7e8 & 0xfffffffffff0fffd | 1);
        local_828 = (char *)CONCAT44(local_828._4_4_,0x100010);
        pvVar17 = GetCurrentThread();
        BVar12 = SetThreadContext(pvVar17,(CONTEXT *)local_858);
        if (BVar12 == 0) {
          if (DAT_1803feb58 == '\0') {
            DAT_1803feb58 = '\x01';
            DVar10 = GetLastError();
            FUN_180014410("[SENDPKT-FAIL] SetThreadContext failed (%lu); choke disabled\n",DVar10);
          }
        }
        else {
          DAT_1803ff233 = '\x01';
          DAT_1803ff240 = GetCurrentThreadId();
        }
      }
      else if (DAT_1803fe3a4 == '\0') {
        DAT_1803fe3a4 = '\x01';
        FUN_180014410("[SENDPKT-FAIL] DR0 already in use (%p); choke disabled\n");
      }
    }
  }
  FUN_1801f8810();
  FUN_18006db90();
  if (DAT_1803fa46f != '\0') {
LAB_1801f0cb7:
    uVar32 = (*DAT_1803fa3d0)(local_930);
    return uVar32;
  }
  FUN_1800f0c80();
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar13 = (**(code **)(*DAT_1803fa668 + 0x60))();
  pFVar18 = (FILE *)(*pcVar4)(DAT_1803fa360,uVar13);
  if (param_3 == (int *)0x0) goto LAB_1801f0cb7;
  local_928 = pFVar18;
  if (((*param_3 < 2) || (cVar8 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar8 == '\0')) ||
     ((pFVar18 == (FILE *)0x0 || (cVar8 = FUN_18001c330(pFVar18), cVar8 == '\0')))) {
    cVar8 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (((cVar8 != '\0') && (pFVar18 != (FILE *)0x0)) &&
       (cVar8 = FUN_18001c330(pFVar18), cVar8 != '\0')) {
      uVar31 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
      uVar31 = FUN_180241610(uVar31,0x402819404e703058);
      pcVar16 = (char *)FUN_1801fcfc0(uVar31);
      if (*pcVar16 != '\0') {
        param_3[8] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        *(undefined1 *)((longlong)param_3 + 0x35) = 0;
        uVar32 = (*DAT_1803fa3d0)(local_930);
        return uVar32;
      }
      uVar31 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
      uVar31 = FUN_180241610(uVar31,0x5635981221fff3b8);
      pcVar16 = (char *)FUN_1801fcfc0(uVar31);
      if (*pcVar16 != '\0') {
        if (DAT_1803fd34c == '\0') {
          param_3[8] = param_3[8] & 0xfffffffd;
        }
        else {
          param_3[8] = param_3[8] | 2;
        }
      }
      if (DAT_1803db5ef != '\0') {
        param_3[8] = param_3[8] | 1;
      }
      if (DAT_1803db5f2 != '\0') {
        param_3[8] = param_3[8] | 0x800;
      }
    }
    goto LAB_1801f0cb7;
  }
  local_360 = (float *)param_3;
  if (DAT_1803f9228 == '\0') {
    DAT_1803f9228 = '\x01';
    pFVar21 = (FILE *)pFVar18->_ptr;
    local_188 = (FILE *)0x0;
    puStack_180 = (undefined1 *)0x0;
    local_370 = &local_178;
    local_178._ptr = (char *)0x0;
    local_178._cnt = 0;
    local_178._12_4_ = 0;
    local_178._ptr = (char *)FUN_1802d8350(0x30);
    *(char **)local_178._ptr = local_178._ptr;
    *(char **)((longlong)local_178._ptr + 8) = local_178._ptr;
    *(char **)((longlong)local_178._ptr + 0x10) = local_178._ptr;
    *(undefined2 *)((longlong)local_178._ptr + 0x18) = 0x101;
    local_188 = pFVar21;
    FUN_1801ecdc0(&DAT_1803fa9a0,&local_188);
    local_910 = &local_178;
    FUN_1802095f0(&local_178);
    local_188 = (FILE *)CONCAT44(local_188._4_4_,0x10);
    puStack_180 = *(undefined1 **)(DAT_1803fa9a0 + 0x80);
    FUN_180208e00(&DAT_1803fa9b0,&local_338,&local_188);
    DAT_1803fa448 = local_338->_tmpfname;
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803fa9a0 + 0x80),8,0x40,(PDWORD)local_888);
    *(code **)(DAT_1803fa9a0 + 0x80) = FUN_1801edad0;
    VirtualProtect((LPVOID)(DAT_1803fa9a0 + 0x80),8,local_888._0_4_,(PDWORD)0x0);
    FUN_180014410("[HOOK] FireBullets hooked at vtable[%d] org=%p\n",0x10,DAT_1803fa448);
  }
  if (DAT_1803ff794 == '\0') {
    DAT_1803ff794 = '\x01';
    FUN_180014410("\n=== VTABLE FULL DUMP (writing to file) ===\n");
    pHVar19 = GetModuleHandleA("client.dll");
    pHVar20 = GetModuleHandleA("engine.dll");
    GetModuleHandleA("server.dll");
    local_338 = (FILE *)0x0;
    uStack_330 = 0;
    local_328 = 0;
    local_300 = (FILE *)0x0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    if (pHVar19 != (HMODULE)0x0) {
      pvVar17 = GetCurrentProcess();
      K32GetModuleInformation(pvVar17,pHVar19,&local_338,0x18);
    }
    if (pHVar20 != (HMODULE)0x0) {
      pvVar17 = GetCurrentProcess();
      K32GetModuleInformation(pvVar17,pHVar20,&local_300,0x18);
    }
    local_870 = (HMODULE)((longlong)&pHVar19->unused + (uStack_330 & 0xffffffff));
    local_868 = (float *)((longlong)&pHVar20->unused + (uStack_2f8 & 0xffffffff));
    local_888._16_8_ = pHVar19;
    local_860 = pHVar20;
    GetTempPathA(0x104,local_858);
    strcat_s(local_858,0x104,"mayrrx64_vtable_dump.txt");
    local_888._0_8_ = (FILE *)0x0;
    fopen_s((FILE **)local_888,local_858,"w");
    uVar35 = 0;
    if ((FILE *)local_888._0_8_ != (FILE *)0x0) {
      local_2e8 = (undefined8 *)(local_888 + 0x10);
      local_2e0 = &local_870;
      local_2d8 = &local_860;
      local_2d0 = &local_868;
      local_188 = (FILE *)local_888;
      puStack_180 = local_350;
      local_178._ptr = (char *)&local_2e8;
      FUN_1800129b0(local_888._0_8_,"client.dll: %p - %p\n",local_888._16_8_,local_870);
      FUN_1800129b0(local_888._0_8_,"engine.dll: %p - %p\n",local_860,local_868);
      FUN_1801f0f50(&local_188,"C_GMOD_Player",pFVar18,0x200);
      FUN_1801f0f50(&local_188,"IVEngineClient",DAT_1803fa668,0x100);
      FUN_1801f0f50(&local_188,"ClientModeShared",DAT_1803fa638,0x80);
      FUN_1801f0f50(&local_188,"IVModelRender",DAT_1803fa598,0x80);
      FUN_1801f0f50(&local_188,"CHLClient",DAT_1803f9278,0x100);
      pFVar21 = (FILE *)FUN_18001dbf0(pFVar18);
      uVar35 = 0;
      local_908 = pFVar21;
      if (pFVar21 != (FILE *)0x0) {
        pFVar2 = (FILE *)pFVar21->_ptr;
        local_8f8 = &DAT_18033e9cc;
        local_910 = pFVar2;
        local_370 = pFVar2;
        puVar22 = (undefined1 *)FUN_18001e4e0(pFVar21);
        local_8f8 = &DAT_18033e9cc;
        if ((undefined1 *)0x10000 < puVar22) {
          local_8f8 = puVar22;
        }
        local_988 = pFVar2;
        FUN_1800129b0(local_888._0_8_,"\n=== CBaseCombatWeapon \'%s\' (ptr=%p, vt=%p) ===\n",
                      local_8f8,pFVar21);
        pFVar21 = local_370;
        uVar38 = uVar32;
        do {
          pHVar19 = (HMODULE)(&pFVar21->_ptr)[uVar38];
          local_928 = (FILE *)FUN_1801f0e10(&local_2e8,pHVar19);
          local_178._base = (char *)0x0;
          local_178._flag = 0;
          local_178._file = 0;
          local_178._charbuf = 0;
          local_178._bufsiz = 0;
          local_178._tmpfname = (char *)0x0;
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          if ((((pHVar19 < (ulonglong)local_888._16_8_) || (local_870 <= pHVar19)) ||
              ((char)pHVar19->unused != -0x48)) ||
             (((*(char *)((longlong)&pHVar19[1].unused + 1) != -0x3d ||
               (pcVar16 = *(char **)((longlong)&pHVar19->unused + 1), pcVar16 < (char *)0x10001)) ||
              (BVar12 = IsBadReadPtr(pcVar16,0x14), uVar36 = uVar32, BVar12 != 0)))) {
LAB_1801ef229:
            pFVar2 = local_928;
            local_188 = (FILE *)0x0;
            puStack_180 = (undefined1 *)0x0;
            local_178._ptr = (char *)0x0;
            local_178._cnt = 0;
            local_178._12_4_ = 0;
            if (((ulonglong)local_888._16_8_ <= pHVar19) && (pHVar19 < local_870)) {
              local_970 = (uint)*(byte *)((longlong)&pHVar19[1].unused + 1);
              local_978 = (double)CONCAT44(local_978._4_4_,(uint)(byte)pHVar19[1].unused);
              local_980 = (char **)CONCAT44(local_980._4_4_,
                                            (uint)*(byte *)((longlong)&pHVar19->unused + 3));
              local_988 = (FILE *)CONCAT44(local_988._4_4_,
                                           (uint)*(byte *)((longlong)&pHVar19->unused + 2));
              FUN_1801fd060(&local_188,"%02X %02X %02X %02X %02X %02X",(char)pHVar19->unused,
                            *(undefined1 *)((longlong)&pHVar19->unused + 1));
            }
            local_980 = (char **)&local_188;
            pcVar16 = "[%3d] = %p  %s  [%s]\n";
            local_988 = pFVar2;
          }
          else {
            do {
              if (pcVar16[uVar36] == '\0') break;
              if (0x5e < (byte)(pcVar16[uVar36] - 0x20U)) goto LAB_1801ef229;
              uVar35 = (int)uVar36 + 1;
              uVar36 = (ulonglong)uVar35;
            } while ((int)uVar35 < 0x14);
            if (*pcVar16 == '\0') goto LAB_1801ef229;
            strncpy_s((char *)&local_178._base,0x80,pcVar16,0x40);
            if ((char)local_178._base == '\0') goto LAB_1801ef229;
            local_980 = &local_178._base;
            local_988 = local_928;
            pcVar16 = "[%3d] = %p  %s  -> \'%s\'\n";
          }
          FUN_1800129b0(local_888._0_8_,pcVar16,uVar38,pHVar19);
          uVar47 = (int)uVar38 + 1;
          uVar38 = (ulonglong)uVar47;
          uVar35 = local_948;
        } while ((int)uVar47 < 0x1a4);
      }
      fclose((FILE *)local_888._0_8_);
      FUN_180014410("[DIAG] Full vtable dump written to: %s\n",local_858);
    }
    FUN_180014410("=== END VTABLE DUMP ===\n\n");
  }
  DAT_1803da694 = '\x01';
  DAT_1803db430 = &DAT_1803da694;
  puVar23 = (undefined4 *)FUN_18001f9d0(pFVar18,&local_370);
  _DAT_1803db4a8 = *puVar23;
  _DAT_1803db4ac = puVar23[1];
  _DAT_1803db4b0 = puVar23[2];
  if (DAT_1803fa545 != '\0') {
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    *(undefined1 *)((longlong)param_3 + 0x35) = 0;
  }
  lVar37 = 2;
  piVar42 = (int *)0x2;
  piVar7 = param_3;
  puVar3 = &local_2c8;
  do {
    puVar39 = puVar3;
    piVar24 = piVar7;
    uVar31 = *(undefined8 *)(piVar24 + 2);
    *puVar39 = *(undefined8 *)piVar24;
    puVar39[1] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 6);
    puVar39[2] = *(undefined8 *)(piVar24 + 4);
    puVar39[3] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 10);
    puVar39[4] = *(undefined8 *)(piVar24 + 8);
    puVar39[5] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 0xe);
    puVar39[6] = *(undefined8 *)(piVar24 + 0xc);
    puVar39[7] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 0x12);
    puVar39[8] = *(undefined8 *)(piVar24 + 0x10);
    puVar39[9] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 0x16);
    puVar39[10] = *(undefined8 *)(piVar24 + 0x14);
    puVar39[0xb] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 0x1a);
    puVar39[0xc] = *(undefined8 *)(piVar24 + 0x18);
    puVar39[0xd] = uVar31;
    uVar31 = *(undefined8 *)(piVar24 + 0x1e);
    puVar39[0xe] = *(undefined8 *)(piVar24 + 0x1c);
    puVar39[0xf] = uVar31;
    piVar42 = (int *)((longlong)piVar42 + -1);
    piVar7 = piVar24 + 0x20;
    puVar3 = puVar39 + 0x10;
  } while (piVar42 != (int *)0x0);
  uVar31 = *(undefined8 *)(piVar24 + 0x22);
  puVar39[0x10] = *(undefined8 *)(piVar24 + 0x20);
  puVar39[0x11] = uVar31;
  uVar31 = *(undefined8 *)(piVar24 + 0x26);
  puVar39[0x12] = *(undefined8 *)(piVar24 + 0x24);
  puVar39[0x13] = uVar31;
  uVar31 = *(undefined8 *)(piVar24 + 0x2a);
  puVar39[0x14] = *(undefined8 *)(piVar24 + 0x28);
  puVar39[0x15] = uVar31;
  uVar31 = *(undefined8 *)(piVar24 + 0x2e);
  puVar39[0x16] = *(undefined8 *)(piVar24 + 0x2c);
  puVar39[0x17] = uVar31;
  local_860 = (HMODULE)((longlong)param_3 + 0x3e);
  *(undefined1 *)&((HMODULE)((longlong)param_3 + 0x3e))->unused = 0;
  local_868 = (float *)(param_3 + 0x10);
  param_3[0x10] = 0;
  local_870 = (HMODULE)(param_3 + 0x11);
  ((HMODULE)(param_3 + 0x11))->unused = 0;
  local_888._16_8_ = param_3 + 0x12;
  param_3[0x12] = 0;
  local_388[0] = 0;
  puVar3 = (undefined8 *)local_858;
  puVar39 = &local_2c8;
  do {
    puVar33 = puVar39;
    puVar25 = puVar3;
    uVar31 = puVar33[1];
    *puVar25 = *puVar33;
    puVar25[1] = uVar31;
    uVar31 = puVar33[3];
    puVar25[2] = puVar33[2];
    puVar25[3] = uVar31;
    uVar31 = puVar33[5];
    puVar25[4] = puVar33[4];
    puVar25[5] = uVar31;
    uVar31 = puVar33[7];
    puVar25[6] = puVar33[6];
    puVar25[7] = uVar31;
    uVar31 = puVar33[9];
    puVar25[8] = puVar33[8];
    puVar25[9] = uVar31;
    uVar31 = puVar33[0xb];
    puVar25[10] = puVar33[10];
    puVar25[0xb] = uVar31;
    uVar31 = puVar33[0xd];
    puVar25[0xc] = puVar33[0xc];
    puVar25[0xd] = uVar31;
    uVar31 = puVar33[0xf];
    puVar25[0xe] = puVar33[0xe];
    puVar25[0xf] = uVar31;
    lVar37 = lVar37 + -1;
    puVar3 = puVar25 + 0x10;
    puVar39 = puVar33 + 0x10;
  } while (lVar37 != 0);
  uVar31 = puVar33[0x11];
  puVar25[0x10] = puVar33[0x10];
  puVar25[0x11] = uVar31;
  uVar31 = puVar33[0x13];
  puVar25[0x12] = puVar33[0x12];
  puVar25[0x13] = uVar31;
  uVar13 = *(undefined4 *)((longlong)puVar33 + 0xa4);
  uVar53 = *(undefined4 *)(puVar33 + 0x15);
  uVar5 = *(undefined4 *)((longlong)puVar33 + 0xac);
  *(undefined4 *)(puVar25 + 0x14) = *(undefined4 *)(puVar33 + 0x14);
  *(undefined4 *)((longlong)puVar25 + 0xa4) = uVar13;
  *(undefined4 *)(puVar25 + 0x15) = uVar53;
  *(undefined4 *)((longlong)puVar25 + 0xac) = uVar5;
  uVar31 = puVar33[0x17];
  puVar25[0x16] = puVar33[0x16];
  puVar25[0x17] = uVar31;
  DAT_1803ff960 = param_3;
  uVar13 = FUN_1801fd250("Pre_PreSend");
  if (DAT_1803eb490 != '\0') {
    FUN_180014410("[LUAMOVESIM] transaction left open by a script after %d tick(s) -- closed automatically\n"
                  ,DAT_1803eb4a0);
    uVar13 = FUN_180051d40();
  }
  puVar3 = DAT_1803fcc70;
  DAT_1803ff960 = (int *)0x0;
  local_370 = (FILE *)DAT_1803fcc70;
  for (puVar39 = DAT_1803fcc68; local_8f0 = puVar39, puVar39 != puVar3; puVar39 = puVar39 + 1) {
    local_988 = (FILE *)local_388;
    piVar42 = param_3;
    local_8a8 = puVar39;
    uVar13 = (**(code **)(*(longlong *)*puVar39 + 8))
                       ((longlong *)*puVar39,local_930,param_3,&local_2c8);
  }
  uVar13 = FUN_180024f00(uVar13,param_3);
  if (DAT_1803fa678 == (longlong *)0x0) {
    local_8e0 = (undefined8 *)0x0;
    uStack_8d8 = 0;
    local_8d0 = (FILE *)0x0;
    ppuVar26 = &local_8e0;
    uVar35 = uVar35 | 2;
  }
  else {
    ppuVar26 = (undefined8 **)FUN_18001bcd0(uVar13,local_8a0);
    uVar35 = uVar35 | 1;
  }
  local_948 = uVar35;
  plVar27 = *ppuVar26;
  local_8c8 = plVar27;
  puStack_8c0 = ppuVar26[1];
  local_8b8 = (FILE *)ppuVar26[2];
  if (((uVar35 & 2) != 0) &&
     (uVar35 = uVar35 & 0xfffffffd, local_948 = uVar35, local_8e0 != (undefined8 *)0x0)) {
    (**(code **)*local_8e0)();
    if (local_8d0 == (FILE *)0x0) {
      local_920 = 0;
      DAT_1803fa330 = local_928;
      DAT_1803fa338 = 0;
      DAT_1803fa339 = local_91f;
      DAT_1803fa33d = local_91b;
      DAT_1803fa33f = local_919;
    }
    else {
      local_908 = local_8d0;
      local_900 = 1;
      DAT_1803fa330 = local_8d0;
      DAT_1803fa338 = 1;
      DAT_1803fa339 = local_8ff;
      DAT_1803fa33d = local_8fb;
      DAT_1803fa33f = local_8f9;
    }
  }
  if (((uVar35 & 1) != 0) && (local_948 = uVar35 & 0xfffffffe, local_8a0[0] != (undefined8 *)0x0)) {
    (**(code **)*local_8a0[0])();
    uVar38 = uStack_2f8;
    if (local_890 == (FILE *)0x0) {
      uStack_2f8 = uStack_2f8 & 0xffffffffffffff00;
      uVar36 = uStack_2f8;
      DAT_1803fa330 = local_300;
      DAT_1803fa338 = 0;
      uStack_2f8._1_4_ = SUB84(uVar38,1);
      DAT_1803fa339 = uStack_2f8._1_4_;
      uStack_2f8._5_2_ = SUB82(uVar38,5);
      DAT_1803fa33d = uStack_2f8._5_2_;
      uStack_2f8._7_1_ = SUB81(uVar38,7);
      DAT_1803fa33f = uStack_2f8._7_1_;
      uStack_2f8 = uVar36;
    }
    else {
      local_888._0_8_ = local_890;
      local_888[8] = 1;
      DAT_1803fa330 = local_890;
      DAT_1803fa338 = 1;
      DAT_1803fa339 = local_888._9_4_;
      DAT_1803fa33d = local_888._13_2_;
      DAT_1803fa33f = local_888[0xf];
    }
  }
  if (plVar27 == (longlong *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (**(code **)*plVar27)(plVar27);
  }
  local_938 = 0;
  uVar38 = uVar32;
  local_918 = iVar11;
  while( true ) {
    local_370 = (FILE *)((longlong)DAT_1803fcc70 - (longlong)DAT_1803fcc68 >> 3);
    iVar45 = (int)uVar38;
    if ((int)local_370 <= iVar45) break;
    local_988 = (FILE *)local_388;
    piVar42 = param_3;
    (**(code **)(*(longlong *)DAT_1803fcc68[iVar45] + 0x10))
              ((longlong *)DAT_1803fcc68[iVar45],local_930,param_3,&local_2c8);
    if ((plVar27 != (longlong *)0x0) && (iVar14 = (**(code **)*plVar27)(plVar27), iVar11 < iVar14))
    {
      while (iVar14 = (**(code **)*plVar27)(plVar27), iVar11 < iVar14) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
    local_938 = iVar45 + 1;
    uVar38 = (ulonglong)local_938;
  }
  if (plVar27 != (longlong *)0x0) {
    (**(code **)*plVar27)(plVar27);
    puVar22 = puStack_180;
    uVar38 = uStack_330;
    if (local_8b8 == (FILE *)0x0) {
      puStack_180 = (undefined1 *)((ulonglong)puStack_180 & 0xffffffffffffff00);
      puVar6 = puStack_180;
      DAT_1803fa330 = local_188;
      DAT_1803fa338 = 0;
      puStack_180._1_4_ = SUB84(puVar22,1);
      DAT_1803fa339 = puStack_180._1_4_;
      puStack_180._5_2_ = SUB82(puVar22,5);
      DAT_1803fa33d = puStack_180._5_2_;
      puStack_180._7_1_ = SUB81(puVar22,7);
      DAT_1803fa33f = puStack_180._7_1_;
      puStack_180 = puVar6;
    }
    else {
      local_338 = local_8b8;
      uStack_330 = CONCAT71(uStack_330._1_7_,1);
      uVar36 = uStack_330;
      DAT_1803fa330 = local_8b8;
      DAT_1803fa338 = 1;
      uStack_330._1_4_ = SUB84(uVar38,1);
      DAT_1803fa339 = uStack_330._1_4_;
      uStack_330._5_2_ = SUB82(uVar38,5);
      DAT_1803fa33d = uStack_330._5_2_;
      uStack_330._7_1_ = SUB81(uVar38,7);
      DAT_1803fa33f = uStack_330._7_1_;
      uStack_330 = uVar36;
    }
  }
  FUN_180025360();
  if ((((DAT_1803fa678 != (longlong *)0x0) &&
       (plVar27 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
       plVar27 != (longlong *)0x0)) && (plVar27 == local_348)) &&
     (plVar27[1] == CONCAT44(fStack_37c,local_388._8_4_))) {
    iVar11 = (**(code **)*plVar27)(plVar27);
    piVar42 = (int *)(ulonglong)(uint)local_954;
    if ((int)local_954 < iVar11) {
      DAT_1803fd09c = DAT_1803fd09c + 1;
      if (DAT_1803fd09c < 6) {
        FUN_180014410("[LUA] CreateMove stack leak cleanup: +%d items (base=%d)\n",
                      iVar11 - (int)local_954);
      }
      while (iVar11 = (**(code **)*plVar27)(plVar27), (int)local_954 < iVar11) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
    else if ((iVar11 < (int)local_954) && (DAT_1803ffc50 = DAT_1803ffc50 + 1, DAT_1803ffc50 < 6)) {
      FUN_180014410("[LUA] CreateMove stack underflow: top=%d base=%d (not restoring)\n");
    }
  }
  cVar8 = FUN_1800e0990(param_3);
  if ((DAT_1803e8770 == *param_3) || (cVar8 != '\0')) {
    uVar31 = 0;
  }
  else {
    uVar31 = 1;
  }
  FUN_1800d2a70(param_3,uVar31);
  fVar51 = DAT_180380bb0;
  fVar50 = DAT_180380a88;
  if ((DAT_1803db5ee == '\0') || (DAT_1803fa545 != '\0')) {
    cVar8 = '\0';
    if (DAT_1803db5ef == '\0') goto LAB_1801efa59;
  }
  else {
    cVar8 = '\x01';
    if (DAT_1803db5ef != '\0') goto LAB_1801efa59;
  }
  DAT_1803db5ef = cVar8;
LAB_1801efa59:
  if (DAT_1803fa608 == 0) {
    uVar13 = 0;
    uVar53 = 0;
  }
  else {
    uVar13 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar53 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  fVar56 = (float)(double)CONCAT44(uVar53,uVar13);
  local_888._0_4_ = fVar56;
  if (fVar56 + DAT_180380bb0 < DAT_180423b80) {
    DAT_180423b80 = 0.0;
  }
  if ((cVar8 != '\0') && (DAT_180423b80 <= fVar56)) {
    DAT_1804253d8 = fVar56 + DAT_180380a88;
  }
  local_8e8 = 0;
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar13 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar37 = (*pcVar4)(DAT_1803fa360,uVar13);
  if (lVar37 != 0) {
    uVar32 = FUN_18001dbf0(lVar37);
    local_8e8 = uVar32;
  }
  if (uVar32 != DAT_180400a48) {
    DAT_1804253d8 = 0.0;
    DAT_180423b80 = fVar56 + fVar50;
    DAT_180400a48 = uVar32;
  }
  fVar55 = DAT_1804253d8;
  cVar8 = FUN_180071a30();
  if (cVar8 != '\0') {
    fVar55 = 0.0;
    DAT_1804253d8 = 0.0;
    DAT_180423b80 = fVar56 + fVar50;
  }
  if ((fVar55 <= fVar56) || (DAT_1803db5f0 = '\x01', DAT_1803fa545 != '\0')) {
    DAT_1803db5f0 = '\0';
  }
  if ((DAT_1803db5f1 == '\0') || (DAT_1803fa545 != '\0')) {
    DAT_1803db5f2 = 0;
  }
  else {
    DAT_1803db5f2 = 1;
    DAT_1803fed48 = fVar56 + fVar50;
  }
  if ((DAT_1803fed48 <= fVar56) || (DAT_1803db5f3 = 1, DAT_1803fa545 != '\0')) {
    DAT_1803db5f3 = 0;
  }
  if (DAT_1803db5f4 == '\0') {
    if (DAT_1803db5f5 != '\0') {
      DAT_1803db5f5 = '\0';
    }
  }
  else if ((DAT_1803db5f5 == '\0') && (DAT_1803fa545 == '\0')) {
    DAT_1803db5f5 = '\x01';
  }
  DAT_1803db5ee = 0;
  DAT_1803db5f1 = 0;
  DAT_1803db5f4 = 0;
  pfVar1 = (float *)(param_3 + 2);
  local_910 = (FILE *)pfVar1;
  if (((((uint)*pfVar1 & 0x7f800000) == 0x7f800000) || ((param_3[3] & 0x7f800000U) == 0x7f800000))
     || ((param_3[4] & 0x7f800000U) == 0x7f800000)) {
    if (((((uint)fStack_2c0 & 0x7f800000) == 0x7f800000) ||
        (((uint)fStack_2bc & 0x7f800000) == 0x7f800000)) || ((local_2b8 & 0x7f800000) == 0x7f800000)
       ) {
      local_388._8_4_ = 0.0;
      fStack_37c = 0.0;
      local_378 = 0.0;
      if (DAT_1803fa668 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,local_388 + 8);
      }
      fVar50 = (float)local_388._8_4_;
      if ((((local_388._8_4_ & 0x7f800000) == 0x7f800000) ||
          (((uint)fStack_37c & 0x7f800000) == 0x7f800000)) ||
         (((uint)local_378 & 0x7f800000) == 0x7f800000)) {
        local_370 = (FILE *)0x0;
        local_368 = 0.0;
        fVar50 = 0.0;
      }
      else {
        local_370 = (FILE *)CONCAT44(fStack_37c,fVar50);
        local_368 = local_378;
      }
      param_3[2] = (int)fVar50;
      param_3[3] = local_370._4_4_;
      param_3[4] = (int)local_368;
    }
    else {
      *pfVar1 = fStack_2c0;
      param_3[3] = (int)fStack_2bc;
      param_3[4] = local_2b8;
    }
    DAT_1803ff0c4 = DAT_1803ff0c4 + 1;
    if (DAT_1803ff0c4 < 0xb) {
      FUN_180014410("[SAFE] fixed NaN cmd view_angles before CreateMove #%d\n");
    }
  }
  local_954 = 89.0;
  local_888._0_4_ = 0xc2b20000;
  fVar50 = (float)param_3[2];
  pfVar34 = (float *)local_888;
  if (DAT_180381410 <= fVar50) {
    pfVar34 = (float *)(param_3 + 2);
  }
  pfVar30 = &local_954;
  if (fVar50 <= DAT_180381108) {
    pfVar30 = pfVar34;
  }
  param_3[2] = (int)*pfVar30;
  fVar55 = DAT_18038120c;
  fVar56 = DAT_180381188;
  pfVar34 = (float *)(param_3 + 3);
  local_370 = (FILE *)pfVar34;
  fVar50 = *pfVar34;
  if (DAT_180381188 < fVar50) {
    do {
      fVar50 = fVar50 - DAT_18038120c;
    } while (DAT_180381188 < fVar50);
    *pfVar34 = fVar50;
  }
  if (fVar50 < DAT_180381420) {
    do {
      fVar50 = fVar50 + fVar55;
    } while (fVar50 < DAT_180381420);
    local_360[3] = fVar50;
  }
  local_954 = 1.0;
  local_888._0_4_ = -1.0;
  pfVar30 = (float *)(param_3 + 4);
  local_360 = pfVar30;
  local_908 = (FILE *)pfVar30;
  pfVar29 = (float *)local_888;
  if (DAT_180381384 <= *pfVar30) {
    pfVar29 = pfVar30;
  }
  pfVar28 = &local_954;
  if (*pfVar30 <= fVar51) {
    pfVar28 = pfVar29;
  }
  *pfVar30 = *pfVar28;
  fVar50 = DAT_180381254;
  if (DAT_1803db45e != '\0') {
    DAT_1803db45e = '\0';
    fVar54 = DAT_1803db460 - _DAT_1803db46c;
    fVar50 = DAT_1803db464 - _DAT_1803db470;
    local_348 = (longlong *)CONCAT44(fVar50,fVar54);
    local_340 = DAT_1803db468 - _DAT_1803db474;
    fVar54 = (float)(*(code *)PTR_FUN_1803da018)
                              (fVar50 * fVar50 + fVar54 * fVar54 + local_340 * local_340);
    fVar50 = DAT_180381254;
    if (fVar51 < fVar54) {
      fStack_37c = 0.0;
      local_378 = 0.0;
      local_388._8_4_ = 0;
      FUN_1802d4540(&local_348,local_388 + 8);
      local_378 = 0.0;
      local_388._8_4_ = FUN_1802d3e00(local_388._8_4_);
      fStack_37c = (float)FUN_1802d3e00(fStack_37c);
      iVar11 = *param_3;
      if (DAT_1803db4d0 == iVar11) {
        local_388._8_4_ = (float)local_388._8_4_ - _DAT_1803db4c4;
        fStack_37c = fStack_37c - _DAT_1803db4c8;
        local_378 = local_378 - _DAT_1803db4cc;
      }
      if (DAT_1803db4c0 == iVar11) {
        local_388._8_4_ = (float)local_388._8_4_ - DAT_1803db4b4;
        fStack_37c = fStack_37c - DAT_1803db4b8;
        local_378 = local_378 - DAT_1803db4bc;
      }
      local_388._8_4_ = FUN_1802d3e00(local_388._8_4_);
      fVar51 = (float)FUN_1802d3e00(fStack_37c);
      fVar50 = DAT_180381254;
      fStack_37c = fVar51;
      fVar54 = fmodf(((float)param_3[3] - fVar51) + DAT_180381254,fVar55);
      uVar13 = local_388._8_4_;
      fVar54 = fVar54 - fVar56;
      fVar57 = (float)param_3[2] - (float)local_388._8_4_;
      fVar52 = fVar57 * fVar57 + fVar54 * fVar54;
      if (fVar52 < 0.0) {
        fVar52 = sqrtf(fVar52);
      }
      else {
        fVar52 = SQRT(fVar52);
      }
      if ((DAT_180380ac0 < fVar52) &&
         ((uVar35 = DAT_180426158 + 1, DAT_180426158 = uVar35, (int)uVar35 < 0xb ||
          (uVar35 == ((int)uVar35 / 100) * 100)))) {
        fVar51 = fmodf((DAT_1803db47c - fVar51) + fVar50,fVar55);
        fVar51 = (DAT_1803db478 - (float)uVar13) * (DAT_1803db478 - (float)uVar13) +
                 (fVar51 - fVar56) * (fVar51 - fVar56);
        if (fVar51 < 0.0) {
          fVar51 = sqrtf(fVar51);
        }
        else {
          fVar51 = SQRT(fVar51);
        }
        local_978 = (double)fVar51;
        local_988 = (FILE *)&DAT_180356e94;
        local_980 = (char **)&DAT_180356e94;
        if (DAT_1803db4c0 == iVar11) {
          local_980 = (char **)&DAT_18034bf58;
        }
        if (DAT_1803db4d0 == iVar11) {
          local_988 = (FILE *)&DAT_18034bf58;
        }
        piVar42 = (int *)(double)fVar54;
        local_970 = uVar35;
        FUN_180014410("[AIM-DRIFT] %.2f deg UNEXPLAINED off the chosen hitbox (yaw %+.2f pitch %+.2f) after removing nospread %s and nvr %s; the aimbot itself left it %.2f deg off (#%d)\n"
                      ,(double)fVar52,piVar42,(double)fVar57);
      }
    }
  }
  cVar8 = FUN_1800d2cb0();
  fVar51 = DAT_180380980;
  if (cVar8 != '\0') {
    fVar54 = fmodf((*pfVar34 - fStack_2bc) + fVar50,fVar55);
    fVar51 = DAT_180380980;
    uVar44 = (uint7)((ulonglong)piVar42 >> 8);
    if ((DAT_180380980 < (float)((uint)(fVar54 - fVar56) & _DAT_1803817c0)) ||
       (DAT_180380980 < (float)((uint)(*pfVar1 - fStack_2c0) & _DAT_1803817c0))) {
      FUN_1800d2e50(param_3,pfVar1,CONCAT71(uVar44,1));
    }
    else {
      FUN_1800d2e50(param_3,pfVar1,(ulonglong)uVar44 << 8);
    }
  }
  FUN_180052250(local_858,param_3);
  (*DAT_1803fa3d0)(local_930);
  if (((((uint)(float)uStack_850 & 0x7f800000) == 0x7f800000) ||
      (((uint)uStack_850._4_4_ & 0x7f800000) == 0x7f800000)) ||
     (fVar52 = (float)uStack_850, fVar54 = uStack_850._4_4_,
     ((uint)local_848 & 0x7f800000) == 0x7f800000)) {
    if (((((uint)fStack_2c0 & 0x7f800000) == 0x7f800000) ||
        (((uint)fStack_2bc & 0x7f800000) == 0x7f800000)) || ((local_2b8 & 0x7f800000) == 0x7f800000)
       ) {
      local_360 = (float *)0x0;
      local_358 = 0;
      fVar52 = 0.0;
    }
    else {
      local_360 = (float *)CONCAT44(fStack_2bc,fStack_2c0);
      local_358 = local_2b8;
      fVar52 = fStack_2c0;
    }
    fVar54 = local_360._4_4_;
    DAT_180425530 = DAT_180425530 + 1;
    if (DAT_180425530 < 0xb) {
      FUN_180014410("[SAFE] fixed NaN backup view_angles after CreateMove #%d\n");
    }
  }
  fVar57 = *pfVar30;
  local_954 = fVar57;
  fVar50 = fmodf((fVar54 - fStack_2bc) + fVar50,fVar55);
  if (((DAT_180380948 < (float)((uint)(fVar52 - fStack_2c0) & _DAT_1803817c0)) ||
      (DAT_180380948 < (float)((uint)(fVar50 - fVar56) & _DAT_1803817c0))) ||
     ((DAT_180423964 != '\0' ||
      (((((((uint)fStack_2c0 & 0x7f800000) == 0x7f800000 ||
          (((uint)fStack_2bc & 0x7f800000) == 0x7f800000)) ||
         ((local_2b8 & 0x7f800000) == 0x7f800000)) ||
        ((fVar50 = *pfVar1, ((uint)fVar50 & 0x7f800000) == 0x7f800000 ||
         ((param_3[3] & 0x7f800000U) == 0x7f800000)))) || ((param_3[4] & 0x7f800000U) == 0x7f800000)
       ))))) {
    *pfVar1 = fVar52;
    param_3[3] = (int)fVar54;
  }
  else {
    local_950[0] = 89.0;
    local_888._0_4_ = -89.0;
    pfVar30 = (float *)local_888;
    if (DAT_180381410 <= fVar50) {
      pfVar30 = pfVar1;
    }
    pfVar29 = local_950;
    if (fVar50 <= DAT_180381108) {
      pfVar29 = pfVar30;
    }
    *pfVar1 = *pfVar29;
    fVar50 = *pfVar34;
    if (fVar56 < fVar50) {
      do {
        fVar50 = fVar50 - fVar55;
      } while (fVar56 < fVar50);
      *pfVar34 = fVar50;
    }
    if (fVar50 < DAT_180381420) {
      do {
        fVar50 = fVar50 + fVar55;
      } while (fVar50 < DAT_180381420);
      *pfVar34 = fVar50;
    }
  }
  if (fVar57 == 0.0) {
    local_954 = fVar51;
    fVar57 = fVar51;
  }
  local_950[0] = 1.0;
  local_888._0_4_ = 0xbf800000;
  pfVar34 = (float *)local_888;
  if (DAT_180381384 <= fVar57) {
    pfVar34 = &local_954;
  }
  pfVar30 = local_950;
  if (fVar57 <= DAT_180380bb0) {
    pfVar30 = pfVar34;
  }
  *(float *)local_908 = *pfVar30;
  if (((0 < *param_3) && (((uint)*pfVar1 & 0x7f800000) != 0x7f800000)) &&
     (((param_3[3] & 0x7f800000U) != 0x7f800000 && ((param_3[4] & 0x7f800000U) != 0x7f800000)))) {
    DAT_1803db4d8 = param_3[3];
    DAT_1803db4dc = param_3[4];
    DAT_1803db4e0 = *param_3;
    DAT_1803db4d4 = *pfVar1;
  }
  local_958 = 1;
  uVar31 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar31 = FUN_180241610(uVar31,0x55a65b38bc54c4a2);
  pcVar16 = (char *)FUN_1801fcfc0(uVar31);
  pcVar4 = local_838;
  local_958 = *pcVar16;
  if (local_958 == '\0') {
    if (local_848._4_4_ != fStack_2b4) {
      param_3[5] = (int)local_848._4_4_;
    }
    if ((float)uStack_840 != fStack_2b0) {
      param_3[6] = (int)(float)uStack_840;
    }
  }
  else {
    param_3[5] = (int)local_848._4_4_;
    param_3[6] = (int)(float)uStack_840;
  }
  if (uStack_840._4_4_ != fStack_2ac) {
    param_3[7] = (int)uStack_840._4_4_;
  }
  uVar47 = (uint)local_838;
  uVar35 = param_3[8];
  uVar49 = (uint)local_838 & ~uVar35 & 0x801;
  uVar46 = (uint)local_838 ^ uVar35;
  uVar40 = ~((uint)local_838 ^ local_2a8) & uVar46 & 0xfffff7fe;
  param_3[8] = (uint)local_838;
  uVar48 = local_2a8;
  uVar15 = (uint)local_838;
  if (uVar40 != 0) {
    uVar41 = uVar40 & ~uVar35;
    uVar40 = uVar40 & uVar35;
    if (uVar40 != 0) {
      uVar15 = (uint)local_838 | uVar40;
      param_3[8] = uVar15;
    }
    if (uVar41 != 0) {
      uVar15 = ~uVar41 & uVar15;
      param_3[8] = uVar15;
    }
    DAT_1803fe510 = DAT_1803fe510 + 1;
    if ((DAT_1803fe510 < 0x15) || (DAT_1803fe510 == (DAT_1803fe510 / 200) * 200)) {
      local_978 = (double)CONCAT44(local_978._4_4_,uVar35);
      local_980 = (char **)CONCAT44(local_980._4_4_,(uint)local_838);
      local_988 = (FILE *)CONCAT44(local_988._4_4_,local_2a8);
      FUN_180014410("[CMDBTN] Lua kept +%d -%d #%d org=%d ours=%d afterLua=%d\n",uVar40,uVar41,
                    DAT_1803fe510);
      uVar48 = local_2a8;
      uVar15 = param_3[8];
    }
  }
  if (uVar49 != 0) {
    if ((uVar46 & 0xfffff7fe) == 0) {
      param_3[8] = ~uVar49 & uVar15;
      DAT_1804009fc = DAT_1804009fc + 1;
      if ((DAT_1804009fc < 0x15) || (DAT_1804009fc == (DAT_1804009fc / 0x32) * 0x32)) {
        uVar15 = (uint)(DAT_1803db5f0 != '\0');
        bVar9 = FUN_180071a30();
        pcVar16 = "";
        pcVar43 = "";
        if (uVar49 >> 0xb != 0) {
          pcVar43 = "IN_ATTACK2";
        }
        if ((char)uVar49 != '\0') {
          pcVar16 = "IN_ATTACK ";
        }
        local_970 = (uint)bVar9;
        local_978 = (double)CONCAT44(local_978._4_4_,uVar35);
        local_980 = (char **)CONCAT44(local_980._4_4_,uVar47);
        local_988 = (FILE *)CONCAT44(local_988._4_4_,uVar48);
        local_968 = uVar15;
        FUN_180014410("[CMDBTN] Lua removed %s%s (kept removed) #%d org=%d ours=%d afterLua=%d selGuard=%d spoofHeld=%d\n"
                      ,pcVar16,pcVar43);
      }
    }
    else {
      DAT_1803ffd80 = DAT_1803ffd80 + 1;
      if (DAT_1803ffd80 < 0xb) {
        local_988 = (FILE *)CONCAT44(local_988._4_4_,uVar46);
        FUN_180014410("[CMDBTN] mask REBUILT by orgCreateMove #%d ours=%d afterLua=%d diff=%d (restore left as-is)\n"
                      ,DAT_1803ffd80,(ulonglong)pcVar4 & 0xffffffff,uVar35);
      }
    }
  }
  DAT_1803fd34c = (byte)((uint)param_3[8] >> 1) & 1;
  DAT_180409852 = DAT_1803fd34c;
  *(undefined2 *)(param_3 + 0xc) = (undefined2)local_828;
  *(undefined2 *)((longlong)param_3 + 0x32) = local_828._2_2_;
  param_3[1] = local_858._4_4_;
  if ((((uStack_820._6_1_ != cStack_28a) || (local_288 != (float)local_818)) ||
      (fStack_284 != local_818._4_4_)) || (fStack_280 != pcStack_810._0_4_)) {
    *(char *)&local_860->unused = uStack_820._6_1_;
    *local_868 = (float)local_818;
    local_870->unused = (int)local_818._4_4_;
    *(float *)local_888._16_8_ = pcStack_810._0_4_;
  }
  cVar8 = FUN_1801ed2e0(DAT_1803da694);
  if (((cVar8 == '\0') && (DAT_1803da694 == '\0')) &&
     (DAT_1804261c0 = DAT_1804261c0 + 1, DAT_1804261c0 < 6)) {
    FUN_180014410("[SENDPKT] choke requested but no bSendPacket slot yet (#%d)\n");
  }
  local_360 = (float *)0x93fd561a96ab0c67;
  local_370._0_4_ = -0x242a70f4;
  local_370._4_4_ = 0x46af284;
  plVar27 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_188,&local_360);
  plVar27 = (longlong *)FUN_180241a30(*plVar27 + 0x28,&local_338,&local_370);
  pcVar16 = (char *)FUN_1801fcfc0(*plVar27 + 0x28);
  iVar11 = DAT_1804261a8;
  if (*pcVar16 != '\0') {
    if (DAT_1803fa668 == (longlong *)0x0) {
      iVar11 = -1;
    }
    else {
      lp = (void *)(**(code **)(*DAT_1803fa668 + 0x240))();
      iVar11 = -1;
      if ((lp != (void *)0x0) && (BVar12 = IsBadReadPtr(lp,0x40), BVar12 == 0)) {
        iVar11 = *(int *)((longlong)lp + 0x20);
      }
    }
    if (DAT_180426210 < iVar11) {
      DAT_180426210 = iVar11;
    }
    if ((-1 < iVar11) && (iVar11 < DAT_1804261a8)) {
      uVar35 = DAT_1803ff0f8 & 0x80000007;
      if ((int)uVar35 < 0) {
        uVar35 = (uVar35 - 1 | 0xfffffff8) + 1;
      }
      DAT_1803ff0f8 = DAT_1803ff0f8 + 1;
      if (uVar35 == 0) {
        local_360 = (float *)0x93fd561a96ab0c67;
        local_370._0_4_ = 0x36473c92;
        local_370._4_4_ = -0x4c43e38f;
        plVar27 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_188,&local_360);
        plVar27 = (longlong *)FUN_180241a30(*plVar27 + 0x28,&local_338,&local_370);
        puVar23 = (undefined4 *)FUN_1802029c0(*plVar27 + 0x28);
        local_980 = (char **)CONCAT44(local_980._4_4_,*puVar23);
        local_988 = (FILE *)CONCAT44(local_988._4_4_,DAT_180426210);
        FUN_180014410("[FAKELAG] want_send=%d slot=%p written=%d peakChoke=%d amount=%d (choke cycle)\n"
                      ,DAT_1803da694 != '\0',DAT_1803ff238,cVar8);
      }
      DAT_180426210 = 0;
    }
  }
  DAT_1804261a8 = iVar11;
  DAT_1803ff960 = param_3;
  FUN_1801fd250("Post_PreSend");
  if (DAT_1803eb490 != '\0') {
    FUN_180014410("[LUAMOVESIM] transaction left open by a script after %d tick(s) -- closed automatically\n"
                  ,DAT_1803eb4a0);
    FUN_180051d40();
  }
  DAT_1803ff960 = (int *)0x0;
  return (ulonglong)local_388[0];
}


