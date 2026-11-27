// 0x1802f47fc  FUN_1802f47fc
// size=38 thunk=false
// signature: undefined FUN_1802f47fc()
// status: ok


void FUN_1802f47fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


