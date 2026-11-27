// 0x1802f93bc  FUN_1802f93bc
// size=46 thunk=false
// signature: undefined FUN_1802f93bc()
// status: ok


void FUN_1802f93bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x100) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


