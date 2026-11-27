// 0x1802a5c80  FUN_1802a5c80
// size=2097 thunk=false
// signature: undefined FUN_1802a5c80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a5c80(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  ulonglong *puVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  void *_Dst;
  uint *puVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  float *pfVar29;
  ulonglong *puVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  uint *puVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  float *pfVar38;
  float *pfVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  longlong lVar42;
  uint uVar43;
  short sVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_188 [32];
  short local_168;
  short local_166;
  uint local_164;
  longlong local_160;
  uint local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  longlong local_138;
  float local_128 [6];
  ulonglong local_110 [3];
  undefined4 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_150 = param_1;
  if (*(char *)(lVar35 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_166 = *(short *)(param_1 + 0x22e);
  lVar42 = *(longlong *)(param_1 + 0x1a0);
  sVar44 = *(short *)(param_1 + 0x22a);
  uVar43 = 0;
  local_128[4] = 0.0;
  local_110[0] = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_128[2] = 0.0;
  local_128[3] = 0.0;
  local_110[1] = 0;
  local_110[2] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_160 = *(longlong *)(lVar35 + 0xec0);
  local_164 = *(int *)(param_1 + 0x6c) * 2 + 0x23 >> 3 & 0xfffffffc;
  local_c8 = 0;
  uStack_c0 = 0;
  iVar32 = local_164 * 5;
  local_168 = sVar44;
  local_140 = lVar42;
  if (*(int *)(local_160 + 0x2aec) < iVar32) {
    _Dst = (void *)FUN_18026f580((longlong)iVar32);
    if (*(void **)(local_160 + 0x2af0) != (void *)0x0) {
      memcpy(_Dst,*(void **)(local_160 + 0x2af0),(longlong)*(int *)(local_160 + 0x2ae8));
      FUN_18026f680(*(undefined8 *)(local_160 + 0x2af0));
    }
    *(void **)(local_160 + 0x2af0) = _Dst;
    *(int *)(local_160 + 0x2aec) = iVar32;
  }
  lVar35 = local_160;
  memset(*(void **)(local_160 + 0x2af0),0,(longlong)iVar32);
  lVar25 = local_160;
  local_110[0] = *(ulonglong *)(lVar35 + 0x2af0);
  local_f0 = (longlong)(int)local_164 + *(longlong *)(lVar35 + 0x2af0);
  local_158 = 0;
  local_d0 = (longlong)(int)(local_164 * 2) + *(longlong *)(lVar35 + 0x2af0);
  local_b0 = (longlong)(int)(local_164 * 3) + *(longlong *)(lVar35 + 0x2af0);
  local_138 = *(longlong *)(lVar35 + 0x2af0);
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x58) + ((longlong)(int)local_158 >> 5) * 4) >>
           (local_158 & 0x1f) & 1) != 0) {
        puVar34 = (uint *)((longlong)(int)local_158 * 0x74 + *(longlong *)(param_1 + 0x18));
        local_148 = (0 < sVar44) + 1;
        iVar32 = 0;
        do {
          puVar24 = (uint *)((longlong)puVar34 + 0x62);
          if (iVar32 != 0) {
            puVar24 = puVar34 + 0x19;
          }
          uVar8 = (ushort)*puVar24;
          lVar35 = *(longlong *)(lVar42 + 0x10);
          lVar37 = (ulonglong)uVar8 * 0x20;
          iVar26 = *(int *)(lVar37 + lVar35);
          if (0 < iVar26) {
            iVar33 = iVar26 + -1;
            lVar9 = *(longlong *)(lVar37 + 8 + lVar35);
            if ((*(int *)(lVar9 + 0x28 + (longlong)iVar33 * 0x48) == 0) &&
               (*(longlong *)(lVar9 + 0x30 + (longlong)iVar33 * 0x48) == 0)) {
              *(int *)(lVar37 + lVar35) = iVar33;
              iVar26 = iVar33;
            }
            if (iVar26 == 1) {
              if ((*puVar34 & 0x100) == 0) {
                if (local_168 < 1) {
                  fVar45 = (float)puVar34[0x12];
                  if ((float)puVar34[0x12] <= (float)puVar34[0x13]) {
                    fVar45 = (float)puVar34[0x13];
                  }
                }
                else if (iVar32 == 0) {
                  fVar45 = (float)puVar34[0x11];
                  if ((float)puVar34[0x11] <= (float)puVar34[0x13]) {
                    fVar45 = (float)puVar34[0x13];
                  }
                }
                else {
                  fVar45 = (float)puVar34[0x12];
                }
                if ((float)puVar34[0xb] <= fVar45 && fVar45 != (float)puVar34[0xb])
                goto LAB_1802a6009;
              }
              if ((local_166 < 1) || ((int)*(short *)(local_150 + 0x22e) <= (int)local_158)) {
                iVar26 = 1;
              }
              else {
                iVar26 = 0;
              }
              if ((local_168 < 1) || (iVar32 != 0)) {
                iVar33 = 2;
              }
              else {
                iVar33 = 0;
              }
              uVar27 = (ulonglong)(uint)(iVar33 + iVar26);
              if (local_128[uVar27 * 8 + 4] == 0.0) {
                local_128[uVar27 * 8] = 3.4028235e+38;
                pfVar38 = local_128 + uVar27 * 8 + 1;
                *pfVar38 = 3.4028235e+38;
                pfVar39 = local_128 + uVar27 * 8 + 2;
                pfVar29 = local_128 + uVar27 * 8 + 3;
                *pfVar39 = -3.4028235e+38;
                *pfVar29 = -3.4028235e+38;
              }
              else {
                pfVar38 = local_128 + uVar27 * 8 + 1;
                pfVar39 = local_128 + uVar27 * 8 + 2;
                pfVar29 = local_128 + uVar27 * 8 + 3;
              }
              *(uint *)(local_110[uVar27 * 4] + (ulonglong)(uVar8 >> 5) * 4) =
                   *(uint *)(local_110[uVar27 * 4] + (ulonglong)(uVar8 >> 5) * 4) |
                   1 << (uVar8 & 0x1f);
              local_128[uVar27 * 8 + 4] = (float)((int)local_128[uVar27 * 8 + 4] + 1);
              pfVar10 = *(float **)(lVar37 + 8 + lVar35);
              fVar45 = pfVar10[1];
              fVar4 = pfVar10[2];
              fVar5 = pfVar10[3];
              if (*pfVar10 < local_128[uVar27 * 8]) {
                local_128[uVar27 * 8] = *pfVar10;
              }
              if (fVar45 < *pfVar38) {
                *pfVar38 = fVar45;
              }
              if (*pfVar39 <= fVar4 && fVar4 != *pfVar39) {
                *pfVar39 = fVar4;
              }
              if (*pfVar29 <= fVar5 && fVar5 != *pfVar29) {
                *pfVar29 = fVar5;
              }
              uVar43 = uVar43 | 1 << iVar33 + iVar26;
              lVar42 = local_140;
            }
          }
LAB_1802a6009:
          iVar32 = iVar32 + 1;
        } while (iVar32 < local_148);
        *(undefined2 *)(puVar34 + 0x18) = 0xffff;
        param_1 = local_150;
        sVar44 = local_168;
      }
      local_158 = local_158 + 1;
    } while ((int)local_158 < *(int *)(param_1 + 0x6c));
    if (uVar43 != 0) {
      puVar30 = (ulonglong *)((int)(local_164 * 4) + local_138);
      FUN_1802a0920(local_160 + 0x23c0,*(int *)(lVar42 + 4) + -2);
      puVar41 = *(undefined4 **)(lVar25 + 0x23c8);
      iVar32 = *(int *)(lVar42 + 4) + -1;
      if (1 < iVar32) {
        uVar43 = 2;
        do {
          lVar35 = (longlong)(int)uVar43;
          bVar13 = (byte)uVar43;
          bVar12 = (byte)iVar32 & 0x1f;
          if ((int)(uVar43 | 0x1f) < iVar32) {
            bVar12 = 0x1f;
          }
          uVar43 = uVar43 + 0x20 & 0xffffffe0;
          puVar34 = (uint *)((longlong)puVar30 + (lVar35 >> 5) * 4);
          *puVar34 = *puVar34 | (int)(1L << bVar12 + 1) - 1U & -(int)(1L << (bVar13 & 0x1f));
        } while ((int)uVar43 <= iVar32);
      }
      uVar27 = (ulonglong)(*(ushort *)(param_1 + 0x236) >> 5);
      *(uint *)((longlong)puVar30 + uVar27 * 4) =
           *(uint *)((longlong)puVar30 + uVar27 * 4) & ~(1 << (*(ushort *)(param_1 + 0x236) & 0x1f))
      ;
      fVar45 = *(float *)(param_1 + 0x160);
      fVar4 = *(float *)(param_1 + 0x164);
      fVar5 = *(float *)(param_1 + 0x168);
      fVar6 = *(float *)(param_1 + 0x16c);
      iVar32 = *(int *)(lVar42 + 4) - ((0 < local_168) + 2);
      uVar43 = 0;
LAB_1802a6161:
      do {
        lVar35 = (longlong)(int)uVar43;
        fVar31 = local_128[lVar35 * 8 + 4];
        if (fVar31 != 0.0) {
          fVar48 = local_128[lVar35 * 8];
          fVar49 = local_128[lVar35 * 8 + 1];
          fVar47 = local_128[lVar35 * 8 + 2];
          fVar46 = local_128[lVar35 * 8 + 3];
          if ((((uVar43 & 1) == 0) || (local_166 < 1)) && (fVar45 <= fVar48)) {
            fVar48 = fVar45;
          }
          if ((((uVar43 & 2) == 0) || (local_168 < 1)) && (fVar4 <= fVar49)) {
            fVar49 = fVar4;
          }
          if (((uVar43 & 1) != 0) && (fVar47 <= fVar5)) {
            fVar47 = fVar5;
          }
          if ((((uVar43 & 2) != 0) && ((*(uint *)(param_1 + 4) & 0x20000) == 0)) &&
             (fVar46 <= fVar6)) {
            fVar46 = fVar6;
          }
          iVar32 = iVar32 - (int)fVar31;
          uVar36 = (int)local_164 >> 2;
          if (0 < (int)uVar36) {
            iVar33 = 0;
            iVar26 = iVar33;
            if (1 < uVar36) {
              puVar28 = local_110 + lVar35 * 4;
              puVar1 = (ulonglong *)((longlong)puVar30 + (longlong)(int)(uVar36 - 1) * 4);
              puVar11 = (ulonglong *)*puVar28;
              if ((((ulonglong *)((longlong)puVar11 + (longlong)(int)(uVar36 - 1) * 4) < puVar30) ||
                  (iVar26 = 0, puVar1 < puVar11)) &&
                 ((puVar28 < puVar30 || (iVar26 = 0, puVar1 < puVar28)))) {
                if (uVar36 < 0x10) {
LAB_1802a62b6:
                  uVar27 = local_110[lVar35 * 4];
                  uVar23 = uVar36 & 0x80000001;
                  if ((int)uVar23 < 0) {
                    uVar23 = (uVar23 - 1 | 0xfffffffe) + 1;
                  }
                  do {
                    lVar25 = (longlong)iVar33;
                    iVar33 = iVar33 + 2;
                    puVar34 = (uint *)((longlong)puVar30 + lVar25 * 4);
                    uVar14 = puVar34[1];
                    uVar7 = *(undefined8 *)(uVar27 + lVar25 * 4);
                    puVar24 = (uint *)((longlong)puVar30 + lVar25 * 4);
                    *puVar24 = ~(uint)uVar7 & *puVar34;
                    puVar24[1] = ~(uint)((ulonglong)uVar7 >> 0x20) & uVar14;
                  } while (iVar33 < (int)(uVar36 - uVar23));
                }
                else {
                  uVar23 = uVar36 & 0x8000000f;
                  if ((int)uVar23 < 0) {
                    uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
                  }
                  do {
                    lVar25 = (longlong)iVar33;
                    iVar33 = iVar33 + 0x10;
                    puVar34 = (uint *)((longlong)puVar30 + lVar25 * 4);
                    uVar14 = puVar34[1];
                    uVar15 = puVar34[2];
                    uVar16 = puVar34[3];
                    puVar24 = (uint *)((longlong)puVar11 + lVar25 * 4);
                    uVar17 = puVar24[1];
                    uVar18 = puVar24[2];
                    uVar19 = puVar24[3];
                    puVar2 = (uint *)((longlong)puVar30 + lVar25 * 4);
                    *puVar2 = ~*puVar24 & *puVar34;
                    puVar2[1] = ~uVar17 & uVar14;
                    puVar2[2] = ~uVar18 & uVar15;
                    puVar2[3] = ~uVar19 & uVar16;
                    puVar34 = (uint *)((longlong)puVar30 + lVar25 * 4 + 0x10);
                    uVar14 = puVar34[1];
                    uVar15 = puVar34[2];
                    uVar16 = puVar34[3];
                    puVar24 = (uint *)((longlong)puVar11 + lVar25 * 4 + 0x10);
                    uVar17 = puVar24[1];
                    uVar18 = puVar24[2];
                    uVar19 = puVar24[3];
                    puVar2 = (uint *)((longlong)puVar30 + lVar25 * 4 + 0x10);
                    *puVar2 = ~*puVar24 & *puVar34;
                    puVar2[1] = ~uVar17 & uVar14;
                    puVar2[2] = ~uVar18 & uVar15;
                    puVar2[3] = ~uVar19 & uVar16;
                    puVar34 = (uint *)((longlong)puVar30 + lVar25 * 4 + 0x20);
                    uVar14 = puVar34[1];
                    uVar15 = puVar34[2];
                    uVar16 = puVar34[3];
                    puVar24 = (uint *)((longlong)puVar11 + lVar25 * 4 + 0x20);
                    uVar17 = puVar24[1];
                    uVar18 = puVar24[2];
                    uVar19 = puVar24[3];
                    puVar2 = (uint *)((longlong)puVar30 + lVar25 * 4 + 0x20);
                    *puVar2 = ~*puVar24 & *puVar34;
                    puVar2[1] = ~uVar17 & uVar14;
                    puVar2[2] = ~uVar18 & uVar15;
                    puVar2[3] = ~uVar19 & uVar16;
                    puVar34 = (uint *)((longlong)puVar30 + lVar25 * 4 + 0x30);
                    uVar14 = puVar34[1];
                    uVar15 = puVar34[2];
                    uVar16 = puVar34[3];
                    puVar24 = (uint *)((longlong)puVar11 + lVar25 * 4 + 0x30);
                    uVar17 = puVar24[1];
                    uVar18 = puVar24[2];
                    uVar19 = puVar24[3];
                    puVar2 = (uint *)((longlong)puVar30 + lVar25 * 4 + 0x30);
                    *puVar2 = ~*puVar24 & *puVar34;
                    puVar2[1] = ~uVar17 & uVar14;
                    puVar2[2] = ~uVar18 & uVar15;
                    puVar2[3] = ~uVar19 & uVar16;
                  } while (iVar33 < (int)(uVar36 - uVar23));
                  if (1 < ((byte)uVar36 & 0xf)) goto LAB_1802a62b6;
                }
                iVar26 = iVar33;
                if ((int)uVar36 <= iVar33) goto LAB_1802a6318;
              }
            }
            do {
              iVar33 = iVar26 + 1;
              puVar34 = (uint *)((longlong)puVar30 + (longlong)iVar26 * 4);
              *puVar34 = *puVar34 & ~*(uint *)(local_110[lVar35 * 4] + (longlong)iVar26 * 4);
              iVar26 = iVar33;
            } while (iVar33 < (int)uVar36);
          }
LAB_1802a6318:
          uVar36 = 0;
          puVar40 = puVar41;
          param_1 = local_150;
          if (0 < *(int *)(lVar42 + 4)) {
            do {
              puVar41 = puVar40;
              if (fVar31 == 0.0) break;
              lVar25 = (longlong)(int)uVar36 >> 5;
              uVar23 = *(uint *)(local_110[lVar35 * 4] + lVar25 * 4);
              if ((uVar23 >> (uVar36 & 0x1f) & 1) != 0) {
                lVar37 = (longlong)(int)uVar36 * 0x20;
                *(uint *)(local_110[lVar35 * 4] + lVar25 * 4) = uVar23 & ~(1 << (uVar36 & 0x1f));
                fVar31 = (float)((int)fVar31 + -1);
                lVar25 = *(longlong *)(lVar42 + 0x10);
                pfVar38 = *(float **)(lVar37 + 8 + lVar25);
                *pfVar38 = fVar48;
                pfVar38[1] = fVar49;
                pfVar38[2] = fVar47;
                pfVar38[3] = fVar46;
                puVar3 = (undefined4 *)(lVar37 + lVar25);
                uVar20 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                puVar41 = puVar40 + 8;
                *puVar40 = *puVar3;
                puVar40[1] = uVar20;
                puVar40[2] = uVar21;
                puVar40[3] = uVar22;
                puVar3 = (undefined4 *)(lVar37 + 0x10 + lVar25);
                uVar20 = puVar3[1];
                uVar21 = puVar3[2];
                uVar22 = puVar3[3];
                puVar40[4] = *puVar3;
                puVar40[5] = uVar20;
                puVar40[6] = uVar21;
                puVar40[7] = uVar22;
              }
              uVar36 = uVar36 + 1;
              puVar40 = puVar41;
            } while ((int)uVar36 < *(int *)(lVar42 + 4));
          }
        }
        if ((uVar43 == 1) && (0 < local_168)) {
          lVar35 = *(longlong *)(lVar42 + 0x10);
          lVar25 = (ulonglong)*(ushort *)(param_1 + 0x236) * 0x20;
          uVar43 = 2;
          puVar40 = (undefined4 *)(lVar25 + lVar35);
          uVar20 = puVar40[1];
          uVar21 = puVar40[2];
          uVar22 = puVar40[3];
          *puVar41 = *puVar40;
          puVar41[1] = uVar20;
          puVar41[2] = uVar21;
          puVar41[3] = uVar22;
          puVar40 = (undefined4 *)(lVar25 + 0x10 + lVar35);
          uVar20 = puVar40[1];
          uVar21 = puVar40[2];
          uVar22 = puVar40[3];
          puVar41[4] = *puVar40;
          puVar41[5] = uVar20;
          puVar41[6] = uVar21;
          puVar41[7] = uVar22;
          puVar41 = puVar41 + 8;
          goto LAB_1802a6161;
        }
        uVar43 = uVar43 + 1;
      } while ((int)uVar43 < 4);
      iVar26 = *(int *)(lVar42 + 4);
      if (0 < iVar26) {
        uVar43 = 0;
        do {
          if (iVar32 == 0) break;
          puVar40 = puVar41;
          if ((*(uint *)((longlong)puVar30 + ((longlong)(int)uVar43 >> 5) * 4) >> (uVar43 & 0x1f) &
              1) != 0) {
            lVar35 = *(longlong *)(lVar42 + 0x10);
            lVar25 = (longlong)(int)uVar43 * 0x20;
            puVar40 = puVar41 + 8;
            iVar32 = iVar32 + -1;
            puVar3 = (undefined4 *)(lVar25 + lVar35);
            uVar20 = puVar3[1];
            uVar21 = puVar3[2];
            uVar22 = puVar3[3];
            *puVar41 = *puVar3;
            puVar41[1] = uVar20;
            puVar41[2] = uVar21;
            puVar41[3] = uVar22;
            puVar3 = (undefined4 *)(lVar25 + 0x10 + lVar35);
            uVar20 = puVar3[1];
            uVar21 = puVar3[2];
            uVar22 = puVar3[3];
            puVar41[4] = *puVar3;
            puVar41[5] = uVar20;
            puVar41[6] = uVar21;
            puVar41[7] = uVar22;
          }
          iVar26 = *(int *)(lVar42 + 4);
          uVar43 = uVar43 + 1;
          puVar41 = puVar40;
        } while ((int)uVar43 < iVar26);
      }
      memcpy((void *)(*(longlong *)(lVar42 + 0x10) + 0x40),*(void **)(local_160 + 0x23c8),
             (longlong)(iVar26 + -2) << 5);
    }
  }
  return;
}


