// 0x1802e94ea  FUN_1802e94ea
// size=46 thunk=false
// signature: undefined FUN_1802e94ea()
// status: ok


void FUN_1802e94ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1b8);
  }
  return;
}


