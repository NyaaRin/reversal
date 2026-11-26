// 0x1802f6e54  FUN_1802f6e54
// size=46 thunk=false
// signature: undefined FUN_1802f6e54()
// status: ok


void FUN_1802f6e54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffdffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);
  }
  return;
}


