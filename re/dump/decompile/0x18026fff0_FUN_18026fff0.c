// 0x18026fff0  FUN_18026fff0
// size=565 thunk=false
// signature: undefined FUN_18026fff0()
// status: ok


void FUN_18026fff0(void)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  plVar9 = *(longlong **)(lVar4 + 0x2060);
  plVar1 = plVar9 + *(int *)(lVar4 + 0x2058);
  fVar18 = DAT_180381308;
  fVar16 = DAT_180381308;
  fVar15 = DAT_180381454;
  fVar14 = DAT_180381454;
  for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
    lVar5 = *plVar9;
    fVar2 = *(float *)(lVar5 + 8);
    fVar3 = *(float *)(lVar5 + 0xc);
    fVar13 = fVar2 + *(float *)(lVar5 + 0x10);
    fVar17 = fVar3 + *(float *)(lVar5 + 0x14);
    if (fVar2 < fVar16) {
      fVar16 = fVar2;
    }
    if (fVar3 < fVar18) {
      fVar18 = fVar3;
    }
    if (fVar15 < fVar13) {
      fVar15 = fVar13;
    }
    if (fVar14 < fVar17) {
      fVar14 = fVar17;
    }
  }
  *(float *)(lVar4 + 0x1288) = fVar16;
  *(float *)(lVar4 + 0x128c) = fVar18;
  *(float *)(lVar4 + 0x1290) = fVar15;
  *(float *)(lVar4 + 0x1294) = fVar14;
  *(undefined4 *)(lVar4 + 0x1278) = *(undefined4 *)(lVar4 + 0xda8);
  fVar16 = DAT_180380e48;
  fVar18 = DAT_180380bb0;
  if (*(float *)(lVar4 + 0x127c) != *(float *)(lVar4 + 0xdac)) {
    uVar11 = 0;
    *(float *)(lVar4 + 0x127c) = *(float *)(lVar4 + 0xdac);
    do {
      iVar10 = (int)uVar11;
      if (iVar10 == 0) {
        uVar7 = 0x30;
      }
      else {
        fVar14 = (float)iVar10;
        fVar15 = *(float *)(lVar4 + 0x127c);
        if (fVar14 <= *(float *)(lVar4 + 0x127c)) {
          fVar15 = fVar14;
        }
        fVar15 = acosf(fVar18 - fVar15 / fVar14);
        fVar15 = ceilf(fVar16 / fVar15);
        iVar6 = (((int)fVar15 + 1) / 2) * 2;
        if (iVar6 < 4) {
          uVar7 = 4;
        }
        else {
          if (0x200 < iVar6) {
            iVar6 = 0;
          }
          uVar7 = (undefined1)iVar6;
        }
      }
      *(undefined1 *)(uVar11 + 0x1444 + lVar4) = uVar7;
      uVar11 = (ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < 0x40);
    fVar16 = cosf(DAT_1803809dc);
    *(float *)(lVar4 + 0x1440) = *(float *)(lVar4 + 0x127c) / (fVar18 - fVar16);
  }
  *(undefined4 *)(lVar4 + 0x1284) = 0;
  bVar12 = *(char *)(lVar4 + 0xda4) != '\0';
  if (bVar12) {
    *(undefined4 *)(lVar4 + 0x1284) = 1;
  }
  uVar8 = (uint)bVar12;
  if ((*(char *)(lVar4 + 0xda5) != '\0') && ((**(byte **)(lVar4 + 0x60) & 4) == 0)) {
    uVar8 = uVar8 | 2;
    *(uint *)(lVar4 + 0x1284) = uVar8;
  }
  if (*(char *)(lVar4 + 0xda6) != '\0') {
    uVar8 = uVar8 | 4;
    *(uint *)(lVar4 + 0x1284) = uVar8;
  }
  *(undefined4 *)(lVar4 + 0x1280) = 0x3f800000;
  if ((*(byte *)(lVar4 + 0x2c) & 8) != 0) {
    *(uint *)(lVar4 + 0x1284) = uVar8 | 8;
  }
  return;
}


