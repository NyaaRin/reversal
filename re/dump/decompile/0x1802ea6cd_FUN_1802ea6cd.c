// 0x1802ea6cd  FUN_1802ea6cd
// size=43 thunk=false
// signature: undefined FUN_1802ea6cd()
// status: ok


void FUN_1802ea6cd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


