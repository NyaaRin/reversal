// 0x1802f8d10  FUN_1802f8d10
// size=38 thunk=false
// signature: undefined FUN_1802f8d10()
// status: ok


void FUN_1802f8d10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
    FUN_18022b4b0(param_2 + 0x78);
  }
  return;
}


