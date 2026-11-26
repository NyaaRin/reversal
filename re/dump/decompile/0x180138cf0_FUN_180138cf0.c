// 0x180138cf0  FUN_180138cf0
// size=787 thunk=false
// signature: undefined FUN_180138cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180138cf0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  plVar1 = DAT_180409c80;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (DAT_180409c80 != (longlong *)0x0) {
    iVar5 = FUN_1801318c0(DAT_180409c80,param_2,"BUpdateAppOwnershipTicket");
    if (-1 < iVar5) {
      (**(code **)(*plVar1 + (longlong)iVar5 * 8))(plVar1,4000,0);
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (iVar5 < 0) {
      FUN_180014410(
                   "[AS] BGameConnectTokensAvailable did not resolve - the connect-token gate is OFF for this session (a deploy into an empty pool can dead-end the launch)\n"
                   );
    }
    uVar9 = 0;
    iVar12 = 2000;
    do {
      plVar1 = DAT_180409c80;
      if (DAT_180409ca0 != '\0') {
        return 0;
      }
      if (DAT_180409c58 != '\0') {
        return 0;
      }
      if (iVar12 <= (int)uVar9) {
        iVar12 = uVar9 + 2000;
        iVar6 = FUN_1801318c0(DAT_180409c80);
        if (-1 < iVar6) {
          (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000,0);
        }
      }
      plVar1 = DAT_180409c80;
      iVar6 = FUN_1801318c0(DAT_180409c80);
      if (iVar6 < 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1);
      }
      plVar1 = DAT_180409c80;
      iVar6 = FUN_1801318c0(DAT_180409c80);
      if (iVar6 < 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000);
      }
      plVar1 = DAT_180409c80;
      iVar6 = FUN_1801318c0(DAT_180409c80);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000);
      }
      plVar1 = DAT_180409c80;
      if ((iVar5 < 0) ||
         ((iVar7 = FUN_1801318c0(DAT_180409c80), -1 < iVar7 &&
          (cVar3 = (**(code **)(*plVar1 + (longlong)iVar7 * 8))(plVar1), cVar3 != '\0')))) {
        bVar10 = 1;
      }
      else {
        bVar10 = 0;
      }
      if ((((cVar4 != '\0') && (cVar2 != '\0')) && (0 < iVar6)) && (bVar10 != 0)) {
        FUN_180014410("[AS] session ready after %d ms (ownershipTicket=%d connectTokens=%d)\n",uVar9
                      ,iVar6,bVar10);
        return 1;
      }
      if ((uVar9 != 0) && (uVar9 == (uVar9 / 2000) * 2000)) {
        local_60 = (uint)bVar10;
        local_68 = iVar6;
        FUN_180014410("[AS] waiting for the account to finish arriving: %d ms (loggedOn=%d ownsApp=%d ownershipTicket=%d connectTokens=%d)\n"
                      ,uVar9,cVar4 != '\0',cVar2 != '\0');
      }
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      while (DAT_1803e85b4 != -1) {
        lVar8 = FUN_180131270();
        cVar4 = (**(code **)(lVar8 + 0x18))(DAT_1803e85b4,&local_58);
        if (cVar4 == '\0') break;
        lVar8 = FUN_180131270();
        (**(code **)(lVar8 + 0x20))(DAT_1803e85b4);
      }
      Sleep(0xfa);
      plVar1 = DAT_180409c80;
      uVar9 = uVar9 + 0xfa;
    } while ((int)uVar9 < 20000);
    if (iVar5 < 0) {
      uVar11 = 0xffffffff;
    }
    else {
      iVar5 = FUN_1801318c0(DAT_180409c80);
      if (iVar5 < 0) {
        uVar11 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar1 + (longlong)iVar5 * 8))(plVar1);
        uVar11 = (ulonglong)(cVar4 != '\0');
      }
    }
    FUN_180014410("[AS] account did not become join-ready within %d ms (connectTokens=%d) - the deploy will refuse a session with no connect token rather than dead-end the launch\n"
                  ,20000,uVar11);
  }
  return 0;
}


