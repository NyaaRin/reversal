// 0x18013c230  FUN_18013c230
// size=1949 thunk=false
// signature: undefined FUN_18013c230()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18013c230(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 auStack_158 [32];
  undefined *local_138;
  int local_130;
  undefined8 *******local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined *local_100;
  undefined *local_f8 [2];
  char local_e8 [192];
  ulonglong local_28;
  
  plVar6 = DAT_180409c80;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_108 = 0;
  LOCK();
  UNLOCK();
  DAT_180409c74 = param_1;
  switch(param_1) {
  case 1:
    iVar4 = FUN_1801318c0(DAT_180409c80,0x180000000,"GetSteamID");
    puVar12 = (undefined *)0x0;
    if (-1 < iVar4) {
      local_f8[0] = (undefined *)0x0;
      (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6,local_f8);
      puVar12 = local_f8[0];
      if ((int)local_f8[0] != 0) {
        LOCK();
        DAT_180409c30 = local_f8[0];
        UNLOCK();
        LOCK();
        DAT_180409c24 = 4;
        UNLOCK();
        local_100 = &DAT_1803e8610;
        iVar4 = _Mtx_lock(&DAT_1803e8610);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          uVar8 = (*pcVar1)();
          return uVar8;
        }
        lVar2 = DAT_1803e9e48;
        if (DAT_1803e865c == 0x7fffffff) {
          DAT_1803e865c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
          lVar2 = DAT_1803e9e48;
        }
        do {
          if (lVar2 == DAT_1803e9e50) {
LAB_18013c417:
            _Mtx_unlock(&DAT_1803e8610);
            local_f8[0] = &DAT_1803e85c0;
            iVar4 = _Mtx_lock(&DAT_1803e85c0);
            if (iVar4 != 0) {
              std::_Throw_Cpp_error(5);
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return uVar8;
            }
            if (DAT_1803e860c == 0x7fffffff) {
              DAT_1803e860c = 0x7ffffffe;
              std::_Throw_Cpp_error(6);
            }
            FUN_18016d4c0(&local_128,&DAT_1803eb340);
            local_108 = 1;
            _Mtx_unlock(&DAT_1803e85c0);
            FUN_1801368a0(&local_128,puVar12);
            local_108 = 0;
            FUN_18020e450(&local_128);
            plVar6 = DAT_180409c80;
            if (DAT_180409c80 != (longlong *)0x0) {
              local_f8[0] = (undefined *)((ulonglong)local_f8[0] & 0xffffffff00000000);
              iVar4 = FUN_1801318c0(DAT_180409c80);
              if ((-1 < iVar4) &&
                 (cVar3 = (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6,local_f8),
                 plVar6 = DAT_180409c80, cVar3 != '\0')) {
                iVar4 = FUN_1801318c0(DAT_180409c80);
                if (iVar4 < 0) {
                  cVar3 = '\0';
                }
                else {
                  cVar3 = (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6);
                }
                pcVar11 = "REFUSED";
                if (cVar3 != '\0') {
                  pcVar11 = "sent";
                }
                FUN_180014410("[AS] this account was already playing in another session (kind=%u) - kick %s\n"
                              ,(ulonglong)local_f8[0] & 0xffffffff,pcVar11);
              }
            }
            local_128 = (undefined8 *******)0x0;
            uStack_120 = 0;
            local_118 = 0;
            local_110 = 0;
            FUN_18001d080(&local_128,"signed in - waiting for licences to arrive...",0x2d);
            local_f8[0] = &DAT_1803e85c0;
            iVar4 = _Mtx_lock(&DAT_1803e85c0);
            if (iVar4 == 0) {
              if (DAT_1803e860c == 0x7fffffff) {
                DAT_1803e860c = 0x7ffffffe;
                std::_Throw_Cpp_error(6);
              }
              pppppppuVar10 = &local_128;
              if (0xf < local_110) {
                pppppppuVar10 = local_128;
              }
              FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
              _Mtx_unlock(&DAT_1803e85c0);
              FUN_18020e450(&local_128);
              FUN_180138cf0();
              FUN_180014410("[AS] ---- diagnostics (app %u) - build %s %s ----\n",4000,"Sep  7 2026"
                            ,"21:33:34");
              FUN_180136d80(&DAT_18035b304,DAT_180409c80);
              if ((DAT_180409c29 == '\0') ||
                 (puVar9 = DAT_180409c38, DAT_180409c38 == (undefined *)0x0)) {
                uVar5 = FUN_1801321e0();
                plVar6 = (longlong *)FUN_1801323e0(uVar5);
                puVar9 = (undefined *)0x0;
                if (plVar6 != (longlong *)0x0) {
                  puVar9 = (undefined *)*plVar6;
                }
              }
              FUN_180136d80(&DAT_1803476ec,puVar9);
              FUN_180014410(
                           "[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.\n"
                           );
              local_138 = puVar12;
              FUN_180012b20(local_e8,0xc0,0xffffffffffffffff,
                            "logged in - SteamID64 %llu (press Deploy)");
              local_128 = (undefined8 *******)0x0;
              uStack_120 = 0;
              local_118 = 0;
              local_110 = 0;
              sVar7 = strlen(local_e8);
              FUN_18001d080(&local_128,local_e8,sVar7);
              local_f8[0] = &DAT_1803e85c0;
              iVar4 = _Mtx_lock(&DAT_1803e85c0);
              if (iVar4 == 0) {
                if (DAT_1803e860c == 0x7fffffff) {
                  DAT_1803e860c = 0x7ffffffe;
                  std::_Throw_Cpp_error(6);
                }
                pppppppuVar10 = &local_128;
                if (0xf < local_110) {
                  pppppppuVar10 = local_128;
                }
                FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
                _Mtx_unlock(&DAT_1803e85c0);
                uVar8 = FUN_18020e450(&local_128);
                return uVar8;
              }
              std::_Throw_Cpp_error(5);
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return uVar8;
            }
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return uVar8;
          }
          if (*(longlong **)(lVar2 + 0x28) == DAT_180409c80) {
            *(undefined **)(lVar2 + 0x30) = puVar12;
            goto LAB_18013c417;
          }
          lVar2 = lVar2 + 0x38;
        } while( true );
      }
    }
    FUN_180014410("[AS] refusing a logon with no account id (SteamID %llu)\n",puVar12);
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,
                  "Steam connected but never signed the account in - use the password, not the cached login"
                  ,0x58);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar10 = &local_128;
    if (0xf < local_110) {
      pppppppuVar10 = local_128;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
    _Mtx_unlock(&DAT_1803e85c0);
    break;
  default:
    local_138 = (undefined *)FUN_180132470(param_1);
    local_130 = param_1;
    FUN_180012b20(local_e8,0xc0,0xffffffffffffffff,"login failed: %s (EResult %d)");
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    sVar7 = strlen(local_e8);
    FUN_18001d080(&local_128,local_e8,sVar7);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar10 = &local_128;
    if (0xf < local_110) {
      pppppppuVar10 = local_128;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
    _Mtx_unlock(&DAT_1803e85c0);
    break;
  case 0x3f:
  case 0x41:
  case 0x42:
    pcVar11 = "Steam Guard e-mail code required";
    if (param_1 == 0x41) {
      pcVar11 = "wrong Steam Guard code, try again";
    }
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    sVar7 = strlen(pcVar11);
    FUN_18001d080(&local_128,pcVar11,sVar7);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar10 = &local_128;
      if (0xf < local_110) {
        pppppppuVar10 = local_128;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_128);
      LOCK();
      uVar8 = (ulonglong)DAT_180409c24;
      UNLOCK();
      DAT_180409c24 = 3;
      return uVar8;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  case 0x55:
  case 0x58:
    pcVar11 = "mobile authenticator code required";
    if (param_1 == 0x58) {
      pcVar11 = "wrong authenticator code, try again";
    }
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    sVar7 = strlen(pcVar11);
    FUN_18001d080(&local_128,pcVar11,sVar7);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar10 = &local_128;
      if (0xf < local_110) {
        pppppppuVar10 = local_128;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_128);
      LOCK();
      uVar8 = (ulonglong)DAT_180409c24;
      UNLOCK();
      DAT_180409c24 = 2;
      return uVar8;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  FUN_18020e450(&local_128);
  LOCK();
  DAT_180409c24 = 5;
  UNLOCK();
  uVar8 = FUN_18013a1e0();
  return uVar8;
}


