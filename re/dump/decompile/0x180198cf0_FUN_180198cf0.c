// 0x180198cf0  FUN_180198cf0
// size=581 thunk=false
// signature: undefined FUN_180198cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180198cf0(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  uVar4 = _UNK_1803814b8;
  lVar3 = _DAT_1803814b0;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  while( true ) {
    if (DAT_180409704 != '\0') {
      return;
    }
    uStack_70 = 0;
    local_68 = lVar3;
    uStack_60 = uVar4;
    local_78 = 0;
    uStack_50 = 0;
    local_48 = lVar3;
    uStack_40 = uVar4;
    local_58 = 0;
    local_38 = 0;
    local_88 = &DAT_1803e7bc0;
    uStack_80 = 0;
    iVar5 = _Mtx_lock(&DAT_1803e7bc0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e7c0c == 0x7fffffff) {
      DAT_1803e7c0c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_80 = CONCAT71(uStack_80._1_7_,1);
    while ((DAT_180409704 == '\0' && (DAT_18056df30 == 0))) {
      _Cnd_wait(&DAT_180409710,&DAT_1803e7bc0);
    }
    if ((DAT_180409704 != '\0') && (DAT_18056df30 == 0)) break;
    lVar1 = *(longlong *)(DAT_18056df18 + (DAT_18056df20 - 1U & DAT_18056df28) * 8);
    FUN_18020e8a0(&local_78,lVar1);
    FUN_18020e8a0(&local_58,lVar1 + 0x20);
    local_38 = *(undefined8 *)(lVar1 + 0x40);
    lVar1 = *(longlong *)(DAT_18056df18 + (DAT_18056df20 - 1U & DAT_18056df28) * 8);
    local_98 = lVar1;
    FUN_18020e450(lVar1 + 0x20);
    FUN_18020e450(lVar1);
    DAT_18056df30 = DAT_18056df30 + -1;
    if (DAT_18056df30 == 0) {
      DAT_18056df28 = 0;
    }
    else {
      DAT_18056df28 = DAT_18056df28 + 1;
    }
    LOCK();
    DAT_180409708 = DAT_180409708 - local_48;
    UNLOCK();
    _Mtx_unlock(&DAT_1803e7bc0);
    FUN_180198920(&local_78);
    FUN_18020e450(&local_58);
    FUN_18020e450(&local_78);
  }
  _Mtx_unlock(&DAT_1803e7bc0);
  FUN_18020e450(&local_58);
  FUN_18020e450(&local_78);
  return;
}


