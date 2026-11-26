// 0x180138c70  FUN_180138c70
// size=124 thunk=false
// signature: undefined FUN_180138c70()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180138c70(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  DAT_180409c49 = 0;
  if (DAT_1805c3920 != 0) {
    if (DAT_1805c3920 == 0) {
      std::_Throw_Cpp_error(1);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = _Thrd_id();
    if (DAT_1805c3920 == iVar2) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18 = _DAT_1805c3918;
    uStack_14 = DAT_1805c3918_4;
    iStack_10 = DAT_1805c3920;
    uStack_c = _DAT_1805c3924;
    iVar2 = _Thrd_join(&local_18,0);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _DAT_1805c3918 = 0;
    _DAT_1805c3920 = 0;
  }
  return;
}


