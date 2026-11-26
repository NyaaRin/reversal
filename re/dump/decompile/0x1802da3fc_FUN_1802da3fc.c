// 0x1802da3fc  FUN_1802da3fc
// size=38 thunk=false
// signature: undefined FUN_1802da3fc()
// status: ok


void FUN_1802da3fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180020a30(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


