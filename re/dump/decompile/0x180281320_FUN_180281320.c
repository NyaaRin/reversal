// 0x180281320  FUN_180281320
// size=266 thunk=false
// signature: undefined FUN_180281320()
// status: ok


void FUN_180281320(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar2 + 0x2028);
  if (iVar1 != 0) {
    uVar6 = 0;
    if ((param_1 != 0) && (0 < iVar1)) {
      do {
        uVar8 = uVar6;
        if (*(longlong *)(uVar6 * 0x38 + 8 + *(longlong *)(lVar2 + 0x2030)) != 0) {
          do {
            lVar3 = *(longlong *)((longlong)(int)uVar8 * 0x38 + 8 + *(longlong *)(lVar2 + 0x2030));
            if (lVar3 != 0) {
              lVar4 = param_1;
              if (*(longlong *)(param_1 + 0x3c0) == lVar3) break;
              do {
                if (lVar4 == lVar3) goto LAB_1802813db;
                lVar4 = *(longlong *)(lVar4 + 0x3b8);
              } while (lVar4 != 0);
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            if (iVar1 <= (int)uVar7) goto LAB_1802813e7;
          } while( true );
        }
LAB_1802813db:
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < iVar1);
    }
    if ((int)uVar6 < iVar1) {
LAB_1802813e7:
      if ((*(byte *)(lVar2 + 0x28e4) & 8) != 0) {
        if (param_1 == 0) {
          pcVar5 = "<NULL>";
        }
        else {
          pcVar5 = *(char **)(param_1 + 8);
        }
        FUN_180289170("[popup] ClosePopupsOverWindow(\"%s\")\n",pcVar5);
      }
      FUN_180281430(uVar6,param_2);
    }
  }
  return;
}


