// 0x1802f99fa  FUN_1802f99fa
// size=41 thunk=false
// signature: undefined FUN_1802f99fa()
// status: ok


void FUN_1802f99fa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


