// 0x1802a2470  FUN_1802a2470
// size=4866 thunk=false
// signature: undefined FUN_1802a2470()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a2470(uint *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  float *pfVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  char *pcVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  short *psVar29;
  uint uVar30;
  undefined1 *puVar31;
  undefined1 uVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  uint local_e0;
  float local_dc;
  uint local_d8;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar31 = (undefined1 *)register0x00000020;
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar21 = *(longlong *)(lVar21 + 0xec0);
  uVar17 = param_1[1];
  *(undefined2 *)((longlong)param_1 + 0x202) = 0;
  *(undefined1 *)((longlong)param_1 + 0x242) = 1;
  local_ec = uVar17 & 0xe000;
  local_e8 = lVar21;
  memset(*(void **)(param_1 + 0x14),0,(longlong)((int)(param_1[0x1b] + 0x1f) >> 5) << 2);
  memset(*(void **)(param_1 + 0x12),0,(longlong)((int)(param_1[0x1b] + 0x1f) >> 5) << 2);
  fVar35 = DAT_180380bb0;
  uVar16 = param_1[0x1b];
  iVar26 = 0;
  iVar23 = 0;
  *(undefined2 *)((longlong)param_1 + 0x21e) = 0xffff;
  uVar28 = (ulonglong)puVar31 & 0xffffffffffffff00;
  local_f4 = 0;
  local_f8 = 0;
  fVar44 = *(float *)(lVar21 + 0xcc4);
  fVar38 = fVar35;
  if (fVar35 <= fVar44) {
    fVar38 = fVar44;
  }
  bVar5 = false;
  local_f0 = (uint)uVar28;
  iVar33 = 0;
  iVar19 = -1;
  fVar47 = 0.0;
  fVar44 = 0.0;
  param_1[0x2e] = (uint)fVar38;
  uVar17 = uVar17 & 0xe000;
  bVar9 = false;
  if (0 < (int)uVar16) {
    do {
      bVar5 = bVar9;
      sVar15 = *(short *)(*(longlong *)(param_1 + 10) + (longlong)iVar33 * 2);
      iVar22 = (int)sVar15;
      if (iVar22 != iVar33) {
        *(undefined1 *)((longlong)param_1 + 0x242) = 0;
      }
      puVar20 = (uint *)((longlong)sVar15 * 0x74 + *(longlong *)(param_1 + 6));
      if (*(short *)((longlong)param_1 + 0x206) <= sVar15) {
        FUN_1802a22b0(param_1,puVar20);
        uVar28 = (ulonglong)local_f0;
        *(undefined2 *)(puVar20 + 0x15) = 0xffff;
        puVar20[0xd] = 0;
        puVar20[8] = 0xbf800000;
        iVar23 = local_f8;
        iVar26 = local_f4;
      }
      uVar17 = *puVar20;
      if (((param_1[1] & 4) == 0) || ((char)uVar17 < '\0')) {
        *(byte *)(puVar20 + 0x1a) = 1;
      }
      if (*(byte *)((longlong)puVar20 + 0x67) != (byte)puVar20[0x1a]) {
        *(byte *)((longlong)puVar20 + 0x67) = (byte)puVar20[0x1a];
        *(undefined1 *)((longlong)param_1 + 0x241) = 1;
        uVar17 = *puVar20;
      }
      if ((*(byte *)((longlong)puVar20 + 0x67) == 0) || ((uVar17 & 1) != 0)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      sVar14 = *(short *)((longlong)puVar20 + 0x5e);
      *(byte *)((longlong)puVar20 + 0x66) = bVar10;
      if (sVar14 != -1) {
        if (bVar10 == 0) {
          *(undefined1 *)(param_1 + 0x8f) = 1;
          bVar10 = *(byte *)((longlong)puVar20 + 0x66);
          sVar14 = *(short *)((longlong)puVar20 + 0x5e);
        }
        if ((0 < sVar14) && ((param_1[1] & 0x4000000) == 0)) {
          *(undefined1 *)(param_1 + 0x8f) = 1;
          bVar10 = *(byte *)((longlong)puVar20 + 0x66);
        }
      }
      if ((*puVar20 & 0x10) == 0) {
        fVar38 = (float)puVar20[7];
        fVar40 = (float)puVar20[7];
      }
      else {
        fVar38 = (float)puVar20[4];
        fVar40 = (float)puVar20[4];
      }
      if (fVar40 <= 0.0 && fVar38 != 0.0) {
        ((byte *)((longlong)puVar20 + 0x6f))[0] = 7;
        ((byte *)((longlong)puVar20 + 0x6f))[1] = 7;
      }
      if (bVar10 == 0) {
        *(undefined2 *)(puVar20 + 0x16) = 0xffff;
      }
      else {
        *(short *)((longlong)puVar20 + 0x5a) = (short)iVar19;
        *(undefined2 *)(puVar20 + 0x17) = 0xffff;
        if (iVar19 == -1) {
          *(short *)((longlong)param_1 + 0x21e) = sVar15;
        }
        else {
          *(short *)((longlong)iVar19 * 0x74 + 0x5c + *(longlong *)(param_1 + 6)) = sVar15;
        }
        sVar14 = *(short *)((longlong)param_1 + 0x202);
        lVar21 = (longlong)sVar15 >> 5;
        *(short *)((longlong)param_1 + 0x202) = sVar14 + 1;
        *(short *)(puVar20 + 0x16) = sVar14;
        *(uint *)(*(longlong *)(param_1 + 0x14) + lVar21 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x14) + lVar21 * 4) | 1 << ((int)sVar15 & 0x1fU);
        lVar21 = (longlong)*(short *)((longlong)puVar20 + 0x56) >> 5;
        *(uint *)(*(longlong *)(param_1 + 0x12) + lVar21 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x12) + lVar21 * 4) |
             1 << ((int)*(short *)((longlong)puVar20 + 0x56) & 0x1fU);
        if ((*(byte *)((longlong)puVar20 + 0x6d) == 0) && ((short)param_1[0x1e] == 0)) {
          fVar38 = (float)puVar20[0x11];
          if ((float)puVar20[0x11] <= (float)puVar20[0x12]) {
            fVar38 = (float)puVar20[0x12];
          }
          uVar17 = *puVar20;
          fVar38 = fVar38 - (float)puVar20[0xe];
          if (((uVar17 >> 0xd & 1) == 0) &&
             (fVar40 = (float)puVar20[0x14] - (float)puVar20[0xe], fVar38 <= fVar40)) {
            fVar38 = fVar40;
          }
          if ((((uVar17 & 0x10) != 0) && (0.0 < (float)puVar20[8])) &&
             (((param_1[1] & 1) == 0 || ((uVar17 & 0x20) != 0)))) {
            fVar38 = (float)puVar20[8];
          }
          if (fVar38 <= (float)param_1[0x2e]) {
            fVar38 = (float)param_1[0x2e];
          }
          puVar20[5] = (uint)fVar38;
        }
        uVar17 = *puVar20;
        uVar28 = uVar28 & 0xff;
        if ((uVar17 & 0x20) == 0) {
          uVar28 = 1;
        }
        local_f0 = (uint)uVar28;
        if ((((uVar17 & 0x10) != 0) && (0.0 < (float)puVar20[8])) && ((uVar17 & 0x20) != 0)) {
          puVar20[5] = puVar20[8];
        }
        fVar38 = (float)puVar20[5];
        if (*(byte *)((longlong)puVar20 + 0x6f) != 0) {
          bVar5 = true;
        }
        iVar19 = iVar22;
        if ((uVar17 & 8) == 0) {
          local_f4 = iVar26 + 1;
          iVar26 = local_f4;
          if (fVar44 <= fVar38) {
            fVar44 = fVar38;
          }
        }
        else {
          iVar23 = iVar23 + 1;
          fVar47 = fVar47 + fVar38;
          local_f8 = iVar23;
        }
      }
      uVar16 = param_1[0x1b];
      iVar33 = iVar33 + 1;
      uVar17 = local_ec;
      bVar9 = bVar5;
    } while (iVar33 < (int)uVar16);
  }
  lVar21 = local_e8;
  if ((((param_1[1] & 8) != 0) && ((short)param_1[0x80] == 0)) && ((param_1[1] >> 0x1b & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x8f) = 1;
  }
  *(short *)(param_1 + 0x88) = (short)iVar19;
  if (bVar5) {
    if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x62)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x62) + 0xd1) = 0;
      uVar16 = param_1[0x1b];
    }
    *(undefined1 *)((longlong)param_1 + 0x241) = 1;
  }
  uVar30 = 0;
  *(undefined4 *)((longlong)param_1 + 0x222) = 0xffffffff;
  fVar38 = DAT_180380e9c;
  fVar40 = 0.0;
  fVar46 = 0.0;
  if (0 < (int)uVar16) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + ((longlong)(int)uVar30 >> 5) * 4) >>
           (uVar30 & 0x1f) & 1) != 0) {
        lVar27 = *(longlong *)(param_1 + 6);
        lVar24 = (longlong)(int)uVar30 * 0x74;
        uVar16 = *(uint *)(lVar24 + lVar27) & 0x20;
        if ((*(uint *)(lVar24 + lVar27) & 0x10) == 0) {
          if (((*(char *)(lVar24 + 0x6f + lVar27) != '\0') ||
              (fVar41 = *(float *)(lVar24 + 0x1c + lVar27), fVar41 < 0.0)) || (uVar16 != 0)) {
            fVar41 = *(float *)(lVar24 + 0x20 + lVar27);
            if (fVar41 <= 0.0) {
              if (uVar17 == 0x6000) {
                fVar41 = (*(float *)(lVar24 + 0x14 + lVar27) / fVar47) * (float)iVar23;
                *(float *)(lVar24 + 0x1c + lVar27) = fVar41;
              }
              else {
                *(undefined4 *)(lVar24 + 0x1c + lVar27) = 0x3f800000;
                fVar41 = fVar35;
              }
            }
            else {
              *(float *)(lVar24 + 0x1c + lVar27) = fVar41;
            }
          }
          psVar29 = (short *)(lVar27 + 0x56 + lVar24);
          fVar46 = fVar46 + fVar41;
          if ((*(short *)((longlong)param_1 + 0x222) == -1) ||
             (*psVar29 <
              *(short *)((longlong)*(short *)((longlong)param_1 + 0x222) * 0x74 + 0x56 +
                        *(longlong *)(param_1 + 6)))) {
            *(short *)((longlong)param_1 + 0x222) = (short)uVar30;
          }
          if (((short)param_1[0x89] == -1) ||
             (*(short *)((longlong)(short)param_1[0x89] * 0x74 + 0x56 + *(longlong *)(param_1 + 6))
              < *psVar29)) {
            *(short *)(param_1 + 0x89) = (short)uVar30;
          }
        }
        else {
          fVar41 = *(float *)(lVar24 + 0x14 + lVar27);
          if ((uVar17 == 0x4000) && ((*(char *)(lVar24 + 0x6f + lVar27) != '\0' || (uVar16 != 0))))
          {
            fVar41 = fVar44;
          }
          bVar10 = *(byte *)(lVar24 + 0x6f + lVar27);
          if (bVar10 == 0) {
            if ((uVar16 != 0) && (*(char *)(lVar24 + 0x6b + lVar27) != '\0')) {
              *(float *)(lVar24 + 0x10 + lVar27) = fVar41;
            }
          }
          else {
            *(float *)(lVar24 + 0x10 + lVar27) = fVar41;
            if (((1 < bVar10) && (*(char *)((longlong)param_1 + 0x23b) != '\0')) &&
               (*(char *)(lVar24 + 0x6d + lVar27) == '\0')) {
              if (fVar41 <= (float)param_1[0x2e] * fVar38) {
                fVar41 = (float)param_1[0x2e] * fVar38;
              }
              *(float *)(lVar24 + 0x10 + lVar27) = fVar41;
              fVar40 = fVar40 + fVar41;
              goto LAB_1802a29fb;
            }
          }
          fVar40 = fVar40 + *(float *)(lVar24 + 0x10 + lVar27);
        }
LAB_1802a29fb:
        *(undefined1 *)(lVar24 + 0x6d + lVar27) = 0;
        fVar40 = fVar40 + (float)param_1[0x30] + (float)param_1[0x30];
      }
      uVar16 = param_1[0x1b];
      uVar30 = uVar30 + 1;
      iVar23 = local_f8;
    } while ((int)uVar30 < (int)uVar16);
  }
  fVar44 = (float)param_1[0x44];
  fVar38 = (float)param_1[0x45];
  *(short *)(param_1 + 0x81) = (short)local_f4;
  param_1[0x36] = (uint)fVar46;
  fVar47 = ((float)param_1[0x32] + (float)param_1[0x31]) *
           (float)(*(short *)((longlong)param_1 + 0x202) + -1) +
           (float)param_1[0x2f] + (float)param_1[0x2f];
  if ((*(char *)((longlong)param_1 + 0x24a) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x62) + 0xc9) != '\0')) {
    fVar41 = 0.0;
  }
  else {
    fVar41 = *(float *)(local_e8 + 0xcfc);
  }
  uVar17 = param_1[1];
  if (((uVar17 >> 0x18 & 1) == 0) || ((float)param_1[0x33] != 0.0)) {
    fVar34 = (float)param_1[0x46] - fVar44;
  }
  else {
    fVar34 = (float)param_1[0x4a] - (float)param_1[0x48];
  }
  uVar30 = 0;
  fVar45 = fVar35;
  if (fVar35 <= fVar34 - fVar41) {
    fVar45 = fVar34 - fVar41;
  }
  fVar40 = (fVar45 - fVar47) - fVar40;
  param_1[0x34] =
       (uint)(((float)param_1[0x30] + (float)param_1[0x30]) *
              (float)(int)*(short *)((longlong)param_1 + 0x202) + fVar47);
  fVar47 = DAT_180380980;
  fVar41 = fVar40;
  if (0 < (int)uVar16) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + ((longlong)(int)uVar30 >> 5) * 4) >>
           (uVar30 & 0x1f) & 1) != 0) {
        lVar27 = *(longlong *)(param_1 + 6);
        lVar24 = (longlong)(int)uVar30 * 0x74;
        uVar17 = *(uint *)(lVar24 + lVar27);
        if ((uVar17 & 8) != 0) {
          fVar34 = (*(float *)(lVar24 + 0x1c + lVar27) / fVar46) * fVar40;
          if (fVar34 <= (float)param_1[0x2e]) {
            fVar34 = (float)param_1[0x2e];
          }
          *(float *)(lVar24 + lVar27 + 0x10) = (float)(int)(fVar34 + fVar47);
          fVar41 = fVar41 - (float)(int)(fVar34 + fVar47);
        }
        if ((*(short *)(lVar24 + 0x5c + lVar27) == -1) &&
           (*(short *)((longlong)param_1 + 0x222) != -1)) {
          *(uint *)(lVar24 + lVar27) = uVar17 | 0x40000000;
        }
        fVar34 = *(float *)(lVar24 + lVar27 + 0x10);
        if (fVar34 <= (float)param_1[0x2e]) {
          fVar34 = (float)param_1[0x2e];
        }
        *(float *)(lVar24 + 4 + lVar27) = (float)(int)fVar34;
        param_1[0x34] = (uint)((float)(int)fVar34 + (float)param_1[0x34]);
      }
      uVar16 = param_1[0x1b];
      uVar30 = uVar30 + 1;
    } while ((int)uVar30 < (int)uVar16);
    uVar17 = param_1[1];
  }
  fVar47 = DAT_180381384;
  if (((fVar35 <= fVar41) && ((uVar17 >> 0x13 & 1) == 0)) && (0.0 < fVar46)) {
    while ((uVar16 = uVar16 - 1, fVar35 <= fVar41 && (-1 < (int)uVar16))) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x12) + ((longlong)(int)uVar16 >> 5) * 4) >>
           (uVar16 & 0x1f) & 1) != 0) {
        lVar24 = (longlong)*(short *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar16 * 2) *
                 0x74;
        lVar27 = *(longlong *)(param_1 + 6);
        if ((*(byte *)(lVar24 + lVar27) & 8) != 0) {
          fVar41 = fVar41 + fVar47;
          *(float *)(lVar24 + 0x10 + lVar27) = *(float *)(lVar24 + 0x10 + lVar27) + fVar35;
          *(float *)(lVar24 + 4 + lVar27) = *(float *)(lVar24 + 4 + lVar27) + fVar35;
        }
      }
    }
  }
  if ((short)param_1[0x1e] == 0) {
    puVar20 = param_1 + 0x6a;
  }
  else {
    puVar20 = (uint *)(*(longlong *)(param_1 + 0x72) + (longlong)((short)param_1[0x1e] + -1) * 0x18)
    ;
  }
  puVar20[4] = puVar20[5];
  puVar20[5] = 0xffffffff;
  local_dc = (float)param_1[0x3d];
  *(undefined4 *)((longlong)param_1 + 0x20a) = 0xffffffff;
  local_d8 = param_1[0x3e];
  local_d4 = (float)param_1[0x3f];
  if ((float)param_1[0x3f] <= local_dc + (float)puVar20[1]) {
    local_d4 = local_dc + (float)puVar20[1];
  }
  local_e0 = param_1[0x3c];
  uVar4 = *(undefined4 *)(local_e8 + 0x1594);
  *(undefined4 *)(local_e8 + 0x1594) = 0;
  cVar11 = FUN_18026f180(&local_e0,0,0);
  fVar35 = *(float *)(lVar21 + 0x100);
  *(undefined4 *)(lVar21 + 0x1594) = uVar4;
  if (0.0 < (float)param_1[0x3a]) {
    fVar47 = *(float *)(lVar21 + 0x104);
    if (((float)param_1[0x3d] <= fVar47) &&
       (fVar40 = (float)param_1[0x3a] + (float)param_1[0x3d], fVar47 <= fVar40)) {
      fVar35 = (float)(int)((fVar40 - fVar47) * (float)param_1[0x3b]) + fVar35;
    }
  }
  bVar9 = false;
  bVar5 = 0 < *(short *)((longlong)param_1 + 0x22e);
  fVar47 = fVar44;
  if (0 < *(short *)((longlong)param_1 + 0x22e)) {
    fVar47 = (float)param_1[0x3c];
  }
  fVar40 = (float)param_1[0x48];
  fVar46 = (float)param_1[0x49];
  fVar41 = (float)param_1[0x4a];
  fVar48 = (fVar47 + (float)param_1[0x2f]) - (float)param_1[0x31];
  fVar47 = (float)param_1[0x4b];
  memset(*(void **)(param_1 + 0x16),0,(longlong)((int)(param_1[0x1b] + 0x1f) >> 5) << 2);
  fVar45 = DAT_180381308;
  fVar34 = DAT_180380afc;
  iVar23 = 0;
  if ((int)param_1[0x1b] < 1) {
LAB_1802a32f3:
    *(undefined1 *)
     ((longlong)*(short *)((longlong)param_1 + 0x21e) * 0x74 + 0x6b + *(longlong *)(param_1 + 6)) =
         1;
    *(undefined1 *)
     ((longlong)*(short *)((longlong)param_1 + 0x21e) * 0x74 + 0x6c + *(longlong *)(param_1 + 6)) =
         0;
  }
  else {
    do {
      lVar21 = *(longlong *)(param_1 + 6);
      sVar15 = *(short *)(*(longlong *)(param_1 + 10) + (longlong)iVar23 * 2);
      uVar32 = 1;
      lVar27 = (longlong)sVar15 * 0x74;
      if (*(short *)((longlong)param_1 + 0x22a) < 1) {
        uVar32 = (undefined1)param_1[0x8e];
      }
      *(undefined1 *)(lVar21 + 0x6e + lVar27) = uVar32;
      if ((bVar5) && (*(short *)((longlong)param_1 + 0x22e) == iVar23)) {
        bVar5 = false;
        fVar48 = fVar48 + (fVar44 - (float)param_1[0x3c]);
      }
      *(uint *)(lVar21 + lVar27) = *(uint *)(lVar21 + lVar27) & 0xf0ffffff;
      uVar17 = *(uint *)(*(longlong *)(param_1 + 0x12) + ((longlong)iVar23 >> 5) * 4);
      *(float *)(lVar21 + 8 + lVar27) = fVar48;
      if ((1 << ((byte)iVar23 & 0x1f) & uVar17) == 0) {
        *(undefined4 *)(lVar21 + 4 + lVar27) = 0;
        *(undefined4 *)(lVar21 + 0x30 + lVar27) = 0x7f7fffff;
        *(float *)(lVar21 + 0x2c + lVar27) = fVar48;
        *(float *)(lVar21 + 0x38 + lVar27) = fVar48;
        *(float *)(lVar21 + 0xc + lVar27) = fVar48;
        fVar37 = fVar46;
        if ((fVar46 <= fVar38) && (fVar37 = fVar47, fVar38 <= fVar47)) {
          fVar37 = fVar38;
        }
        fVar36 = fVar40;
        if ((fVar40 <= fVar48) && (fVar36 = fVar41, fVar48 <= fVar41)) {
          fVar36 = fVar48;
        }
        *(float *)(lVar21 + 0x24 + lVar27) = fVar36;
        *(float *)(lVar21 + 0x28 + lVar27) = fVar37;
        fVar37 = *(float *)(lVar21 + 0x30 + lVar27);
        fVar36 = fVar46;
        if ((fVar46 <= fVar37) && (fVar36 = fVar47, fVar37 <= fVar47)) {
          fVar36 = fVar37;
        }
        fVar37 = fVar40;
        if ((fVar40 <= fVar48) && (fVar37 = fVar41, fVar48 <= fVar41)) {
          fVar37 = fVar48;
        }
        *(float *)(lVar21 + 0x2c + lVar27) = fVar37;
        *(float *)(lVar21 + 0x30 + lVar27) = fVar36;
        *(undefined2 *)(lVar21 + 0x6a + lVar27) = 0;
        *(undefined1 *)(lVar21 + 0x69 + lVar27) = 0;
        *(undefined1 *)(lVar21 + 0x6c + lVar27) = 1;
        *(undefined4 *)(lVar21 + 0x40 + lVar27) = 0x3f800000;
      }
      else {
        fVar37 = (float)param_1[0x30];
        fVar36 = (float)param_1[0x32];
        lVar24 = *(longlong *)(param_1 + 6);
        fVar42 = fVar37 + fVar37 + (float)param_1[0x2e] + (float)param_1[0x31] + fVar36;
        fVar39 = fVar45;
        if ((param_1[1] >> 0x18 & 1) == 0) {
          if ((param_1[1] >> 0x12 & 1) == 0) {
            fVar39 = (((((float)param_1[0x46] -
                        (float)(((int)*(short *)((longlong)param_1 + 0x202) -
                                (int)*(short *)(lVar24 + 0x58 + lVar27)) + -1) * fVar42) -
                       *(float *)(lVar24 + 8 + lVar27)) - fVar36) - (fVar37 + fVar37)) -
                     (float)param_1[0x2f];
          }
        }
        else {
          sVar14 = *(short *)(lVar24 + 0x56 + lVar27);
          if (sVar14 < (short)param_1[0x8b]) {
            fVar39 = (((((float)param_1[0x4a] -
                        (float)((int)(short)param_1[0x8b] - (int)sVar14) * fVar42) -
                       *(float *)(lVar24 + 8 + lVar27)) - (float)param_1[0x2f]) - fVar37) - fVar36;
          }
        }
        fVar37 = *(float *)(lVar21 + 4 + lVar27);
        fVar36 = *(float *)(lVar21 + 0x10 + lVar27);
        if (fVar39 <= fVar37) {
          fVar37 = fVar39;
        }
        fVar42 = *(float *)(lVar21 + 0x38 + lVar27);
        *(float *)(lVar21 + 0x18 + lVar27) = fVar39;
        *(float *)(lVar21 + 4 + lVar27) = fVar37;
        if ((float)param_1[0x2e] <= fVar36) {
          fVar36 = (float)param_1[0x2e];
        }
        if (fVar37 <= fVar36) {
          fVar37 = fVar36;
        }
        *(float *)(lVar21 + 4 + lVar27) = fVar37;
        fVar43 = fVar37 + fVar48 + (float)param_1[0x31] + (float)param_1[0x32] +
                 (float)param_1[0x30] + (float)param_1[0x30];
        *(float *)(lVar21 + 0xc + lVar27) = fVar43;
        *(float *)(lVar21 + 0x38 + lVar27) = fVar48 + (float)param_1[0x30] + (float)param_1[0x31];
        fVar36 = (float)param_1[0x30];
        fVar39 = (float)param_1[0x32];
        *(float *)(lVar21 + 0x40 + lVar27) = (float)(int)(fVar37 * fVar34);
        *(float *)(lVar21 + 0x2c + lVar27) = fVar43;
        *(undefined4 *)(lVar21 + 0x30 + lVar27) = 0x7f7fffff;
        *(float *)(lVar21 + 0x3c + lVar27) = (fVar43 - fVar36) - fVar39;
        fVar37 = fVar46;
        if ((fVar46 <= fVar38) && (fVar37 = fVar47, fVar38 <= fVar47)) {
          fVar37 = fVar38;
        }
        fVar36 = fVar40;
        if ((fVar40 <= fVar48) && (fVar36 = fVar41, fVar48 <= fVar41)) {
          fVar36 = fVar48;
        }
        *(float *)(lVar21 + 0x24 + lVar27) = fVar36;
        *(float *)(lVar21 + 0x28 + lVar27) = fVar37;
        fVar37 = *(float *)(lVar21 + 0x30 + lVar27);
        fVar36 = fVar46;
        if ((fVar46 <= fVar37) && (fVar36 = fVar47, fVar37 <= fVar47)) {
          fVar36 = fVar37;
        }
        fVar37 = *(float *)(lVar21 + 0x2c + lVar27);
        fVar39 = fVar40;
        if ((fVar40 <= fVar37) && (fVar39 = fVar41, fVar37 <= fVar41)) {
          fVar39 = fVar37;
        }
        *(float *)(lVar21 + 0x2c + lVar27) = fVar39;
        *(float *)(lVar21 + 0x30 + lVar27) = fVar36;
        fVar37 = *(float *)(lVar21 + 0x2c + lVar27);
        pfVar3 = (float *)(lVar21 + 0x24 + lVar27);
        bVar6 = fVar37 != *pfVar3;
        bVar7 = *pfVar3 <= fVar37;
        *(undefined1 *)(lVar21 + 0x6a + lVar27) = 1;
        *(bool *)(lVar21 + 0x69 + lVar27) = bVar7 && bVar6;
        if ((NAN(fVar37) || NAN(*pfVar3)) || (!bVar7 || !bVar6)) {
          if ((*(char *)(lVar21 + 0x6f + lVar27) != '\0') ||
             (*(char *)(lVar21 + 0x70 + lVar27) != '\0')) goto LAB_1802a319f;
          cVar13 = '\0';
        }
        else {
          *(uint *)(*(longlong *)(param_1 + 0x16) + ((longlong)sVar15 >> 5) * 4) =
               *(uint *)(*(longlong *)(param_1 + 0x16) + ((longlong)sVar15 >> 5) * 4) |
               1 << ((int)sVar15 & 0x1fU);
LAB_1802a319f:
          cVar13 = '\x01';
        }
        *(char *)(lVar21 + 0x6b + lVar27) = cVar13;
        if ((*(char *)(lVar21 + 0x66 + lVar27) == '\0') || ((char)param_1[0x93] != '\0')) {
          cVar12 = '\x01';
        }
        else {
          cVar12 = '\0';
        }
        *(char *)(lVar21 + 0x6c + lVar27) = cVar12;
        if ((cVar13 != '\0') && (cVar12 == '\0')) {
          bVar9 = true;
        }
        *(uint *)(lVar21 + lVar27) = *(uint *)(lVar21 + lVar27) | 0x1000000;
        uVar17 = *(uint *)(lVar21 + lVar27);
        if (bVar7 && bVar6) {
          uVar17 = uVar17 | 0x2000000;
          *(uint *)(lVar21 + lVar27) = uVar17;
        }
        if (*(short *)(lVar21 + 0x5e + lVar27) != -1) {
          uVar17 = uVar17 | 0x4000000;
          *(uint *)(lVar21 + lVar27) = uVar17;
        }
        if (((cVar11 != '\0') && (*(float *)(lVar21 + 0x24 + lVar27) <= fVar35)) &&
           (fVar35 < *(float *)(lVar21 + 0x2c + lVar27))) {
          *(uint *)(lVar21 + lVar27) = uVar17 | 0x8000000;
          *(short *)((longlong)param_1 + 0x20a) = sVar15;
        }
        fVar37 = *(float *)(lVar21 + 0x38 + lVar27);
        if ((short)param_1[0x1e] == 0) {
          pfVar3 = (float *)(lVar21 + 0x44 + lVar27);
          *pfVar3 = fVar37;
          pfVar3[1] = fVar37;
          pfVar3[2] = fVar37;
          pfVar3[3] = fVar37;
        }
        else {
          pfVar3 = (float *)(lVar21 + 0x44 + lVar27);
          fVar36 = pfVar3[1];
          fVar39 = pfVar3[2];
          fVar43 = pfVar3[3];
          fVar37 = fVar37 - fVar42;
          pfVar1 = (float *)(lVar21 + 0x44 + lVar27);
          *pfVar1 = *pfVar3 + fVar37;
          pfVar1[1] = fVar36 + fVar37;
          pfVar1[2] = fVar39 + fVar37;
          pfVar1[3] = fVar43 + fVar37;
        }
        if (((char)param_1[0x93] == '\0') && ((short)param_1[0x1e] == 0)) {
          pbVar2 = (byte *)(lVar21 + 0x6f + lVar27);
          *pbVar2 = *pbVar2 >> 1;
          pbVar2 = (byte *)(lVar21 + 0x70 + lVar27);
          *pbVar2 = *pbVar2 >> 1;
        }
        if (((iVar23 < *(short *)((longlong)param_1 + 0x22e)) &&
            (fVar37 = *(float *)(lVar21 + 0xc + lVar27) + DAT_180380bb0, fVar40 <= fVar37)) &&
           (fVar40 = fVar41, fVar37 <= fVar41)) {
          fVar40 = fVar37;
        }
        fVar48 = fVar48 + (float)param_1[0x31] + *(float *)(lVar21 + 4 + lVar27) +
                          (float)param_1[0x32] + (float)param_1[0x30] + (float)param_1[0x30];
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < (int)param_1[0x1b]);
    lVar21 = local_e8;
    if (!bVar9) goto LAB_1802a32f3;
  }
  fVar44 = *(float *)((longlong)(short)param_1[0x88] * 0x74 + 0x2c + *(longlong *)(param_1 + 6));
  fVar38 = (float)param_1[0x44];
  if ((float)param_1[0x44] <= fVar44) {
    fVar38 = fVar44;
  }
  if (((cVar11 != '\0') && (*(short *)((longlong)param_1 + 0x20a) == -1)) && (fVar38 <= fVar35)) {
    *(short *)((longlong)param_1 + 0x20a) = (short)param_1[0x1b];
  }
  if (((char)local_f0 == '\0') && ((param_1[1] & 1) != 0)) {
    param_1[1] = param_1[1] & 0xfffffffe;
  }
  *(bool *)((longlong)param_1 + 0x247) = *(int *)(lVar21 + 0x1598) != 0;
  if ((short)param_1[0x89] != -1) {
    param_1[1] = param_1[1] & 0xfffeffff;
  }
  if ((param_1[1] & 0x10000) != 0) {
    fVar44 = (float)param_1[0x4a];
    if (fVar38 <= (float)param_1[0x4a]) {
      fVar44 = fVar38;
    }
    param_1[0x46] = (uint)fVar38;
    param_1[0x3e] = (uint)fVar38;
    param_1[0x4a] = (uint)fVar44;
  }
  lVar27 = *(longlong *)(param_1 + 0x62);
  uVar8 = *(undefined8 *)(param_1 + 0x46);
  *(undefined8 *)(lVar27 + 600) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(lVar27 + 0x260) = uVar8;
  param_1[0x2b] = param_1[0x48];
  param_1[0x2c] = param_1[0x4a];
  if ((param_1[1] >> 0x11 & 1) == 0) {
    if ((param_1[1] >> 0x19 & 1) == 0) {
      fVar44 = (float)param_1[0x3f];
    }
    else {
      fVar44 = 0.0;
    }
    fVar38 = *(float *)(*(longlong *)(param_1 + 0x62) + 0x284);
    if (*(float *)(*(longlong *)(param_1 + 0x62) + 0x284) <= fVar44) {
      fVar38 = fVar44;
    }
  }
  else {
    fVar38 = (float)param_1[0x3f];
  }
  lVar27 = *(longlong *)(param_1 + 0x62);
  fVar38 = fVar38 - *(float *)(lVar21 + 0xce8);
  fVar44 = *(float *)(lVar27 + 0x24c);
  if ((*(float *)(lVar27 + 0x24c) <= fVar38) &&
     (fVar44 = *(float *)(lVar27 + 0x254), fVar38 <= *(float *)(lVar27 + 0x254))) {
    fVar44 = fVar38;
  }
  *(float *)(lVar27 + 0x254) = fVar44;
  FUN_1802a5b10(param_1);
  if ((param_1[1] & 1) != 0) {
    FUN_1802a3780(param_1);
  }
  puVar20[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x239) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20e) = 0xffff;
  if (((*(char *)((longlong)param_1 + 0x23e) == '\0') ||
      (sVar15 = *(short *)((longlong)param_1 + 0x226), sVar15 == -1)) ||
     (*(short *)((longlong)param_1 + 0x7a) != (short)param_1[0x1e])) {
    if ((param_1[1] & 0x10000000) == 0) goto LAB_1802a354c;
    sVar15 = *(short *)((longlong)param_1 + 0x20a);
    if ((((sVar15 == -1) || ((int)sVar15 == param_1[0x1b])) || ((short)param_1[0x83] != -1)) ||
       (((*(int *)(lVar21 + 0x1594) != 0 && ((char)param_1[0x92] == '\0')) &&
        (*(char *)(lVar21 + 0x2298) == '\0')))) goto LAB_1802a354c;
  }
  *(short *)((longlong)param_1 + 0x20e) = sVar15;
