// 0x180272c00  FUN_180272c00
// size=569 thunk=false
// signature: undefined FUN_180272c00()
// status: ok


void FUN_180272c00(float *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = 0;
  lVar7 = *(longlong *)(lVar7 + 0xec0);
  lVar8 = *(longlong *)(lVar7 + 0x1540);
  lVar10 = 0;
  if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x14) & 0x200) == 0)) {
    lVar10 = lVar8;
  }
  fVar15 = *(float *)(lVar7 + 0xc9c);
  fVar1 = *(float *)(lVar7 + 0xcec);
  fVar2 = *(float *)(lVar7 + 0xcf0);
  fVar3 = fVar1;
  if (fVar1 <= fVar15) {
    fVar3 = fVar15;
  }
  uVar12 = *(int *)(lVar7 + 0x14c0) - 1;
  fVar4 = fVar2;
  if (fVar2 <= fVar15) {
    fVar4 = fVar15;
  }
  if (-1 < (int)uVar12) {
    lVar11 = lVar10;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x14c8) + (ulonglong)uVar12 * 8);
      lVar10 = lVar11;
      if (((*(char *)(lVar9 + 0xcd) != '\0') && (*(char *)(lVar9 + 0xd4) == '\0')) &&
         ((*(uint *)(lVar9 + 0x14) >> 9 & 1) == 0)) {
        fVar15 = fVar3;
        fVar14 = fVar4;
        if ((*(uint *)(lVar9 + 0x14) & 0x42) != 0) {
          fVar15 = fVar1;
          fVar14 = fVar2;
        }
        fVar5 = *param_1;
        if (((*(float *)(lVar9 + 0x218) - fVar15 <= fVar5) &&
            (fVar6 = param_1[1], *(float *)(lVar9 + 0x21c) - fVar14 <= fVar6)) &&
           ((fVar5 < fVar15 + *(float *)(lVar9 + 0x220) &&
            (fVar6 < fVar14 + *(float *)(lVar9 + 0x224))))) {
          if (*(short *)(lVar9 + 0x288) != 0) {
            fVar15 = (float)(int)*(short *)(lVar9 + 0x28c) + *(float *)(lVar9 + 0x28);
            if (((fVar15 <= fVar5) &&
                (fVar14 = (float)(int)*(short *)(lVar9 + 0x28e) + *(float *)(lVar9 + 0x2c),
                fVar14 <= fVar6)) &&
               ((fVar5 < (float)(int)*(short *)(lVar9 + 0x288) + fVar15 &&
                (fVar6 < (float)(int)*(short *)(lVar9 + 0x28a) + fVar14)))) goto LAB_180272e05;
          }
          lVar10 = lVar9;
          if (lVar11 != 0) {
            lVar10 = lVar11;
          }
          if ((lVar13 == 0) &&
             ((lVar8 == 0 || (*(longlong *)(lVar9 + 0x3c0) != *(longlong *)(lVar8 + 0x3c0))))) {
            lVar13 = lVar9;
          }
          if ((lVar10 != 0) && (lVar13 != 0)) break;
        }
      }
LAB_180272e05:
      uVar12 = uVar12 - 1;
      lVar11 = lVar10;
    } while (-1 < (int)uVar12);
  }
  *param_3 = lVar10;
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar13;
  }
  return;
}


