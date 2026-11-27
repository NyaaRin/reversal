// 0x1802b70b0  FUN_1802b70b0
// size=1060 thunk=false
// signature: undefined FUN_1802b70b0()
// status: ok


int FUN_1802b70b0(uint param_1,int *param_2,char *param_3,char *param_4,undefined4 param_5,
                 int param_6,undefined8 *param_7)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar9 = 0;
  iVar11 = (int)param_3;
  pcVar5 = param_3;
  if ((param_1 >> 0x18 & 1) == 0) {
    if (param_4 == (char *)0x0) {
      while( true ) {
        iVar10 = iVar9 + 1;
        if (iVar9 <= param_6) {
          iVar9 = param_2[1];
          if (*param_2 == iVar9) {
            iVar3 = *param_2 + 1;
            iVar8 = 8;
            if (iVar9 != 0) {
              iVar8 = iVar9 / 2 + iVar9;
            }
            if (iVar3 < iVar8) {
              iVar3 = iVar8;
            }
            if (iVar9 < iVar3) {
              pvVar4 = (void *)FUN_18026f580((longlong)iVar3 << 2);
              if (*(void **)(param_2 + 2) != (void *)0x0) {
                memcpy(pvVar4,*(void **)(param_2 + 2),(longlong)*param_2 << 2);
                FUN_18026f680(*(undefined8 *)(param_2 + 2));
              }
              *(void **)(param_2 + 2) = pvVar4;
              param_2[1] = iVar3;
            }
          }
          *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar5 - iVar11;
          *param_2 = *param_2 + 1;
        }
        pcVar6 = strchr(pcVar5,10);
        if (pcVar6 == (char *)0x0) break;
        pcVar5 = pcVar6 + 1;
        iVar9 = iVar10;
      }
      sVar7 = strlen(pcVar5);
      pcVar5 = pcVar5 + sVar7;
      bVar2 = true;
      goto LAB_1802b720c;
    }
    while (iVar10 = iVar9, pcVar5 < param_4) {
      iVar10 = iVar9 + 1;
      if (iVar9 <= param_6) {
        iVar9 = param_2[1];
        if (*param_2 == iVar9) {
          iVar8 = *param_2 + 1;
          iVar3 = 8;
          if (iVar9 != 0) {
            iVar3 = iVar9 / 2 + iVar9;
          }
          if (iVar8 < iVar3) {
            iVar8 = iVar3;
          }
          if (iVar9 < iVar8) {
            pvVar4 = (void *)FUN_18026f580((longlong)iVar8 << 2);
            if (*(void **)(param_2 + 2) != (void *)0x0) {
              memcpy(pvVar4,*(void **)(param_2 + 2),(longlong)*param_2 << 2);
              FUN_18026f680(*(undefined8 *)(param_2 + 2));
            }
            *(void **)(param_2 + 2) = pvVar4;
            param_2[1] = iVar8;
          }
        }
        *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar5 - iVar11;
        *param_2 = *param_2 + 1;
      }
      pvVar4 = memchr(pcVar5,10,(longlong)param_4 - (longlong)pcVar5);
      pcVar5 = param_4;
      if (pvVar4 == (void *)0x0) break;
      iVar9 = iVar10;
      pcVar5 = (char *)((longlong)pvVar4 + 1);
    }
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    iVar10 = iVar9;
    while (pcVar5 < param_4) {
      iVar9 = iVar10 + 1;
      if (iVar10 <= param_6) {
        iVar10 = param_2[1];
        if (*param_2 == iVar10) {
          iVar8 = *param_2 + 1;
          if (iVar10 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar10 / 2 + iVar10;
          }
          if (iVar8 < iVar3) {
            iVar8 = iVar3;
          }
          if (iVar10 < iVar8) {
            pvVar4 = (void *)FUN_18026f580((longlong)iVar8 << 2);
            if (*(void **)(param_2 + 2) != (void *)0x0) {
              memcpy(pvVar4,*(void **)(param_2 + 2),(longlong)*param_2 << 2);
              FUN_18026f680(*(undefined8 *)(param_2 + 2));
            }
            *(void **)(param_2 + 2) = pvVar4;
            param_2[1] = iVar8;
          }
        }
        *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar5 - iVar11;
        *param_2 = *param_2 + 1;
      }
      pcVar5 = (char *)FUN_18029e130(*(undefined8 *)(lVar1 + 0x1228),*(undefined4 *)(lVar1 + 0x1238)
                                     ,pcVar5,param_4,param_5,2);
      iVar10 = iVar9;
      if (*pcVar5 == '\n') {
        pcVar5 = pcVar5 + 1;
      }
    }
  }
  bVar2 = false;
LAB_1802b720c:
  iVar9 = 8;
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = pcVar5;
    param_4 = pcVar5;
  }
  if (iVar10 == 0) {
    iVar10 = param_2[1];
    if (*param_2 == iVar10) {
      iVar8 = *param_2 + 1;
      if (iVar10 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar10 / 2 + iVar10;
      }
      if (iVar8 < iVar3) {
        iVar8 = iVar3;
      }
      if (iVar10 < iVar8) {
        pvVar4 = (void *)FUN_18026f580((longlong)iVar8 << 2);
        if (*(void **)(param_2 + 2) != (void *)0x0) {
          memcpy(pvVar4,*(void **)(param_2 + 2),(longlong)*param_2 << 2);
          FUN_18026f680(*(undefined8 *)(param_2 + 2));
        }
        *(void **)(param_2 + 2) = pvVar4;
        param_2[1] = iVar8;
      }
    }
    iVar10 = 1;
    *(undefined4 *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = 0;
    *param_2 = *param_2 + 1;
  }
  if (((param_3 < param_4) && (param_4[-1] == '\n')) && (!bVar2)) {
    if (iVar10 <= param_6) {
      iVar8 = param_2[1];
      if (*param_2 == iVar8) {
        iVar3 = *param_2 + 1;
        if (iVar8 != 0) {
          iVar9 = iVar8 + iVar8 / 2;
        }
        if (iVar3 < iVar9) {
          iVar3 = iVar9;
        }
        if (iVar8 < iVar3) {
          pvVar4 = (void *)FUN_18026f580((longlong)iVar3 << 2);
          if (*(void **)(param_2 + 2) != (void *)0x0) {
            memcpy(pvVar4,*(void **)(param_2 + 2),(longlong)*param_2 << 2);
            FUN_18026f680(*(undefined8 *)(param_2 + 2));
          }
          *(void **)(param_2 + 2) = pvVar4;
          param_2[1] = iVar3;
        }
      }
      *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)param_4 - iVar11;
      *param_2 = *param_2 + 1;
    }
    iVar10 = iVar10 + 1;
  }
  return iVar10;
}


