// 0x1802f9c09  FUN_1802f9c09
// size=46 thunk=false
// signature: undefined FUN_1802f9c09()
// status: ok


void FUN_1802f9c09(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffeff;
    FUN_18022b4b0(param_2 + 0x1a0);
  }
  return;
}


