// 0x1803062ac  FUN_1803062ac
// size=41 thunk=false
// signature: undefined FUN_1803062ac()
// status: ok


void FUN_1803062ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


