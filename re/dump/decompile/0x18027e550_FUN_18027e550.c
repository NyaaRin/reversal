// 0x18027e550  FUN_18027e550
// size=211 thunk=false
// signature: undefined FUN_18027e550()
// status: ok


void FUN_18027e550(short *param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  sVar2 = *param_1;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  iVar3 = *(int *)(lVar1 + 0x14f0);
  if (sVar2 < iVar3) {
    do {
      if ((*(uint *)(*(longlong *)(lVar1 + 0x1520) + 0x14) & 0x1000000) == 0) {
        FUN_18027e9c0("Missing End()");
        FUN_180278d40();
      }
      else if ((*(longlong *)(lVar1 + 0x2368) == 0) ||
              (*(longlong *)(*(longlong *)(lVar1 + 0x2368) + 0x188) != *(longlong *)(lVar1 + 0x1520)
              )) {
        FUN_18027e9c0("Missing EndChild()");
        FUN_180273410();
      }
      else {
        FUN_18027e9c0("Missing EndTable()");
        FUN_1802a3b20();
      }
      sVar2 = *param_1;
      iVar3 = *(int *)(lVar1 + 0x14f0);
    } while (sVar2 < iVar3);
  }
  if (iVar3 == sVar2) {
    FUN_18027e630(param_1);
  }
  return;
}


