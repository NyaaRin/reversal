// 0x1802dad04  FUN_1802dad04
// size=38 thunk=false
// signature: undefined FUN_1802dad04()
// status: ok


void FUN_1802dad04(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18021d670(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


