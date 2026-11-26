// 0x1802eb06d  FUN_1802eb06d
// size=46 thunk=false
// signature: undefined FUN_1802eb06d()
// status: ok


void FUN_1802eb06d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffbffff;
    thunk_FUN_18021e290(param_2 + 0x370);
  }
  return;
}


