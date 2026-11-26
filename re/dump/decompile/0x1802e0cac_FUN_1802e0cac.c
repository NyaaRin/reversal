// 0x1802e0cac  FUN_1802e0cac
// size=38 thunk=false
// signature: undefined FUN_1802e0cac()
// status: ok


void FUN_1802e0cac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x68);
  }
  return;
}


