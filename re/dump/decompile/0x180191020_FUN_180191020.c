// 0x180191020  FUN_180191020
// size=434 thunk=false
// signature: undefined FUN_180191020()
// status: ok


void FUN_180191020(ulonglong param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_18;
  undefined *local_10;
  
  pcVar3 = (code *)FUN_1802081c0();
  if ((param_1 != 0) && (DAT_1803e89e0 != '\0')) {
    local_10 = &DAT_1803e8990;
    iVar2 = _Mtx_lock(&DAT_1803e8990);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar5 = (longlong *)
             ((((param_1 >> 0x30 & 0xff ^
                (((((param_1 >> 8 & 0xff ^ (param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                    0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff
                  ) * 0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^
                param_1 >> 0x28 & 0xff) * 0x100000001b3) * 0x100000001b3 ^ param_1 >> 0x38) *
               0x100000001b3 & DAT_180458280) * 0x10 + DAT_180458268);
    lVar4 = plVar5[1];
    if (lVar4 == DAT_180458258) {
LAB_180191167:
      lVar4 = 0;
    }
    else {
      plVar5 = (longlong *)*plVar5;
      uVar1 = *(ulonglong *)(lVar4 + 0x10);
      while (param_1 != uVar1) {
        if ((longlong *)lVar4 == plVar5) goto LAB_180191167;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar1 = *(ulonglong *)(lVar4 + 0x10);
      }
    }
    lVar6 = DAT_180458258;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (lVar6 != DAT_180458258) {
      local_18 = 0;
      FUN_18020b1f0(plVar5,&local_18,lVar6 + 0x18);
      if ((local_18 != DAT_1805c7b58) && (*(longlong *)(local_18 + 0x28) == DAT_1803e8970)) {
        *(undefined1 *)(local_18 + 0x38) = 1;
      }
    }
    _Mtx_unlock(&DAT_1803e8990);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  return;
}


