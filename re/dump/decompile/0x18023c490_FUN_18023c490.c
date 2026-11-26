// 0x18023c490  FUN_18023c490
// size=76 thunk=false
// signature: undefined FUN_18023c490()
// status: ok


void FUN_18023c490(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_18020e450(lVar2 + 0x28);
    FUN_18020e450(lVar2 + 8);
  }
  return;
}


