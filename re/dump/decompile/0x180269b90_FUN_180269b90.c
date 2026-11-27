// 0x180269b90  FUN_180269b90
// size=321 thunk=false
// signature: undefined FUN_180269b90()
// status: ok


void FUN_180269b90(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 0x10);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  fVar8 = (float)(*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x18) +
                 (double)fVar1 * (double)param_2);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar4 = *(longlong *)(lVar3 + 0x1520);
  fVar2 = *(float *)(lVar4 + 0x11c);
  *(float *)(lVar4 + 0x11c) = fVar8;
  fVar7 = fVar8 - *(float *)(lVar3 + 0xcd8);
  fVar5 = *(float *)(lVar4 + 0x134);
  if (*(float *)(lVar4 + 0x134) <= fVar7) {
    fVar5 = fVar7;
  }
  *(float *)(lVar4 + 0x134) = fVar5;
  *(float *)(lVar4 + 0x124) = fVar8 - fVar1;
  *(float *)(lVar4 + 0x14c) = fVar1 - *(float *)(lVar3 + 0xcd8);
  if (*(longlong *)(lVar4 + 0x1c8) != 0) {
    *(float *)(*(longlong *)(lVar4 + 0x1c8) + 0x1c) = fVar8;
  }
  lVar3 = *(longlong *)(lVar3 + 0x2368);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x23a) != '\0') {
      FUN_1802a4b70(lVar3);
    }
    iVar6 = (int)((fVar8 - fVar2) / fVar1 + DAT_180380ac0);
    if ((0 < iVar6) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
      *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + iVar6;
      *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + iVar6;
    }
    *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(lVar4 + 0x11c);
  }
  return;
}


