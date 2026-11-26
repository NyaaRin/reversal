// 0x1802e54a4  FUN_1802e54a4
// size=41 thunk=false
// signature: undefined FUN_1802e54a4()
// status: ok


void FUN_1802e54a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_1800f57b0(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


