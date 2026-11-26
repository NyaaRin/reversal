// 0x1802eb298  FUN_1802eb298
// size=46 thunk=false
// signature: undefined FUN_1802eb298()
// status: ok


void FUN_1802eb298(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    FUN_1800668e0(param_2 + 0x100);
  }
  return;
}


