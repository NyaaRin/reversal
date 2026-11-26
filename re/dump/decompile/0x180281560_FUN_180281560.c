// 0x180281560  FUN_180281560
// size=248 thunk=false
// signature: undefined FUN_180281560()
// status: ok


void FUN_180281560(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  iVar6 = *(int *)(lVar1 + 0x2038) + -1;
  uVar5 = (ulonglong)iVar6;
  if ((-1 < iVar6) && (iVar6 < *(int *)(lVar1 + 0x2028))) {
    lVar2 = *(longlong *)(lVar1 + 0x2030);
    if (*(int *)(uVar5 * 0x38 + *(longlong *)(lVar1 + 0x2040)) == *(int *)(uVar5 * 0x38 + lVar2)) {
      if (0 < iVar6) {
        while( true ) {
          lVar3 = *(longlong *)((uVar5 & 0xffffffff) * 0x38 + 8 + lVar2);
          if (((lVar3 == 0) || ((*(uint *)(lVar3 + 0x14) & 0x10000000) == 0)) ||
             (lVar3 = *(longlong *)((uVar5 & 0xffffffff) * 0x38 + -0x30 + lVar2), lVar3 == 0))
          break;
          if (((*(uint *)(lVar3 + 0x14) & 0x400) != 0) ||
             (uVar4 = (int)uVar5 - 1, uVar5 = (ulonglong)uVar4, (int)uVar4 < 1)) break;
        }
      }
      if ((*(byte *)(lVar1 + 0x28e4) & 8) != 0) {
        FUN_180289170("[popup] CloseCurrentPopup %d -> %d\n",iVar6,uVar5 & 0xffffffff);
      }
      FUN_180281430(uVar5 & 0xffffffff,1);
      if (*(longlong *)(lVar1 + 0x2070) != 0) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x2070) + 0x179) = 1;
      }
    }
  }
  return;
}


