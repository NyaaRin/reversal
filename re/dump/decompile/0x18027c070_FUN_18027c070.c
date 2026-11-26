// 0x18027c070  FUN_18027c070
// size=1520 thunk=false
// signature: undefined FUN_18027c070()
// status: ok


void FUN_18027c070(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  if ((*(byte *)(lVar4 + 0x28) & 0x40) != 0) {
    FUN_180267b20(lVar4 + 0x28);
  }
  uVar13 = DAT_180380bb0;
  cVar5 = *(char *)(lVar4 + 0x108);
  uVar14 = DAT_180380bb0;
  if (cVar5 == '\0') {
    uVar14 = 0;
  }
  pcVar8 = (char *)FUN_180267330(0x290);
  *(undefined4 *)(pcVar8 + 0xc) = uVar14;
  *pcVar8 = cVar5;
  cVar5 = *(char *)(lVar4 + 0x109);
  uVar14 = uVar13;
  if (cVar5 == '\0') {
    uVar14 = 0;
  }
  pcVar8 = (char *)FUN_180267330(0x291);
  *pcVar8 = cVar5;
  *(undefined4 *)(pcVar8 + 0xc) = uVar14;
  cVar5 = *(char *)(lVar4 + 0x10a);
  uVar14 = uVar13;
  if (cVar5 == '\0') {
    uVar14 = 0;
  }
  pcVar8 = (char *)FUN_180267330(0x292);
  *pcVar8 = cVar5;
  *(undefined4 *)(pcVar8 + 0xc) = uVar14;
  cVar5 = *(char *)(lVar4 + 0x10b);
  uVar14 = uVar13;
  if (cVar5 == '\0') {
    uVar14 = 0;
  }
  pcVar8 = (char *)FUN_180267330(0x293);
  *pcVar8 = cVar5;
  *(undefined4 *)(pcVar8 + 0xc) = uVar14;
  cVar5 = *(char *)(lVar4 + 0x10c);
  if (cVar5 == '\0') {
    uVar13 = 0;
  }
  pcVar8 = (char *)FUN_180267330(0x294);
  *pcVar8 = cVar5;
  *(undefined4 *)(pcVar8 + 0xc) = uVar13;
  fVar2 = *(float *)(lVar4 + 0x114);
  lVar9 = FUN_180267330(0x295);
  *(float *)(lVar9 + 0xc) = fVar2;
  *(bool *)lVar9 = fVar2 != 0.0;
  fVar2 = *(float *)(lVar4 + 0x110);
  lVar9 = FUN_180267330(0x296);
  *(float *)(lVar9 + 0xc) = fVar2;
  *(bool *)lVar9 = fVar2 != 0.0;
  uVar10 = *(uint *)(lVar4 + 0x120);
  uVar7 = FUN_18027bf60();
  *(uint *)(lVar4 + 0x120) = uVar7;
  *(byte *)(lVar4 + 0x11c) = (byte)(uVar7 >> 0xc) & 1;
  *(byte *)(lVar4 + 0x11d) = (byte)(uVar7 >> 0xd) & 1;
  *(byte *)(lVar4 + 0x11e) = (byte)(uVar7 >> 0xe) & 1;
  *(byte *)(lVar4 + 0x11f) = (byte)(uVar7 >> 0xf) & 1;
  if (uVar10 != uVar7) {
    *(undefined8 *)(lVar4 + 0x15e0) = *(undefined8 *)(lVar4 + 0x10);
  }
  if ((uVar10 != *(uint *)(lVar4 + 0x120)) && (uVar10 == 0)) {
    *(undefined8 *)(lVar4 + 0x15e8) = *(undefined8 *)(lVar4 + 0x10);
  }
  if ((*(byte *)(lVar4 + 0x2c) & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x8a4) = 0;
    *(undefined4 *)(lVar4 + 0x8b0) = 0;
    *(undefined1 *)(lVar4 + 0x8b4) = 0;
    *(undefined4 *)(lVar4 + 0x8c0) = 0;
    *(undefined1 *)(lVar4 + 0x8c4) = 0;
    *(undefined4 *)(lVar4 + 0x8d0) = 0;
    *(undefined1 *)(lVar4 + 0x8d4) = 0;
    *(undefined4 *)(lVar4 + 0x8e0) = 0;
    *(undefined1 *)(lVar4 + 0x8e4) = 0;
    *(undefined4 *)(lVar4 + 0x8f0) = 0;
    *(undefined1 *)(lVar4 + 0x8f4) = 0;
    *(undefined4 *)(lVar4 + 0x900) = 0;
    *(undefined1 *)(lVar4 + 0x904) = 0;
    *(undefined4 *)(lVar4 + 0x910) = 0;
    *(undefined1 *)(lVar4 + 0x914) = 0;
    *(undefined4 *)(lVar4 + 0x920) = 0;
    *(undefined1 *)(lVar4 + 0x924) = 0;
    *(undefined4 *)(lVar4 + 0x930) = 0;
    *(undefined1 *)(lVar4 + 0x934) = 0;
    *(undefined4 *)(lVar4 + 0x940) = 0;
    *(undefined1 *)(lVar4 + 0x944) = 0;
    *(undefined4 *)(lVar4 + 0x950) = 0;
    *(undefined1 *)(lVar4 + 0x954) = 0;
    *(undefined4 *)(lVar4 + 0x960) = 0;
    *(undefined1 *)(lVar4 + 0x964) = 0;
    *(undefined4 *)(lVar4 + 0x970) = 0;
    *(undefined1 *)(lVar4 + 0x974) = 0;
    *(undefined4 *)(lVar4 + 0x980) = 0;
    *(undefined1 *)(lVar4 + 0x984) = 0;
    *(undefined4 *)(lVar4 + 0x990) = 0;
    *(undefined1 *)(lVar4 + 0x994) = 0;
    *(undefined4 *)(lVar4 + 0x9a0) = 0;
    *(undefined1 *)(lVar4 + 0x9a4) = 0;
    *(undefined4 *)(lVar4 + 0x9b0) = 0;
    *(undefined1 *)(lVar4 + 0x9b4) = 0;
    *(undefined4 *)(lVar4 + 0x9c0) = 0;
    *(undefined1 *)(lVar4 + 0x9c4) = 0;
    *(undefined4 *)(lVar4 + 0x9d0) = 0;
    *(undefined1 *)(lVar4 + 0x9d4) = 0;
    *(undefined4 *)(lVar4 + 0x9e0) = 0;
    *(undefined1 *)(lVar4 + 0x9e4) = 0;
    *(undefined4 *)(lVar4 + 0x9f0) = 0;
    *(undefined1 *)(lVar4 + 0x9f4) = 0;
    *(undefined4 *)(lVar4 + 0xa00) = 0;
    *(undefined1 *)(lVar4 + 0xa04) = 0;
    *(undefined4 *)(lVar4 + 0xa10) = 0;
    *(undefined1 *)(lVar4 + 0xa14) = 0;
    *(undefined4 *)(lVar4 + 0xa20) = 0;
  }
  fVar2 = DAT_180381384;
  lVar9 = 0x200;
  uVar10 = 0x200;
  lVar11 = 0x200;
  do {
    fVar3 = *(float *)(lVar4 + -0x1ed8 + lVar11 * 0x10);
    *(float *)(lVar4 + -0x1ed4 + lVar11 * 0x10) = fVar3;
    fVar12 = fVar2;
    if (*(char *)(lVar4 + -0x1edc + lVar11 * 0x10) == '\0') {
LAB_18027c3d0:
      *(float *)(lVar4 + -0x1ed8 + lVar11 * 0x10) = fVar12;
      if (fVar12 == 0.0) goto LAB_18027c3e1;
    }
    else {
      if (0.0 <= fVar3) {
        fVar12 = fVar3 + *(float *)(lVar4 + 0x40);
        goto LAB_18027c3d0;
      }
      *(undefined4 *)(lVar4 + -0x1ed8 + lVar11 * 0x10) = 0;
LAB_18027c3e1:
      if ((uVar10 < 0x278) || (uVar10 - 0x297 < 4)) {
        *(undefined8 *)(lVar4 + 0x15f0) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    lVar1 = lVar11 + 1;
    fVar3 = *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10);
    *(float *)(lVar4 + -0x1ed4 + lVar1 * 0x10) = fVar3;
    fVar12 = fVar2;
    if (*(char *)(lVar4 + -0x1edc + lVar1 * 0x10) == '\0') {
LAB_18027c43e:
      *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = fVar12;
      if (fVar12 == 0.0) goto LAB_18027c44f;
    }
    else {
      if (0.0 <= fVar3) {
        fVar12 = fVar3 + *(float *)(lVar4 + 0x40);
        goto LAB_18027c43e;
      }
      *(undefined4 *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = 0;
LAB_18027c44f:
      if ((uVar10 < 0x277) || (uVar10 - 0x296 < 4)) {
        *(undefined8 *)(lVar4 + 0x15f0) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    lVar1 = lVar11 + 2;
    fVar3 = *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10);
    *(float *)(lVar4 + -0x1ed4 + lVar1 * 0x10) = fVar3;
    fVar12 = fVar2;
    if (*(char *)(lVar4 + -0x1edc + lVar1 * 0x10) == '\0') {
LAB_18027c4ac:
      *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = fVar12;
      if (fVar12 == 0.0) goto LAB_18027c4bd;
    }
    else {
      if (0.0 <= fVar3) {
        fVar12 = fVar3 + *(float *)(lVar4 + 0x40);
        goto LAB_18027c4ac;
      }
      *(undefined4 *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = 0;
LAB_18027c4bd:
      if ((uVar10 < 0x276) || (uVar10 - 0x295 < 4)) {
        *(undefined8 *)(lVar4 + 0x15f0) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    lVar1 = lVar11 + 3;
    fVar3 = *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10);
    *(float *)(lVar4 + -0x1ed4 + lVar1 * 0x10) = fVar3;
    fVar12 = fVar2;
    if (*(char *)(lVar4 + -0x1edc + lVar1 * 0x10) == '\0') {
LAB_18027c51a:
      *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = fVar12;
      if (fVar12 == 0.0) goto LAB_18027c52b;
    }
    else {
      if (0.0 <= fVar3) {
        fVar12 = fVar3 + *(float *)(lVar4 + 0x40);
        goto LAB_18027c51a;
      }
      *(undefined4 *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = 0;
LAB_18027c52b:
      if ((uVar10 < 0x275) || (uVar10 - 0x294 < 4)) {
        *(undefined8 *)(lVar4 + 0x15f0) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    lVar1 = lVar11 + 4;
    fVar3 = *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10);
    *(float *)(lVar4 + -0x1ed4 + lVar1 * 0x10) = fVar3;
    fVar12 = fVar2;
    if (*(char *)(lVar4 + -0x1edc + lVar1 * 0x10) == '\0') {
LAB_18027c588:
      *(float *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = fVar12;
      if (fVar12 == 0.0) goto LAB_18027c599;
    }
    else {
      if (0.0 <= fVar3) {
        fVar12 = fVar3 + *(float *)(lVar4 + 0x40);
        goto LAB_18027c588;
      }
      *(undefined4 *)(lVar4 + -0x1ed8 + lVar1 * 0x10) = 0;
LAB_18027c599:
      if ((uVar10 < 0x274) || (uVar10 - 0x293 < 4)) {
        *(undefined8 *)(lVar4 + 0x15f0) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    uVar10 = uVar10 + 5;
    lVar11 = lVar11 + 5;
    if (0x29a < (int)uVar10) {
      do {
        *(undefined4 *)(lVar4 + -500 + lVar9 * 0xc) = *(undefined4 *)(lVar4 + -0x1f0 + lVar9 * 0xc);
        cVar5 = *(char *)(lVar4 + -0x1edc + lVar9 * 0x10);
        if (cVar5 == '\0') {
          *(undefined4 *)(lVar4 + -0x1f0 + lVar9 * 0xc) = 0xffffffff;
          cVar5 = *(char *)(lVar4 + -0x1edc + lVar9 * 0x10);
        }
        if ((*(char *)(lVar4 + -0x1eb + lVar9 * 0xc) == '\0') || (cVar5 == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        lVar11 = lVar9 + 1;
        *(undefined1 *)(lVar4 + -0x1eb + lVar9 * 0xc) = uVar6;
        *(undefined1 *)(lVar4 + -0x1ec + lVar9 * 0xc) = uVar6;
        lVar9 = lVar11;
      } while (lVar11 != 0x29b);
      FUN_18027b3d0(lVar4 + 0x1d50);
      return;
    }
  } while( true );
}


