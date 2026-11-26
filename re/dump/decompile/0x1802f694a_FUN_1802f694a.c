// 0x1802f694a  FUN_1802f694a
// size=46 thunk=false
// signature: undefined FUN_1802f694a()
// status: ok


void FUN_1802f694a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffefff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x290);
  }
  return;
}


