// 0x18013b850  FUN_18013b850
// size=836 thunk=false
// signature: undefined FUN_18013b850()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013b850(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  char cVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = (undefined8 **)0x0;
  local_60 = &DAT_1803e8660;
  iVar4 = _Mtx_lock(&DAT_1803e8660);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e86ac == 0x7fffffff) {
    DAT_1803e86ac = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pppuVar8 = _DAT_1803e9e60;
  uVar7 = _DAT_1803e9e68;
  lVar2 = _DAT_1803e9e70;
  uVar10 = _DAT_1803e9e78;
  _DAT_1803e9e60 = (undefined8 ***)local_58;
  _DAT_1803e9e68 = uStack_50;
  _DAT_1803e9e70 = local_48;
  _DAT_1803e9e78 = uStack_40;
  local_58 = pppuVar8;
  uStack_50 = uVar7;
  local_48 = lVar2;
  uStack_40 = uVar10;
  _Mtx_unlock(&DAT_1803e8660);
  plVar3 = DAT_180409c80;
  iVar4 = DAT_180409c24;
  LOCK();
  DAT_180409c28 = 0;
  UNLOCK();
  if ((local_48 == 0) || (DAT_180409c80 == (longlong *)0x0)) goto LAB_18013bb71;
  if (DAT_180409c24 == 3) {
    pppuVar8 = &local_58;
    if (0xf < uStack_40) {
      pppuVar8 = (undefined8 ***)local_58;
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,pppuVar8,0);
      goto LAB_18013b9be;
    }
    cVar9 = '\0';
  }
  else {
    pppuVar8 = &local_58;
    if (0xf < uStack_40) {
      pppuVar8 = (undefined8 ***)local_58;
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (iVar5 < 0) {
      cVar9 = '\0';
    }
    else {
      (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,pppuVar8);
LAB_18013b9be:
      cVar9 = '\x01';
    }
  }
  FUN_180014410("[AS] code submitted (twoFactor=%d, accepted by interface=%d), retrying LogOn\n",
                iVar4 != 3,cVar9);
  local_78 = 0;
  local_70 = 0;
  local_88 = (undefined8 ***)0x0;
  uStack_80 = 0;
  if (cVar9 == '\0') {
    FUN_18001d080(&local_88,"this build of IClientUser has no code setter",0x2c);
    local_68 = &DAT_1803e85c0;
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
    pppuVar8 = &local_88;
    if (0xf < local_70) {
      pppuVar8 = (undefined8 ***)local_88;
    }
    FUN_180212700(&DAT_1803e9e20,pppuVar8,local_78);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_88);
  }
  else {
    FUN_18001d080(&local_88,"checking the code...",0x14);
    local_68 = &DAT_1803e85c0;
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
    pppuVar8 = &local_88;
    if (0xf < local_70) {
      pppuVar8 = (undefined8 ***)local_88;
    }
    FUN_180212700(&DAT_1803e9e20,pppuVar8,local_78);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_88);
    plVar3 = DAT_180409c80;
    LOCK();
    DAT_180409c24 = 1;
    UNLOCK();
    iVar4 = FUN_1801318c0(DAT_180409c80);
    if (iVar4 < 0) {
      uVar10 = 2;
    }
    else {
      uVar6 = (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,0x110000100000000);
      uVar10 = (ulonglong)uVar6;
    }
    uVar7 = FUN_180132470(uVar10);
    FUN_180014410("[AS] LogOn (after code) returned %d (%s)\n",uVar10 & 0xffffffff,uVar7);
  }
LAB_18013bb71:
  FUN_18020e450(&local_58);
  return;
}


