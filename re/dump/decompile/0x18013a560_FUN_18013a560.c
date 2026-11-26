// 0x18013a560  FUN_18013a560
// size=1595 thunk=false
// signature: undefined FUN_18013a560()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013a560(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  HMODULE pHVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *****pppppuVar14;
  size_t sVar15;
  void *pvVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  void *_Dst;
  undefined4 *puVar19;
  undefined8 *****_Memory;
  undefined1 *puVar20;
  uint uVar21;
  void *pvVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar25;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [40];
  undefined4 local_208;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined1 local_198 [32];
  undefined8 ****local_178;
  undefined8 ***pppuStack_170;
  undefined8 ***local_168;
  undefined8 ***local_160;
  int local_158;
  int iStack_154;
  longlong *local_150;
  void *local_148;
  void *local_140;
  CHAR local_138 [64];
  char local_f8 [160];
  ulonglong local_58;
  
  puVar20 = auStack_238;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  _Dst = (void *)0x0;
  uVar24 = 0;
  local_208 = 0;
  local_138[0] = '\0';
  local_138[1] = '\0';
  local_138[2] = '\0';
  local_138[3] = '\0';
  local_138[4] = '\0';
  local_138[5] = '\0';
  local_138[6] = '\0';
  local_138[7] = '\0';
  local_138[8] = '\0';
  local_138[9] = '\0';
  local_138[10] = '\0';
  local_138[0xb] = '\0';
  local_138[0xc] = '\0';
  local_138[0xd] = '\0';
  local_138[0xe] = '\0';
  local_138[0xf] = '\0';
  local_138[0x10] = '\0';
  local_138[0x11] = '\0';
  local_138[0x12] = '\0';
  local_138[0x13] = '\0';
  local_138[0x14] = '\0';
  local_138[0x15] = '\0';
  local_138[0x16] = '\0';
  local_138[0x17] = '\0';
  local_138[0x18] = '\0';
  local_138[0x19] = '\0';
  local_138[0x1a] = '\0';
  local_138[0x1b] = '\0';
  local_138[0x1c] = '\0';
  local_138[0x1d] = '\0';
  local_138[0x1e] = '\0';
  local_138[0x1f] = '\0';
  local_138[0x20] = '\0';
  local_138[0x21] = '\0';
  local_138[0x22] = '\0';
  local_138[0x23] = '\0';
  local_138[0x24] = '\0';
  local_138[0x25] = '\0';
  local_138[0x26] = '\0';
  local_138[0x27] = '\0';
  local_138[0x28] = '\0';
  local_138[0x29] = '\0';
  local_138[0x2a] = '\0';
  local_138[0x2b] = '\0';
  local_138[0x2c] = '\0';
  local_138[0x2d] = '\0';
  local_138[0x2e] = '\0';
  local_138[0x2f] = '\0';
  local_138[0x30] = '\0';
  local_138[0x31] = '\0';
  local_138[0x32] = '\0';
  local_138[0x33] = '\0';
  local_138[0x34] = '\0';
  local_138[0x35] = '\0';
  local_138[0x36] = '\0';
  local_138[0x37] = '\0';
  local_138[0x38] = '\0';
  local_138[0x39] = '\0';
  local_138[0x3a] = '\0';
  local_138[0x3b] = '\0';
  local_138[0x3c] = '\0';
  local_138[0x3d] = '\0';
  local_138[0x3e] = '\0';
  local_138[0x3f] = '\0';
  memset(local_f8,0,0xa0);
  DVar7 = GetEnvironmentVariableA("MAYRR_AS_USER",local_138,0x20);
  puVar23 = auStack_238;
  if ((((DVar7 == 0) ||
       (DVar7 = GetEnvironmentVariableA("MAYRR_AS_PIPE",local_138 + 0x20,0x20),
       puVar23 = auStack_238, DVar7 == 0)) ||
      ((GetEnvironmentVariableA("MAYRR_AS_ACCOUNT",local_f8,0xa0), pHVar11 = DAT_1803fea40,
       DAT_1803fea40 == (HMODULE)0x0 &&
       (pHVar11 = GetModuleHandleA("steamclient64.dll"), puVar23 = auStack_238,
       pHVar11 == (HMODULE)0x0)))) ||
     (((DAT_1803fea40 = pHVar11, lVar12 = FUN_180131270(), puVar23 = auStack_238,
       *(char *)(lVar12 + 0x30) == '\0' ||
       (lVar12 = FUN_180131d10(), puVar23 = auStack_238, lVar12 == 0)) ||
      (cVar6 = FUN_180131d80(lVar12), puVar23 = auStack_238, cVar6 == '\0')))) goto LAB_18013a6de;
  iVar8 = atoi(local_138);
  iVar9 = atoi(local_138 + 0x20);
  if ((0 < iVar8) && (0 < iVar9)) {
    plVar13 = (longlong *)FUN_180131e30(lVar12,iVar8,iVar9);
    if (plVar13 != (longlong *)0x0) {
      pppuStack_170 = (undefined8 ****)0x0;
      local_168 = (undefined8 ****)0x0;
      local_160 = (undefined8 ****)0xf;
      local_178 = (undefined8 *****)0x0;
      local_148 = (void *)0x0;
      _local_158 = CONCAT44(iVar9,iVar8);
      local_150 = plVar13;
      pppppuVar14 = (undefined8 *****)FUN_180131f60(local_198,plVar13);
      puVar23 = auStack_238;
      if (&local_178 != pppppuVar14) {
        if ((undefined8 ****)0xf < local_160) {
          _Memory = (undefined8 *****)local_178;
          puVar20 = auStack_238;
          if ((0xfff < (longlong)local_160 + 1U) &&
             (_Memory = (undefined8 *****)local_178[-1], puVar20 = auStack_238,
             0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)_Memory)))) {
            _Memory = (undefined8 *****)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar20 = auStack_230;
          }
          *(undefined8 *)(puVar20 + -8) = 0x18013a79b;
          free(_Memory);
        }
        local_178 = *pppppuVar14;
        pppuStack_170 = pppppuVar14[1];
        local_168 = pppppuVar14[2];
        local_160 = pppppuVar14[3];
        pppppuVar14[2] = (undefined8 ****)0x0;
        pppppuVar14[3] = (undefined8 ****)0xf;
        *(undefined1 *)pppppuVar14 = 0;
        puVar23 = puVar20;
      }
      *(undefined8 *)(puVar23 + -8) = 0x18013a7e2;
      FUN_18020e450(local_198);
      if (((undefined8 ****)local_168 == (undefined8 ****)0x0) && (local_f8[0] != '\0')) {
        *(undefined8 *)(puVar23 + -8) = 0x18013a7f8;
        sVar15 = strlen(local_f8);
        *(undefined8 *)(puVar23 + -8) = 0x18013a808;
        FUN_180212700(&local_178,local_f8,sVar15);
      }
      *(undefined8 *)(puVar23 + -8) = 0x18013a817;
      iVar10 = FUN_1801318c0(plVar13);
      pvVar16 = _Dst;
      if (-1 < iVar10) {
        pcVar1 = *(code **)(*plVar13 + (longlong)iVar10 * 8);
        local_140 = (void *)0x0;
        *(undefined8 *)(puVar23 + -8) = 0x18013a838;
        (*pcVar1)(plVar13,&local_140);
        pvVar16 = local_140;
      }
      local_1a0 = &DAT_1803e8610;
      *(undefined8 *)(puVar23 + -8) = 0x18013a854;
      local_148 = pvVar16;
      iVar10 = _Mtx_lock(&DAT_1803e8610);
      if (iVar10 != 0) {
        *(undefined8 *)(puVar23 + -8) = 0x18013a863;
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar25 = extraout_XMM0_Da;
      if (DAT_1803e865c == 0x7fffffff) {
        DAT_1803e865c = 0x7ffffffe;
        *(undefined8 *)(puVar23 + -8) = 0x18013a884;
        std::_Throw_Cpp_error(6);
        uVar25 = extraout_XMM0_Da_00;
      }
      pvVar16 = DAT_1803e9e50;
      pvVar22 = DAT_1803e9e48;
      if (DAT_1803e9e48 != DAT_1803e9e50) {
        do {
          *(undefined8 *)(puVar23 + -8) = 0x18013a8a8;
          local_140 = pvVar22;
          uVar25 = FUN_18020e450(pvVar22);
          local_140 = (void *)((longlong)pvVar22 + 0x38);
          pvVar22 = local_140;
        } while (local_140 != pvVar16);
        DAT_1803e9e50 = DAT_1803e9e48;
      }
      pvVar16 = DAT_1803e9e50;
      if (DAT_1803e9e50 == DAT_1803e9e58) {
        *(undefined8 *)(puVar23 + -8) = 0x18013a912;
        FUN_180225270(uVar25,DAT_1803e9e50,&local_178);
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x18013a8df;
        local_140 = DAT_1803e9e50;
        FUN_18016d4c0(DAT_1803e9e50,&local_178);
        *(int *)((longlong)pvVar16 + 0x20) = local_158;
        *(int *)((longlong)pvVar16 + 0x24) = iStack_154;
        *(longlong **)((longlong)pvVar16 + 0x28) = local_150;
        *(void **)((longlong)pvVar16 + 0x30) = local_148;
        DAT_1803e9e50 = (void *)((longlong)DAT_1803e9e50 + 0x38);
      }
      *(undefined8 *)(puVar23 + -8) = 0x18013a91c;
      _Mtx_unlock(&DAT_1803e8610);
      *(undefined8 *)(puVar23 + -8) = 0x18013a939;
      DAT_1803e85b4 = iVar9;
      DAT_180409c80 = plVar13;
      iVar10 = FUN_1801318c0(plVar13);
      if (iVar10 < 0) {
LAB_18013ab36:
        DAT_180409c80 = (longlong *)0x0;
        DAT_1803e85b4 = -1;
        LOCK();
        DAT_180409c30 = (void *)0x0;
        UNLOCK();
      }
      else {
        pcVar1 = *(code **)(*plVar13 + (longlong)iVar10 * 8);
        *(undefined8 *)(puVar23 + -8) = 0x18013a94d;
        cVar6 = (*pcVar1)(plVar13);
        pppuVar5 = local_168;
        pvVar16 = DAT_180409c30;
        if ((cVar6 == '\0') || ((int)local_148 == 0)) goto LAB_18013ab36;
        LOCK();
        DAT_180409c30 = local_148;
        UNLOCK();
        LOCK();
        DAT_180409c24 = 4;
        UNLOCK();
        uVar24 = 1;
        if ((undefined8 ****)local_168 == (undefined8 ****)0x0) {
          *(undefined8 *)(puVar23 + 0x78) = 0;
          *(undefined8 *)(puVar23 + 0x80) = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          *(undefined8 *)(puVar23 + -8) = 0x18013a9a9;
          FUN_18001d080(puVar23 + 0x78,"signed in",9);
          puVar20 = puVar23 + 0x78;
          uVar21 = 1;
        }
        else {
          *(undefined8 *)(puVar23 + 0x38) = 0;
          *(undefined8 *)(puVar23 + 0x40) = 0;
          *(undefined8 *)(puVar23 + 0x48) = 0;
          *(undefined8 *)(puVar23 + 0x50) = 0;
          pppppuVar14 = &local_178;
          if ((undefined8 ****)0xf < local_160) {
            pppppuVar14 = (undefined8 *****)local_178;
          }
          if ((undefined8 ****)0x7fffffffffffffff < local_168) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar23 + -8) = &UNK_18013ab96;
            FUN_1800130a0(pvVar16);
          }
          if (local_168 < (undefined8 ****)0x10) {
            *(undefined8 ****)(puVar23 + 0x48) = local_168;
            *(undefined8 *)(puVar23 + 0x50) = 0xf;
            ppppuVar4 = pppppuVar14[1];
            *(undefined8 *****)(puVar23 + 0x38) = *pppppuVar14;
            *(undefined8 *****)(puVar23 + 0x40) = ppppuVar4;
          }
          else {
            uVar17 = (ulonglong)local_168 | 0xf;
            if (uVar17 < 0x8000000000000000) goto LAB_18013aa34;
            uVar18 = 0x8000000000000027;
            uVar17 = 0x7fffffffffffffff;
            while( true ) {
              *(undefined8 *)(puVar23 + -8) = 0x18013aa25;
              lVar12 = FUN_1802d8350(uVar18);
              if (lVar12 != 0) break;
              pcVar1 = (code *)swi(0x29);
              uVar17 = (*pcVar1)(5);
              puVar23 = puVar23 + 8;
LAB_18013aa34:
              if (uVar17 < 0x16) {
                uVar17 = 0x16;
              }
              if (uVar17 == 0xffffffffffffffff) goto LAB_18013aa7c;
              if (uVar17 + 1 < 0x1000) {
                *(undefined8 *)(puVar23 + -8) = 0x18013aa7c;
                _Dst = (void *)FUN_1802d8350();
                goto LAB_18013aa7c;
              }
              uVar18 = uVar17 + 0x28;
              if (uVar18 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar23 + -8) = &UNK_18013ab9c;
                FUN_180012fe0();
              }
            }
            _Dst = (void *)(lVar12 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)_Dst - 8) = lVar12;
