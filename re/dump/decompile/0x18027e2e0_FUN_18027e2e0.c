// 0x18027e2e0  FUN_18027e2e0
// size=193 thunk=false
// signature: undefined FUN_18027e2e0()
// status: ok


undefined8 FUN_18027e2e0(uint param_1,uint param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar4 = param_2 | 0x800;
  if ((param_2 & 0x3c00) != 0) {
    uVar4 = param_2;
  }
  if ((param_3 + 1U & 0xfffffffe) == 0) {
    param_3 = FUN_18027b5c0(param_3);
  }
  if ((*(byte *)(lVar1 + 0x1eb8) & 0x40) == 0) {
    cVar2 = FUN_18027b7f0(param_1,uVar4,param_3);
    if (cVar2 != '\0') {
      uVar3 = uVar4 | 0x20;
      if (((byte)uVar4 & 0xf1) != 1) {
        uVar3 = uVar4;
      }
      cVar2 = FUN_18027e200(param_1,uVar3,param_3);
      if (cVar2 != '\0') {
        FUN_18027e0b0(param_1 & 0xf000,param_3);
        return 1;
      }
    }
  }
  return 0;
}


