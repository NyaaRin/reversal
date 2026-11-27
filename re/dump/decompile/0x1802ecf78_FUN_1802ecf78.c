// 0x1802ecf78  FUN_1802ecf78
// size=38 thunk=false
// signature: undefined FUN_1802ecf78()
// status: ok


void FUN_1802ecf78(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    FUN_18022b6b0(param_2 + 0x50);
  }
  return;
}


