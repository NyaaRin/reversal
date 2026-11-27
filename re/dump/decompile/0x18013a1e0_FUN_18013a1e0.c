// 0x18013a1e0  FUN_18013a1e0
// size=278 thunk=false
// signature: undefined FUN_18013a1e0()
// status: ok


undefined8 FUN_18013a1e0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined *puVar6;
  
  FUN_180138480();
  plVar3 = DAT_180409c80;
  if (DAT_180409c80 != (longlong *)0x0) {
    iVar4 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar4) {
      (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3);
    }
    iVar4 = FUN_1801318c0(plVar3);
    if (-1 < iVar4) {
      (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3);
    }
    puVar6 = &DAT_1803e8610;
    iVar4 = _Mtx_lock(&DAT_1803e8610);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    lVar2 = DAT_1803e9e48;
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      lVar2 = DAT_1803e9e48;
    }
    for (; lVar2 != DAT_1803e9e50; lVar2 = lVar2 + 0x38) {
      if (*(longlong **)(lVar2 + 0x28) == plVar3) {
        *(undefined8 *)(lVar2 + 0x30) = 0;
        FUN_180014410("[AS] logon failed - keeping local user %d (pipe %d) for the next attempt; replacing it would cost us the only user Steam will authorise\n"
                      ,*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),in_R9,puVar6);
        break;
      }
    }
    _Mtx_unlock(&DAT_1803e8610);
  }
  uVar5 = DAT_180409c30;
  DAT_180409c80 = (longlong *)0x0;
  DAT_1803e85b4 = 0xffffffff;
  LOCK();
  DAT_180409c30 = 0;
  UNLOCK();
  return uVar5;
}


