// 0x1802dc768  FUN_1802dc768
// size=46 thunk=false
// signature: undefined FUN_1802dc768()
// status: ok


void FUN_1802dc768(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x90);
  }
  return;
}


