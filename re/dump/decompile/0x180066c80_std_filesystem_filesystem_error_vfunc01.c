// 0x180066c80  std_filesystem_filesystem_error_vfunc01
// size=15 thunk=false
// signature: undefined std_filesystem_filesystem_error_vfunc01()
// status: ok


longlong * std_filesystem_filesystem_error_vfunc01(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}


