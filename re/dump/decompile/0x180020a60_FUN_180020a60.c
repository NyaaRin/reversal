// 0x180020a60  FUN_180020a60
// size=258 thunk=false
// signature: undefined FUN_180020a60()
// status: ok


undefined8 * FUN_180020a60(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (0x7f < param_2 - 1U) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    return param_1;
  }
  iVar2 = _Mtx_lock(&DAT_1803e73b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e73fc == 0x7fffffff) {
    DAT_1803e73fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,&DAT_1803ebbe0 + (longlong)param_2 * 0x40,param_3,param_4,uVar4);
  FUN_18016d4c0(param_1 + 4,&DAT_1803ebc00 + (longlong)param_2 * 0x40);
  _Mtx_unlock(&DAT_1803e73b0);
  return param_1;
}


