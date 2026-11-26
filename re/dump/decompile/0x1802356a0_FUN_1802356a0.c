// 0x1802356a0  FUN_1802356a0
// size=75 thunk=false
// signature: undefined FUN_1802356a0()
// status: ok


void FUN_1802356a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_18020d5c0(lVar2 + 0x28);
    FUN_18020e450(lVar2);
  }
  return;
}


