// 0x1802483f0  FUN_1802483f0
// size=2224 thunk=false
// signature: undefined FUN_1802483f0()
// status: ok


void FUN_1802483f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  if (*(char *)(param_1 + 0x17) != '\0') {
    lVar12 = *(longlong *)(param_1 + 0x328);
    uVar15 = 0;
    for (lVar9 = *(longlong *)(param_1 + 800); lVar9 != lVar12; lVar9 = lVar9 + 0x20) {
      *(undefined4 *)(lVar9 + 0x18) = 0;
    }
    puVar3 = *(ulonglong **)(param_1 + 0xf8);
    fVar22 = DAT_18038096c;
    fVar26 = DAT_180380ab0;
    fVar7 = DAT_180380ac0;
    fVar27 = DAT_180380bb0;
    fVar8 = DAT_1803811c8;
    for (puVar10 = *(ulonglong **)(param_1 + 0xf0); DAT_18038096c = fVar22, DAT_180380ab0 = fVar26,
        DAT_180380ac0 = fVar7, DAT_180380bb0 = fVar27, DAT_1803811c8 = fVar8, puVar10 != puVar3;
        puVar10 = puVar10 + 6) {
      uVar14 = puVar10[2];
      uVar17 = *puVar10;
      bVar18 = uVar17 < uVar14;
      if (uVar17 == uVar14) {
        bVar18 = puVar10[1] < puVar10[3];
      }
      uVar13 = uVar14;
      if (bVar18) {
        uVar13 = uVar17;
      }
      bVar19 = uVar17 < uVar14;
      bVar18 = false;
      if (uVar17 == uVar14) {
        bVar19 = puVar10[1] < puVar10[3];
        bVar18 = puVar10[1] == puVar10[3];
      }
      if (!bVar19 && !bVar18) {
        uVar14 = uVar17;
      }
      for (; uVar13 <= uVar14; uVar13 = uVar13 + 1) {
        lVar12 = *(longlong *)(param_1 + 0x50);
        lVar9 = uVar13 * 0x60;
        if ((*(char *)(lVar9 + 0x22 + lVar12) != '\x03') &&
           (uVar17 = uVar15, *(longlong *)(lVar9 + 0x30 + lVar12) != 0)) {
          do {
            lVar16 = *(longlong *)(lVar9 + 0x28 + lVar12) + uVar17;
            uVar17 = uVar17 + 1;
            *(undefined4 *)(lVar16 * 0x20 + 0x18 + *(longlong *)(param_1 + 800)) =
                 *(undefined4 *)(param_1 + 0x9a0);
          } while (uVar17 < *(ulonglong *)(lVar9 + 0x30 + lVar12));
        }
      }
      fVar22 = DAT_18038096c;
      fVar26 = DAT_180380ab0;
      fVar7 = DAT_180380ac0;
      fVar27 = DAT_180380bb0;
      fVar8 = DAT_1803811c8;
    }
    if ((*(longlong *)(param_1 + 0x348) != *(longlong *)(param_1 + 0x340)) &&
       (*(longlong *)(param_1 + 0x210) != 0)) {
      do {
        lVar12 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar15 * 0x18) * 0x60 + 0x50 +
                  *(longlong *)(param_1 + 0x50));
        if (lVar12 != 0) {
          uVar11 = *(uint *)(*(longlong *)(param_1 + 0x340) + -0x44 + lVar12 * 0x48);
          if (uVar11 == 0) {
            uVar11 = *(uint *)(*(longlong *)(param_1 + 0x340) + -0x48 + lVar12 * 0x48);
          }
          fVar20 = (float)(uVar11 & 0xff) * fVar22;
          fVar23 = (float)(uVar11 >> 8 & 0xff) * fVar22;
          fVar25 = (float)(uVar11 >> 0x10 & 0xff) * fVar22;
          fVar24 = (float)(uVar11 >> 0x18) * fVar22 * fVar26;
          if (0.0 <= fVar20) {
            fVar21 = fVar27;
            if (fVar20 <= fVar27) {
              fVar21 = fVar20;
            }
          }
          else {
            fVar21 = 0.0;
          }
          if (0.0 <= fVar23) {
            fVar20 = fVar27;
            if (fVar23 <= fVar27) {
              fVar20 = fVar23;
            }
          }
          else {
            fVar20 = 0.0;
          }
          if (0.0 <= fVar25) {
            fVar23 = fVar27;
            if (fVar25 <= fVar27) {
              fVar23 = fVar25;
            }
          }
          else {
            fVar23 = 0.0;
          }
          if (0.0 <= fVar24) {
            fVar25 = fVar27;
            if (fVar24 <= fVar27) {
              fVar25 = fVar24;
            }
          }
          else {
            fVar25 = 0.0;
          }
          *(int *)(uVar15 * 0x20 + 0x18 + *(longlong *)(param_1 + 800)) =
               (int)(fVar25 * fVar8 + fVar7) << 0x18 |
               (int)(fVar23 * fVar8 + fVar7) << 0x10 |
               (int)(fVar20 * fVar8 + fVar7) << 8 | (int)(fVar21 * fVar8 + fVar7);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ulonglong *)(param_1 + 0x210));
    }
    fVar26 = *(float *)(param_1 + 0x500) / *(float *)(param_1 + 0x554);
    uVar14 = *(longlong *)(param_1 + 0x328) - *(longlong *)(param_1 + 800) >> 5;
    uVar15 = (ulonglong)_tls_index;
    if (fVar26 <= (float)uVar14) {
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
      if (*(char *)(lVar12 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar20 = *(float *)(*(longlong *)(*(longlong *)(lVar12 + 0xec0) + 0x1520) + 0xa4);
      if (*(char *)(lVar12 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar23 = DAT_180381300;
      lVar9 = 0;
      fVar20 = (*(float *)(*(longlong *)(*(longlong *)(lVar12 + 0xec0) + 0x1520) + 0x9c) / fVar20) *
               ((float)uVar14 - fVar26);
      if ((DAT_180381300 <= fVar20) && (fVar20 = fVar20 - DAT_180381300, fVar20 < DAT_180381300)) {
        lVar9 = -0x8000000000000000;
      }
      *(longlong *)(param_1 + 0x538) = (longlong)fVar20 + lVar9;
      fVar26 = ceilf(fVar26);
      lVar12 = 0;
      if ((fVar23 <= fVar26) && (fVar26 = fVar26 - fVar23, fVar26 < fVar23)) {
        lVar12 = -0x8000000000000000;
      }
      uVar17 = (longlong)fVar26 + lVar12 + (longlong)fVar20 + lVar9;
      *(ulonglong *)(param_1 + 0x540) = uVar17;
      if (uVar14 < uVar17) {
        uVar17 = uVar14;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x538) = 0;
      uVar17 = *(longlong *)(param_1 + 0x328) - *(longlong *)(param_1 + 800) >> 5;
    }
    *(ulonglong *)(param_1 + 0x540) = uVar17;
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
    if (*(char *)(lVar12 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = *(longlong *)(lVar12 + 0xec0);
    cVar1 = *(char *)(lVar12 + 0x10);
    *(undefined1 *)(*(longlong *)(lVar9 + 0x1520) + 0xce) = 1;
    fVar26 = *(float *)(param_1 + 0x4f8);
    uVar4 = *(undefined8 *)(*(longlong *)(lVar9 + 0x1520) + 0x2c8);
    if (cVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar15 = *(ulonglong *)(param_1 + 0x538);
    lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0xec0) + 0x1520);
    fVar20 = *(float *)(lVar9 + 0x2c) + 0.0;
    fVar26 = fVar26 + *(float *)(lVar9 + 0x28);
    local_b8 = fVar26;
    local_b4 = fVar20;
    if (uVar15 < *(ulonglong *)(param_1 + 0x540)) {
      do {
        lVar9 = *(longlong *)(param_1 + 800);
        lVar16 = uVar15 * 0x20;
        iVar2 = *(int *)(lVar16 + 0x18 + lVar9);
        local_b8 = fVar26;
        local_b4 = fVar20;
        if (iVar2 != 0) {
          local_b0 = fVar26 + *(float *)(param_1 + 0x530);
          local_ac = fVar20 + *(float *)(param_1 + 0x554);
          FUN_180295000(uVar4,&local_b8,&local_b0,iVar2,0,0);
        }
        puVar3 = *(ulonglong **)(lVar16 + 8 + lVar9);
        for (puVar10 = *(ulonglong **)(lVar16 + lVar9); puVar10 != puVar3; puVar10 = puVar10 + 3) {
          if (0x15 < (ulonglong)(longlong)(char)puVar10[2]) {
            FUN_1802623f0();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_c8 = (float)puVar10[1] * *(float *)(param_1 + 0x55c) + fVar26;
          local_c4 = fVar20 + *(float *)(param_1 + 0x558);
          local_c0 = (float)*puVar10 * *(float *)(param_1 + 0x55c) + fVar26;
          local_bc = fVar20 + 0.0;
          FUN_180295000(uVar4,&local_c0,&local_c8,
                        *(undefined4 *)(param_1 + 0x970 + (longlong)(char)puVar10[2] * 4),0,0);
        }
        fVar20 = fVar20 + *(float *)(param_1 + 0x554);
        fVar26 = fVar26 + 0.0;
        uVar15 = uVar15 + 1;
        local_b8 = fVar26;
        local_b4 = fVar20;
      } while (uVar15 < *(ulonglong *)(param_1 + 0x540));
    }
    if (*(float *)(param_1 + 0x500) <= *(float *)(param_1 + 0x508) &&
        *(float *)(param_1 + 0x508) != *(float *)(param_1 + 0x500)) {
      lVar9 = *(longlong *)(param_1 + 0x510);
      lVar16 = *(longlong *)(param_1 + 0x518);
      fVar26 = *(float *)(param_1 + 0x554);
      lVar5 = *(longlong *)(param_1 + 0x538);
      fVar20 = *(float *)(param_1 + 0x4f8);
      if (*(char *)(lVar12 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xec0) + 0x1520);
      local_c8 = fVar20 + *(float *)(lVar12 + 0x28);
      local_c4 = (float)(ulonglong)(lVar9 - lVar5) * fVar26 + *(float *)(lVar12 + 0x2c);
      uVar11 = *(uint *)(param_1 + 0x918);
      local_c0 = local_c8 + *(float *)(param_1 + 0x530);
      local_bc = local_c4 + (float)(ulonglong)(lVar16 - lVar9) * fVar26;
      fVar20 = (float)(uVar11 & 0xff) * fVar22;
      fVar23 = (float)(uVar11 >> 8 & 0xff) * fVar22;
      fVar24 = (float)(uVar11 >> 0x10 & 0xff) * fVar22;
      fVar26 = DAT_180380a1c;
      if (*(char *)(param_1 + 0x548) != '\0') {
        fVar26 = DAT_180380a6c;
      }
      fVar26 = (float)(uVar11 >> 0x18) * fVar22 * fVar26;
      if (0.0 <= fVar20) {
        fVar22 = fVar27;
        if (fVar20 <= fVar27) {
          fVar22 = fVar20;
        }
      }
      else {
        fVar22 = 0.0;
      }
      if (0.0 <= fVar23) {
        fVar20 = fVar27;
        if (fVar23 <= fVar27) {
          fVar20 = fVar23;
        }
      }
      else {
        fVar20 = 0.0;
      }
      if (0.0 <= fVar24) {
        fVar23 = fVar27;
        if (fVar24 <= fVar27) {
          fVar23 = fVar24;
        }
      }
      else {
        fVar23 = 0.0;
      }
      if (0.0 <= fVar26) {
        if (fVar26 <= fVar27) {
          fVar27 = fVar26;
        }
      }
      else {
        fVar27 = 0.0;
      }
      FUN_180295000(uVar4,&local_c8,&local_c0,
                    (int)(fVar27 * fVar8 + fVar7) << 0x18 |
                    (int)(fVar23 * fVar8 + fVar7) << 0x10 |
                    (int)(fVar20 * fVar8 + fVar7) << 8 | (int)(fVar22 * fVar8 + fVar7),0,0);
    }
  }
  return;
}


