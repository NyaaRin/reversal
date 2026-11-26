// 0x1802ebfc0  FUN_1802ebfc0
// size=41 thunk=false
// signature: undefined FUN_1802ebfc0()
// status: ok


void FUN_1802ebfc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18020ad50(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


