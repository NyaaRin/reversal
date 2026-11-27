// 0x1802ab600  FUN_1802ab600
// size=2397 thunk=false
// signature: undefined FUN_1802ab600()
// status: ok


char FUN_1802ab600(float *param_1,int param_2,char *param_3,undefined1 *param_4,uint param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar2 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar18 + 0x1520) + 0xce) = 1;
  lVar18 = *(longlong *)(lVar18 + 0x1520);
  lVar10 = 0x1efc;
  if (*(int *)(lVar3 + 0x1ef8) != param_2) {
    lVar10 = 0x1eb8;
  }
  uVar5 = *(uint *)(lVar10 + lVar3);
  if ((param_5 >> 0xc & 1) == 0) {
    uVar5 = *(uint *)(lVar10 + lVar3);
  }
  uVar12 = param_5 | 0x440000;
  if ((uVar5 >> 0x11 & 1) == 0) {
    uVar12 = param_5;
  }
  uVar19 = uVar12 | 1;
  if ((uVar12 & 7) != 0) {
    uVar19 = uVar12;
  }
  if ((uVar19 & 0x3f0) == 0) {
    uVar12 = 0x20;
    if ((uVar5 & 8) != 0) {
      uVar12 = 0x10;
    }
    uVar19 = uVar12 | uVar19;
  }
  lVar10 = *(longlong *)(lVar3 + 0x1528);
  if ((((uVar19 >> 0xb & 1) == 0) || (lVar10 == 0)) ||
     (*(longlong *)(lVar10 + 0x3c0) != *(longlong *)(lVar18 + 0x3c0))) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
    *(longlong *)(lVar3 + 0x1528) = lVar18;
  }
  bVar20 = false;
  cVar21 = '\0';
  cVar6 = FUN_18026f180(param_1,param_2);
  if (*(char *)(lVar3 + 0x2298) != '\0') {
    if ((((uVar19 >> 9 & 1) != 0) && ((*(byte *)(lVar3 + 0x229c) & 4) == 0)) &&
       (cVar7 = FUN_18026ee60(0x80), cVar7 != '\0')) {
      cVar6 = '\x01';
      FUN_18026ec90(param_2);
      if ((*(float *)(lVar3 + 0x1588) - *(float *)(lVar3 + 0x40) <= DAT_180380b10) &&
         (DAT_180380b10 <= *(float *)(lVar3 + 0x1588))) {
        bVar20 = true;
        *(int *)(lVar3 + 9000) = param_2;
        cVar21 = '\x01';
        FUN_1802827b0(lVar18,0);
      }
    }
    if ((*(int *)(lVar3 + 0x2320) == param_2) && ((*(uint *)(lVar3 + 0x2314) & 0x2000) != 0)) {
      cVar6 = '\x01';
    }
  }
  if (bVar23) {
    *(longlong *)(lVar3 + 0x1528) = lVar10;
  }
  iVar22 = -1;
  iVar14 = param_2;
  if ((uVar19 >> 0x15 & 1) != 0) {
    iVar14 = 0;
  }
  if (cVar6 != '\0') {
    iVar16 = -1;
    iVar17 = -1;
    if ((uVar19 & 1) != 0) {
      bVar8 = FUN_18027bce0(0,0,iVar14);
      iVar16 = bVar8 - 1;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(char *)(*(longlong *)(lVar2 + 0xec0) + 0xb4e) != '\0') &&
         (cVar7 = FUN_18027deb0(0x290,iVar14), iVar17 = -1, cVar7 != '\0')) {
        iVar17 = 0;
      }
    }
    if ((uVar19 & 2) != 0) {
      cVar7 = FUN_18027bce0(1,0,iVar14);
      if ((cVar7 != '\0') && (iVar16 == -1)) {
        iVar16 = 1;
      }
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (((*(char *)(*(longlong *)(lVar2 + 0xec0) + 0xb4f) != '\0') &&
          (cVar7 = FUN_18027deb0(0x291,iVar14), cVar7 != '\0')) && (iVar17 == -1)) {
        iVar17 = 1;
      }
    }
    if ((uVar19 & 4) != 0) {
      cVar7 = FUN_18027bce0(2,0,iVar14);
      if ((cVar7 != '\0') && (iVar16 == -1)) {
        iVar16 = 2;
      }
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (((*(char *)(*(longlong *)(lVar2 + 0xec0) + 0xb50) != '\0') &&
          (cVar7 = FUN_18027deb0(0x292,iVar14), cVar7 != '\0')) && (iVar17 == -1)) {
        iVar17 = 2;
      }
    }
    if (((uVar19 >> 0x10 & 1) == 0) ||
       (((*(char *)(lVar3 + 0x11c) == '\0' && (*(char *)(lVar3 + 0x11d) == '\0')) &&
        (*(char *)(lVar3 + 0x11e) == '\0')))) {
      if ((iVar16 == -1) || (*(int *)(lVar3 + 0x1594) == param_2)) {
        if ((char)uVar19 < '\0') goto LAB_1802aba7e;
      }
      else {
        if ((uVar19 >> 0x14 & 1) == 0) {
          FUN_18027dff0(iVar16 + 0x290,param_2);
        }
        uVar15 = (undefined1)iVar16;
        if ((uVar19 & 0x60) != 0) {
          FUN_18026ea90(param_2,lVar18);
          *(undefined1 *)(lVar3 + 0x15a7) = uVar15;
          if ((uVar19 >> 0x12 & 1) == 0) {
            FUN_180282e10(param_2,lVar18);
            uVar13 = 0;
          }
          else {
            if ((uVar19 >> 0x16 & 1) != 0) goto LAB_1802ab9e4;
            uVar13 = 1;
          }
          FUN_1802827b0(lVar18,uVar13);
        }
LAB_1802ab9e4:
        if (((uVar19 & 0x10) != 0) ||
           (((uVar19 >> 8 & 1) != 0 && (*(short *)(lVar3 + 0xb3a + (longlong)iVar16 * 2) == 2)))) {
          bVar20 = true;
          lVar10 = lVar18;
          if ((uVar19 >> 0x11 & 1) != 0) {
            lVar10 = 0;
          }
          cVar21 = '\x01';
          iVar16 = 0;
          if ((uVar19 >> 0x11 & 1) == 0) {
            iVar16 = param_2;
          }
          FUN_18026ea90(iVar16,lVar10);
          *(undefined1 *)(lVar3 + 0x15a7) = uVar15;
          if ((uVar19 >> 0x12 & 1) == 0) {
            FUN_180282e10(param_2,lVar18);
            uVar13 = 0;
          }
          else {
            if ((uVar19 >> 0x16 & 1) != 0) goto LAB_1802aba59;
            uVar13 = 1;
          }
          FUN_1802827b0(lVar18,uVar13);
        }
LAB_1802aba59:
        if ((char)uVar19 < '\0') {
          if ((uVar19 >> 0x11 & 1) == 0) {
            FUN_18026ea90(param_2,lVar18);
          }
          *(undefined1 *)(lVar3 + 0x15a7) = uVar15;
LAB_1802aba7e:
          if (iVar17 != -1) {
            if (((uVar5 & 8) == 0) ||
               (*(float *)(lVar3 + 0xba0 + (longlong)iVar17 * 4) < *(float *)(lVar3 + 0x94))) {
              bVar20 = true;
              cVar21 = '\x01';
            }
            if ((uVar19 >> 0x12 & 1) == 0) {
              FUN_180282e10(param_2,lVar18);
            }
            FUN_18026ea90(0,0);
          }
        }
      }
      if ((*(int *)(lVar3 + 0x1594) != param_2) || ((uVar5 & 8) == 0)) goto LAB_1802abb5b;
      cVar7 = *(char *)(lVar3 + 0x15a7);
      lVar10 = (longlong)cVar7;
      if (*(float *)(lVar3 + 0xb8c + lVar10 * 4) <= 0.0) goto LAB_1802abb5b;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar2 + 0xec0);
      if ((*(char *)(lVar10 + 0x108 + lVar4) == '\0') ||
         (fVar25 = *(float *)(lVar4 + 0xb8c + lVar10 * 4), fVar25 < 0.0)) goto LAB_1802abb5b;
      if (fVar25 == 0.0) goto LAB_1802abb9e;
      fVar26 = *(float *)(lVar4 + 0x94);
      if ((fVar25 <= fVar26) || (fVar24 = fVar25 - *(float *)(lVar4 + 0x40), fVar25 <= fVar24))
      goto LAB_1802abb5b;
      fVar1 = *(float *)(lVar4 + 0x98);
      if (0.0 < fVar1) {
        if (fVar26 <= fVar24) {
          iVar17 = (int)((fVar24 - fVar26) / fVar1);
        }
        else {
          iVar17 = -1;
        }
        if (0 < (int)((fVar25 - fVar26) / fVar1) - iVar17) goto LAB_1802abb9e;
        goto LAB_1802abb5b;
      }
      if (fVar26 <= fVar24) goto LAB_1802abb5b;
