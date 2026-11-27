// 0x1802a9b30  FUN_1802a9b30
// size=318 thunk=false
// signature: undefined FUN_1802a9b30()
// status: ok


void FUN_1802a9b30(int param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while( true ) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar3 + 0xec0);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x1c8);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar5 + 0xc);
    }
    if (((*(uint *)(lVar5 + 4) & 4) == 0) && (param_1 < *(int *)(lVar5 + 0x10) + -1)) {
      bVar7 = true;
      iVar8 = param_1;
      if (param_1 < 0) {
        iVar8 = *(int *)(lVar5 + 0xc);
      }
      lVar6 = *(longlong *)(lVar5 + 0x68);
      lVar10 = ((longlong)iVar8 + 1) * 0x1c;
      lVar9 = (longlong)iVar8 * 0x1c;
      if (*(char *)(lVar5 + 9) == '\0') {
        fVar11 = *(float *)(lVar10 + lVar6) - *(float *)(lVar9 + lVar6);
      }
      else {
        fVar11 = *(float *)(lVar10 + 4 + lVar6) - *(float *)(lVar9 + 4 + lVar6);
      }
      fVar13 = *(float *)(lVar5 + 0x18);
      fVar11 = (fVar13 - *(float *)(lVar5 + 0x14)) * fVar11;
    }
    else {
      fVar13 = *(float *)(lVar5 + 0x18);
      bVar7 = false;
      fVar11 = 0.0;
    }
    pfVar1 = (float *)(lVar4 + 0xcf8);
    if (((*(uint *)(lVar5 + 4) & 8) == 0) &&
       (fVar12 = fVar13 - (float)(*(int *)(lVar5 + 0x10) - param_1) * *pfVar1, fVar12 <= param_2)) {
      param_2 = fVar12;
    }
    *(float *)((longlong)param_1 * 0x1c + *(longlong *)(lVar5 + 0x68)) =
         (param_2 - *(float *)(lVar5 + 0x14)) / (fVar13 - *(float *)(lVar5 + 0x14));
    if (!bVar7) break;
    fVar13 = *pfVar1;
    param_1 = param_1 + 1;
    if (fVar13 <= fVar11) {
      fVar13 = fVar11;
    }
    param_2 = param_2 + fVar13;
  }
  return;
}


