// 0x18023c350  FUN_18023c350
// size=65 thunk=false
// signature: undefined FUN_18023c350()
// status: ok


void FUN_18023c350(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_18020e450(lVar2);
  }
  return;
}


