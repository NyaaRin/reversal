// 0x1802358d0  FUN_1802358d0
// size=65 thunk=false
// signature: undefined FUN_1802358d0()
// status: ok


void FUN_1802358d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18021e290(lVar2);
  }
  return;
}


