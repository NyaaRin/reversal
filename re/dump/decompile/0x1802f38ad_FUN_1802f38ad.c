// 0x1802f38ad  FUN_1802f38ad
// size=41 thunk=false
// signature: undefined FUN_1802f38ad()
// status: ok


void FUN_1802f38ad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


