// 0x18014df00  FUN_18014df00
// size=260 thunk=false
// signature: undefined FUN_18014df00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014df00(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int local_30 [2];
  undefined1 local_28;
  undefined7 uStack_27;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar5 = &DAT_1803e7a40;
  iVar3 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7a8c == 0x7fffffff) {
    DAT_1803e7a8c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  local_30[0] = param_1;
  uVar4 = FUN_18016d4c0(&local_28,param_2);
  piVar2 = DAT_1803edc28;
  if (DAT_1803edc28 == DAT_1803edc30) {
    FUN_180224570(uVar4,DAT_1803edc28,local_30,param_4,puVar5);
  }
  else {
    *DAT_1803edc28 = local_30[0];
    *(ulonglong *)(piVar2 + 2) = CONCAT71(uStack_27,local_28);
    *(undefined8 *)(piVar2 + 4) = local_20;
    *(undefined8 *)(piVar2 + 6) = local_18;
    *(undefined8 *)(piVar2 + 8) = uStack_10;
    local_18 = _DAT_1803814b0;
    uStack_10 = _UNK_1803814b8;
    local_28 = 0;
    DAT_1803edc28 = DAT_1803edc28 + 10;
  }
  FUN_18020e450(&local_28);
  _Mtx_unlock(&DAT_1803e7a40);
  if (0 < param_1) {
    LOCK();
    DAT_180400b0c = DAT_180400b0c + 1;
    UNLOCK();
  }
  return;
}


