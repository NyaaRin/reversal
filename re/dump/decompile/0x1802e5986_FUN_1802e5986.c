// 0x1802e5986  FUN_1802e5986
// size=38 thunk=false
// signature: undefined FUN_1802e5986()
// status: ok


void FUN_1802e5986(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x68);
  }
  return;
}


