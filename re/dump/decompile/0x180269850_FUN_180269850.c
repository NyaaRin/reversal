// 0x180269850  FUN_180269850
// size=608 thunk=false
// signature: undefined FUN_180269850()
// status: ok


void FUN_180269850(undefined4 *param_1,undefined4 param_2,float param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(longlong *)(param_1 + 10) = lVar2;
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if ((*(byte *)(lVar2 + 0x28e4) & 0x20) != 0) {
    FUN_180289170("Clipper: Begin(%d,%.2f) in \'%s\'\n",param_2,(double)param_3,
                  *(undefined8 *)(lVar3 + 8));
  }
  if ((*(longlong *)(lVar2 + 0x2368) != 0) &&
     (*(char *)(*(longlong *)(lVar2 + 0x2368) + 0x23a) != '\0')) {
    FUN_1802a4b70();
  }
  *(double *)(param_1 + 6) = (double)*(float *)(lVar3 + 0x11c);
  param_1[4] = param_3;
  param_1[3] = param_2;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  iVar10 = *(int *)(lVar2 + 0x2350) + 1;
  *(int *)(lVar2 + 0x2350) = iVar10;
  if (*(int *)(lVar2 + 0x2358) < iVar10) {
    iVar8 = *(int *)(lVar2 + 0x235c);
    if (iVar8 < iVar10) {
      if (iVar8 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar8 / 2 + iVar8;
      }
      iVar9 = iVar10;
      if (iVar10 < iVar5) {
        iVar9 = iVar5;
      }
      if (iVar8 < iVar9) {
        pvVar6 = (void *)FUN_18026f580((longlong)iVar9 * 0x28);
        if (*(void **)(lVar2 + 0x2360) != (void *)0x0) {
          memcpy(pvVar6,*(void **)(lVar2 + 0x2360),(longlong)*(int *)(lVar2 + 0x2358) * 0x28);
          FUN_18026f680(*(undefined8 *)(lVar2 + 0x2360));
        }
        *(void **)(lVar2 + 0x2360) = pvVar6;
        *(int *)(lVar2 + 0x235c) = iVar9;
      }
    }
    for (iVar8 = *(int *)(lVar2 + 0x2358); iVar8 < iVar10; iVar8 = iVar8 + 1) {
      lVar7 = (longlong)iVar8;
      lVar4 = *(longlong *)(lVar2 + 0x2360);
      puVar1 = (undefined8 *)(lVar4 + lVar7 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7 * 0x28);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar4 + 0x20 + lVar7 * 0x28) = 0;
    }
    *(int *)(lVar2 + 0x2358) = iVar10;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(lVar2 + 0x2360) + -0x28 + (longlong)*(int *)(lVar2 + 0x2350) * 0x28);
  *puVar1 = param_1;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  iVar10 = *(int *)((longlong)puVar1 + 0x1c);
  if (iVar10 < 0) {
    iVar5 = iVar10 / 2 + iVar10;
    iVar8 = 0;
    if (0 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar10 < iVar8) {
      pvVar6 = (void *)FUN_18026f580((longlong)iVar8 * 0xc);
      if ((void *)puVar1[4] != (void *)0x0) {
        memcpy(pvVar6,(void *)puVar1[4],(longlong)*(int *)(puVar1 + 3) * 0xc);
        FUN_18026f680(puVar1[4]);
      }
      puVar1[4] = pvVar6;
      *(int *)((longlong)puVar1 + 0x1c) = iVar8;
    }
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar3 + 0x16c);
  *(undefined8 **)(param_1 + 0xc) = puVar1;
  *(double *)(param_1 + 8) = (double)*(float *)(puVar1 + 1);
  return;
}


