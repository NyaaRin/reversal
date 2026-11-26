// 0x1802e0640  FUN_1802e0640
// size=41 thunk=false
// signature: undefined FUN_1802e0640()
// status: ok


void FUN_1802e0640(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 1) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0xf0);
  }
  return;
}


