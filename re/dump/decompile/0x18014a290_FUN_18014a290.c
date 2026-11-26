// 0x18014a290  FUN_18014a290
// size=1018 thunk=false
// signature: undefined FUN_18014a290()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014a290(void)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  size_t sVar8;
  undefined8 ***pppuVar9;
  undefined ****ppppuVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined ***local_78;
  undefined8 **ppuStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined **local_58;
  undefined *puStack_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = (undefined8 ***)0x0;
  local_a0 = &DAT_1803e8400;
  iVar6 = _Mtx_lock(&DAT_1803e8400);
  if (iVar6 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180409a70 == 0) {
    _Mtx_unlock(&DAT_1803e8400);
  }
  else {
    UVar7 = GetTickCount64();
    iVar6 = DAT_180409a70;
    uVar11 = UVar7 - _DAT_180409af0;
    pppuVar9 = DAT_1803e9f08;
    uVar2 = _DAT_1803e9f10;
    lVar3 = _DAT_1803e9f18;
    uVar4 = DAT_1803e9f20;
    DAT_1803e9f08 = (undefined8 ***)local_98;
    _DAT_1803e9f10 = uStack_90;
    _DAT_1803e9f18 = local_88;
    DAT_1803e9f20 = uStack_80;
    DAT_180409a70 = 0;
    local_98 = pppuVar9;
    uStack_90 = uVar2;
    local_88 = lVar3;
    uStack_80 = uVar4;
    _Mtx_unlock(&DAT_1803e8400);
    if (uVar11 < 0x7d1) {
      if (local_88 != 0) {
        if (iVar6 == 2) {
          pppuVar9 = &local_98;
          if (0xf < uStack_80) {
            pppuVar9 = (undefined8 ***)local_98;
          }
          local_78 = (undefined ***)vftable_Features_Toolbox_RawDisconnectMessage;
          ppuStack_70 = (undefined8 **)&DAT_18033e5ea;
          if (pppuVar9 != (undefined8 ***)0x0) {
            ppuStack_70 = pppuVar9;
          }
          local_68 = 0;
          uStack_60 = 1;
          cVar5 = FUN_180146780(&local_78);
          pcVar12 = "net_Disconnect failed";
          if (cVar5 != '\0') {
            pcVar12 = "Disconnect sent";
          }
          local_c8 = (undefined8 ***)0x0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          sVar8 = strlen(pcVar12);
          FUN_18001d080(&local_c8,pcVar12,sVar8);
          local_a8 = &DAT_1803e8400;
          iVar6 = _Mtx_lock(&DAT_1803e8400);
          if (iVar6 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (DAT_1803e844c == 0x7fffffff) {
            DAT_1803e844c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          pppuVar9 = &local_c8;
          if (0xf < local_b0) {
            pppuVar9 = (undefined8 ***)local_c8;
          }
          FUN_180212700(s_Ready_1803e9eb8,pppuVar9,local_b8);
          _Mtx_unlock(&DAT_1803e8400);
          FUN_18020e450(&local_c8);
          local_78 = (undefined ***)vftable_INetMessage;
        }
        else {
          pppuVar9 = &local_98;
          if (0xf < uStack_80) {
            pppuVar9 = (undefined8 ***)local_98;
          }
          local_58 = vftable_Features_Toolbox_RawSetConVarMessage;
          puStack_50 = &DAT_180341148;
          local_48 = (undefined8 **)&DAT_18033e5ea;
          if (pppuVar9 != (undefined8 ***)0x0) {
            local_48 = pppuVar9;
          }
          uStack_40 = 0;
          local_38 = 1;
          cVar5 = FUN_180146780(&local_58);
          pcVar12 = "NET_SetConVar failed";
          if (cVar5 != '\0') {
            pcVar12 = "Name sent via NET_SetConVar";
          }
          local_78 = (undefined ***)0x0;
          ppuStack_70 = (undefined8 ***)0x0;
          local_68 = 0;
          uStack_60 = 0;
          sVar8 = strlen(pcVar12);
          FUN_18001d080(&local_78,pcVar12,sVar8);
          local_a8 = &DAT_1803e8400;
          iVar6 = _Mtx_lock(&DAT_1803e8400);
          if (iVar6 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (DAT_1803e844c == 0x7fffffff) {
            DAT_1803e844c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          ppppuVar10 = &local_78;
          if (0xf < uStack_60) {
            ppppuVar10 = (undefined ****)local_78;
          }
          FUN_180212700(s_Ready_1803e9eb8,ppppuVar10,local_68);
          _Mtx_unlock(&DAT_1803e8400);
          FUN_18020e450(&local_78);
          local_58 = vftable_INetMessage;
        }
      }
    }
    else {
      local_c8 = (undefined8 ***)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"Dropped: queued in another session",0x22);
      local_a8 = &DAT_1803e8400;
      iVar6 = _Mtx_lock(&DAT_1803e8400);
      if (iVar6 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e844c == 0x7fffffff) {
        DAT_1803e844c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppuVar9 = &local_c8;
      if (0xf < local_b0) {
        pppuVar9 = (undefined8 ***)local_c8;
      }
      FUN_180212700(s_Ready_1803e9eb8,pppuVar9,local_b8);
      _Mtx_unlock(&DAT_1803e8400);
      FUN_18020e450(&local_c8);
    }
  }
  FUN_18020e450(&local_98);
  return;
}


