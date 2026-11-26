// 0x1802819f0  FUN_1802819f0
// size=169 thunk=false
// signature: undefined FUN_1802819f0()
// status: ok


void FUN_1802819f0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  plVar2 = *(longlong **)(lVar1 + 0x1520);
  cVar3 = FUN_1802818e0(8,*(undefined4 *)(lVar1 + 0x1ef8));
  if (cVar3 != '\0') {
    iVar4 = FUN_180268980("context",0,
                          *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
    if (*(int *)(*plVar2 + 0x1578) == iVar4) {
      FUN_1802899e0(iVar4,0xb,"context");
    }
    FUN_180281080(iVar4,8);
  }
  return;
}


