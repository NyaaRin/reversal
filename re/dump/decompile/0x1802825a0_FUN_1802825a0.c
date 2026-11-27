// 0x1802825a0  FUN_1802825a0
// size=190 thunk=false
// signature: undefined FUN_1802825a0()
// status: ok


void FUN_1802825a0(longlong param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar2 = *(int *)(lVar3 + 0x14d0);
  if (*(longlong *)(*(longlong *)(lVar3 + 0x14d8) + -8 + (longlong)iVar2 * 8) != param_1) {
    uVar5 = (ulonglong)*(short *)(param_1 + 0xe2);
    uVar4 = (uint)*(short *)(param_1 + 0xe2);
    uVar6 = uVar5;
    while ((int)uVar4 < iVar2 + -1) {
      uVar5 = uVar5 + 1;
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      *(undefined8 *)(*(longlong *)(lVar3 + 0x14d8) + -8 + uVar5 * 8) =
           *(undefined8 *)(*(longlong *)(lVar3 + 0x14d8) + uVar5 * 8);
      psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar3 + 0x14d8) + -8 + uVar5 * 8) + 0xe2);
      *psVar1 = *psVar1 + -1;
    }
    *(longlong *)(*(longlong *)(lVar3 + 0x14d8) + -8 + (longlong)iVar2 * 8) = param_1;
    *(short *)(param_1 + 0xe2) = (short)(iVar2 + -1);
  }
  return;
}


