// 0x1802420c0  FUN_1802420c0
// size=333 thunk=false
// signature: undefined FUN_1802420c0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x0001802421da) */

undefined8 FUN_1802420c0(longlong param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  longlong *_ArgList;
  uintptr_t uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 1) {
    DAT_1803fa628 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"mayrrX64_InjectionGuard");
    DVar1 = GetLastError();
    if (DVar1 == 0xb7) {
      if (DAT_1803fa628 != (HANDLE)0x0) {
        CloseHandle(DAT_1803fa628);
      }
      DAT_1803fa628 = (HANDLE)0x0;
      return 0;
    }
    DAT_1803da690 = *(undefined4 *)((longlong)*(int *)(param_1 + 0x3c) + 0x50 + param_1);
    DAT_1803f9288 = param_1;
    _ArgList = (longlong *)FUN_1802d8350(0x10);
    *_ArgList = param_1;
    _ArgList[1] = (longlong)FUN_1801fbe40;
    uVar3 = _beginthreadex((void *)0x0,0,FUN_180242210,_ArgList,0,(uint *)&uStack_20);
    if (uVar3 != 0) {
      if ((uint)uStack_20 != 0) {
        local_28 = (undefined4)uVar3;
        uStack_24 = (undefined4)(uVar3 >> 0x20);
        local_18 = local_28;
        uStack_14 = uStack_24;
        uStack_10 = (uint)uStack_20;
        uStack_c = uStack_20._4_4_;
        iVar2 = _Thrd_detach(&local_18);
        if (iVar2 == 0) {
          return 1;
        }
      }
      std::_Throw_Cpp_error(1);
    }
    uStack_20 = uStack_20 & 0xffffffff00000000;
    std::_Throw_Cpp_error(6);
  }
  return 1;
}


