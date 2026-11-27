// 0x1802e511d  FUN_1802e511d
// size=41 thunk=false
// signature: undefined FUN_1802e511d()
// status: ok


void FUN_1802e511d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    FUN_1800668e0(param_2 + 0xe0);
  }
  return;
}


