// 0x1801356b0  FUN_1801356b0
// size=139 thunk=false
// signature: undefined FUN_1801356b0()
// status: ok


void FUN_1801356b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e860c == 0x7fffffff) {
    DAT_1803e860c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (param_1 != (undefined8 *)&DAT_1803e9e20) {
    puVar1 = param_1 + 2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_180212700(&DAT_1803e9e20,param_1,*puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000180135734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e85c0);
  return;
}


