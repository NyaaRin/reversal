// 0x1800feff0  FUN_1800feff0
// size=136 thunk=false
// signature: undefined FUN_1800feff0()
// status: ok


undefined8 FUN_1800feff0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = _Mtx_lock(&DAT_1803e8920);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e896c == 0x7fffffff) {
    DAT_1803e896c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18020b6a0(param_1);
  _Mtx_unlock(&DAT_1803e8920);
  return param_1;
}


