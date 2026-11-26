// 0x180281430  FUN_180281430
// size=297 thunk=false
// signature: undefined FUN_180281430()
// status: ok


void FUN_180281430(int param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if ((*(byte *)(lVar1 + 0x28e4) & 8) != 0) {
    FUN_180289170("[popup] ClosePopupToLevel(%d), restore_under=%d\n",param_1,param_2);
    if (((*(byte *)(lVar1 + 0x28e4) & 8) != 0) &&
       (iVar4 = param_1, param_1 < *(int *)(lVar1 + 0x2028))) {
      do {
        if ((*(byte *)(lVar1 + 0x28e4) & 8) != 0) {
          lVar2 = *(longlong *)((longlong)iVar4 * 0x38 + 8 + *(longlong *)(lVar1 + 0x2030));
          uVar5 = 0;
          if (lVar2 != 0) {
            uVar5 = *(undefined8 *)(lVar2 + 8);
          }
          FUN_180289170("[popup] - Closing PopupID 0x%08X Window \"%s\"\n",
                        *(undefined4 *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar1 + 0x2030)),
                        uVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0x2028));
    }
  }
  lVar2 = *(longlong *)((longlong)param_1 * 0x38 + 8 + *(longlong *)(lVar1 + 0x2030));
  lVar3 = *(longlong *)((longlong)param_1 * 0x38 + 0x10 + *(longlong *)(lVar1 + 0x2030));
  FUN_18028a000(lVar1 + 0x2028,param_1);
  if ((param_2 != '\0') && (lVar2 != 0)) {
    if ((*(uint *)(lVar2 + 0x14) & 0x10000000) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x3b0);
    }
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0xcd) == '\0')) {
      FUN_180282ac0(lVar2);
      return;
    }
    FUN_1802827b0(lVar3,*(int *)(lVar1 + 0x207c) == 0);
  }
  return;
}


