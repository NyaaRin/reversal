// 0x180137a90  FUN_180137a90
// size=2266 thunk=false
// signature: undefined FUN_180137a90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180137ffc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180137a90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_EAX;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 ******ppppppuVar10;
  longlong lVar11;
  size_t sVar12;
  undefined8 *******pppppppuVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined1 auStackY_1a8 [32];
  undefined8 *******local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined4 local_158;
  undefined8 *local_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_1a8;
  puVar16 = (undefined8 *)0x0;
  local_158 = 0;
  if ((DAT_180409c80 == (longlong *)0x0) || (DAT_180409c24 != 4)) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"log an account in first",0x17);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_180138342:
    FUN_18020e450(&local_178);
    return 0;
  }
  if ((DAT_180409c30 & 0xffffffff) == 0) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"this session has no SteamID yet - not deploying it",0x32);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar13 = &local_178;
      if (0xf < local_160) {
        pppppppuVar13 = local_178;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_178);
      FUN_180014410("[AS] deploy refused: SteamID is %llu\n",DAT_180409c30);
      return 0;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if (DAT_180409c29 != '\0') {
    return 1;
  }
  iVar3 = FUN_1801318c0(DAT_180409c80,param_2,"BGameConnectTokensAvailable");
  plVar15 = DAT_180409c80;
  if ((-1 < iVar3) &&
     ((iVar3 = FUN_1801318c0(DAT_180409c80), iVar3 < 0 ||
      (cVar2 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15), cVar2 == '\0')))) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,
                  "Steam has not handed this account a connect token yet - wait a few seconds and press Deploy again (deploying now would break joining until the game restarts)"
                  ,0x9d);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar13 = &local_178;
      if (0xf < local_160) {
        pppppppuVar13 = local_178;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_178);
      FUN_180014410("[AS] deploy refused for %llu: connect-token pool is empty\n",DAT_180409c30);
      return 0;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  lVar7 = FUN_1801321e0();
  if (lVar7 == 0) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"steam_api64 did not hand over ISteamUser",0x28);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
    goto LAB_180138342;
  }
  puVar8 = (undefined8 *)FUN_1801323e0(lVar7);
  if (puVar8 == (undefined8 *)0x0) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,
                  "ISteamUser adapter layout changed - re-run tools/analyze_steamclient.py",0x47);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
    goto LAB_180138342;
  }
  plVar15 = (longlong *)*puVar8;
  DAT_180409c38 = plVar15;
  DAT_180409c78 = puVar8;
  iVar3 = FUN_1801318c0(plVar15);
  puVar9 = puVar16;
  if (-1 < iVar3) {
    local_150 = (undefined8 *)0x0;
    (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15,&local_150);
    puVar9 = local_150;
  }
  LOCK();
  UNLOCK();
  DAT_180409c50 = puVar9;
  *puVar8 = DAT_180409c80;
  LOCK();
  DAT_180409c29 = '\x01';
  UNLOCK();
  FUN_180014410("[AS] deploy: adapter=%p slot=%p was=%p now=%p (game SteamID -> %llu)\n",lVar7,
                puVar8,DAT_180409c38);
  if (DAT_180409ca0 == '\0') {
    FUN_180138c70();
    local_150 = (undefined8 *)&DAT_1803e8610;
    iVar3 = _Mtx_lock(&DAT_1803e8610);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar15 = (longlong *)((DAT_1803e9e50 - DAT_1803e9e48 >> 3) * 0x6db6db6db6db6db7);
    _Mtx_unlock(&DAT_1803e8610);
    if ((DAT_1803e85b4 == -1) && (plVar15 == (longlong *)0x0)) goto LAB_180138019;
    DAT_180409c49 = 1;
    local_150 = (undefined8 *)0x0;
    local_150 = (undefined8 *)FUN_1802d8350(8);
    *local_150 = FUN_180138760;
    local_158 = 1;
    ppppppuVar10 = (undefined8 ******)
                   _beginthreadex((void *)0x0,0,FUN_180220c30,local_150,0,(uint *)&uStack_170);
    uVar14 = uStack_170._4_4_;
    local_178 = (undefined8 *******)ppppppuVar10;
    if (ppppppuVar10 != (undefined8 ******)0x0) {
      local_150 = (undefined8 *)0x0;
      local_158 = 0;
      if (DAT_1805c3920 != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      DAT_1805c3920 = (uint)uStack_170;
      local_178 = (undefined8 *******)0x0;
      uStack_170 = 0;
      _DAT_1805c3924 = uVar14;
      _DAT_1805c3918 = ppppppuVar10;
      FUN_180014410("[AS] service loop started - draining %zu pooled pipe(s), active pipe %d\n",
                    plVar15,DAT_1803e85b4);
      goto LAB_180138019;
    }
    uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
    std::_Throw_Cpp_error(6);
    iVar3 = extraout_EAX;
  }
  else {
LAB_180138019:
    FUN_180137a30("deploy");
    cVar2 = DAT_180409c70;
    LOCK();
    DAT_180409c70 = '\x01';
    UNLOCK();
    if (((cVar2 == '\0') && (lVar7 = FUN_1801321e0(), lVar7 != 0)) &&
       (lVar11 = FUN_180131880(lVar7), lVar11 != 0)) {
      lVar11 = FUN_180131880(lVar7);
      lVar7 = FUN_180131880(lVar7);
      puVar8 = puVar16;
      if (lVar7 != 0) {
        do {
          uVar14 = (uint)puVar8;
          cVar2 = FUN_1801311e0(*(undefined8 *)(lVar7 + (longlong)puVar8 * 8));
          if (cVar2 == '\0') break;
          uVar14 = uVar14 + 1;
          puVar8 = (undefined8 *)(ulonglong)uVar14;
        } while ((int)uVar14 < 0x200);
        if (0x11 < uVar14) {
          uVar4 = FUN_180242fc0(*(undefined8 *)(lVar11 + 0x68),FUN_180137380,&DAT_180409c68);
          uVar5 = FUN_180242fc0(*(undefined8 *)(lVar11 + 0x88),FUN_180137550,&DAT_180409c60);
          FUN_180243560(*(undefined8 *)(lVar11 + 0x68),1);
          FUN_180243560(*(undefined8 *)(lVar11 + 0x88),1);
          FUN_180014410("[AS] ticket trace installed (GetAuthSessionTicket=%d Cancel=%d) - every ticket the ENGINE asks for is now in the log\n"
                        ,uVar4,uVar5);
        }
      }
    }
    if (((DAT_180409c48 == '\0') && (lVar7 = FUN_180137640(), lVar7 != 0)) &&
       ((iVar3 = FUN_180242fc0(lVar7,FUN_180137590,&DAT_180409c40), iVar3 == 0 &&
        (iVar3 = FUN_180243560(lVar7,1), iVar3 == 0)))) {
      LOCK();
      DAT_180409c48 = '\x01';
      UNLOCK();
    }
    plVar15 = DAT_180409c80;
    iVar3 = FUN_1801318c0(DAT_180409c80);
    if (iVar3 < 0) goto LAB_180138188;
  }
  uVar14 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15,4000);
  puVar16 = (undefined8 *)(ulonglong)uVar14;
LAB_180138188:
  plVar15 = DAT_180409c80;
  iVar3 = FUN_1801318c0(DAT_180409c80);
  if (iVar3 < 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15);
  }
  FUN_180014410("[AS] post-deploy: ownershipTicket=%d connectTokens=%d (no ticket probe - a probe spends a connect token, and an empty pool dead-ends the launch)\n"
                ,puVar16,cVar2 != '\0');
  FUN_180012b20(local_148,0x100,0xffffffffffffffff,"deployed - the game now speaks as %llu");
  local_178 = (undefined8 *******)0x0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  sVar12 = strlen(local_148);
  FUN_18001d080(&local_178,local_148,sVar12);
  local_150 = (undefined8 *)&DAT_1803e85c0;
  iVar3 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar3 == 0) {
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_178);
    return 1;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}


