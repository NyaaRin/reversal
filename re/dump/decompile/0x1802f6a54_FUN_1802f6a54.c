// 0x1802f6a54  FUN_1802f6a54
// size=41 thunk=false
// signature: undefined FUN_1802f6a54()
// status: ok


void FUN_1802f6a54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d0);
  }
  return;
}


