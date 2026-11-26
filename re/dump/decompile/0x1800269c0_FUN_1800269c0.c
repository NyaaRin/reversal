// 0x1800269c0  FUN_1800269c0
// size=317 thunk=false
// signature: undefined FUN_1800269c0()
// status: ok


undefined8 *
FUN_1800269c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  uVar7 = 0;
  local_28 = &DAT_1803e90e0;
  local_30 = param_1;
  iVar3 = _Mtx_lock(&DAT_1803e90e0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar1)();
    return puVar4;
  }
  if (DAT_1803e912c == 0x7fffffff) {
    DAT_1803e912c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = DAT_1803ea2b0 - DAT_1803ea2a8 >> 5;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    FUN_180238ad0();
    lVar2 = DAT_1803ea2b0;
    local_50 = *param_1;
    uStack_48 = local_50;
    local_40 = param_1;
    local_38 = param_1;
    for (lVar6 = DAT_1803ea2a8; lVar6 != lVar2; lVar6 = lVar6 + 0x20) {
      FUN_180233130(&local_50,lVar6,param_3,param_4,uVar7);
    }
    param_1[1] = uStack_48;
    local_38 = (undefined8 *)0x0;
    local_50 = uStack_48;
    local_20 = uStack_48;
  }
  _Mtx_unlock(&DAT_1803e90e0);
  return param_1;
}


