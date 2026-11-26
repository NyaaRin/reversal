// 0x180286640  FUN_180286640
// size=194 thunk=false
// signature: undefined FUN_180286640()
// status: ok


void FUN_180286640(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar3 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x2258);
  if ((*(uint *)(lVar2 + 0x14) & 0x8000000) != 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar5 = (int)*(short *)(lVar2 + 0xe2);
  lVar3 = FUN_1802865a0(iVar5 + param_1,0x80000001,param_1);
  iVar4 = 0;
  if (lVar3 == 0) {
    if (param_1 < 0) {
      iVar4 = *(int *)(lVar1 + 0x14d0) + -1;
    }
    lVar3 = FUN_1802865a0(iVar4,iVar5,param_1);
    if (lVar3 == 0) goto LAB_1802866f0;
  }
  *(longlong *)(lVar1 + 0x2260) = lVar3;
  *(longlong *)(lVar1 + 0x2258) = lVar3;
  *(undefined8 *)(lVar1 + 0x228c) = 0;
  *(undefined8 *)(lVar1 + 0x2284) = 0;
LAB_1802866f0:
  *(undefined1 *)(lVar1 + 0x227c) = 0;
  return;
}


