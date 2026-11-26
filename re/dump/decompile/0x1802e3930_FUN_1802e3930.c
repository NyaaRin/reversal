// 0x1802e3930  FUN_1802e3930
// size=38 thunk=false
// signature: undefined FUN_1802e3930()
// status: ok


void FUN_1802e3930(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_18020bc50(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


