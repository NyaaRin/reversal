// 0x180235920  FUN_180235920
// size=50 thunk=false
// signature: undefined FUN_180235920()
// status: ok


void FUN_180235920(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18006b910(lVar2);
  }
  return;
}


