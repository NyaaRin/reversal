// 0x1802823d0  FUN_1802823d0
// size=455 thunk=false
// signature: undefined FUN_1802823d0()
// status: ok


void FUN_1802823d0(longlong param_1,char param_2,uint param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((param_3 >> 0x18 & 1) == 0) || ((param_3 & 0x14000000) == 0x4000000)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if ((param_2 != '\0') || (cVar7 != *(char *)(param_1 + 0xd6))) {
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    if (cVar7 == '\0') {
      iVar8 = *(int *)(lVar2 + 0x14d4);
      if (*(int *)(lVar2 + 0x14d0) == iVar8) {
        iVar6 = *(int *)(lVar2 + 0x14d0) + 1;
        if (iVar8 == 0) {
          iVar3 = 8;
        }
        else {
          iVar3 = iVar8 / 2 + iVar8;
        }
        if (iVar6 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar8 < iVar6) {
          pvVar4 = (void *)FUN_18026f580((longlong)iVar6 << 3);
          if (*(void **)(lVar2 + 0x14d8) != (void *)0x0) {
            memcpy(pvVar4,*(void **)(lVar2 + 0x14d8),(longlong)*(int *)(lVar2 + 0x14d0) << 3);
            FUN_18026f680(*(undefined8 *)(lVar2 + 0x14d8));
          }
          *(void **)(lVar2 + 0x14d8) = pvVar4;
          *(int *)(lVar2 + 0x14d4) = iVar6;
        }
      }
      *(longlong *)(*(longlong *)(lVar2 + 0x14d8) + (longlong)*(int *)(lVar2 + 0x14d0) * 8) =
           param_1;
      *(int *)(lVar2 + 0x14d0) = *(int *)(lVar2 + 0x14d0) + 1;
      *(short *)(param_1 + 0xe2) = (short)*(undefined4 *)(lVar2 + 0x14d0) + -1;
    }
    else if ((param_2 == '\0') && (cVar7 != *(char *)(param_1 + 0xd6))) {
      iVar8 = *(int *)(lVar2 + 0x14d0);
      iVar6 = *(short *)(param_1 + 0xe2) + 1;
      if (iVar6 < iVar8) {
        do {
          lVar5 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar2 + 0x14d8) + lVar5 * 8) + 0xe2);
          *psVar1 = *psVar1 + -1;
          iVar8 = *(int *)(lVar2 + 0x14d0);
        } while (iVar6 < iVar8);
      }
      pvVar4 = (void *)(*(longlong *)(lVar2 + 0x14d8) + (longlong)*(short *)(param_1 + 0xe2) * 8);
      memmove(pvVar4,(void *)((longlong)pvVar4 + 8),
              ((longlong)iVar8 - (longlong)*(short *)(param_1 + 0xe2)) * 8 - 8);
      *(int *)(lVar2 + 0x14d0) = *(int *)(lVar2 + 0x14d0) + -1;
      *(undefined2 *)(param_1 + 0xe2) = 0xffff;
    }
  }
  *(char *)(param_1 + 0xd6) = cVar7;
  return;
}


