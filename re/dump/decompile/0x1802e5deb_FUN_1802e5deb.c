// 0x1802e5deb  FUN_1802e5deb
// size=46 thunk=false
// signature: undefined FUN_1802e5deb()
// status: ok


void FUN_1802e5deb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x348);
  }
  return;
}


