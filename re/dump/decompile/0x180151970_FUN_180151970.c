// 0x180151970  FUN_180151970
// size=397 thunk=false
// signature: undefined FUN_180151970()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180151ad1) */

void FUN_180151970(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *_ArgList;
  uintptr_t uVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_180400aed == '\0') {
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
    lVar2 = DAT_1803edc28;
    lVar5 = DAT_1803edc20;
    if (DAT_1803edc20 != DAT_1803edc28) {
      do {
        FUN_18020e450(lVar5 + 8);
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar2);
      DAT_1803edc28 = DAT_1803edc20;
    }
    _Mtx_unlock(&DAT_1803e7a40);
    DAT_180400b0c = 0;
    DAT_180400aed = '\x01';
    DAT_180400b10 = 1;
    _ArgList = (undefined8 *)FUN_1802d8350(8);
    *_ArgList = FUN_180150b90;
    uVar4 = _beginthreadex((void *)0x0,0,FUN_180220c30,_ArgList,0,(uint *)&uStack_40);
    if (uVar4 != 0) {
      if ((uint)uStack_40 != 0) {
        local_48 = (undefined4)uVar4;
        uStack_44 = (undefined4)(uVar4 >> 0x20);
        local_38 = local_48;
        uStack_34 = uStack_44;
        uStack_30 = (uint)uStack_40;
        uStack_2c = uStack_40._4_4_;
        iVar3 = _Thrd_detach(&local_38);
        if (iVar3 == 0) {
          return;
        }
      }
      std::_Throw_Cpp_error(1);
    }
    uStack_40 = uStack_40 & 0xffffffff00000000;
    std::_Throw_Cpp_error(6);
  }
  return;
}


