// 0x1802e94bc  FUN_1802e94bc
// size=46 thunk=false
// signature: undefined FUN_1802e94bc()
// status: ok


void FUN_1802e94bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x498);
  }
  return;
}


