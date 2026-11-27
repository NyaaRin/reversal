// 0x18023c440  FUN_18023c440
// size=76 thunk=false
// signature: undefined FUN_18023c440()
// status: ok


void FUN_18023c440(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_18020e450(lVar2 + 0x28);
    FUN_18020e450(lVar2 + 8);
  }
  return;
}


