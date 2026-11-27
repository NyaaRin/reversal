// 0x18013cf00  FUN_18013cf00
// size=166 thunk=false
// signature: undefined FUN_18013cf00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18013cf00(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  LOCK();
  bVar4 = DAT_180409c59 == '\0';
  if (bVar4) {
    DAT_180409c59 = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    return 0;
  }
  if (DAT_18056de98 != 0) {
    if (DAT_18056de98 == 0) {
      std::_Throw_Cpp_error(1);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = _Thrd_id();
    if (DAT_18056de98 == iVar2) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_18 = _DAT_18056de90;
    uStack_14 = DAT_18056de90_4;
    iStack_10 = DAT_18056de98;
    uStack_c = _DAT_18056de9c;
    iVar2 = _Thrd_join(&local_18,0);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(2);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    _DAT_18056de90 = 0;
    _DAT_18056de98 = 0;
  }
  LOCK();
  DAT_180409c58 = 0;
  UNLOCK();
  LOCK();
  DAT_180409c28 = 0;
  UNLOCK();
  LOCK();
  DAT_180409c24 = 1;
  UNLOCK();
  return 1;
}


