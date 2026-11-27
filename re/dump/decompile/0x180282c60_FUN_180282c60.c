// 0x180282c60  FUN_180282c60
// size=154 thunk=false
// signature: undefined FUN_180282c60()
// status: ok


void FUN_180282c60(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (*(longlong *)(lVar1 + 0x2070) != param_1) {
    if ((*(byte *)(lVar1 + 0x28e4) & 4) != 0) {
      if (param_1 == 0) {
        pcVar2 = "<NULL>";
      }
      else {
        pcVar2 = *(char **)(param_1 + 8);
      }
      FUN_180289170("[focus] SetNavWindow(\"%s\")\n",pcVar2);
    }
    *(longlong *)(lVar1 + 0x2070) = param_1;
    *(undefined8 *)(lVar1 + 0x20c8) = 0xffffffffffffffff;
  }
  *(undefined2 *)(lVar1 + 0x2110) = 0;
  *(undefined1 *)(lVar1 + 0x20d2) = 0;
  FUN_180283e10();
  return;
}