LAB_1802a354c:
  if (((*(char *)((longlong)param_1 + 0x23f) == '\0') &&
      (*(char *)((longlong)param_1 + 0x23e) != '\0')) &&
     ((short)param_1[0x1e] == *(short *)((longlong)param_1 + 0x7a))) {
    pcVar25 = "##ContextMenu";
    uVar28 = 0x23;
    uVar17 = ~*param_1;
    do {
      pcVar25 = pcVar25 + 1;
      if ((((char)uVar28 == '#') && (*pcVar25 == 0x23)) && (pcVar25[1] == 0x23)) {
        pcVar25 = pcVar25 + 2;
        uVar17 = ~*param_1;
      }
      else {
        uVar17 = uVar17 >> 8 ^ *(uint *)(&DAT_180331380 + (uVar17 & 0xff ^ uVar28) * 4);
      }
      uVar28 = (ulonglong)(byte)*pcVar25;
    } while (*pcVar25 != 0);
    cVar11 = FUN_180281660(~uVar17,0x141);
    if (cVar11 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x23e) = 0;
    }
    else {
      FUN_1802a81b0(param_1,param_1[1]);
      FUN_180281800();
    }
  }
  if (((char)param_1[0x8f] != '\0') && ((param_1[1] & 8) != 0)) {
    FUN_1802a6df0(param_1);
  }
  if (0 < (short)param_1[0x8b]) {
    *(float *)(*(longlong *)(param_1 + 0x62) + 0x80) =
         *(float *)((longlong)
                    *(short *)(*(longlong *)(param_1 + 10) + -2 + (longlong)(short)param_1[0x8b] * 2
                              ) * 0x74 + 0xc + *(longlong *)(param_1 + 6)) - (float)param_1[0x3c];
  }
  if (0 < (short)param_1[0x8a]) {
    *(uint *)(*(longlong *)(param_1 + 0x62) + 0x84) = puVar20[3];
  }
  puVar20[3] = 0;
  lVar27 = *(longlong *)(param_1 + 0x62);
  if ((((*(longlong *)(lVar21 + 0x2448) == lVar27) && (*(char *)(lVar21 + 0x2450) != '\0')) &&
      (*(float *)(lVar21 + 0x2454) < *(float *)(lVar21 + 0x245c) ||
       *(float *)(lVar21 + 0x2454) == *(float *)(lVar21 + 0x245c))) &&
     ((*(float *)(lVar21 + 0x2458) < *(float *)(lVar21 + 0x2460) ||
       *(float *)(lVar21 + 0x2458) == *(float *)(lVar21 + 0x2460) &&
      (iVar23 = 0, 0 < (int)param_1[0x1b])))) {
    do {
      lVar18 = (longlong)iVar23 * 0x74;
      lVar24 = *(longlong *)(param_1 + 6);
      if ((((*(char *)(lVar18 + 0x6b + lVar24) == '\0') &&
           (((float)param_1[0x45] <= *(float *)(lVar21 + 0x2460) &&
             *(float *)(lVar21 + 0x2460) != (float)param_1[0x45] &&
            (*(float *)(lVar21 + 0x2458) <= fVar45 && fVar45 != *(float *)(lVar21 + 0x2458))))) &&
          (pfVar3 = (float *)(lVar18 + 8 + lVar24),
          *pfVar3 <= *(float *)(lVar21 + 0x245c) && *(float *)(lVar21 + 0x245c) != *pfVar3)) &&
         (fVar44 = *(float *)(lVar18 + 0xc + lVar24),
         *(float *)(lVar21 + 0x2454) <= fVar44 && fVar44 != *(float *)(lVar21 + 0x2454))) {
        *(undefined1 *)(lVar18 + 0x6b + lVar24) = 1;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < (int)param_1[0x1b]);
  }
  if ((param_1[1] & 0x100000) == 0) {
    FUN_180292550(*(undefined8 *)(lVar27 + 0x2c8),lVar27 + 0x238,lVar27 + 0x240,0);
  }
  else {
    FUN_180297210(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar27 + 0x2c8),2);
  }
  return;
}


