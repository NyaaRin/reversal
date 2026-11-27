// 0x1802dc0df  FUN_1802dc0df
// size=46 thunk=false
// signature: undefined FUN_1802dc0df()
// status: ok


void FUN_1802dc0df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x238);
  }
  return;
}


