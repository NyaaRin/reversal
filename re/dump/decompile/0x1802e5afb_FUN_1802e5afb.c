// 0x1802e5afb  FUN_1802e5afb
// size=46 thunk=false
// signature: undefined FUN_1802e5afb()
// status: ok


void FUN_1802e5afb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x390);
  }
  return;
}


