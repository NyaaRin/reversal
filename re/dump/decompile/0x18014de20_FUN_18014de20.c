// 0x18014de20  FUN_18014de20
// size=210 thunk=false
// signature: undefined FUN_18014de20()
// status: ok


void FUN_18014de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  puVar6 = &DAT_1803e7a40;
  iVar5 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar5 == 0) {
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    FUN_18020d6f0(&DAT_1803ea200,param_1,param_3,param_4,puVar6);
    lVar4 = DAT_1803ea208;
    lVar3 = DAT_1803ea200;
    lVar2 = DAT_1803ea200;
    if (0x18 < (ulonglong)(DAT_1803ea208 - DAT_1803ea200 >> 5)) {
      while (lVar2 = lVar2 + 0x20, lVar2 != lVar4) {
        FUN_18020e8a0(lVar3,lVar2);
        lVar3 = lVar3 + 0x20;
      }
      FUN_18020e450(DAT_1803ea208 + -0x20);
      DAT_1803ea208 = DAT_1803ea208 + -0x20;
    }
                    /* WARNING: Could not recover jumptable at 0x00018014deeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Mtx_unlock(&DAT_1803e7a40);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


