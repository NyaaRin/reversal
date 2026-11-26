// 0x18013d830  FUN_18013d830
// size=1888 thunk=false
// signature: undefined FUN_18013d830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013df60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013d830(char ******param_1,undefined1 param_2,longlong param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uintptr_t uVar9;
  char ******ppppppcVar10;
  char ******ppppppcVar11;
  undefined8 ******ppppppuVar12;
  longlong *plVar13;
  undefined1 auStackY_1a8 [32];
  undefined8 *****local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulonglong local_148;
  uintptr_t local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  char ****local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_90 [32];
  char *****local_70;
  longlong local_68;
  undefined8 *local_60;
  char *****local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_1a8;
  local_70 = (char *****)param_1;
  local_68 = param_3;
  if (*(longlong *)(param_3 + 0x10) == 0) {
LAB_18013dc26:
    if (param_1[2] == (char *****)0x0) goto LAB_18013d93a;
    cVar3 = FUN_180138670(param_1);
    if (cVar3 != '\0') {
      local_160 = (undefined8 ******)0x0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_18001d080(&local_160,
                    "Steam is already signed in as this account - a second session would sign the first one out (that is the \"please start Steam\" error)"
                    ,0x83);
      local_60 = (undefined8 *)&DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar12 = &local_160;
      if (0xf < local_148) {
        ppppppuVar12 = (undefined8 ******)local_160;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013d92f;
    }
    cVar3 = FUN_18013cf00();
    if (cVar3 == '\0') goto LAB_18013d93a;
    local_a8 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (param_1 != (char ******)&DAT_1803eb340) {
      ppppppcVar10 = param_1;
      if ((char *****)0xf < param_1[3]) {
        ppppppcVar10 = (char ******)*param_1;
      }
      FUN_180212700(&DAT_1803eb340,ppppppcVar10,param_1[2]);
    }
    if (0x7fffffffffffffffU - (longlong)param_1[2] < 0xd) {
LAB_18013df8b:
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    FUN_18020e930(local_90);
    puVar8 = (undefined4 *)FUN_18021aef0(local_90,&DAT_18034f96c,3);
    local_c8 = *puVar8;
    uStack_c4 = puVar8[1];
    uStack_c0 = puVar8[2];
    uStack_bc = puVar8[3];
    local_b8 = *(undefined8 *)(puVar8 + 4);
    uStack_b0 = *(undefined8 *)(puVar8 + 6);
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    FUN_18020e8a0(&DAT_1803e9e20,&local_c8);
    FUN_18020e450(&local_c8);
    FUN_18020e450(local_90);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18016d4c0(&local_118,param_1);
    local_f8 = param_2;
    FUN_18016d4c0(&local_f0);
    local_128 = (undefined8 *)0x0;
    local_128 = (undefined8 *)FUN_1802d8350(0x48);
    *local_128 = 0;
    local_128[1] = 0;
    *local_128 = CONCAT71(local_118._1_7_,local_118._0_1_);
    local_128[1] = local_110;
    local_128[2] = local_108;
    local_128[3] = local_100;
    local_108 = 0;
    local_100 = 0xf;
    local_118._0_1_ = 0;
    *(undefined1 *)(local_128 + 4) = local_f8;
    local_128[5] = CONCAT71(uStack_ef,local_f0);
    local_128[6] = local_e8;
    local_128[7] = local_e0;
    local_128[8] = local_d8;
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = 0;
    local_a0 = local_128;
    local_98 = local_128;
    local_60 = local_128;
    uVar9 = _beginthreadex((void *)0x0,0,FUN_180221040,local_128,0,(uint *)&uStack_130);
    uVar2 = uStack_130._4_4_;
    local_138 = uVar9;
    if (uVar9 == 0) {
      uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
      std::_Throw_Cpp_error(6);
      goto LAB_18013df8b;
    }
    local_128 = (undefined8 *)0x0;
    if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    DAT_18056de98 = (uint)uStack_130;
    local_138 = 0;
    uStack_130 = 0;
    _DAT_18056de9c = uVar2;
    _DAT_18056de90 = uVar9;
    FUN_18020e450(&local_f0);
    ppppppcVar10 = (char ******)&local_118;
  }
  else {
    puVar5 = (undefined8 *)FUN_180133200(param_3);
    if ((int)puVar5 == 0) {
      local_160 = (undefined8 ******)0x0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_18001d080(&local_160,
                    "that does not look like a Steam login token - it should be three dot-separated parts starting with \"eyA\""
                    ,0x68);
      local_60 = (undefined8 *)&DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar12 = &local_160;
      if (0xf < local_148) {
        ppppppuVar12 = (undefined8 ******)local_160;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
      _Mtx_unlock(&DAT_1803e85c0);
LAB_18013d92f:
      ppppppcVar10 = (char ******)&local_160;
    }
    else {
      if ((DAT_180409c29 == '\0') || (plVar13 = DAT_180409c38, DAT_180409c38 == (longlong *)0x0)) {
        uVar6 = FUN_1801321e0();
        puVar7 = (undefined8 *)FUN_1801323e0(uVar6);
        plVar13 = (longlong *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          plVar13 = (longlong *)*puVar7;
        }
      }
      iVar4 = FUN_1801318c0(plVar13);
      if (-1 < iVar4) {
        local_60 = (undefined8 *)0x0;
        (**(code **)(*plVar13 + (longlong)iVar4 * 8))(plVar13,&local_60);
        if (((int)local_60 != 0) && (puVar5 == local_60)) {
          local_160 = (undefined8 ******)0x0;
          uStack_158 = 0;
          local_150 = 0;
          local_148 = 0;
          FUN_18001d080(&local_160,
                        "that token belongs to the account Steam itself is signed in as - using it would sign the client out and the game would ask you to start Steam"
                        ,0x8d);
          local_60 = (undefined8 *)&DAT_1803e85c0;
          iVar4 = _Mtx_lock(&DAT_1803e85c0);
          if (iVar4 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (DAT_1803e860c == 0x7fffffff) {
            DAT_1803e860c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          ppppppuVar12 = &local_160;
          if (0xf < local_148) {
            ppppppuVar12 = (undefined8 ******)local_160;
          }
          FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
          _Mtx_unlock(&DAT_1803e85c0);
          FUN_18020e450(&local_160);
          FUN_180014410("[AS] refused a token for %llu: that is the account the game is running as\n"
                        ,puVar5);
          goto LAB_18013d93a;
        }
      }
      FUN_18013d750(local_58,puVar5);
      if (local_48 == 0) {
LAB_18013db2c:
        if (param_1[2] == (char *****)0x0) goto joined_r0x00018013db3e;
LAB_18013dc11:
        FUN_1801368a0(param_1,puVar5);
        FUN_18020e450(local_58);
        goto LAB_18013dc26;
      }
      ppppppcVar10 = param_1;
      if ((char *****)0xf < param_1[3]) {
        ppppppcVar10 = (char ******)*param_1;
      }
      ppppppcVar11 = local_58;
      if (0xf < local_40) {
        ppppppcVar11 = (char ******)local_58[0];
      }
      iVar4 = _stricmp((char *)ppppppcVar11,(char *)ppppppcVar10);
      if (iVar4 == 0) goto LAB_18013db2c;
      if (param_1[2] == (char *****)0x0) {
        ppppppcVar10 = (char ******)&DAT_18033e5ea;
      }
      else {
        ppppppcVar10 = param_1;
        if ((char *****)0xf < param_1[3]) {
          ppppppcVar10 = (char ******)*param_1;
        }
      }
      ppppppcVar11 = local_58;
      if (0xf < local_40) {
        ppppppcVar11 = (char ******)local_58[0];
      }
      FUN_180014410("[AS] token names SteamID %llu, which Steam files as \'%s\' - using that instead of the typed \'%s\'\n"
                    ,puVar5,ppppppcVar11,ppppppcVar10);
joined_r0x00018013db3e:
      if (param_1 != local_58) {
        ppppppcVar10 = local_58;
        if (0xf < local_40) {
          ppppppcVar10 = (char ******)local_58[0];
        }
        FUN_180212700(param_1,ppppppcVar10,local_48);
      }
      if (param_1[2] != (char *****)0x0) goto LAB_18013dc11;
      local_160 = (undefined8 ******)0x0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_18001d080(&local_160,
                    "this token is for an account Steam has never signed in here - type its login name in the username box"
                    ,0x65);
      local_60 = (undefined8 *)&DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar12 = &local_160;
      if (0xf < local_148) {
        ppppppuVar12 = (undefined8 ******)local_160;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_160);
      ppppppcVar10 = local_58;
    }
  }
  FUN_18020e450(ppppppcVar10);
LAB_18013d93a:
  FUN_18020e450(param_1);
  FUN_18020e450(param_3);
  return;
}


