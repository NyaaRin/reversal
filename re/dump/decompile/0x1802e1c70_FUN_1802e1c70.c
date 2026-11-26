// 0x1802e1c70  FUN_1802e1c70
// size=41 thunk=false
// signature: undefined FUN_1802e1c70()
// status: ok


void FUN_1802e1c70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x80);
  }
  return;
}


