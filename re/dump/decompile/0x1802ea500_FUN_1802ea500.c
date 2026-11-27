// 0x1802ea500  FUN_1802ea500
// size=38 thunk=false
// signature: undefined FUN_1802ea500()
// status: ok


void FUN_1802ea500(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(param_2 + 0x70);
  }
  return;
}


