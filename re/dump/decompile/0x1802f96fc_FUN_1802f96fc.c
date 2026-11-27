// 0x1802f96fc  FUN_1802f96fc
// size=38 thunk=false
// signature: undefined FUN_1802f96fc()
// status: ok


void FUN_1802f96fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 8) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffff7;
    FUN_18022b4b0(param_2 + 0x50);
  }
  return;
}


