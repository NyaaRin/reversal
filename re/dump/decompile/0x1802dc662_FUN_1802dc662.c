// 0x1802dc662  FUN_1802dc662
// size=38 thunk=false
// signature: undefined FUN_1802dc662()
// status: ok


void FUN_1802dc662(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021d530(param_2 + 0x70);
  }
  return;
}


