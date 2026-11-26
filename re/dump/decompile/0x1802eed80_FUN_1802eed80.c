// 0x1802eed80  FUN_1802eed80
// size=38 thunk=false
// signature: undefined FUN_1802eed80()
// status: ok


void FUN_1802eed80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


