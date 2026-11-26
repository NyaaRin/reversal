// 0x1802eb1cd  FUN_1802eb1cd
// size=41 thunk=false
// signature: undefined FUN_1802eb1cd()
// status: ok


void FUN_1802eb1cd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(param_2 + 0x210);
  }
  return;
}


