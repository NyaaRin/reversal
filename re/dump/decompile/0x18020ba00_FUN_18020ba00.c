// 0x18020ba00  FUN_18020ba00
// size=90 thunk=false
// signature: undefined FUN_18020ba00()
// status: ok


void FUN_18020ba00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      FUN_18020e450(lVar2 + 0x28);
      FUN_18020e450(lVar2);
      lVar2 = lVar2 + 0x48;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}


