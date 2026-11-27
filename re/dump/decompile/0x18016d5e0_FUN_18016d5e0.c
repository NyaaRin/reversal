// 0x18016d5e0  FUN_18016d5e0
// size=50 thunk=false
// signature: undefined FUN_18016d5e0()
// status: ok


void FUN_18016d5e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18020e450(lVar2);
  }
  return;
}


