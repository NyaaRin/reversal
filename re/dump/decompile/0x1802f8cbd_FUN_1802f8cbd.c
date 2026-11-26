// 0x1802f8cbd  FUN_1802f8cbd
// size=38 thunk=false
// signature: undefined FUN_1802f8cbd()
// status: ok


void FUN_1802f8cbd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


