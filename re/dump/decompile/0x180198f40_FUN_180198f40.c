// 0x180198f40  FUN_180198f40
// size=241 thunk=false
// signature: undefined FUN_180198f40()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180199006) */
/* WARNING: Removing unreachable block (ram,0x000180198f66) */

void FUN_180198f40(void)

{
  int iVar1;
  undefined8 *_ArgList;
  uintptr_t uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (DAT_1804096f0 == 0) {
    LOCK();
    DAT_1804096f0 = 1;
    UNLOCK();
    DAT_180409704 = 0;
    _ArgList = (undefined8 *)FUN_1802d8350(8);
    *_ArgList = FUN_180198cf0;
    uVar2 = _beginthreadex((void *)0x0,0,FUN_180220c30,_ArgList,0,(uint *)&uStack_20);
    if (uVar2 != 0) {
      if ((uint)uStack_20 != 0) {
        local_28 = (undefined4)uVar2;
        uStack_24 = (undefined4)(uVar2 >> 0x20);
        local_18 = local_28;
        uStack_14 = uStack_24;
        uStack_10 = (uint)uStack_20;
        uStack_c = uStack_20._4_4_;
        iVar1 = _Thrd_detach(&local_18);
        if (iVar1 == 0) {
          return;
        }
      }
      std::_Throw_Cpp_error(1);
    }
    uStack_20 = uStack_20 & 0xffffffff00000000;
    std::_Throw_Cpp_error(6);
  }
  return;
}


