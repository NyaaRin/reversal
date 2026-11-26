// 0x180235880  FUN_180235880
// size=66 thunk=false
// signature: undefined FUN_180235880()
// status: ok


void FUN_180235880(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18020e450(lVar2 + 8);
  }
  return;
}


