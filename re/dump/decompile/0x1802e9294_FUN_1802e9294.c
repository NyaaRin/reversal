// 0x1802e9294  FUN_1802e9294
// size=46 thunk=false
// signature: undefined FUN_1802e9294()
// status: ok


void FUN_1802e9294(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x418);
  }
  return;
}


