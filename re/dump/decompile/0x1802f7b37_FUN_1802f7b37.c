// 0x1802f7b37  FUN_1802f7b37
// size=38 thunk=false
// signature: undefined FUN_1802f7b37()
// status: ok


void FUN_1802f7b37(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


