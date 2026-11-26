// 0x1802d8ba4  FUN_1802d8ba4
// size=290 thunk=false
// signature: undefined FUN_1802d8ba4()
// status: ok


int FUN_1802d8ba4(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_1803f8f90 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (PTR_18030fbf0 == (undefined *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)();
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1802d89b8(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_1802420c0(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar2 == 0)) {
    FUN_1802420c0(param_1,0,param_3);
    FUN_1802d8b20(param_3 != 0);
    if (PTR_18030fbf0 != (undefined *)0x0) {
      (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar1 = FUN_1802d89b8(param_1,param_2,param_3);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (PTR_18030fbf0 == (undefined *)0x0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1,param_2,param_3);
      }
    }
  }
  return iVar2;
}


