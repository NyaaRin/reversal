// 0x1802e9ae3  FUN_1802e9ae3
// size=41 thunk=false
// signature: undefined FUN_1802e9ae3()
// status: ok


void FUN_1802e9ae3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x318);
  }
  return;
}


