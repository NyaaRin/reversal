// 0x180150550  FUN_180150550
// size=1563 thunk=false
// signature: undefined FUN_180150550()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180150550(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  size_t sVar8;
  int *******pppppppiVar9;
  longlong lVar10;
  char *******pppppppcVar11;
  char *pcVar12;
  int iVar13;
  int *******pppppppiVar14;
  longlong lVar15;
  longlong lVar16;
  char *******pppppppcVar17;
  undefined8 *******pppppppuVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  int local_290;
  uint local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 *local_260 [2];
  undefined4 local_250 [2];
  undefined1 local_248;
  undefined7 uStack_247;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  char ******local_220 [2];
  ulonglong local_210;
  ulonglong local_208;
  undefined8 ******local_200 [3];
  ulonglong local_1e8;
  int ******local_1e0 [2];
  ulonglong local_1d0;
  ulonglong local_1c8;
  char local_1b8 [8];
  undefined8 ******local_1b0 [2];
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_178;
  longlong local_170;
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  local_288 = 0;
  piVar6 = (int *)FUN_180067c80(local_260,param_1);
  if (*piVar6 != 2) {
    return;
  }
  if (piVar6[2] != 0) {
    return;
  }
  uVar7 = FUN_180065de0(param_1,&local_280);
  FUN_180065810(uVar7,local_200);
  FUN_18021e290(&local_280);
  FUN_18014c6b0(local_1b8,param_1);
  if (local_1b8[0] == '\0') {
    if (local_1a0 == 0) {
      local_298 = (undefined8 *******)"unknown";
    }
    else {
      local_298 = local_1b0;
      if (0xf < local_198) {
        local_298 = (undefined8 *******)local_1b0[0];
      }
    }
    pppppppuVar18 = local_200;
    if (0xf < local_1e8) {
      pppppppuVar18 = (undefined8 *******)local_200[0];
    }
    FUN_180012ac0(local_158,0x100,"%s: not readable right now (%s)",pppppppuVar18);
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    sVar8 = strlen(local_158);
    FUN_18001d080(&local_280,local_158,sVar8);
    FUN_18014df00(1,&local_280);
  }
  else {
    local_260[0] = (undefined4 *)((ulonglong)local_260[0] & 0xffffffff00000000);
    iVar5 = 0;
    uVar20 = 0;
    if (local_190 != local_188) {
      iVar19 = 0;
      lVar16 = local_190;
      do {
        FUN_1801504d0(local_1e0,lVar16);
        pppppppiVar14 = local_1e0;
        if (0xf < local_1c8) {
          pppppppiVar14 = (int *******)local_1e0[0];
        }
        iVar4 = iVar5;
        if (((local_1d0 < 7) ||
            (pppppppiVar9 = (int *******)
                            thunk_FUN_1802d5870(pppppppiVar14,
                                                (int *******)((longlong)pppppppiVar14 + 7),"sqlite_"
                                                ,7),
            pppppppiVar9 == (int *******)((longlong)pppppppiVar14 + 7))) ||
           (pppppppiVar9 != pppppppiVar14)) {
          pppppppiVar14 = local_1e0;
          if (0xf < local_1c8) {
            pppppppiVar14 = (int *******)local_1e0[0];
          }
          if (local_1d0 == 7) {
            iVar13 = *(int *)pppppppiVar14 + -0x6b6f6f63;
            if ((iVar13 == 0) &&
               (iVar13 = *(ushort *)((longlong)pppppppiVar14 + 4) - 0x6569, iVar13 == 0)) {
              iVar13 = *(byte *)((longlong)pppppppiVar14 + 6) - 0x73;
            }
            if (iVar13 == 0) goto LAB_180150786;
          }
          iVar19 = iVar19 + 1;
          pppppppiVar14 = local_1e0;
          if (0xf < local_1c8) {
            pppppppiVar14 = (int *******)local_1e0[0];
          }
          if (local_1d0 < 0x15) {
            lVar15 = -1;
          }
          else {
            lVar10 = thunk_FUN_1802d5870(pppppppiVar14,(longlong)pppppppiVar14 + 0x15,
                                         "vcmod_cl_usersettings",0x15);
            lVar15 = -1;
            if (lVar10 != (longlong)pppppppiVar14 + 0x15) {
              lVar15 = lVar10 - (longlong)pppppppiVar14;
            }
          }
          iVar4 = iVar5 + 1;
          if (lVar15 != 0) {
            iVar4 = iVar5;
          }
        }
LAB_180150786:
        iVar5 = iVar4;
        FUN_18020e450(local_1e0);
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != local_188);
      local_260[0] = (undefined4 *)CONCAT44(local_260[0]._4_4_,iVar19);
      uVar20 = local_288;
    }
    lVar15 = local_170;
    iVar19 = 0;
    for (lVar16 = local_178; lVar16 != lVar15; lVar16 = lVar16 + 0x20) {
      FUN_18016d4c0(local_220,lVar16);
      local_288 = uVar20 | 1;
      pppppppcVar11 = (char *******)local_220[0];
      if (local_208 < 0x10) {
        pppppppcVar11 = local_220;
      }
      pppppppcVar17 = (char *******)((longlong)pppppppcVar11 + local_210);
      for (; pppppppcVar11 != pppppppcVar17;
          pppppppcVar11 = (char *******)((longlong)pppppppcVar11 + 1)) {
        if ((byte)(*(char *)pppppppcVar11 + 0xbfU) < 0x1a) {
          *(char *)pppppppcVar11 = *(char *)pppppppcVar11 + ' ';
        }
      }
      pppppppcVar11 = local_220;
      if (0xf < local_208) {
        pppppppcVar11 = (char *******)local_220[0];
      }
      if (((local_210 < 4) ||
          (pcVar1 = (char *)((longlong)pppppppcVar11 + local_210),
          pcVar12 = (char *)thunk_FUN_1802d6b60(pppppppcVar11,pcVar1,&DAT_18035ed38,4),
          pcVar12 == pcVar1)) || ((longlong)pcVar12 - (longlong)pppppppcVar11 == -1)) {
        pppppppcVar11 = local_220;
        if (0xf < local_208) {
          pppppppcVar11 = (char *******)local_220[0];
        }
        if (((0xb < local_210) &&
            (pcVar1 = (char *)((longlong)pppppppcVar11 + local_210),
            pcVar12 = (char *)thunk_FUN_1802d6b60(pppppppcVar11,pcVar1,"devicecookie",0xc),
            pcVar12 != pcVar1)) && ((longlong)pcVar12 - (longlong)pppppppcVar11 != -1))
        goto LAB_1801508ad;
      }
      else {
LAB_1801508ad:
        iVar19 = iVar19 + 1;
      }
      uVar20 = uVar20 & 0xfffffffe;
      local_288 = uVar20;
      FUN_18020e450(local_220);
    }
    if (0 < iVar5) {
      pppppppuVar18 = local_200;
      if (0xf < local_1e8) {
        pppppppuVar18 = (undefined8 *******)local_200[0];
      }
      local_298._4_4_ = (undefined4)((ulonglong)local_298 >> 0x20);
      local_298 = (undefined8 *******)CONCAT44(local_298._4_4_,iVar5);
      FUN_180012ac0(local_158,0x100,
                    "%s: %d client-side BAN table(s) present (vcmod_cl_usersettings_*)",
                    pppppppuVar18);
      local_280 = 0;
      uStack_278 = 0;
      local_270 = 0;
      uStack_268 = 0;
      sVar8 = strlen(local_158);
      FUN_18001d080(&local_280,local_158,sVar8);
      FUN_18014df00(2,&local_280);
      FUN_18020e450(&local_280);
    }
    if (0 < iVar19) {
      pppppppuVar18 = local_200;
      if (0xf < local_1e8) {
        pppppppuVar18 = (undefined8 *******)local_200[0];
      }
      local_298 = (undefined8 *******)CONCAT44(local_298._4_4_,iVar19);
      FUN_180012ac0(local_158,0x100,"%s: %d AC device cookie(s) present",pppppppuVar18);
      local_280 = 0;
      uStack_278 = 0;
      local_270 = 0;
      uStack_268 = 0;
      sVar8 = strlen(local_158);
      FUN_18001d080(&local_280,local_158,sVar8);
      FUN_18014df00(2,&local_280);
      FUN_18020e450(&local_280);
    }
    if ((iVar5 != 0) || (iVar19 != 0)) goto LAB_180150b21;
    iVar5 = (int)(local_170 - local_178 >> 5);
    if (((int)local_260[0] < 1) && (iVar5 < 1)) goto LAB_180150b21;
    pppppppuVar18 = local_200;
    if (0xf < local_1e8) {
      pppppppuVar18 = (undefined8 *******)local_200[0];
    }
    local_298 = (undefined8 *******)CONCAT44(local_298._4_4_,(int)local_260[0]);
    local_290 = iVar5;
    FUN_180012ac0(local_158,0x100,"%s: %d table(s), %d cookie(s) - no known AC marker",pppppppuVar18
                 );
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    sVar8 = strlen(local_158);
    FUN_18001d080(&local_280,local_158,sVar8);
    local_228 = &DAT_1803e7a40;
    iVar5 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_250[0] = 0;
    uVar7 = FUN_18016d4c0(&local_248,&local_280);
    puVar3 = DAT_1803edc28;
    if (DAT_1803edc28 == DAT_1803edc30) {
      FUN_180224570(uVar7,DAT_1803edc28,local_250);
    }
    else {
      local_260[0] = DAT_1803edc28;
      *DAT_1803edc28 = local_250[0];
      *(ulonglong *)(puVar3 + 2) = CONCAT71(uStack_247,local_248);
      *(undefined8 *)(puVar3 + 4) = local_240;
      *(undefined8 *)(puVar3 + 6) = local_238;
      *(undefined8 *)(puVar3 + 8) = uStack_230;
      local_238 = _DAT_1803814b0;
      uStack_230 = _UNK_1803814b8;
      local_248 = 0;
      DAT_1803edc28 = DAT_1803edc28 + 10;
    }
    FUN_18020e450(&local_248);
    _Mtx_unlock(&DAT_1803e7a40);
  }
  FUN_18020e450(&local_280);
LAB_180150b21:
  FUN_18020d5c0(&local_178);
  FUN_18020d5c0(&local_190);
  FUN_18020e450(local_1b0);
  FUN_18020e450(local_200);
  return;
}