LAB_18013aa7c:
            *(void **)(puVar23 + 0x38) = _Dst;
            *(undefined8 ****)(puVar23 + 0x48) = pppuVar5;
            *(ulonglong *)(puVar23 + 0x50) = uVar17;
            *(undefined8 *)(puVar23 + -8) = 0x18013aa9a;
            memcpy(_Dst,pppppuVar14,(longlong)pppuVar5 + 1);
          }
          puVar20 = puVar23 + 0x38;
          uVar21 = 2;
        }
        *(uint *)(puVar23 + 0x30) = uVar21;
        *(undefined8 *)(puVar23 + -8) = 0x18013aaba;
        puVar19 = (undefined4 *)FUN_18022a630(puVar20);
        *(undefined8 *)(puVar23 + 0x68) = 0;
        *(undefined8 *)(puVar23 + 0x70) = 0;
        uVar25 = puVar19[1];
        uVar2 = puVar19[2];
        uVar3 = puVar19[3];
        *(undefined4 *)(puVar23 + 0x58) = *puVar19;
        *(undefined4 *)(puVar23 + 0x5c) = uVar25;
        *(undefined4 *)(puVar23 + 0x60) = uVar2;
        *(undefined4 *)(puVar23 + 100) = uVar3;
        uVar25 = puVar19[5];
        uVar2 = puVar19[6];
        uVar3 = puVar19[7];
        *(undefined4 *)(puVar23 + 0x68) = puVar19[4];
        *(undefined4 *)(puVar23 + 0x6c) = uVar25;
        *(undefined4 *)(puVar23 + 0x70) = uVar2;
        *(undefined4 *)(puVar23 + 0x74) = uVar3;
        *(undefined8 *)(puVar19 + 4) = 0;
        *(undefined8 *)(puVar19 + 6) = 0xf;
        *(undefined1 *)puVar19 = 0;
        *(uint *)(puVar23 + 0x30) = uVar21 | 8;
        *(undefined8 *)(puVar23 + -8) = 0x18013aaf5;
        FUN_1801356b0(puVar23 + 0x58);
        *(uint *)(puVar23 + 0x30) = uVar21;
        *(undefined8 *)(puVar23 + -8) = 0x18013ab06;
        FUN_18020e450(puVar23 + 0x58);
        if ((uVar21 & 2) != 0) {
          uVar21 = uVar21 & 0xfffffff5;
          *(uint *)(puVar23 + 0x30) = uVar21;
          *(undefined8 *)(puVar23 + -8) = 0x18013ab1d;
          FUN_18020e450(puVar23 + 0x38);
        }
        if ((uVar21 & 1) != 0) {
          *(uint *)(puVar23 + 0x30) = uVar21 & 0xfffffffe;
          *(undefined8 *)(puVar23 + -8) = 0x18013ab34;
          FUN_18020e450(puVar23 + 0x78);
        }
      }
      pppppuVar14 = &local_178;
      if ((undefined8 ****)0xf < local_160) {
        pppppuVar14 = (undefined8 *****)local_178;
      }
      *(undefined4 *)(puVar23 + 0x28) = uVar24;
      *(void **)(puVar23 + 0x20) = local_148;
      *(undefined8 *)(puVar23 + -8) = 0x18013ab82;
      FUN_180014410("[AS] adopted the local user from the previous load: user=%d pipe=%d \'%s\' SteamID=%llu loggedOn=%d\n"
                    ,iVar8,iVar9,pppppuVar14);
      *(undefined8 *)(puVar23 + -8) = 0x18013ab8c;
      FUN_18020e450(&local_178);
      goto LAB_18013a6de;
    }
    FUN_180014410("[AS] the local user left by the previous load (user=%d pipe=%d) is gone - starting fresh\n"
                  ,iVar8,iVar9);
  }
  SetEnvironmentVariableA("MAYRR_AS_USER",(LPCSTR)0x0);
  SetEnvironmentVariableA("MAYRR_AS_PIPE",(LPCSTR)0x0);
  SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)0x0);
  puVar23 = auStack_238;
LAB_18013a6de:
  *(undefined8 *)(puVar23 + -8) = 0x18013a6ed;
  return;
}


