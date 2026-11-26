// 0x1802e8555  FUN_1802e8555
// size=38 thunk=false
// signature: undefined FUN_1802e8555()
// status: ok


void FUN_1802e8555(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0x50);
  }
  return;
}


