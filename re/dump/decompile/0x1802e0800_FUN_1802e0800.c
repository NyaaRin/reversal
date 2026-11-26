// 0x1802e0800  FUN_1802e0800
// size=47 thunk=false
// signature: undefined FUN_1802e0800()
// status: ok


void FUN_1802e0800(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 1) != 0) {
    *(uint *)(param_2 + 0x90) = *(uint *)(param_2 + 0x90) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0xd8);
  }
  return;
}


