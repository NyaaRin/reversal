// 0x1802f9d50  FUN_1802f9d50
// size=38 thunk=false
// signature: undefined FUN_1802f9d50()
// status: ok


void FUN_1802f9d50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x40);
  }
  return;
}


