// 0x18027c660  FUN_18027c660
// size=1250 thunk=false
// signature: undefined FUN_18027c660()
// status: ok


void FUN_18027c660(void)

{
  float *pfVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  float fVar5;
  void *pvVar6;
  undefined1 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  undefined2 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar13 = (ulonglong)_tls_index;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar14 + 0xec0);
  if ((*(char *)(lVar4 + 0x11d) == '\0') || (*(char *)(lVar4 + 0x79) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  pfVar1 = (float *)(lVar4 + 0x100);
  *(undefined1 *)(lVar4 + 0xb8a) = uVar7;
  pfVar10 = pfVar1;
  if (pfVar1 == (float *)0x0) {
    if (*(char *)(lVar14 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pfVar10 = (float *)(*(longlong *)(lVar14 + 0xec0) + 0x100);
  }
  fVar5 = DAT_180381444;
  if ((DAT_180381444 <= *pfVar10) && (DAT_180381444 <= pfVar10[1])) {
    fVar16 = *(float *)(lVar4 + 0x104);
    iVar12 = (int)fVar16;
    if ((fVar16 < 0.0) && ((float)iVar12 != fVar16)) {
      iVar12 = iVar12 + -1;
    }
    fVar16 = *pfVar1;
    iVar8 = (int)fVar16;
    if ((fVar16 < 0.0) && ((float)iVar8 != fVar16)) {
      iVar8 = iVar8 + -1;
    }
    *(float *)(lVar4 + 0x2510) = (float)iVar8;
    *(float *)(lVar4 + 0x2514) = (float)iVar12;
    *pfVar1 = (float)iVar8;
    *(float *)(lVar4 + 0x104) = (float)iVar12;
  }
  pfVar10 = pfVar1;
  if (pfVar1 == (float *)0x0) {
    if (*(char *)(lVar14 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pfVar10 = (float *)(*(longlong *)(lVar14 + 0xec0) + 0x100);
  }
  if ((fVar5 <= *pfVar10) && (fVar5 <= pfVar10[1])) {
    pfVar10 = (float *)(lVar4 + 0xad8);
    pfVar9 = pfVar10;
    if (pfVar10 == (float *)0x0) {
      if (*(char *)(lVar14 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pfVar9 = (float *)(*(longlong *)(lVar14 + 0xec0) + 0x100);
    }
    if ((fVar5 <= *pfVar9) && (fVar5 <= pfVar9[1])) {
      fVar15 = *pfVar1 - *pfVar10;
      fVar16 = *(float *)(lVar4 + 0x104) - *(float *)(lVar4 + 0xadc);
      goto LAB_18027c80d;
    }
  }
  fVar15 = 0.0;
  fVar16 = 0.0;
LAB_18027c80d:
  *(float *)(lVar4 + 0xec) = fVar15;
  *(float *)(lVar4 + 0xf0) = fVar16;
  fVar17 = DAT_180380e28;
  if (*(int *)(lVar4 + 0x118) == 0) {
    fVar17 = DAT_180380d30;
  }
  if (fVar17 * fVar17 < fVar15 * fVar15 + fVar16 * fVar16) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)(lVar4 + 0x40) + *(float *)(lVar4 + 0x250c);
  }
  *(float *)(lVar4 + 0x250c) = fVar16;
  if ((*(float *)(lVar4 + 0xec) != 0.0) || (*(float *)(lVar4 + 0xf0) != 0.0)) {
    *(undefined1 *)(lVar4 + 0x2069) = 0;
  }
  pvVar6 = ThreadLocalStoragePointer;
  fVar16 = DAT_180381384;
  lVar14 = 0;
  do {
    if ((*(char *)(lVar4 + 0x108 + lVar14) == '\0') ||
       (pfVar10 = (float *)(lVar4 + 0xb8c + lVar14 * 4), 0.0 < *pfVar10 || *pfVar10 == 0.0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    *(undefined1 *)(lVar4 + 0xb30 + lVar14) = uVar7;
    lVar2 = lVar14 * 4 + 0xb64;
    *(undefined2 *)(lVar4 + 0xb3a + lVar14 * 2) = 0;
    if ((*(char *)(lVar4 + 0x108 + lVar14) != '\0') ||
       (*(float *)(lVar14 * 4 + 0xb8c + lVar4) < 0.0)) {
      *(undefined1 *)(lVar4 + 0xb4e + lVar14) = 0;
    }
    else {
      *(undefined1 *)(lVar4 + 0xb4e + lVar14) = 1;
      *(undefined8 *)(lVar4 + 0xb58 + lVar14 * 8) = *(undefined8 *)(lVar4 + 0x10);
    }
    fVar15 = *(float *)(lVar4 + 0x28 + lVar2);
    *(float *)(lVar4 + 0xba0 + lVar14 * 4) = fVar15;
    fVar17 = fVar16;
    if (*(char *)(lVar4 + 0x108 + lVar14) != '\0') {
      if (0.0 <= fVar15) {
        fVar17 = fVar15 + *(float *)(lVar4 + 0x40);
      }
      else {
        fVar17 = 0.0;
      }
    }
    *(float *)(lVar4 + 0x28 + lVar2) = fVar17;
    if (*(char *)(lVar4 + 0xb30 + lVar14) == '\0') {
      if (*(char *)(lVar4 + 0x108 + lVar14) != '\0') {
        pfVar10 = pfVar1;
        if (pfVar1 == (float *)0x0) {
          lVar2 = *(longlong *)((longlong)pvVar6 + uVar13 * 8);
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pfVar10 = (float *)(*(longlong *)(lVar2 + 0xec0) + 0x100);
        }
        if ((*pfVar10 < fVar5) || (pfVar10[1] < fVar5)) {
          fVar15 = 0.0;
        }
        else {
          fVar17 = *(float *)(lVar4 + 0x104) - *(float *)(lVar4 + 0xae4 + lVar14 * 8);
          fVar15 = *pfVar1 - *(float *)(lVar4 + 0xae0 + lVar14 * 8);
          fVar15 = fVar17 * fVar17 + fVar15 * fVar15;
        }
        fVar17 = *(float *)(lVar4 + 0xbb4 + lVar14 * 4);
        if (fVar17 <= fVar15) {
          fVar17 = fVar15;
        }
        *(float *)(lVar4 + 0xbb4 + lVar14 * 4) = fVar17;
      }
    }
    else {
      if (*(float *)(lVar4 + 0x88) <=
          (float)(*(double *)(lVar4 + 0x10) - *(double *)(lVar4 + 0xb08 + lVar14 * 8))) {
LAB_18027ca13:
        *(undefined2 *)(lVar4 + 0xb44 + lVar14 * 2) = 1;
        uVar11 = 1;
      }
      else {
        pfVar10 = pfVar1;
        if (pfVar1 == (float *)0x0) {
          lVar2 = *(longlong *)((longlong)pvVar6 + uVar13 * 8);
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pfVar10 = (float *)(*(longlong *)(lVar2 + 0xec0) + 0x100);
        }
        if ((*pfVar10 < fVar5) || (pfVar10[1] < fVar5)) {
          fVar17 = 0.0;
          fVar15 = 0.0;
        }
        else {
          fVar17 = *(float *)(lVar4 + 0x100) - *(float *)(lVar4 + 0xae0 + lVar14 * 8);
          fVar15 = *(float *)(lVar4 + 0x104) - *(float *)(lVar4 + 0xae4 + lVar14 * 8);
        }
        if (*(float *)(lVar4 + 0x8c) * *(float *)(lVar4 + 0x8c) <= fVar15 * fVar15 + fVar17 * fVar17
           ) goto LAB_18027ca13;
        psVar3 = (short *)(lVar4 + 0xb44 + lVar14 * 2);
        *psVar3 = *psVar3 + 1;
        uVar11 = *(undefined2 *)(lVar4 + 0xb44 + lVar14 * 2);
      }
      *(undefined8 *)(lVar4 + 0xb08 + lVar14 * 8) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0xae0 + lVar14 * 8) = *(undefined8 *)pfVar1;
      *(undefined2 *)(lVar4 + 0xb3a + lVar14 * 2) = uVar11;
      *(undefined4 *)(lVar4 + 0xbb4 + lVar14 * 4) = 0;
    }
    *(bool *)(lVar4 + 0xb35 + lVar14) = *(short *)(lVar4 + 0xb3a + lVar14 * 2) == 2;
    if (*(char *)(lVar4 + 0xb30 + lVar14) != '\0') {
      *(undefined1 *)(lVar4 + 0x2069) = 0;
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 5) {
      return;
    }
  } while( true );
}


