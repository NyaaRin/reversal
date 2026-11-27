// 0x180020030  CDoubleTraceFilter_vfunc00
// size=18 thunk=false
// signature: undefined CDoubleTraceFilter_vfunc00()
// status: ok


undefined1 CDoubleTraceFilter_vfunc00(longlong param_1,longlong param_2)

{
  if ((param_2 != *(longlong *)(param_1 + 8)) && (param_2 != *(longlong *)(param_1 + 0x10))) {
    return 1;
  }
  return 0;
}


