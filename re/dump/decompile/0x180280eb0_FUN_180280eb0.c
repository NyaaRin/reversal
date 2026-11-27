// 0x180280eb0  FUN_180280eb0
// size=145 thunk=false
// signature: undefined FUN_180280eb0()
// status: ok


void FUN_180280eb0(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  iVar3 = FUN_180268980("TextHoverPopup",0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(int *)(*plVar2 + 0x1578) == iVar3) {
    FUN_1802899e0(iVar3,0xb,"TextHoverPopup");
  }
  FUN_180280db0(iVar3,0);
  return;
}


