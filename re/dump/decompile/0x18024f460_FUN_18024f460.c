// 0x18024f460  FUN_18024f460
// size=133 thunk=false
// signature: undefined FUN_18024f460()
// status: ok


void FUN_18024f460(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  for (lVar1 = *(longlong *)(param_1 + 0x50); lVar1 != lVar2; lVar1 = lVar1 + 0x60) {
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x348);
  lVar2 = *(longlong *)(param_1 + 0x340);
  if (lVar2 != lVar1) {
    do {
      FUN_18020e450(lVar2 + 0x28);
      FUN_18020e450(lVar2 + 8);
      lVar2 = lVar2 + 0x48;
    } while (lVar2 != lVar1);
    *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x340);
  }
  return;
}


