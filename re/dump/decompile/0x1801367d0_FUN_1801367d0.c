// 0x1801367d0  FUN_1801367d0
// size=194 thunk=false
// signature: undefined FUN_1801367d0()
// status: ok


undefined8 * FUN_1801367d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1802169c0(param_1,(DAT_1803eb7c0 - DAT_1803eb7b8 >> 3) * -0x71c71c71c71c71c7,param_3,
                &DAT_1803eb7c0,uVar4);
  _Mtx_unlock(&DAT_1803e86b0);
  return param_1;
}


