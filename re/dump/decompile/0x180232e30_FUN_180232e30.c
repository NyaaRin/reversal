// 0x180232e30  FUN_180232e30
// size=158 thunk=false
// signature: undefined FUN_180232e30()
// status: ok


void FUN_180232e30(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_18016d4c0(param_2,param_3);
  FUN_18016d4c0(param_2 + 0x20,param_3 + 0x20);
  FUN_18020d910(param_2 + 0x40,param_3 + 0x40);
  FUN_18016d4c0(param_2 + 0x58,param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x78);
  *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_3 + 0x80);
  *(undefined1 *)(param_2 + 0x81) = *(undefined1 *)(param_3 + 0x81);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_3 + 0x84);
  *(undefined1 *)(param_2 + 0x88) = *(undefined1 *)(param_3 + 0x88);
  *(undefined1 *)(param_2 + 0x89) = *(undefined1 *)(param_3 + 0x89);
  return;
}


