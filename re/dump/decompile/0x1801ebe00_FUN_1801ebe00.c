// 0x1801ebe00  FUN_1801ebe00
// size=293 thunk=false
// signature: undefined FUN_1801ebe00()
// status: ok


undefined8
FUN_1801ebe00(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (DAT_1803fa4d8 == (code *)0x0) {
    return 0x8876086c;
  }
  if (DAT_1803ff270 != '\0') {
    puVar6 = &DAT_1803da6b0;
    iVar2 = _Mtx_lock(&DAT_1803da6b0);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (DAT_1803da6fc == 0x7fffffff) {
      DAT_1803da6fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if ((((DAT_1803fa452 != '\0') || (DAT_1803fa580 != 0)) || (DAT_1803fa4c8 != 0)) ||
       (((DAT_1803fa500 != 0 || (DAT_1803fa578 != 0)) || (DAT_1803fa4c0 != 0)))) {
      if (param_2 == (undefined4 *)0x0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        uVar5 = param_2[1];
        uVar4 = *param_2;
      }
      FUN_180014410("[VIS] device Reset (%ux%u) -> releasing device objects\n",uVar4,uVar5,param_4,
                    puVar6);
    }
    FUN_1801eb260();
    DAT_1803fa453 = 0;
    DAT_1803fa455 = 0;
    DAT_1803fa452 = '\0';
    _Mtx_unlock(&DAT_1803da6b0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001801ebf22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*DAT_1803fa4d8)(param_1,param_2);
  return uVar3;
}


