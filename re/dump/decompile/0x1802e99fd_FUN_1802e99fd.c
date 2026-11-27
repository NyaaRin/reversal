// 0x1802e99fd  FUN_1802e99fd
// size=46 thunk=false
// signature: undefined FUN_1802e99fd()
// status: ok


void FUN_1802e99fd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x5d8);
  }
  return;
}


