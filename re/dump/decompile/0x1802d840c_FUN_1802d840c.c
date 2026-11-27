// 0x1802d840c  FUN_1802d840c
// size=90 thunk=false
// signature: undefined FUN_1802d840c()
// status: ok


void FUN_1802d840c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_18030cca8)(param_1);
  }
  return;
}


