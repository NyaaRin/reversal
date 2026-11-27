// 0x1802ed430  FUN_1802ed430
// size=38 thunk=false
// signature: undefined FUN_1802ed430()
// status: ok


void FUN_1802ed430(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_18022b620(param_2 + 0x70);
  }
  return;
}


