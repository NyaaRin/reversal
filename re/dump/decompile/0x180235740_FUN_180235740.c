// 0x180235740  FUN_180235740
// size=65 thunk=false
// signature: undefined FUN_180235740()
// status: ok


void FUN_180235740(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_18020e450(lVar2);
  }
  return;
}


