// 0x1802f691c  FUN_1802f691c
// size=46 thunk=false
// signature: undefined FUN_1802f691c()
// status: ok


void FUN_1802f691c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);
  }
  return;
}


