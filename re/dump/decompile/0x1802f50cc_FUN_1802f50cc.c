// 0x1802f50cc  FUN_1802f50cc
// size=43 thunk=false
// signature: undefined FUN_1802f50cc()
// status: ok


void FUN_1802f50cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x28);
  }
  return;
}


