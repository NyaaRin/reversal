// 0x18013aba0  FUN_18013aba0
// size=3169 thunk=false
// signature: undefined FUN_18013aba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18013aba0(undefined8 *******param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  HMODULE pHVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *******_Str1;
  undefined8 *******_Str2;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  uint uVar21;
  undefined8 ******ppppppuVar22;
  undefined *unaff_R15;
  undefined8 uVar23;
  undefined1 auStack_188 [32];
  undefined8 *******local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  char local_148;
  undefined *local_140;
  undefined *local_138;
  int local_130 [2];
  undefined8 *******local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 ******local_100;
  undefined8 ******local_f8;
  undefined8 ******local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined8 ******local_c8;
  undefined8 ******local_c0;
  undefined8 ******local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 ******local_98;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined8 *******local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 *******local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  pHVar14 = DAT_1803fea40;
  if (((DAT_1803fea40 == (HMODULE)0x0) &&
      (pHVar14 = GetModuleHandleA("steamclient64.dll"), pHVar14 == (HMODULE)0x0)) ||
     (DAT_1803fea40 = pHVar14, lVar15 = FUN_180131270(), *(char *)(lVar15 + 0x30) == '\0')) {
    local_80 = (undefined8 *******)0x0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_18001d080(&local_80,"steamclient64.dll is not loaded in this process",0x2f);
    local_140 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar16 = (*pcVar1)();
      return uVar16;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar18 = &local_80;
    if (0xf < local_68) {
      pppppppuVar18 = local_80;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
    _Mtx_unlock(&DAT_1803e85c0);
    goto LAB_18013b7d6;
  }
  local_140 = (undefined *)FUN_180131d10();
  if ((local_140 != (undefined *)0x0) && (cVar3 = FUN_180131d80(local_140), cVar3 != '\0')) {
    FUN_180138480();
    uStack_b0 = 0;
    local_a8 = _DAT_1803814b0;
    uStack_a0 = _UNK_1803814b8;
    local_b8 = (undefined8 ******)0x0;
    uVar21 = 0xffffffff;
    local_98 = (undefined8 ******)0xffffffffffffffff;
    puVar20 = (undefined *)0xffffffff;
    pppppppuVar19 = (undefined8 *******)0x0;
    iVar5 = 0;
    local_90 = (undefined8 ******)0x0;
    local_88 = (undefined8 ******)0x0;
    local_138 = &DAT_1803e8610;
    iVar4 = _Mtx_lock(&DAT_1803e8610);
    pppppppuVar18 = DAT_1803e9e50;
    if (iVar4 == 0) {
      if (DAT_1803e865c == 0x7fffffff) {
LAB_18013b3cd:
        DAT_1803e865c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
LAB_18013b3e3:
        uStack_e8 = 0;
        local_e0 = _DAT_1803814b0;
        uStack_d8 = _UNK_1803814b8;
        local_f0 = (undefined8 ******)0x0;
        local_d0 = 0xffffffffffffffff;
        local_c8 = (undefined8 ******)0x0;
        local_c0 = (undefined8 ******)0x0;
        uVar23 = _DAT_1803814b0;
        if (&local_f0 != param_1) {
          pppppppuVar18 = param_1;
          if ((undefined8 ******)0xf < param_1[3]) {
            pppppppuVar18 = (undefined8 *******)*param_1;
          }
          uVar23 = FUN_180212700(&local_f0,pppppppuVar18,param_1[2]);
        }
        pppppppuVar18 = DAT_1803e9e50;
        local_d0 = CONCAT44(local_130[0],iVar5);
        local_c8 = DAT_180409c80;
        if (DAT_1803e9e50 == DAT_1803e9e58) {
          FUN_180225270(uVar23,DAT_1803e9e50,&local_f0);
        }
        else {
          local_60 = DAT_1803e9e50;
          FUN_18016d4c0(DAT_1803e9e50,&local_f0);
          *(undefined4 *)(pppppppuVar18 + 4) = (undefined4)local_d0;
          *(undefined4 *)((longlong)pppppppuVar18 + 0x24) = local_d0._4_4_;
          pppppppuVar18[5] = local_c8;
          pppppppuVar18[6] = local_c0;
          DAT_1803e9e50 = DAT_1803e9e50 + 7;
        }
        lVar15 = (longlong)DAT_1803e9e50 - (longlong)DAT_1803e9e48;
        FUN_18020e450(&local_f0);
        _Mtx_unlock(puVar20);
        if ((undefined8 ******)0xf < param_1[3]) {
          param_1 = (undefined8 *******)*param_1;
        }
        FUN_180014410("[AS] pool: %zu live session(s) after adding \'%s\'\n",
                      (lVar15 >> 3) * 0x6db6db6db6db6db7,param_1);
        local_168 = (undefined8 *******)DAT_180409c80;
        FUN_180014410("[AS] session: engine=%p user=%d pipe=%d IClientUser=%p\n",unaff_R15,iVar5,
                      local_130[0]);
        uVar7 = FUN_1801318c0(DAT_180409c80);
        uVar8 = FUN_1801318c0(DAT_180409c80);
        uVar9 = FUN_1801318c0(DAT_180409c80);
        uVar10 = FUN_1801318c0(DAT_180409c80);
        uVar11 = FUN_1801318c0(DAT_180409c80);
        uVar12 = FUN_1801318c0(DAT_180409c80);
        uVar13 = FUN_1801318c0(DAT_180409c80);
        local_160 = uVar9;
        local_158 = uVar8;
        local_150 = uVar7;
        local_168._0_4_ = uVar10;
        FUN_180014410("[AS] slots: LogOn=%d SetLoginInformation=%d SetTwoFactorCode=%d Set2ndFactorAuthCode=%d GetSteamID=%d GetLogonState=%d BHasCachedCredentials=%d\n"
                      ,uVar13,uVar12,uVar11);
        uVar7 = FUN_1801318c0(DAT_180409c80);
        uVar8 = FUN_1801318c0(DAT_180409c80);
        uVar9 = FUN_1801318c0(DAT_180409c80);
        uVar10 = FUN_180131c20(DAT_180409c80);
        uVar11 = FUN_180131c20(DAT_180409c80);
        uVar12 = FUN_1801318c0(DAT_180409c80);
        local_168 = (undefined8 *******)CONCAT44(local_168._4_4_,uVar9);
        local_160 = uVar8;
        local_158 = uVar7;
        FUN_180014410("[AS] slots: SetLoginToken=%d GetAccountName=%d/%d BUpdateAppOwnershipTicket=%d BGameConnectTokensAvailable=%d BIsOtherSessionPlaying=%d\n"
                      ,uVar12,uVar11,uVar10);
        uVar6 = uVar21;
LAB_18013b715:
        FUN_18020e450(&local_b8);
        return (ulonglong)uVar6;
      }
      local_148 = '\0';
      pppppppuVar17 = DAT_1803e9e48;
      while( true ) {
        iVar4 = -1;
        ppppppuVar22 = (undefined8 ******)0x0;
        if (pppppppuVar17 == pppppppuVar18) break;
        _Str2 = param_1;
        if ((undefined8 ******)0xf < param_1[3]) {
          _Str2 = (undefined8 *******)*param_1;
        }
        _Str1 = pppppppuVar17;
        if ((undefined8 ******)0xf < pppppppuVar17[3]) {
          _Str1 = (undefined8 *******)*pppppppuVar17;
        }
        iVar4 = _stricmp((char *)_Str1,(char *)_Str2);
        if (iVar4 == 0) {
          if (&local_b8 != pppppppuVar17) {
            pppppppuVar18 = pppppppuVar17;
            if ((undefined8 ******)0xf < pppppppuVar17[3]) {
              pppppppuVar18 = (undefined8 *******)*pppppppuVar17;
            }
            FUN_180212700(&local_b8,pppppppuVar18,pppppppuVar17[2]);
          }
          uVar21 = *(uint *)(pppppppuVar17 + 4);
          iVar4 = *(int *)((longlong)pppppppuVar17 + 0x24);
          local_98 = pppppppuVar17[4];
          ppppppuVar22 = pppppppuVar17[5];
          local_88 = pppppppuVar17[6];
          local_148 = '\x01';
          local_90 = ppppppuVar22;
          break;
        }
        pppppppuVar17 = pppppppuVar17 + 7;
      }
      _Mtx_unlock(&DAT_1803e8610);
      if ((local_148 != '\0') && (ppppppuVar22 != (undefined8 ******)0x0)) {
        iVar5 = FUN_1801318c0(ppppppuVar22);
        if ((-1 < iVar5) &&
           ((cVar3 = (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22), cVar3 != '\0' &&
            (iVar5 = FUN_1801318c0(ppppppuVar22), -1 < iVar5)))) {
          local_60 = (undefined8 *******)0x0;
          (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22,&local_60);
          if ((int)local_60 != 0) {
            DAT_1803e85b4 = iVar4;
            DAT_180409c80 = ppppppuVar22;
            iVar5 = FUN_1801318c0(ppppppuVar22);
            local_168 = pppppppuVar19;
            if (-1 < iVar5) {
              local_60 = (undefined8 *******)0x0;
              (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22,&local_60);
              local_168 = local_60;
            }
            LOCK();
            UNLOCK();
            if ((undefined8 ******)0xf < param_1[3]) {
              param_1 = (undefined8 *******)*param_1;
            }
            DAT_180409c30 = local_168;
            FUN_180014410("[AS] reusing the live session for \'%s\' (user=%d pipe=%d, SteamID %llu) - no logon needed\n"
                          ,param_1,uVar21,iVar4);
            uVar6 = 2;
            goto LAB_18013b715;
          }
        }
        pppppppuVar18 = param_1;
        if ((undefined8 ******)0xf < param_1[3]) {
          pppppppuVar18 = (undefined8 *******)*param_1;
        }
        FUN_180014410("[AS] pooled session for \'%s\' is not signed in - re-logging the SAME user (never replacing it: only the first local user of a launch can authorise)\n"
                      ,pppppppuVar18);
      }
      uStack_120 = 0;
      local_118 = _DAT_1803814b0;
      uStack_110 = _UNK_1803814b8;
      local_128 = (undefined8 *******)0x0;
      local_108 = (undefined8 ******)0xffffffffffffffff;
      local_100 = (undefined8 ******)0x0;
      local_f8 = (undefined8 ******)0x0;
      puVar20 = &DAT_1803e8610;
      local_60 = (undefined8 *******)&DAT_1803e8610;
      iVar4 = _Mtx_lock(&DAT_1803e8610);
      pppppppuVar18 = DAT_1803e9e48;
      if (iVar4 == 0) {
        if (DAT_1803e865c == 0x7fffffff) {
LAB_18013b1c7:
          DAT_1803e865c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
LAB_18013b1dd:
          if (DAT_1803e9e48 != DAT_1803e9e50) {
            if (DAT_1803e9e48 != param_1) {
              pppppppuVar18 = param_1 + 2;
              if ((undefined8 ******)0xf < param_1[3]) {
                param_1 = (undefined8 *******)*param_1;
              }
              FUN_180212700(DAT_1803e9e48,param_1,*pppppppuVar18);
            }
            DAT_1803e9e48[6] = (undefined8 ******)0x0;
          }
          _Mtx_unlock(&DAT_1803e8610);
          FUN_18020e450(&local_128);
          uVar6 = 1;
          goto LAB_18013b715;
        }
        bVar2 = false;
        if (DAT_1803e9e48 != DAT_1803e9e50) {
          if (&local_128 != (undefined8 ********)DAT_1803e9e48) {
            pppppppuVar17 = DAT_1803e9e48;
            if ((undefined8 ******)0xf < DAT_1803e9e48[3]) {
              pppppppuVar17 = (undefined8 *******)*DAT_1803e9e48;
            }
            FUN_180212700(&local_128,pppppppuVar17,DAT_1803e9e48[2]);
          }
          local_108 = pppppppuVar18[4];
          local_100 = pppppppuVar18[5];
          local_f8 = pppppppuVar18[6];
          bVar2 = true;
        }
        _Mtx_unlock(&DAT_1803e8610);
        uVar6 = 0;
        if ((bVar2) && (local_100 != (undefined8 ******)0x0)) {
          if ((int)local_108 != -1) {
            local_168 = param_1;
            if ((undefined8 ******)0xf < param_1[3]) {
              local_168 = (undefined8 *******)*param_1;
            }
            pppppppuVar18 = &local_128;
            if (0xf < uStack_110) {
              pppppppuVar18 = local_128;
            }
            FUN_180014410("[AS] re-logging the existing local user (user=%d pipe=%d) from \'%s\' to \'%s\' - Steam only ever authorises the FIRST local user of a game launch\n"
                          ,(ulonglong)local_108 & 0xffffffff,local_108._4_4_,pppppppuVar18);
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (-1 < iVar4) {
              (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (-1 < iVar4) {
              (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            do {
              local_80 = (undefined8 *******)0x0;
              uStack_78 = 0;
              local_70 = 0;
              lVar15 = FUN_180131270();
              cVar3 = (**(code **)(lVar15 + 0x18))(local_108._4_4_,&local_80);
              ppppppuVar22 = local_100;
              while (local_100 = ppppppuVar22, cVar3 != '\0') {
                lVar15 = FUN_180131270();
                (**(code **)(lVar15 + 0x20))(local_108._4_4_);
                lVar15 = FUN_180131270();
                cVar3 = (**(code **)(lVar15 + 0x18))(local_108._4_4_,&local_80);
                ppppppuVar22 = local_100;
              }
              iVar4 = FUN_1801318c0(ppppppuVar22);
              if ((((iVar4 < 0) ||
                   (iVar4 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), iVar4 == 0)) &&
                  ((ppppppuVar22 = local_100, iVar4 = FUN_1801318c0(local_100), iVar4 < 0 ||
                   (cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), cVar3 == '\0')))) &&
                 ((ppppppuVar22 = local_100, iVar4 = FUN_1801318c0(local_100), iVar4 < 0 ||
                  (cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), cVar3 == '\0')))) break;
              Sleep(0x32);
              uVar21 = (int)pppppppuVar19 + 0x32;
              pppppppuVar19 = (undefined8 *******)(ulonglong)uVar21;
            } while ((int)uVar21 < 5000);
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (iVar4 < 0) {
              cVar3 = '\0';
            }
            else {
              cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (-1 < iVar4) {
              uVar6 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            FUN_180014410("[AS] log-off settled after %d ms (logonState=%d connected=%d)\n",
                          pppppppuVar19,uVar6,cVar3 != '\0');
            DAT_1803e85b4 = local_108._4_4_;
            DAT_180409c80 = local_100;
            LOCK();
            DAT_180409c30 = (undefined8 *******)0x0;
            UNLOCK();
            local_140 = &DAT_1803e8610;
            iVar4 = _Mtx_lock(&DAT_1803e8610);
            if (iVar4 != 0) goto LAB_18013b726;
            if (DAT_1803e865c == 0x7fffffff) goto LAB_18013b1c7;
            goto LAB_18013b1dd;
          }
        }
        FUN_18020e450(&local_128);
        local_130[0] = -1;
        lVar15 = FUN_180131270();
        uVar21 = 1;
        iVar5 = (**(code **)(lVar15 + 8))(local_130,1);
        unaff_R15 = local_140;
        if ((iVar5 == -1) || (local_130[0] == -1)) {
          local_80 = (undefined8 *******)0x0;
          uStack_78 = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_18001d080(&local_80,"Steam refused to create a local user",0x24);
          local_140 = &DAT_1803e85c0;
          iVar4 = _Mtx_lock(&DAT_1803e85c0);
          if (iVar4 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            uVar16 = (*pcVar1)();
            return uVar16;
          }
          if (DAT_1803e860c == 0x7fffffff) {
            DAT_1803e860c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          pppppppuVar18 = &local_80;
          if (0xf < local_68) {
            pppppppuVar18 = local_80;
          }
          FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
          _Mtx_unlock(&DAT_1803e85c0);
          FUN_18020e450(&local_80);
          goto LAB_18013b715;
        }
        DAT_1803e85b4 = local_130[0];
        DAT_180409c80 = (undefined8 ******)FUN_180131e30(local_140,iVar5);
        if (DAT_180409c80 == (undefined8 ******)0x0) {
          local_80 = (undefined8 *******)0x0;
          uStack_78 = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_18001d080(&local_80,
                        "IClientUser did not validate - re-run tools/analyze_steamclient.py",0x42);
          local_140 = &DAT_1803e85c0;
          iVar4 = _Mtx_lock(&DAT_1803e85c0);
          if (iVar4 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            uVar16 = (*pcVar1)();
            return uVar16;
          }
          if (DAT_1803e860c == 0x7fffffff) {
            DAT_1803e860c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          pppppppuVar18 = &local_80;
          if (0xf < local_68) {
            pppppppuVar18 = local_80;
          }
          FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
          _Mtx_unlock(&DAT_1803e85c0);
          FUN_18020e450(&local_80);
          FUN_180014410("[AS] GetIClientUser(user=%d, pipe=%d) did not validate\n",iVar5,
                        local_130[0]);
          lVar15 = FUN_180131270();
          if (*(longlong *)(lVar15 + 0x10) != 0) {
            lVar15 = FUN_180131270();
            (**(code **)(lVar15 + 0x10))(local_130[0],iVar5);
          }
          lVar15 = FUN_180131270();
          if (*(longlong *)(lVar15 + 0x28) != 0) {
            lVar15 = FUN_180131270();
            (**(code **)(lVar15 + 0x28))(local_130[0]);
          }
          DAT_180409c80 = (undefined8 ******)0x0;
          DAT_1803e85b4 = -1;
          LOCK();
          DAT_180409c30 = (undefined8 *******)0x0;
          UNLOCK();
          goto LAB_18013b715;
        }
        local_140 = &DAT_1803e8610;
        iVar4 = _Mtx_lock(&DAT_1803e8610);
        if (iVar4 == 0) {
          if (DAT_1803e865c == 0x7fffffff) goto LAB_18013b3cd;
          goto LAB_18013b3e3;
        }
      }
      else {
LAB_18013b726:
        std::_Throw_Cpp_error(5);
      }
    }
    std::_Throw_Cpp_error(5);
  }
  local_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_18001d080(&local_80,"IClientEngine layout changed - re-run tools/analyze_steamclient.py",0x42)
  ;
  local_140 = &DAT_1803e85c0;
  iVar4 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar16 = (*pcVar1)();
    return uVar16;
  }
  if (DAT_1803e860c == 0x7fffffff) {
    DAT_1803e860c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pppppppuVar18 = &local_80;
  if (0xf < local_68) {
    pppppppuVar18 = local_80;
  }
  FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
  _Mtx_unlock(&DAT_1803e85c0);
LAB_18013b7d6:
  FUN_18020e450(&local_80);
  return 0;
}


