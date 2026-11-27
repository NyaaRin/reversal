// 0x180020050  CTripleTraceFilter_vfunc00
// size=24 thunk=false
// signature: undefined CTripleTraceFilter_vfunc00()
// status: ok


undefined1 CTripleTraceFilter_vfunc00(longlong param_1,longlong param_2)

{
  if (((param_2 != *(longlong *)(param_1 + 8)) && (param_2 != *(longlong *)(param_1 + 0x10))) &&
     (param_2 != *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}


