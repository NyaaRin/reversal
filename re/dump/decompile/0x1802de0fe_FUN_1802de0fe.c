// 0x1802de0fe  FUN_1802de0fe
// size=38 thunk=false
// signature: undefined FUN_1802de0fe()
// status: ok


void FUN_1802de0fe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


