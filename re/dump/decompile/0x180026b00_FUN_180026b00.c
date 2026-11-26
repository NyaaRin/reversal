// 0x180026b00  FUN_180026b00
// size=180 thunk=false
// signature: undefined FUN_180026b00()
// status: ok


undefined8 * FUN_180026b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e91a0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e91ec == 0x7fffffff) {
    DAT_1803e91ec = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180218b50(param_1,DAT_1803e9b28 - DAT_1803e9b20 >> 6,param_3,&DAT_1803e9b28,uVar4);
  _Mtx_unlock(&DAT_1803e91a0);
  return param_1;
}


