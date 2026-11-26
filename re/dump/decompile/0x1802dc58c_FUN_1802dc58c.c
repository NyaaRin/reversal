// 0x1802dc58c  FUN_1802dc58c
// size=38 thunk=false
// signature: undefined FUN_1802dc58c()
// status: ok


void FUN_1802dc58c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021d530(param_2 + 0x70);
  }
  return;
}


