// 0x180247ea0  FUN_180247ea0
// size=1352 thunk=false
// signature: undefined FUN_180247ea0()
// status: ok


void FUN_180247ea0(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  char cVar11;
  longlong lVar12;
  longlong *plVar13;
  float *pfVar14;
  undefined4 uVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  if (*(char *)(param_1 + 0x23) != '\0') {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar17 = *(longlong *)(lVar4 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar17 + 0x1520) + 0xce) = 1;
    uVar10 = DAT_180380bb0;
    fVar9 = DAT_180380ac0;
    uVar19 = *(ulonglong *)(param_1 + 0x510);
    fVar25 = *(float *)(param_1 + 0x4d0) * DAT_180380a58;
    uVar5 = *(undefined8 *)(*(longlong *)(lVar17 + 0x1520) + 0x2c8);
    uVar2 = *(undefined4 *)(param_1 + 0x968);
    uVar3 = *(undefined4 *)(param_1 + 0x96c);
    if (uVar19 <= *(ulonglong *)(param_1 + 0x518)) {
      do {
        if ((*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar19 * 0x18) == 0) &&
           (bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar19 * 0x18) * 0x60 +
                              0x22 + *(longlong *)(param_1 + 0x50)), bVar1 < 2)) {
          fVar21 = (float)uVar19 * *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4bc) +
                   *(float *)(param_1 + 0x4d0) * fVar9;
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar24 = *(float *)(param_1 + 0x4d0);
          fVar22 = *(float *)(param_1 + 0x4d8) * fVar9;
          fVar23 = *(float *)(*(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1520) + 0x28) +
                   *(float *)(param_1 + 0x4ec);
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar20 = fVar23 - fVar22;
          lVar17 = *(longlong *)(lVar4 + 0xec0);
          lVar6 = *(longlong *)(lVar17 + 0x1520);
          if (fVar20 <= *(float *)(lVar6 + 0x268)) {
            fVar20 = *(float *)(lVar6 + 0x268);
          }
          if (*(float *)(lVar17 + 0x100) < fVar20 - *(float *)(lVar17 + 0xcec)) {
LAB_180248115:
            bVar8 = false;
          }
          else {
            fVar24 = fVar24 * fVar9;
            fVar20 = fVar21 - fVar24;
            if (fVar20 <= *(float *)(lVar6 + 0x26c)) {
              fVar20 = *(float *)(lVar6 + 0x26c);
            }
            if (*(float *)(lVar17 + 0x104) < fVar20 - *(float *)(lVar17 + 0xcf0))
            goto LAB_180248115;
            fVar22 = fVar22 + fVar23;
            if (*(float *)(lVar6 + 0x270) <= fVar22) {
              fVar22 = *(float *)(lVar6 + 0x270);
            }
            if (fVar22 + *(float *)(lVar17 + 0xcec) <= *(float *)(lVar17 + 0x100))
            goto LAB_180248115;
            fVar24 = fVar21 + fVar24;
            if (*(float *)(lVar6 + 0x274) <= fVar24) {
              fVar24 = *(float *)(lVar6 + 0x274);
            }
            if (fVar24 + *(float *)(lVar17 + 0xcf0) <= *(float *)(lVar17 + 0x104))
            goto LAB_180248115;
            bVar8 = true;
          }
          fVar22 = fVar25 + fVar23;
          fVar24 = fVar25 + fVar21;
          uVar15 = uVar2;
          if (bVar1 == 0) {
            local_d8 = fVar23 - fVar25;
            fVar21 = fVar21 - fVar25 * fVar9;
            if (bVar8) {
              uVar15 = uVar3;
            }
            local_e0 = fVar23;
            local_dc = fVar24;
            local_d4 = fVar21;
            FUN_180294c90(uVar5,&local_d8,&local_e0,uVar15,uVar10);
            pfVar16 = &local_d0;
            pfVar14 = &local_c8;
            local_d0 = fVar22;
            local_cc = fVar21;
            local_c8 = fVar23;
            local_c4 = fVar24;
          }
          else {
            local_b4 = fVar21 - fVar25;
            fVar23 = fVar23 - fVar25 * fVar9;
            if (bVar8) {
              uVar15 = uVar3;
            }
            local_c0 = fVar22;
            local_bc = fVar21;
            local_b8 = fVar23;
            FUN_180294c90(uVar5,&local_b8,&local_c0,uVar15,uVar10);
            pfVar16 = &local_b0;
            pfVar14 = &local_a8;
            local_b0 = fVar23;
            local_ac = fVar24;
            local_a8 = fVar22;
            local_a4 = fVar21;
          }
          FUN_180294c90(uVar5,pfVar14,pfVar16,uVar15,uVar10);
          if ((bVar8) && (cVar11 = FUN_18027bce0(0,0,0), cVar11 != '\0')) {
            lVar17 = *(longlong *)(param_1 + 0x50);
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar19 * 0x18);
            lVar12 = lVar6 * 0x60;
            cVar11 = *(char *)(lVar12 + 0x22 + lVar17);
            if (cVar11 == '\0') {
              *(undefined1 *)(lVar12 + 0x22 + lVar17) = 1;
              plVar7 = *(longlong **)(param_1 + 0x1c0);
              for (plVar13 = *(longlong **)(param_1 + 0x1b8); plVar13 != plVar7;
                  plVar13 = plVar13 + 2) {
                if ((*plVar13 == lVar6) && (uVar18 = *plVar13 + 1, uVar18 <= (ulonglong)plVar13[1]))
                {
                  do {
                    lVar17 = uVar18 * 0x60;
                    uVar18 = uVar18 + 1;
                    *(undefined1 *)(lVar17 + 0x22 + *(longlong *)(param_1 + 0x50)) = 3;
                  } while (uVar18 <= (ulonglong)plVar13[1]);
                }
              }
            }
            else {
              if (cVar11 != '\x01') goto LAB_180248320;
              *(undefined1 *)(lVar12 + 0x22 + lVar17) = 0;
              plVar7 = *(longlong **)(param_1 + 0x1c0);
              for (plVar13 = *(longlong **)(param_1 + 0x1b8); plVar13 != plVar7;
                  plVar13 = plVar13 + 2) {
                if ((*plVar13 == lVar6) && (uVar18 = *plVar13 + 1, uVar18 <= (ulonglong)plVar13[1]))
                {
                  do {
                    lVar17 = uVar18 * 0x60;
                    uVar18 = uVar18 + 1;
                    *(undefined1 *)(lVar17 + 0x22 + *(longlong *)(param_1 + 0x50)) = 2;
                  } while (uVar18 <= (ulonglong)plVar13[1]);
                }
              }
            }
            *(undefined1 *)(param_1 + 0x1d2) = 1;
          }
        }
LAB_180248320:
        uVar19 = uVar19 + 1;
      } while (uVar19 <= *(ulonglong *)(param_1 + 0x518));
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
    lVar4 = *(longlong *)(lVar4 + 0x1520);
    *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(param_1 + 0x4b8);
    *(undefined1 *)(lVar4 + 0x159) = 1;
  }
  return;
}


