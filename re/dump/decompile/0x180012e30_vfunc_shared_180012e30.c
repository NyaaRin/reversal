// 0x180012e30  vfunc_shared_180012e30
// size=19 thunk=false
// signature: undefined vfunc_shared_180012e30()
// status: ok


char * vfunc_shared_180012e30(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


