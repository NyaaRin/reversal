// 0x1802739b0  FUN_1802739b0
// size=670 thunk=false
// signature: undefined FUN_1802739b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802739b0(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar7 + 0xec0);
  local_60 = FUN_18026f580(0x438);
  local_58 = local_68;
  local_50 = local_60;
  if (local_60 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_18026e500(local_60,lVar3,param_1);
  }
  *(uint *)(lVar5 + 0x14) = param_2;
  FUN_1802693f0(lVar3 + 0x1500,*(undefined4 *)(lVar5 + 0x10),lVar5);
  if ((param_2 >> 8 & 1) == 0) {
    if (*(char *)(lVar7 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(int *)(lVar5 + 0x2c4) == -1) {
      lVar7 = FUN_180288660(*(undefined4 *)(lVar5 + 0x10));
    }
    else {
      lVar7 = (longlong)*(int *)(lVar5 + 0x2c4) +
              *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x27d0);
    }
    if (lVar7 != 0) {
      *(int *)(lVar5 + 0x2c4) = (int)lVar7 - *(int *)(lVar3 + 0x27d0);
    }
  }
  FUN_1802737f0(lVar5);
  iVar1 = *(int *)(lVar3 + 0x14c0);
  iVar2 = *(int *)(lVar3 + 0x14c4);
  if ((param_2 >> 0xd & 1) == 0) {
    if (iVar1 == iVar2) {
      if (iVar2 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar2 / 2 + iVar2;
      }
      iVar8 = iVar1 + 1;
      if (iVar1 + 1 < iVar4) {
        iVar8 = iVar4;
      }
      if (iVar2 < iVar8) {
        pvVar6 = (void *)FUN_18026f580((longlong)iVar8 << 3);
        if (*(void **)(lVar3 + 0x14c8) != (void *)0x0) {
          memcpy(pvVar6,*(void **)(lVar3 + 0x14c8),(longlong)*(int *)(lVar3 + 0x14c0) << 3);
          FUN_18026f680(*(undefined8 *)(lVar3 + 0x14c8));
        }
        *(void **)(lVar3 + 0x14c8) = pvVar6;
        *(int *)(lVar3 + 0x14c4) = iVar8;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 == iVar2) {
        if (iVar2 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar2 / 2 + iVar2;
        }
        iVar8 = iVar1 + 1;
        if (iVar1 + 1 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar2 < iVar8) {
          pvVar6 = (void *)FUN_18026f580((longlong)iVar8 << 3);
          if (*(void **)(lVar3 + 0x14c8) != (void *)0x0) {
            memcpy(pvVar6,*(void **)(lVar3 + 0x14c8),(longlong)*(int *)(lVar3 + 0x14c0) << 3);
            FUN_18026f680(*(undefined8 *)(lVar3 + 0x14c8));
          }
          *(void **)(lVar3 + 0x14c8) = pvVar6;
          *(int *)(lVar3 + 0x14c4) = iVar8;
        }
      }
      if (0 < (longlong)*(int *)(lVar3 + 0x14c0)) {
        memmove((void *)((longlong)*(void **)(lVar3 + 0x14c8) + 8),*(void **)(lVar3 + 0x14c8),
                (longlong)*(int *)(lVar3 + 0x14c0) * 8);
      }
      **(longlong **)(lVar3 + 0x14c8) = lVar5;
      goto LAB_180273c2b;
    }
    if (iVar2 == 0) {
      pvVar6 = (void *)FUN_18026f580(0x40);
      if (*(void **)(lVar3 + 0x14c8) != (void *)0x0) {
        memcpy(pvVar6,*(void **)(lVar3 + 0x14c8),(longlong)*(int *)(lVar3 + 0x14c0) << 3);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x14c8));
      }
      *(void **)(lVar3 + 0x14c8) = pvVar6;
      *(undefined4 *)(lVar3 + 0x14c4) = 8;
    }
  }
  *(longlong *)(*(longlong *)(lVar3 + 0x14c8) + (longlong)*(int *)(lVar3 + 0x14c0) * 8) = lVar5;
LAB_180273c2b:
  *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
  return lVar5;
}


