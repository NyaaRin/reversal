// 0x180235600  FUN_180235600
// size=75 thunk=false
// signature: undefined FUN_180235600()
// status: ok


void FUN_180235600(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_18020e450(lVar2 + 0x20);
    FUN_18020e450(lVar2);
  }
  return;
}


