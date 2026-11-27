// 0x1802ef8f1  FUN_1802ef8f1
// size=41 thunk=false
// signature: undefined FUN_1802ef8f1()
// status: ok


void FUN_1802ef8f1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


