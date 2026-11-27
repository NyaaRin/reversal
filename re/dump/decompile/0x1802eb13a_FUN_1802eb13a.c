// 0x1802eb13a  FUN_1802eb13a
// size=41 thunk=false
// signature: undefined FUN_1802eb13a()
// status: ok


void FUN_1802eb13a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    FUN_1800668e0(param_2 + 0xe0);
  }
  return;
}


