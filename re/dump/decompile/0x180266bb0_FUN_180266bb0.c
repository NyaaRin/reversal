// 0x180266bb0  FUN_180266bb0
// size=65 thunk=false
// signature: undefined FUN_180266bb0()
// status: ok


void FUN_180266bb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18020abf0(lVar2);
  }
  return;
}


