// 0x1802ea723  FUN_1802ea723
// size=38 thunk=false
// signature: undefined FUN_1802ea723()
// status: ok


void FUN_1802ea723(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_1800668e0(param_2 + 0x28);
  }
  return;
}


