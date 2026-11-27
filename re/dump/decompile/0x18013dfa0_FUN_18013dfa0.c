// 0x18013dfa0  FUN_18013dfa0
// size=2251 thunk=false
// signature: undefined FUN_18013dfa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013dfa0(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  char *_Str1;
  char *_Str2;
  char *pcVar12;
  undefined8 ******ppppppuVar13;
  uint uVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined *puVar17;
  bool bVar18;
  undefined1 auStack_148 [32];
  undefined *local_128;
  char *local_120;
  longlong local_118;
  uint local_108;
  undefined8 *****local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined *local_78;
  undefined8 *****local_70 [2];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  puVar10 = (undefined *)0x0;
  local_108 = 0;
  local_c0 = &DAT_1803e86b0;
  iVar5 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar16 = DAT_1803eb7b8;
  pcVar12 = DAT_1803eb7c0;
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    pcVar16 = DAT_1803eb7b8;
    pcVar12 = DAT_1803eb7c0;
  }
  for (; pcVar2 = DAT_1803eb7c0, pcVar16 != DAT_1803eb7c0; pcVar16 = pcVar16 + 0x48) {
    _Str2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      _Str2 = *(char **)param_1;
    }
    _Str1 = pcVar16;
    if (0xf < *(ulonglong *)(pcVar16 + 0x18)) {
      _Str1 = *(char **)pcVar16;
    }
    DAT_1803eb7c0 = pcVar12;
    iVar5 = _stricmp(_Str1,_Str2);
    if (iVar5 == 0) {
      puVar15 = *(undefined **)(pcVar16 + 0x20);
      _Mtx_unlock(&DAT_1803e86b0);
      goto LAB_18013e06d;
    }
    pcVar12 = DAT_1803eb7c0;
    DAT_1803eb7c0 = pcVar2;
  }
  DAT_1803eb7c0 = pcVar12;
  _Mtx_unlock(&DAT_1803e86b0);
  puVar15 = puVar10;
