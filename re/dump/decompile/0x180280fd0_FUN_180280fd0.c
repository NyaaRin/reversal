// 0x180280fd0  FUN_180280fd0
// size=164 thunk=false
// signature: undefined FUN_180280fd0()
// status: ok


void FUN_180280fd0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  plVar2 = *(longlong **)(lVar1 + 0x1520);
  iVar3 = FUN_180268980(param_1,0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(int *)(*plVar2 + 0x1578) == iVar3) {
    FUN_1802899e0(iVar3,0xb,param_1);
  }
  if ((*(byte *)(lVar1 + 0x28e4) & 8) != 0) {
    FUN_180289170("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,iVar3);
  }
  FUN_180281080(iVar3,0);
  return;
}


