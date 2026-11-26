// 0x180144c60  FUN_180144c60
// size=133 thunk=false
// signature: undefined FUN_180144c60()
// status: ok


void FUN_180144c60(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(&DAT_1803e83b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e83fc == 0x7fffffff) {
    DAT_1803e83fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18020e8a0(&DAT_1803e9f28,param_1);
  _Mtx_unlock(&DAT_1803e83b0);
  FUN_18020e450(param_1);
  return;
}


