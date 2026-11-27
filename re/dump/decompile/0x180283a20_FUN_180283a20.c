// 0x180283a20  FUN_180283a20
// size=439 thunk=false
// signature: undefined FUN_180283a20()
// status: ok


void FUN_180283a20(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar2 = param_3 | 0x10;
  if ((param_3 >> 10 & 1) == 0) {
    uVar2 = param_3;
  }
  uVar3 = 0;
  *(undefined2 *)(lVar1 + 0x2110) = 0x101;
  *(undefined4 *)(lVar1 + 0x2120) = param_1;
  *(undefined4 *)(lVar1 + 0x2124) = param_1;
  *(undefined4 *)(lVar1 + 0x2128) = param_2;
  *(uint *)(lVar1 + 0x2114) = uVar2;
  *(undefined4 *)(lVar1 + 0x2118) = param_4;
  *(undefined1 *)(lVar1 + 0x2112) = 0;
  if ((uVar2 >> 9 & 1) == 0) {
    uVar3 = *(undefined4 *)(lVar1 + 0x120);
  }
  *(undefined4 *)(lVar1 + 0x211c) = uVar3;
  *(undefined8 *)(lVar1 + 0x2158) = 0;
  *(undefined8 *)(lVar1 + 0x2160) = 0;
  *(undefined4 *)(lVar1 + 0x2178) = 0;
  *(undefined8 *)(lVar1 + 0x2188) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x2184) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2180) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x217c) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x2190) = 0;
  *(undefined8 *)(lVar1 + 0x2198) = 0;
  *(undefined4 *)(lVar1 + 0x21b0) = 0;
  *(undefined8 *)(lVar1 + 0x21c0) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x21bc) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21b8) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21b4) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x21c8) = 0;
  *(undefined8 *)(lVar1 + 0x21d0) = 0;
  *(undefined4 *)(lVar1 + 0x21e8) = 0;
  *(undefined8 *)(lVar1 + 0x21f8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x21f4) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21f0) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21ec) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2154) = 0;
  *(undefined8 *)(lVar1 + 0x2200) = 0;
  *(undefined8 *)(lVar1 + 0x2208) = 0;
  *(undefined4 *)(lVar1 + 0x2220) = 0;
  *(undefined8 *)(lVar1 + 0x2230) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x222c) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2228) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2224) = 0x7f7fffff;
  FUN_180283e10();
  return;
}


