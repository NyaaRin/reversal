// 0x1800fa9a0  FUN_1800fa9a0
// size=194 thunk=false
// signature: undefined FUN_1800fa9a0()
// status: ok


undefined8 * FUN_1800fa9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e88c0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e890c == 0x7fffffff) {
    DAT_1803e890c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180217b80(param_1,(DAT_1803edc58 - DAT_1803edc50 >> 4) * -0x5555555555555555,param_3,
                &DAT_1803edc58,uVar4);
  _Mtx_unlock(&DAT_1803e88c0);
  return param_1;
}


