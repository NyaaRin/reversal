// 0x1802f4cf8  FUN_1802f4cf8
// size=41 thunk=false
// signature: undefined FUN_1802f4cf8()
// status: ok


void FUN_1802f4cf8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


