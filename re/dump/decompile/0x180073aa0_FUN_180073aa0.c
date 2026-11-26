// 0x180073aa0  FUN_180073aa0
// size=531 thunk=false
// signature: undefined FUN_180073aa0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180073aa0(undefined8 *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar9 = *(uint *)(lVar2 + 0x1fa0);
  if ((uVar9 & 1) == 0) {
    uVar9 = uVar9 | 1;
    *(uint *)(lVar2 + 0x1fa0) = uVar9;
    *(undefined8 *)(lVar2 + 0x20f8) = 0;
    *(undefined4 *)(lVar2 + 0x2100) = 0;
  }
  iVar8 = 0;
  if ((uVar9 & 2) == 0) {
    *(uint *)(lVar2 + 0x1fa0) = uVar9 | 2;
    *(undefined8 *)(lVar2 + 0x2108) = 0;
    *(undefined4 *)(lVar2 + 0x2110) = 0;
  }
  if (DAT_1803fa608 != 0) {
    iVar8 = *(int *)(DAT_1803fa608 + 0x20);
  }
  if ((((*(char *)(lVar2 + 0x150) == '\0') || (*(int *)(lVar2 + 0x154) != iVar8)) ||
      (DAT_180380958 <= (float)((uint)(*(float *)(lVar2 + 0x20f8) - *param_2) & _DAT_1803817c0))) ||
     (DAT_180380958 <= (float)((uint)(*(float *)(lVar2 + 0x20fc) - param_2[1]) & _DAT_1803817c0))) {
    cVar4 = FUN_180072860(param_2,&local_60);
    if ((cVar4 == '\0') &&
       ((DAT_180423985 != '\0' || (cVar4 = FUN_1800732a0(param_2,&local_60,0), cVar4 == '\0')))) {
      local_60 = 0;
      local_58 = 0;
      pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar6 = (*pcVar3)(DAT_1803fa360,uVar5);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)FUN_18001c430(lVar6,local_50);
        local_60 = *puVar7;
        local_58 = *(undefined4 *)(puVar7 + 1);
      }
    }
    *(int *)(lVar2 + 0x154) = iVar8;
    fVar1 = param_2[1];
    *(float *)(lVar2 + 0x20f8) = *param_2;
    *(float *)(lVar2 + 0x20fc) = fVar1;
    *(undefined4 *)(lVar2 + 0x2100) = 0;
    *(undefined8 *)(lVar2 + 0x2108) = local_60;
    *(undefined4 *)(lVar2 + 0x2110) = local_58;
    *(char *)(lVar2 + 0x150) = '\x01';
    *param_1 = local_60;
    *(undefined4 *)(param_1 + 1) = local_58;
  }
  else {
    *param_1 = *(undefined8 *)(lVar2 + 0x2108);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar2 + 0x2110);
  }
  return param_1;
}


