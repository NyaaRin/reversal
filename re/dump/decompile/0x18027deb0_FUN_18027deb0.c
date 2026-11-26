// 0x18027deb0  FUN_18027deb0
// size=317 thunk=false
// signature: undefined FUN_18027deb0()
// status: ok


ulonglong FUN_18027deb0(uint param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)(param_1 - 0x200);
  if ((((0x9a < param_1 - 0x200) && (param_1 != 0x1000)) && (param_1 != 0x2000)) &&
     ((param_1 != 0x4000 && (param_1 != 0x8000)))) {
LAB_18027dfe0:
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (((*(char *)(lVar2 + 0x1eac) == '\0') || (param_2 == *(uint *)(lVar2 + 0x1594))) ||
     ((param_2 == 0 || (uVar3 = (ulonglong)(param_1 - 0x200), 0x77 < param_1 - 0x200)))) {
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
    lVar4 = (longlong)(int)param_1;
    if (param_2 == 0) {
      return CONCAT71((int7)(int3)(param_1 >> 8),*(char *)(lVar2 + -0x1ec + lVar4 * 0xc) == '\0');
    }
    uVar1 = *(uint *)(lVar2 + -500 + lVar4 * 0xc);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 == param_2) goto LAB_18027dfe0;
    if (*(char *)(lVar2 + -0x1ec + lVar4 * 0xc) == '\0') {
      return (ulonglong)CONCAT31((int3)(uVar1 >> 8),uVar1 == 0xffffffff);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


