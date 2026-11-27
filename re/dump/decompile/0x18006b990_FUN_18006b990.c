// 0x18006b990  FUN_18006b990
// size=260 thunk=false
// signature: undefined FUN_18006b990()
// status: ok


undefined8 FUN_18006b990(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  puVar6 = &DAT_1803e9600;
  iVar3 = _Mtx_lock(&DAT_1803e9600);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (DAT_1803e964c == 0x7fffffff) {
    DAT_1803e964c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  uVar5 = DAT_1805c7ac0;
  do {
    if (uVar5 == DAT_1805c7ac8 + DAT_1805c7ac0) {
      uVar4 = 0;
LAB_18006ba4f:
      _Mtx_unlock(&DAT_1803e9600);
      return uVar4;
    }
    lVar1 = *(longlong *)(DAT_1805c7ab0 + (DAT_1805c7ab8 - 1U & uVar5) * 8);
    if (((*(char *)(lVar1 + 4) != '\0') &&
        (*(longlong *)(lVar1 + 0x50) == *(longlong *)(lVar1 + 0x58))) &&
       (*(longlong *)(lVar1 + 0x38) != *(longlong *)(lVar1 + 0x40))) {
      if ((param_1 != 0) && (0 < param_2)) {
        FUN_1801fd7f0(lVar1 + 0x50,param_1,param_1 + param_2,param_4,puVar6);
      }
      if (*(int *)(lVar1 + 0x2c) < 0) {
        *(undefined4 *)(lVar1 + 0x2c) = param_3;
      }
      uVar4 = 1;
      goto LAB_18006ba4f;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


