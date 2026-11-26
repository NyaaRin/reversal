// 0x18013d3d0  FUN_18013d3d0
// size=893 thunk=false
// signature: undefined FUN_18013d3d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18013d3d0(undefined8 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined *)0x0;
  local_88 = 0;
  iVar5 = FUN_18013aba0();
  plVar11 = DAT_180409c80;
  if (iVar5 == 0) {
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
  }
  else if (iVar5 == 2) {
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      local_60 = (undefined *)0x0;
      (**(code **)(*plVar11 + (longlong)iVar5 * 8))(plVar11,&local_60);
      puVar6 = local_60;
    }
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180409c24 = 4;
    UNLOCK();
    local_98 = param_1[2];
    DAT_180409c30 = puVar6;
    if (0x7fffffffffffffffU - local_98 < 0x25) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_a0 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      local_a0 = (undefined8 *)*param_1;
    }
    local_a8 = 0x25;
    FUN_18020e930(&local_80);
    local_88 = 1;
    FUN_1801356b0(&local_80);
    local_88 = 0;
    FUN_18020e450(&local_80);
    if (*(char *)((longlong)param_1 + 0x41) != '\0') {
      FUN_180137a90();
    }
  }
  else {
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      (**(code **)(*plVar11 + (longlong)iVar5 * 8))(plVar11);
    }
    plVar4 = DAT_180409c80;
    uVar1 = *(undefined1 *)(param_1 + 8);
    plVar11 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (iVar5 < 0) {
      local_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_18001d080(&local_80,"SetLoginInformation is missing from IClientUser",0x2f);
      local_60 = &DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar10 = &local_80;
      if (0xf < local_68) {
        ppppuVar10 = (undefined8 ****)local_80;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar10,local_70);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_80);
      LOCK();
      DAT_180409c24 = 5;
      UNLOCK();
      FUN_18013a1e0();
    }
    else {
      (**(code **)(*plVar4 + (longlong)iVar5 * 8))(plVar4,puVar9,plVar11,uVar1);
      puVar9 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar9 = (undefined8 *)*param_1;
      }
      FUN_180014410("[AS] SetLoginInformation(\'%s\', <password>, remember=%d) sent\n",puVar9,
                    *(char *)(param_1 + 8) != '\0');
      local_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_18001d080(&local_80,"logging in...",0xd);
      local_60 = &DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar10 = &local_80;
      if (0xf < local_68) {
        ppppuVar10 = (undefined8 ****)local_80;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar10,local_70);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_80);
      FUN_18013ca40(*(undefined1 *)((longlong)param_1 + 0x41),180000,0x110000100000000);
    }
  }
  lVar8 = param_1[6];
  if (lVar8 != 0) {
    puVar9 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
    }
  }
  puVar9 = param_1 + 4;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined1 *)puVar9 = 0;
  bVar3 = DAT_180409c59;
  LOCK();
  DAT_180409c59 = 0;
  UNLOCK();
  return (ulonglong)bVar3;
}


