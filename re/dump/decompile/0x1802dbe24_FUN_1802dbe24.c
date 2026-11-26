// 0x1802dbe24  FUN_1802dbe24
// size=46 thunk=false
// signature: undefined FUN_1802dbe24()
// status: ok


void FUN_1802dbe24(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2e0);
  }
  return;
}


