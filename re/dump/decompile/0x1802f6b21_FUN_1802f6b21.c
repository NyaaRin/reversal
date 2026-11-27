// 0x1802f6b21  FUN_1802f6b21
// size=46 thunk=false
// signature: undefined FUN_1802f6b21()
// status: ok


void FUN_1802f6b21(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x310);
  }
  return;
}


