// 0x1802ebf1a  FUN_1802ebf1a
// size=38 thunk=false
// signature: undefined FUN_1802ebf1a()
// status: ok


void FUN_1802ebf1a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


