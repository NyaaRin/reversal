// 0x18013ca40  FUN_18013ca40
// size=1203 thunk=false
// signature: undefined FUN_18013ca40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013ca40(char param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ******ppppppuVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_a8;
  undefined8 *****local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined *local_80;
  undefined8 *****local_78 [2];
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  iVar10 = 0;
  local_a8 = 0;
  while( true ) {
    iVar9 = 0;
    uVar5 = 0x803e85c0;
    if (iVar10 != 0) break;
LAB_18013cb96:
    plVar2 = DAT_180409c80;
    iVar9 = FUN_1801318c0(DAT_180409c80);
    if (iVar9 < 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2,param_3);
    }
    plVar2 = DAT_180409c80;
    iVar9 = FUN_1801318c0(DAT_180409c80);
    if (iVar9 < 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2);
    }
    plVar2 = DAT_180409c80;
    iVar9 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar9) {
      (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2);
    }
    uVar7 = FUN_180132470(uVar5);
    local_b8 = (uint)(cVar3 != '\0');
    FUN_180014410("[AS] LogOn returned %d (%s); logonState=%d tryingToLogin=%d\n",uVar5,uVar7);
    if (uVar5 < 2) {
      uVar5 = FUN_18013bba0(param_2);
    }
    if (uVar5 != 3) goto LAB_18013ccaa;
    if (((DAT_180409ca0 != '\0') || (DAT_180409c58 != '\0')) || (iVar10 = iVar10 + 1, 2 < iVar10))
    goto LAB_18013cd6b;
  }
  FUN_180014410("[AS] retrying the logon after EResult 3 (attempt %d)\n",iVar10 + 1);
  local_a0 = (undefined8 ******)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_18001d080(&local_a0,"Steam was still letting go of the last session - retrying...",0x3c);
  local_80 = &DAT_1803e85c0;
  iVar4 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar4 == 0) {
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ppppppuVar8 = &local_a0;
    if (0xf < local_88) {
      ppppppuVar8 = (undefined8 ******)local_a0;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar8,local_90);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_a0);
    do {
      if ((DAT_180409ca0 != '\0') || (DAT_180409c58 != '\0')) break;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      while (DAT_1803e85b4 != -1) {
        lVar6 = FUN_180131270();
        cVar3 = (**(code **)(lVar6 + 0x18))(DAT_1803e85b4,&local_58);
        if (cVar3 == '\0') break;
        lVar6 = FUN_180131270();
        (**(code **)(lVar6 + 0x20))(DAT_1803e85b4);
      }
      Sleep(0x32);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x1e);
    goto LAB_18013cb96;
  }
  std::_Throw_Cpp_error(5);
LAB_18013ccaa:
  if (uVar5 == 0xfffffffe) {
    local_a0 = (undefined8 ******)0x0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_18001d080(&local_a0,"cancelled",9);
    local_80 = &DAT_1803e85c0;
    iVar10 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar10 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar8 = &local_a0;
      if (0xf < local_88) {
        ppppppuVar8 = (undefined8 ******)local_a0;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar8,local_90);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_a0);
      LOCK();
      DAT_180409c24 = 0;
      UNLOCK();
      FUN_18013a1e0();
      return;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_18013cd6b:
  uVar7 = FUN_180132470(uVar5);
  FUN_180014410("[AS] logon decided by EResult %d (%s)\n",uVar5,uVar7);
  FUN_18013c230(uVar5);
  if ((param_1 != '\0') && (DAT_180409c24 == 4)) {
    FUN_180137a90();
  }
  uVar7 = DAT_180409c30;
  if (DAT_180409c24 == 4) {
    local_80 = &DAT_1803e85c0;
    iVar10 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar10 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    FUN_18016d4c0(local_78,&DAT_1803eb340);
    local_a8 = 1;
    _Mtx_unlock(&DAT_1803e85c0);
    if (local_68 != 0) {
      lVar6 = FUN_180135100(&local_a0,local_78);
      lVar6 = *(longlong *)(lVar6 + 0x10);
      FUN_18020e450(&local_a0);
      iVar10 = 8;
      if (lVar6 != 0) {
        iVar10 = 1;
      }
      iVar9 = 0;
      while (DAT_180409ca0 == '\0') {
        cVar3 = FUN_1801355a0(local_78,uVar7);
        if (cVar3 != '\0') {
          ppppppuVar8 = local_78;
          if (0xf < local_60) {
            ppppppuVar8 = (undefined8 ******)local_78[0];
          }
          FUN_180014410("[AS] token vault: stored a refresh token for \'%s\' (try %d) - this account can now be switched to with no password\n"
                        ,ppppppuVar8,iVar9 + 1);
          goto LAB_18013cebd;
        }
        iVar9 = iVar9 + 1;
        if (iVar10 <= iVar9) break;
        Sleep(500);
      }
      if (lVar6 == 0) {
        ppppppuVar8 = local_78;
        if (0xf < local_60) {
          ppppppuVar8 = (undefined8 ******)local_78[0];
        }
        FUN_180014410("[AS] token vault: Steam wrote no token for \'%s\' - switching to it will need the password again (was \"Remember\" on?)\n"
                      ,ppppppuVar8);
      }
    }
LAB_18013cebd:
    local_a8 = 0;
    FUN_18020e450(local_78);
  }
  return;
}


