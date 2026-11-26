// 0x18027bf60  FUN_18027bf60
// size=260 thunk=false
// signature: undefined FUN_18027bf60()
// status: ok


uint FUN_18027bf60(void)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
    plVar3 = (longlong *)(lVar1 + 0xec0);
    uVar2 = -(uint)(*(char *)(*plVar3 + 0xa94) != '\0') & 0x1000;
    if (*(char *)(lVar1 + 0x10) != '\0') goto LAB_18027c01c;
    __dyn_tls_on_demand_init(-*(char *)(*plVar3 + 0xa94));
    uVar4 = uVar2 | 0x2000;
    if (*(char *)(*plVar3 + 0xaa4) == '\0') {
      uVar4 = uVar2;
    }
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
      uVar2 = uVar4 | 0x4000;
      if (*(char *)(*plVar3 + 0xab4) == '\0') {
        uVar2 = uVar4;
      }
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      goto LAB_18027c042;
    }
  }
  else {
    uVar2 = -(uint)(*(char *)(*(longlong *)(lVar1 + 0xec0) + 0xa94) != '\0') & 0x1000;
LAB_18027c01c:
    uVar4 = uVar2 | 0x2000;
    if (*(char *)(*(longlong *)(lVar1 + 0xec0) + 0xaa4) == '\0') {
      uVar4 = uVar2;
    }
  }
  uVar2 = uVar4 | 0x4000;
  if (*(char *)(*(longlong *)(lVar1 + 0xec0) + 0xab4) == '\0') {
    uVar2 = uVar4;
  }
LAB_18027c042:
  uVar4 = uVar2 | 0x8000;
  if (*(char *)(*(longlong *)(lVar1 + 0xec0) + 0xac4) == '\0') {
    uVar4 = uVar2;
  }
  return uVar4;
}


