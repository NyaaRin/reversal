// 0x180266c00  FUN_180266c00
// size=66 thunk=false
// signature: undefined FUN_180266c00()
// status: ok


void FUN_180266c00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_18020e450(lVar2 + 0x28);
  }
  return;
}