LAB_1802abb9e:
      cVar7 = FUN_18027deb0(cVar7 + 0x290,iVar14);
      if (cVar7 == '\0') goto LAB_1802abb5b;
      cVar21 = '\x01';
    }
    else {
LAB_1802abb5b:
      if (!bVar20) goto LAB_1802abbc5;
    }
    if (*(char *)(lVar3 + 0x76) != '\0') {
      *(undefined1 *)(lVar3 + 0x2068) = 0;
    }
  }
LAB_1802abbc5:
  if ((uVar5 & 0x40) == 0) {
    if ((((*(int *)(lVar3 + 0x206c) == param_2) && (*(char *)(lVar3 + 0x2068) != '\0')) &&
        (*(char *)(lVar3 + 0x2069) != '\0')) && ((uVar19 >> 0x13 & 1) == 0)) {
      cVar6 = '\x01';
    }
    if (*(int *)(lVar3 + 0x2088) == param_2) {
      bVar23 = *(int *)(lVar3 + 0x208c) == param_2;
      iVar17 = *(int *)(lVar3 + 0x2084);
      if ((!bVar23) && ((uVar5 & 8) != 0)) {
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
          lVar10 = *(longlong *)(lVar2 + 0xec0) + 0xc0;
          if (*(char *)(lVar2 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
        }
        else {
          lVar10 = *(longlong *)(lVar2 + 0xec0) + 0xc0;
        }
        lVar4 = *(longlong *)(lVar2 + 0xec0);
        uVar13 = 0x27d;
        if (*(char *)(lVar3 + 0x71) != '\0') {
          uVar13 = 0x27b;
        }
        lVar11 = FUN_180267330(uVar13);
        fVar25 = *(float *)(lVar4 + 0x1f8);
        fVar26 = *(float *)(lVar10 + 0x128);
        if (*(float *)(lVar10 + 0x128) <= fVar25) {
          fVar26 = fVar25;
        }
        if (fVar26 <= *(float *)(lVar11 + 4)) {
          fVar26 = *(float *)(lVar11 + 4);
        }
        if (fVar26 == 0.0) {
          iVar22 = 1;
        }
        else {
          fVar25 = fVar26 - *(float *)(lVar3 + 0x40);
          if (fVar25 < fVar26) {
            fVar24 = *(float *)(lVar3 + 0x98);
            fVar1 = *(float *)(lVar3 + 0x94);
            if (0.0 < fVar24) {
              if (fVar1 <= fVar25) {
                iVar16 = (int)((fVar25 - fVar1) / fVar24);
              }
              else {
                iVar16 = -1;
              }
              if (fVar1 <= fVar26) {
                iVar22 = (int)((fVar26 - fVar1) / fVar24);
              }
              iVar22 = iVar22 - iVar16;
            }
            else {
              if ((fVar1 <= fVar25) || (fVar26 < fVar1)) goto LAB_1802abcc5;
              iVar22 = 1;
            }
          }
          else {
LAB_1802abcc5:
            iVar22 = 0;
          }
        }
        bVar23 = 0 < iVar22;
      }
      if ((iVar17 == param_2) || (bVar23)) {
        cVar21 = '\x01';
        FUN_18026ea90(param_2,lVar18);
        *(undefined4 *)(lVar3 + 0x15b4) = *(undefined4 *)(lVar3 + 0x20c0);
        if ((uVar19 >> 0x12 & 1) == 0) {
          if ((*(byte *)(lVar3 + 0x2090) & 0x10) == 0) {
            FUN_180282e10(param_2,lVar18);
            goto LAB_1802abd64;
          }
        }
        else {
LAB_1802abd64:
          if ((*(byte *)(lVar3 + 0x2090) & 0x10) == 0) goto LAB_1802abd7b;
        }
        *(undefined1 *)(lVar3 + 0x15a6) = 1;
      }
    }
  }
LAB_1802abd7b:
  uVar15 = 0;
  if (*(int *)(lVar3 + 0x1594) != param_2) goto LAB_1802abefa;
  if (*(int *)(lVar3 + 0x15b4) == 1) {
    if (*(char *)(lVar3 + 0x15a0) != '\0') {
      fVar25 = *param_1;
      *(float *)(lVar3 + 0x15b0) = *(float *)(lVar3 + 0x104) - param_1[1];
      *(float *)(lVar3 + 0x15ac) = *(float *)(lVar3 + 0x100) - fVar25;
    }
    cVar7 = *(char *)(lVar3 + 0x15a7);
    lVar18 = (longlong)cVar7;
    if (cVar7 == -1) {
LAB_1802abeb1:
      FUN_18026ea90(0,0);
    }
    else {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(char *)(lVar18 + 0x108 + *(longlong *)(lVar2 + 0xec0)) == '\0') ||
         (cVar9 = FUN_18027deb0(cVar7 + 0x290,iVar14), cVar9 == '\0')) {
        if ((((cVar6 != '\0') && ((uVar19 & 0x20) != 0)) || ((uVar19 & 0x40) != 0)) &&
           (*(char *)(lVar3 + 0x2298) == '\0')) {
          if ((((uVar19 >> 8 & 1) == 0) || (*(char *)(lVar18 + 0xb4e + lVar3) == '\0')) ||
             (*(short *)(lVar3 + 0xb44 + lVar18 * 2) != 2)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (((uVar5 & 8) == 0) ||
             (*(float *)(lVar3 + 0xba0 + lVar18 * 4) < *(float *)(lVar3 + 0x94))) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
          }
          cVar7 = FUN_18027deb0(cVar7 + 0x290,iVar14);
          if (((!bVar23) && (!bVar20)) && (cVar7 != '\0')) {
            cVar21 = '\x01';
          }
        }
        goto LAB_1802abeb1;
      }
      uVar15 = 1;
    }
    if (((uVar19 >> 0x12 & 1) == 0) && (*(char *)(lVar3 + 0x76) != '\0')) {
      *(undefined1 *)(lVar3 + 0x2068) = 0;
    }
  }
  else if (*(int *)(lVar3 + 0x15b4) - 2U < 2) {
    if (*(int *)(lVar3 + 0x2088) == param_2) {
      uVar15 = 1;
    }
    else {
      FUN_18026ea90(0,0);
    }
  }
  if (cVar21 != '\0') {
    *(undefined1 *)(lVar3 + 0x15a3) = 1;
  }
LAB_1802abefa:
  if ((*(int *)(lVar3 + 0x20a8) == param_2) && ((uVar5 & 0x40) == 0)) {
    cVar6 = '\x01';
  }
  if (param_3 != (char *)0x0) {
    *param_3 = cVar6;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar15;
  }
  return cVar21;
}


