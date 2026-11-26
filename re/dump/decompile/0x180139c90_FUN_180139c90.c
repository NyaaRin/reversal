// 0x180139c90  FUN_180139c90
// size=1357 thunk=false
// signature: undefined FUN_180139c90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180139c90(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  size_t sVar12;
  char *_Str1;
  ulonglong *puVar13;
  undefined8 ****ppppuVar14;
  char *pcVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_258 [32];
  uint local_238;
  undefined4 local_230;
  uint local_228;
  int local_220;
  uint local_218;
  undefined8 ***local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  ulonglong local_1f8;
  ulonglong *local_1f0;
  char *local_1e8;
  undefined *local_1e0;
  ulonglong *local_1d8;
  ulonglong *puStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  char local_158 [240];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_1d8 = (ulonglong *)0x0;
  puStack_1d0 = (ulonglong *)0x0;
  local_1c8 = 0;
  FUN_180139640(&local_1d8);
  if (local_1d8 == puStack_1d0) {
    local_210 = (undefined8 ****)0x0;
    uStack_208 = 0;
    uVar9 = 0;
    local_200 = 0;
    local_1f8 = 0;
    FUN_18001d080(&local_210,
                  "Steam\'s loginusers.vdf could not be read - check that Steam is installed for this user"
                  ,0x56);
    local_1f0 = (ulonglong *)&DAT_1803e85c0;
    iVar7 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar14 = &local_210;
    if (0xf < local_1f8) {
      ppppuVar14 = (undefined8 ****)local_210;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar14,local_200);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_210);
    puVar10 = (undefined8 *)FUN_180132730(&local_210);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180014410("[AS] import: loginusers.vdf gave nothing (SteamPath=\'%s\')\n",puVar10);
    FUN_18020e450(&local_210);
  }
  else {
    local_1e0 = &DAT_1803e86b0;
    iVar7 = _Mtx_lock(&DAT_1803e86b0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e86fc == 0x7fffffff) {
      DAT_1803e86fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar4 = _UNK_1803814b8;
    uVar3 = _DAT_1803814b0;
    uVar9 = 0;
    uVar19 = 0;
    local_218 = 0;
    local_1f0 = puStack_1d0;
    if (local_1d8 != puStack_1d0) {
      puVar16 = local_1d8 + 5;
      puVar17 = local_1d8;
      uVar20 = uVar9;
      uVar21 = uVar9;
      do {
        pcVar5 = DAT_1803eb7c0;
        pcVar15 = DAT_1803eb7b8;
        if (DAT_1803eb7b8 != DAT_1803eb7c0) {
          do {
            puVar13 = puVar17 + 1;
            if (0xf < puVar17[4]) {
              puVar13 = (ulonglong *)puVar17[1];
            }
            _Str1 = pcVar15;
            if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
              _Str1 = *(char **)pcVar15;
            }
            iVar7 = _stricmp(_Str1,(char *)puVar13);
          } while ((iVar7 != 0) && (pcVar15 = pcVar15 + 0x48, pcVar15 != pcVar5));
          uVar21 = (ulonglong)local_218;
        }
        if (pcVar15 == DAT_1803eb7c0) {
          uStack_1a0 = 0;
          local_198 = uVar3;
          uStack_190 = uVar4;
          local_1a8 = 0;
          local_188 = 0;
          uStack_178 = 0;
          local_170 = 0;
          local_168 = 0xf;
          local_180 = 0;
          puVar13 = puVar17 + 1;
          if (&local_1a8 != puVar13) {
            if (0xf < puVar17[4]) {
              puVar13 = (ulonglong *)*puVar13;
            }
            FUN_180212700(&local_1a8,puVar13,puVar17[3]);
          }
          local_188 = *puVar17;
          if ((int)*puVar17 == 0) {
            local_188 = uVar9;
          }
          if (&local_180 != puVar17 + 5) {
            puVar13 = puVar16;
            if (0xf < puVar16[3]) {
              puVar13 = (ulonglong *)*puVar16;
            }
            FUN_180212700(&local_180,puVar13,puVar16[2]);
          }
          pcVar5 = DAT_1803eb7c0;
          if (DAT_1803eb7c0 == DAT_1803eb7c8) {
            FUN_180224fe0(&DAT_1803eb7b8,DAT_1803eb7c0,&local_1a8);
          }
          else {
            local_1e8 = DAT_1803eb7c0;
            FUN_18016d4c0(DAT_1803eb7c0,&local_1a8);
            *(ulonglong *)(pcVar5 + 0x20) = local_188;
            FUN_18016d4c0(pcVar5 + 0x28,&local_180);
            DAT_1803eb7c0 = DAT_1803eb7c0 + 0x48;
          }
          local_218 = (int)uVar21 + 1;
          uVar21 = (ulonglong)local_218;
          FUN_18020e450(&local_180);
          FUN_18020e450(&local_1a8);
        }
        else {
          if ((*(longlong *)(pcVar15 + 0x20) == 0) && ((int)*puVar17 != 0)) {
            *(ulonglong *)(pcVar15 + 0x20) = *puVar17;
          }
          puVar13 = (ulonglong *)(pcVar15 + 0x28);
          if ((*(longlong *)(pcVar15 + 0x38) == 0) && (puVar13 != puVar17 + 5)) {
            if (0xf < puVar16[3]) {
              FUN_180212700(puVar13,*puVar16,puVar16[2]);
              uVar20 = (ulonglong)((int)uVar20 + 1);
              goto LAB_180139fe9;
            }
            FUN_180212700(puVar13,puVar16,puVar16[2]);
          }
          uVar20 = (ulonglong)((int)uVar20 + 1);
        }
LAB_180139fe9:
        uVar19 = (undefined4)uVar20;
        puVar17 = puVar17 + 10;
        puVar16 = puVar16 + 10;
      } while (puVar17 != local_1f0);
    }
    _Mtx_unlock(&DAT_1803e86b0);
    FUN_1801365b0();
    FUN_180139540();
    uVar8 = 0;
    local_1c0 = 0;
    lStack_1b8 = 0;
    local_1b0 = 0;
    FUN_1801367d0(&local_1c0);
    lVar6 = lStack_1b8;
    uVar2 = local_218;
    for (lVar18 = local_1c0; local_218 = uVar2, lVar18 != lVar6; lVar18 = lVar18 + 0x48) {
      lVar11 = FUN_180135100(&local_210,lVar18);
      lVar11 = *(longlong *)(lVar11 + 0x10);
      FUN_18020e450(&local_210);
      uVar8 = (uint)uVar9 + 1;
      if (lVar11 == 0) {
        uVar8 = (uint)uVar9;
      }
      uVar9 = (ulonglong)uVar8;
      uVar2 = local_218;
    }
    local_220 = (int)(lStack_1b8 - local_1c0 >> 3) * 0x38e38e39;
    local_238 = uVar2;
    local_230 = uVar19;
    local_228 = uVar8;
    FUN_180012b20(local_158,0xf0,0xffffffffffffffff,
                  "imported %d from Steam (%d already listed) - %d of %d can switch with no password"
                 );
    local_210 = (undefined8 ****)0x0;
    uStack_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    sVar12 = strlen(local_158);
    FUN_18001d080(&local_210,local_158,sVar12);
    local_1e8 = &DAT_1803e85c0;
    iVar7 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar14 = &local_210;
    if (0xf < local_1f8) {
      ppppuVar14 = (undefined8 ****)local_210;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar14,local_200);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_210);
    local_238 = uVar8;
    FUN_180014410("[AS] import: %d added, %d already known, %zu in loginusers.vdf, %d have a token\n"
                  ,uVar2,uVar19,
                  ((longlong)puStack_1d0 - (longlong)local_1d8 >> 4) * -0x3333333333333333);
    uVar9 = (ulonglong)uVar2;
    FUN_18020ad50(&local_1c0);
  }
  FUN_18020a5a0(&local_1d8);
  return uVar9;
}


