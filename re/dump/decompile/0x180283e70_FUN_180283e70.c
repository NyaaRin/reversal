// 0x180283e70  FUN_180283e70
// size=273 thunk=false
// signature: undefined FUN_180283e70()
// status: ok


void FUN_180283e70(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) == 0) {
    if ((((param_1 == *(longlong *)(param_1 + 0x3c0)) ||
         ((*(uint *)(param_1 + 0x14) >> 0x1a & 1) != 0)) || (*(int *)(param_1 + 0x3f0) == 0)) ||
       (cVar2 = '\0', param_2 != '\0')) {
      cVar2 = '\x01';
    }
    if ((*(byte *)(lVar1 + 0x28e4) & 0x10) != 0) {
      FUN_180289170("[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                    ,cVar2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x207c));
    }
    if (cVar2 != '\0') {
      local_18 = 0;
      uStack_10 = 0;
      FUN_180282d70(0,*(undefined4 *)(lVar1 + 0x207c),*(undefined4 *)(param_1 + 0x428),&local_18);
      *(undefined2 *)(lVar1 + 0x20d2) = 1;
      *(undefined4 *)(lVar1 + 0x20e0) = 0;
      FUN_180283e10();
      return;
    }
    *(undefined4 *)(lVar1 + 0x206c) = *(undefined4 *)(param_1 + 0x3f0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x206c) = 0;
  }
  FUN_180279b90(*(undefined4 *)(param_1 + 0x428));
  return;
}