LAB_18013e06d:
  lVar8 = FUN_180135100(&local_100,param_1);
  lVar8 = *(longlong *)(lVar8 + 0x10);
  FUN_18020e450(&local_100);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar9 = FUN_180135620(local_98,param_1,puVar15);
    uVar14 = 1;
  }
  else {
    uVar9 = FUN_18016d4c0(&local_100,param_1 + 0x28);
    uVar14 = 2;
  }
  local_108 = uVar14;
  FUN_18016d4c0(local_70,uVar9);
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    local_108 = uVar14;
    FUN_18020e450(&local_100);
  }
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 & 0xfffffffe;
    local_108 = uVar14;
    FUN_18020e450(local_98);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (local_60 == 0) {
      pcVar16 = "NOT FOUND (neither our vault nor Steam\'s ConnectCache)";
    }
    else {
      pcVar16 = "from Steam\'s ConnectCache";
      if (lVar8 != 0) {
        pcVar16 = "from our vault";
      }
    }
  }
  else {
    pcVar16 = "typed in by hand";
  }
  pcVar12 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar12 = *(char **)param_1;
  }
  FUN_180014410("[AS] token switch for \'%s\': savedID=%llu token=%s\n",pcVar12,puVar15,pcVar16);
  puVar17 = (undefined *)0x110000100000000;
  if (puVar15 != (undefined *)0x0) {
    puVar17 = puVar15;
  }
  iVar5 = FUN_18013aba0(param_1);
  plVar3 = DAT_180409c80;
  if (iVar5 == 0) {
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
    goto LAB_18013e834;
  }
  if (iVar5 == 2) {
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      local_78 = (undefined *)0x0;
      (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,&local_78);
      puVar10 = local_78;
    }
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180409c24 = 4;
    UNLOCK();
    local_118 = *(longlong *)(param_1 + 0x10);
    DAT_180409c30 = puVar10;
    if (0x7fffffffffffffffU - local_118 < 0x11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_120 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      local_120 = *(char **)param_1;
    }
    local_128 = (undefined *)0x11;
    FUN_18020e930(local_b8);
    local_108 = uVar14 | 0x10;
    puVar11 = (undefined4 *)FUN_18021aef0(local_b8," (already signed in)",0x14);
    local_e0 = *puVar11;
    uStack_dc = puVar11[1];
    uStack_d8 = puVar11[2];
    uStack_d4 = puVar11[3];
    local_d0 = *(undefined8 *)(puVar11 + 4);
    uStack_c8 = *(ulonglong *)(puVar11 + 6);
    *(undefined1 *)puVar11 = 0;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0xf;
    local_108 = uVar14 | 0x18;
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar11 = &local_e0;
    if (0xf < uStack_c8) {
      puVar11 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    FUN_180212700(&DAT_1803e9e20,puVar11,local_d0);
    _Mtx_unlock(&DAT_1803e85c0);
    local_108 = uVar14 | 0x10;
    FUN_18020e450(&local_e0);
    local_108 = uVar14;
    FUN_18020e450(local_b8);
    if (param_1[0x20] != '\0') {
      FUN_180137a90();
    }
    goto LAB_18013e834;
  }
  if (local_60 == 0) {
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,
                  "no saved token for this account - sign in with the password once (Remember on)",
                  0x4e);
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_100);
    iVar5 = DAT_180409c24;
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
    FUN_18013a1e0(iVar5);
    goto LAB_18013e834;
  }
  iVar5 = FUN_1801318c0(DAT_180409c80);
  if (-1 < iVar5) {
    (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3);
  }
  plVar3 = DAT_180409c80;
  pcVar16 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar16 = *(char **)param_1;
  }
  ppppppuVar13 = local_70;
  if (0xf < local_58) {
    ppppppuVar13 = (undefined8 ******)local_70[0];
  }
  iVar5 = FUN_1801318c0(DAT_180409c80);
  bVar18 = -1 < iVar5;
  if (bVar18) {
    (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,ppppppuVar13,pcVar16);
  }
  uVar6 = FUN_1801318c0(DAT_180409c80);
  pcVar16 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar16 = *(char **)param_1;
  }
  local_128 = puVar17;
  FUN_180014410("[AS] token login for \'%s\' (SetLoginToken slot=%d sent=%d, id=%llu)\n",pcVar16,
                uVar6,bVar18);
  if (!bVar18) {
    FUN_180014410("[AS] SetLoginToken missing from IClientUser - cannot do token login\n");
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,"this Steam build has no SetLoginToken - use the password",0x38);
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_100);
    iVar5 = DAT_180409c24;
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
    FUN_18013a1e0(iVar5);
    goto LAB_18013e834;
  }
  FUN_18013ca40(param_1[0x20],45000,puVar17);
  if (((*(longlong *)(param_1 + 0x38) != 0) && (DAT_180409c24 == 4)) &&
     (cVar4 = FUN_180134a00(param_1,DAT_180409c30,param_1 + 0x28), cVar4 != '\0')) {
    pcVar16 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar16 = *(char **)param_1;
    }
    FUN_180014410("[AS] the token typed in for \'%s\' worked and is now in the vault\n",pcVar16);
  }
  iVar5 = DAT_180409c74;
  if (DAT_180409c24 != 5) goto LAB_18013e834;
  if (DAT_180409c74 == 0x19) {
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,"Steam is rate limiting logins for this account - wait a few minutes",
                  0x43);
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_18013e7fe:
    FUN_18020e450(&local_100);
  }
  else if ((DAT_180409c74 == 5) || (DAT_180409c74 == 0x12)) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      local_100 = (undefined8 ******)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      FUN_18001d080(&local_100,
                    "Steam rejected that token - check it belongs to this username, and that it has not expired"
                    ,0x5a);
      local_78 = &DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar13 = &local_100;
      if (0xf < local_e8) {
        ppppppuVar13 = (undefined8 ******)local_100;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013e7fe;
    }
    FUN_180134f10(param_1);
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,
                  "the saved token for this account expired - sign in with the password once",0x49);
    local_78 = &DAT_1803e85c0;
    iVar7 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_100);
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    FUN_180014410("[AS] token for \'%s\' rejected (EResult %d) - dropped from the vault\n",param_1,
                  iVar5);
  }
  plVar3 = DAT_180409c80;
  if ((DAT_180409c80 != (longlong *)0x0) && (iVar5 = FUN_1801318c0(DAT_180409c80), -1 < iVar5)) {
    (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3);
  }
LAB_18013e834:
  LOCK();
  DAT_180409c59 = 0;
  UNLOCK();
  FUN_18020e450(local_70);
  return;
}


