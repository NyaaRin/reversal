// 0x18027dff0  FUN_18027dff0
// size=178 thunk=false
// signature: undefined FUN_18027dff0()
// status: ok


void FUN_18027dff0(uint param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  lVar2 = (longlong)(int)param_1;
  *(undefined4 *)(lVar1 + -0x1f0 + lVar2 * 0xc) = param_2;
  *(undefined4 *)(lVar1 + -500 + lVar2 * 0xc) = param_2;
  *(undefined2 *)(lVar1 + -0x1ec + lVar2 * 0xc) = 0;
  return;
}


