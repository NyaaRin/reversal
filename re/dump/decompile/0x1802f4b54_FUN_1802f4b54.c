// 0x1802f4b54  FUN_1802f4b54
// size=46 thunk=false
// signature: undefined FUN_1802f4b54()
// status: ok


void FUN_1802f4b54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


