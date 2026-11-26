// 0x1802f6a2b  FUN_1802f6a2b
// size=41 thunk=false
// signature: undefined FUN_1802f6a2b()
// status: ok


void FUN_1802f6a2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);
  }
  return;
}


