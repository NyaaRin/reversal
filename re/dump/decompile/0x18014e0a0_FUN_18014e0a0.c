// 0x18014e0a0  FUN_18014e0a0
// size=143 thunk=false
// signature: undefined FUN_18014e0a0()
// status: ok


undefined8
FUN_18014e0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e7a8c == 0x7fffffff) {
    DAT_1803e7a8c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18020d910(param_1,&DAT_1803ea200,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e7a40);
  return param_1;
}


