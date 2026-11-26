// 0x180139010  FUN_180139010
// size=959 thunk=false
// signature: undefined FUN_180139010()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180139010(void)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_180409c80 == (longlong *)0x0) {
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"no session to repair - sign an account in first",0x2f);
    local_38 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar7 = &local_58;
    if (0xf < local_40) {
      ppppuVar7 = (undefined8 ****)local_58;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_58);
    uVar5 = 0;
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    while (DAT_1803e85b4 != -1) {
      lVar6 = FUN_180131270();
      cVar3 = (**(code **)(lVar6 + 0x18))(DAT_1803e85b4,&local_30);
      if (cVar3 == '\0') break;
      lVar6 = FUN_180131270();
      (**(code **)(lVar6 + 0x20))(DAT_1803e85b4);
    }
    iVar4 = FUN_1801318c0(DAT_180409c80);
    plVar2 = DAT_180409c80;
    if ((iVar4 < 0) ||
       ((iVar4 = FUN_1801318c0(DAT_180409c80), -1 < iVar4 &&
        (cVar3 = (**(code **)(*plVar2 + (longlong)iVar4 * 8))(plVar2), cVar3 != '\0')))) {
      cVar3 = FUN_180137a30("repair");
      local_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      if (cVar3 == '\0') {
        FUN_18001d080(&local_58,
                      "the engine\'s ticket cache could not be found - restart the game to clear it"
                      ,0x4b);
        local_38 = &DAT_1803e85c0;
        iVar4 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        ppppuVar7 = &local_58;
        if (0xf < local_40) {
          ppppuVar7 = (undefined8 ****)local_58;
        }
        FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
        _Mtx_unlock(&DAT_1803e85c0);
        FUN_18020e450(&local_58);
        FUN_180014410("[AS] repair: CSteam3Client did not resolve, m_cubTicket left alone\n");
        uVar5 = 0;
      }
      else {
        FUN_18001d080(&local_58,
                      "repaired - reconnect to the server and the game will ask Steam for a fresh ticket"
                      ,0x51);
        local_38 = &DAT_1803e85c0;
        iVar4 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        ppppuVar7 = &local_58;
        if (0xf < local_40) {
          ppppuVar7 = (undefined8 ****)local_58;
        }
        FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
        _Mtx_unlock(&DAT_1803e85c0);
        FUN_18020e450(&local_58);
        FUN_180014410("[AS] repair: connect tokens are back and the engine ticket cache is cleared (account %llu, deployed=%d)\n"
                      ,DAT_180409c30,DAT_180409c29 != '\0');
        uVar5 = 1;
      }
    }
    else {
      local_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_18001d080(&local_58,
                    "Steam has not handed this account a connect token back yet - wait a few seconds and press Repair again"
                    ,0x66);
      local_38 = &DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar7 = &local_58;
      if (0xf < local_40) {
        ppppuVar7 = (undefined8 ****)local_58;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_58);
      FUN_180014410("[AS] repair: connect-token pool still empty for %llu - nothing to repair yet\n"
                    ,DAT_180409c30);
      uVar5 = 0;
    }
  }
  return uVar5;
}


