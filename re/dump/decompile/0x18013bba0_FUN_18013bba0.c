// 0x18013bba0  FUN_18013bba0
// size=1669 thunk=false
// signature: undefined FUN_18013bba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18013bba0(int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  size_t sVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined8 *******pppppppuVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  char local_f8;
  char local_f7 [3];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined8 ******local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 ******local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  uint *puStack_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  fVar3 = DAT_180381278;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  local_90 = 0;
  puStack_88 = (uint *)0x0;
  local_80 = 0;
  iVar9 = 0;
  iVar17 = 0;
  local_f0 = -1000000;
  local_ec = 0;
  iVar18 = -1;
  local_f4 = 0;
  bVar2 = false;
  cVar7 = '\0';
  local_f8 = '\0';
  local_e8 = param_1;
  iVar5 = iVar9;
  iVar19 = iVar9;
  if (0 < param_1) {
    do {
      iVar17 = iVar5;
      uVar14 = 0;
      if (DAT_180409ca0 != '\0') break;
      if (DAT_180409c58 != '\0') {
        FUN_180014410("[AS] wait cancelled by the user after %d ms\n",iVar19);
        return 0xfffffffe;
      }
      if (DAT_180409c28 != '\0') {
        FUN_18013b850();
        bVar2 = false;
        iVar18 = -1;
      }
      local_f7[0] = '\0';
      cVar6 = FUN_18013b810(&local_90,local_f7);
      plVar4 = DAT_180409c80;
      if (local_f7[0] != '\0') goto LAB_18013c1f0;
      if (cVar6 == '\0') {
        if (iVar19 < iVar9) {
          Sleep(0x14);
          iVar19 = iVar19 + 0x14;
        }
        else {
          iVar9 = FUN_1801318c0(DAT_180409c80);
          if (iVar9 < 0) {
LAB_18013bcc4:
            plVar4 = DAT_180409c80;
            uVar10 = (uint)uVar14;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if ((-1 < iVar9) &&
               (cVar6 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4), cVar6 != '\0'))
            goto LAB_18013bcee;
          }
          else {
            uVar10 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            uVar14 = (ulonglong)uVar10;
            if (uVar10 != 3) goto LAB_18013bcc4;
LAB_18013bcee:
            plVar4 = DAT_180409c80;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              uVar12 = 0;
            }
            else {
              local_78 = 0;
              (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4,&local_78);
              uVar12 = local_78;
              if ((int)local_78 != 0) goto LAB_18013c1a1;
            }
            if (cVar7 == '\0') {
              local_f8 = '\x01';
              FUN_180014410("[AS] connected but pre-authentication (SteamID still %llu) - still waiting\n"
                            ,uVar12);
            }
          }
          if (uVar10 == 2) {
            if (iVar18 < 0) {
              iVar18 = iVar19;
            }
            if ((!bVar2) && (5999 < iVar19 - iVar18)) {
              if (DAT_180409c24 == 1) {
                LOCK();
                UNLOCK();
                DAT_180409c24 = 2;
              }
              local_e0 = (undefined8 *******)0x0;
              uStack_d8 = 0;
              local_d0 = 0;
              local_c8 = 0;
              FUN_18001d080(&local_e0,
                            "Steam Guard: approve the login in the Steam app, or type the code here"
                            ,0x46);
              local_a0 = &DAT_1803e85c0;
              iVar9 = _Mtx_lock(&DAT_1803e85c0);
              if (iVar9 != 0) {
                std::_Throw_Cpp_error(5);
LAB_18013c1a1:
                FUN_180014410(
                             "[AS] logon state says we are on and SteamID is real (%llu) - accepting\n"
                             );
                return 1;
              }
              if (DAT_1803e860c == 0x7fffffff) {
                DAT_1803e860c = 0x7ffffffe;
                std::_Throw_Cpp_error(6);
                pcVar1 = (code *)swi(3);
                uVar14 = (*pcVar1)();
                return uVar14;
              }
              bVar2 = true;
              pppppppuVar16 = &local_e0;
              if (0xf < local_c8) {
                pppppppuVar16 = (undefined8 *******)local_e0;
              }
              FUN_180212700(&DAT_1803e9e20,pppppppuVar16,local_d0);
              _Mtx_unlock(&DAT_1803e85c0);
              FUN_18020e450(&local_e0);
              FUN_180014410("[AS] stuck in LoggingOn for %d ms -> raising the Steam Guard prompt\n",
                            iVar19 - iVar18);
            }
          }
          else {
            iVar18 = -1;
          }
          plVar4 = DAT_180409c80;
          local_f4 = iVar19 + 500;
          if (4999 < iVar19 - local_f0) {
            local_f0 = iVar19;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              cVar7 = '\0';
            }
            else {
              cVar7 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            }
            plVar4 = DAT_180409c80;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              cVar6 = '\0';
            }
            else {
              cVar6 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            }
            plVar4 = DAT_180409c80;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              cVar8 = '\0';
            }
            else {
              cVar8 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            }
            local_100 = (uint)(cVar7 != '\0');
            local_108 = (uint)(cVar6 != '\0');
            FUN_180014410("[AS] waiting %.1fs: logonState=%d loggedOn=%d tryingToLogin=%d connected=%d\n"
                          ,(double)((float)iVar19 / fVar3),uVar10,cVar8 != '\0');
            iVar17 = local_ec;
          }
          iVar9 = local_f4;
          Sleep(0x14);
          iVar19 = iVar19 + 0x14;
          cVar7 = local_f8;
        }
      }
      else {
        iVar17 = iVar17 + 1;
        local_ec = iVar17;
        if (local_90._4_4_ - 0x65U < 3) {
          local_100 = DAT_1803e85b4;
          local_108 = (uint)local_90;
          FUN_180014410("[AS] callback #%d id=%d bytes=%d user=%d (pipe %d)\n",iVar17,local_90._4_4_
                        ,local_80 & 0xffffffff);
        }
        plVar4 = DAT_180409c80;
        if (local_90._4_4_ == 0x65) {
          iVar9 = FUN_1801318c0(DAT_180409c80);
          if (-1 < iVar9) {
            local_70 = 0;
            (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4,&local_70);
            uVar14 = local_70;
            if ((int)local_70 != 0) {
              uVar10 = 1;
              lVar11 = FUN_180131270();
              (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);
              goto LAB_18013c1ca;
            }
          }
          FUN_180014410("[AS] callback 101 with SteamID still %llu - not accepting yet\n",uVar14);
          lVar11 = FUN_180131270();
          (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);
          iVar9 = local_f4;
          goto LAB_18013c135;
        }
        if (((local_90._4_4_ == 0x66) && (puStack_88 != (uint *)0x0)) && (3 < (int)local_80)) {
          uVar10 = *puStack_88;
          uVar12 = FUN_180132470(uVar10);
          pcVar15 = "[AS] connect failure: EResult %d (%s)\n";
LAB_18013c02c:
          FUN_180014410(pcVar15,uVar10,uVar12);
        }
        else {
          uVar10 = 0xffffffff;
          if (((local_90._4_4_ == 0x67) && (puStack_88 != (uint *)0x0)) && (3 < (int)local_80)) {
            uVar10 = *puStack_88;
            uVar12 = FUN_180132470(uVar10);
            pcVar15 = "[AS] disconnected: EResult %d (%s)\n";
            goto LAB_18013c02c;
          }
        }
        lVar11 = FUN_180131270();
        (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);
        cVar7 = local_f8;
        if ((int)uVar10 < 0) goto LAB_18013c135;
        if ((uVar10 == 0x55) || (uVar10 == 0x58)) {
LAB_18013c06e:
          DAT_180409c24 = 2;
          if (uVar10 - 0x41 < 2) goto LAB_18013c07b;
        }
        else {
          if (uVar10 != 0x3f) {
            if (uVar10 == 0x42) goto LAB_18013c06e;
            if (uVar10 != 0x41) {
LAB_18013c1ca:
              return (ulonglong)uVar10;
            }
          }
LAB_18013c07b:
          DAT_180409c24 = 3;
        }
        LOCK();
        UNLOCK();
        pcVar15 = (char *)FUN_180132470(uVar10);
        local_c0 = (undefined8 *******)0x0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        sVar13 = strlen(pcVar15);
        FUN_18001d080(&local_c0,pcVar15,sVar13);
        local_98 = &DAT_1803e85c0;
        iVar9 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar9 != 0) {
          std::_Throw_Cpp_error(5);
LAB_18013c1f0:
          FUN_180014410("[AS] BGetCallback faulted on pipe %d\n",DAT_1803e85b4);
          return 2;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
          pcVar1 = (code *)swi(3);
          uVar14 = (*pcVar1)();
          return uVar14;
        }
        pppppppuVar16 = &local_c0;
        if (0xf < local_a8) {
          pppppppuVar16 = (undefined8 *******)local_c0;
        }
        FUN_180212700(&DAT_1803e9e20,pppppppuVar16,local_b0);
        _Mtx_unlock(&DAT_1803e85c0);
        FUN_18020e450(&local_c0);
        FUN_180014410("[AS] second factor needed (EResult %d) - holding the session open\n",uVar10);
        bVar2 = true;
        iVar18 = -1;
        iVar9 = local_f4;
        cVar7 = local_f8;
      }
LAB_18013c135:
      iVar5 = iVar17;
    } while (iVar19 < local_e8);
  }
  FUN_180014410("[AS] pump gave up after %d ms, %d callback(s) seen\n",iVar19,iVar17);
  return 0x10;
}


