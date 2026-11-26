// 0x1802355a0  FUN_1802355a0
// size=86 thunk=false
// signature: undefined FUN_1802355a0()
// status: ok


void FUN_1802355a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18020e450(lVar2 + 0x48);
    FUN_18020d5c0(lVar2 + 0x28);
    FUN_18020e450(lVar2 + 8);
  }
  return;
}


