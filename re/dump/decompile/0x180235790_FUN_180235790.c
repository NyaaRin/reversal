// 0x180235790  FUN_180235790
// size=66 thunk=false
// signature: undefined FUN_180235790()
// status: ok


void FUN_180235790(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_18020e450(lVar2 + 8);
  }
  return;
}


