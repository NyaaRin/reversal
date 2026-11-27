// 0x180025df0  FUN_180025df0
// size=222 thunk=false
// signature: undefined FUN_180025df0()
// status: ok


undefined8
FUN_180025df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7570);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e75bc == 0x7fffffff) {
    DAT_1803e75bc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1803eb3f8 != DAT_1803eb400) {
    iVar2 = FUN_180022680(0,DAT_1803eb400 - DAT_1803eb3f8 >> 5,param_3,param_4,uVar4);
    FUN_18016d4c0(param_1,(longlong)iVar2 * 0x20 + DAT_1803eb3f8);
    _Mtx_unlock(&DAT_1803e7570);
    return param_1;
  }
  _Mtx_unlock(&DAT_1803e7570);
  FUN_180025ed0(param_1);
  return param_1;
}


