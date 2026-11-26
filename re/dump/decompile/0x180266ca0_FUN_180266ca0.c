// 0x180266ca0  FUN_180266ca0
// size=50 thunk=false
// signature: undefined FUN_180266ca0()
// status: ok


void FUN_180266ca0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_18023b050(lVar2);
  }
  return;
}


