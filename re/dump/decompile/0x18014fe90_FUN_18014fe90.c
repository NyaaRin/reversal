// 0x18014fe90  FUN_18014fe90
// size=1149 thunk=false
// signature: undefined FUN_18014fe90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014fe90(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  BOOL BVar6;
  __time64_t _Var7;
  ULONGLONG UVar8;
  uint *puVar9;
  HANDLE hFile;
  size_t sVar10;
  LPCWSTR ***lpFileName;
  ulonglong uVar11;
  longlong lVar12;
  undefined **ppuVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStackY_1d8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  FILETIME local_158;
  longlong local_150;
  longlong lStack_148;
  undefined8 local_140;
  LPCWSTR **local_138 [3];
  ulonglong local_120;
  char local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStackY_1d8;
  _Var7 = _time64((__time64_t *)0x0);
  if ((DAT_180430158 & 1) == 0) {
    DAT_180430158 = DAT_180430158 | 1;
    UVar8 = GetTickCount64();
    DVar3 = GetCurrentThreadId();
    uVar4 = DVar3 ^ (uint)UVar8;
    _DAT_18042bc74 = 0xffffffff;
    uVar11 = 1;
    _DAT_18042a8f4 = uVar4;
    do {
      uVar4 = (uVar4 >> 0x1e ^ uVar4) * 0x6c078965 + (int)uVar11;
      *(uint *)(&DAT_18042a8f4 + uVar11 * 4) = uVar4;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x270);
    _DAT_18042a8f0 = 0x270;
  }
  uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
  uVar11 = (ulonglong)uVar4 * 0x2ef;
  uVar4 = (uint)uVar11;
  while (uVar4 < 0x225) {
    uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
    uVar11 = (ulonglong)uVar4 * 0x2ef;
    uVar4 = (uint)uVar11;
  }
  lVar12 = _Var7 + ((uVar11 >> 0x20) - 0x7fffff6a ^ 0xffffffff80000000) * -0x15180;
  iVar14 = 0;
  ppuVar13 = &PTR_u_gameinfo_txt_18033beb0;
  do {
    FUN_18014fa80(local_138,param_1,ppuVar13);
    puVar9 = (uint *)FUN_180067c80(local_168,local_138);
    iVar5 = iVar14;
    if (1 < *puVar9) {
      iVar5 = FUN_18014e1c0(0,*(int *)(ppuVar13 + 3) * 0x15180);
      lpFileName = local_138;
      if (7 < local_120) {
        lpFileName = (LPCWSTR ***)local_138[0];
      }
      hFile = CreateFileW((LPCWSTR)lpFileName,0x100,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,
                          (HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffffffffffff) {
        bVar16 = false;
      }
      else {
        local_158 = (FILETIME)((lVar12 + (longlong)iVar5 + 0x2b6109100) * 10000000);
        BVar6 = SetFileTime(hFile,&local_158,&local_158,&local_158);
        CloseHandle(hFile);
        bVar16 = BVar6 != 0;
      }
      iVar5 = iVar14 + 1;
      if (!bVar16) {
        iVar5 = iVar14;
      }
    }
    iVar14 = iVar5;
    FUN_18021e290(local_138);
    ppuVar13 = ppuVar13 + 4;
  } while (ppuVar13 != (undefined **)&DAT_18033bf30);
  FUN_180012ac0(local_118,0xc0,"Fingerprint file times: %d re-rolled, %d failed, %d absent",iVar14);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  sVar10 = strlen(local_118);
  FUN_18001d080(&local_188,local_118,sVar10);
  FUN_18014de20(&local_188);
  FUN_18020e450(&local_188);
  if (param_2 != '\0') {
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    cVar2 = FUN_18014e6f0(param_1,&local_150,1);
    lVar1 = lStack_148;
    if (cVar2 == '\0') {
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_18001d080(&local_188,"Install age: root unreadable",0x1c);
      FUN_18014de20(&local_188);
    }
    else {
      iVar14 = 0;
      for (lVar15 = local_150; lVar15 != lVar1; lVar15 = lVar15 + 0x20) {
        if ((DAT_180430158 & 1) == 0) {
          DAT_180430158 = DAT_180430158 | 1;
          UVar8 = GetTickCount64();
          DVar3 = GetCurrentThreadId();
          uVar4 = DVar3 ^ (uint)UVar8;
          _DAT_18042bc74 = 0xffffffff;
          uVar11 = 1;
          _DAT_18042a8f4 = uVar4;
          do {
            uVar4 = (uVar4 >> 0x1e ^ uVar4) * 0x6c078965 + (int)uVar11;
            *(uint *)(&DAT_18042a8f4 + uVar11 * 4) = uVar4;
            uVar11 = uVar11 + 1;
          } while (uVar11 < 0x270);
          _DAT_18042a8f0 = 0x270;
        }
        uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
        uVar11 = (ulonglong)uVar4 * 0x15181;
        uVar4 = (uint)uVar11;
        while (uVar4 < 0xea53) {
          uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
          uVar11 = (ulonglong)uVar4 * 0x15181;
          uVar4 = (uint)uVar11;
        }
        cVar2 = FUN_18014fcf0(lVar15,((uVar11 >> 0x20) - 0x80000000 ^ 0xffffffff80000000) + lVar12);
        iVar5 = iVar14 + 1;
        if (cVar2 == '\0') {
          iVar5 = iVar14;
        }
        iVar14 = iVar5;
      }
      FUN_180012ac0(local_118,0xc0,"Install age: %d root file(s) aged back, %d failed",iVar14);
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      sVar10 = strlen(local_118);
      FUN_18001d080(&local_188,local_118,sVar10);
      FUN_18014de20(&local_188);
    }
    FUN_18020e450(&local_188);
    FUN_18021c690(&local_150);
  }
  return;
}


