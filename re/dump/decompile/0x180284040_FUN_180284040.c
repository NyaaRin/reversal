// 0x180284040  FUN_180284040
// size=717 thunk=false
// signature: undefined FUN_180284040()
// status: ok


float * FUN_180284040(float *param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float local_74;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar6 + 0xec0);
  lVar4 = *(longlong *)(lVar1 + 0x2070);
  iVar3 = FUN_180283f90(param_2);
  if (iVar3 == 1) {
    lVar4 = lVar1;
    if (lVar1 == -0x100) {
      if (*(char *)(lVar6 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar6 + 0xec0);
    }
    if ((*(float *)(lVar4 + 0x100) < DAT_180381444) || (*(float *)(lVar4 + 0x104) < DAT_180381444))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar6 = 0x100;
    if (!bVar2) {
      lVar6 = 0x2510;
    }
    fVar7 = *(float *)(lVar6 + lVar1) + DAT_180380bb0;
    fVar8 = *(float *)(lVar6 + 4 + lVar1);
    goto LAB_1802842e7;
  }
  if ((((*(int *)(lVar1 + 0x1594) == 0) || (*(char *)(lVar1 + 0x15a6) == '\0')) ||
      (*(int *)(lVar1 + 0x1594) != *(int *)(lVar1 + 0x1ef8))) || ((param_2 >> 0x1a & 1) == 0)) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    if (lVar4 != 0) {
      lVar5 = (longlong)*(int *)(lVar1 + 0x207c);
      fVar8 = *(float *)(lVar4 + 0x128) + *(float *)(lVar4 + 0x3f8 + lVar5 * 0x10);
      fVar7 = *(float *)(lVar4 + 300) + *(float *)(lVar4 + 0x3fc + lVar5 * 0x10);
      fVar10 = *(float *)(lVar4 + 0x128) + *(float *)(lVar4 + 0x400 + lVar5 * 0x10);
      fVar9 = *(float *)(lVar4 + 300) + *(float *)(lVar4 + 0x404 + lVar5 * 0x10);
      goto LAB_1802841d4;
    }
  }
  else {
    fVar8 = *(float *)(lVar1 + 0x1f14);
    fVar7 = *(float *)(lVar1 + 0x1f18);
    fVar10 = *(float *)(lVar1 + 0x1f1c);
    fVar9 = *(float *)(lVar1 + 0x1f20);
    if (lVar4 != 0) {
LAB_1802841d4:
      if ((*(int *)(lVar4 + 0x290) != *(int *)(lVar1 + 4)) &&
         ((*(float *)(lVar4 + 0xa8) != DAT_180381308 || (*(float *)(lVar4 + 0xac) != DAT_180381308))
         )) {
        FUN_1802801e0(&local_78,lVar4);
        local_78 = *(float *)(lVar4 + 0x98) - local_78;
        local_74 = *(float *)(lVar4 + 0x9c) - local_74;
        fVar8 = fVar8 + local_78;
        fVar10 = fVar10 + local_78;
        fVar7 = fVar7 + local_74;
        fVar9 = fVar9 + local_74;
      }
    }
  }
  fVar11 = *(float *)(lVar1 + 0xcc4) * DAT_180380e9c;
  if (fVar10 - fVar8 <= fVar11) {
    fVar11 = fVar10 - fVar8;
  }
  fVar10 = *(float *)(lVar1 + 0xcc8);
  if (fVar9 - fVar7 <= *(float *)(lVar1 + 0xcc8)) {
    fVar10 = fVar9 - fVar7;
  }
  fVar11 = fVar11 + fVar8;
  fVar9 = fVar9 - fVar10;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = **(longlong **)(*(longlong *)(lVar6 + 0xec0) + 0x2060);
  fVar8 = *(float *)(lVar6 + 0xc);
  fVar7 = *(float *)(lVar6 + 8);
  if ((fVar8 <= fVar9) && (fVar8 = fVar8 + *(float *)(lVar6 + 0x14), fVar9 <= fVar8)) {
    fVar8 = fVar9;
  }
  if ((fVar7 <= fVar11) && (fVar7 = fVar7 + *(float *)(lVar6 + 0x10), fVar11 <= fVar7)) {
    fVar7 = fVar11;
  }
  fVar7 = (float)(int)fVar7;
  fVar8 = (float)(int)fVar8;
LAB_1802842e7:
  param_1[1] = fVar8;
  *param_1 = fVar7;
  return param_1;
}


