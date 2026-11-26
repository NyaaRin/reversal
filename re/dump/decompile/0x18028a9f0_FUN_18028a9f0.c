// 0x18028a9f0  FUN_18028a9f0
// size=196 thunk=false
// signature: undefined FUN_18028a9f0()
// status: ok


longlong FUN_18028a9f0(int *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  
  pvVar5 = *(void **)(param_1 + 2);
  iVar2 = param_1[1];
  lVar7 = param_2 - (longlong)pvVar5 >> 4;
  if (*param_1 == iVar2) {
    iVar6 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar2 < iVar6) {
      pvVar5 = (void *)FUN_18026f580((longlong)iVar6 << 4);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(pvVar5,*(void **)(param_1 + 2),(longlong)*param_1 << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = pvVar5;
      param_1[1] = iVar6;
    }
  }
  if (lVar7 < *param_1) {
    pvVar5 = (void *)(lVar7 * 0x10 + (longlong)pvVar5);
    memmove((void *)((longlong)pvVar5 + 0x10),pvVar5,(*param_1 - lVar7) * 0x10);
  }
  uVar3 = param_3[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + lVar7 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  *param_1 = *param_1 + 1;
  return *(longlong *)(param_1 + 2) + lVar7 * 0x10;
}


