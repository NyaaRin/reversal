// 0x1802a8cb0  FUN_1802a8cb0
// size=878 thunk=false
// signature: undefined FUN_1802a8cb0()
// status: ok


void FUN_1802a8cb0(undefined4 *param_1)

{
  byte *pbVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar11 + 0xec0);
  *(undefined1 *)(param_1 + 0x90) = 0;
  if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
    if (param_1[0x19] == -1) {
      lVar9 = FUN_1802a89b0(*param_1);
      if (lVar9 == 0) {
        return;
      }
      if ((int)*(short *)(lVar9 + 0xc) != param_1[0x1b]) {
        *(undefined1 *)((longlong)param_1 + 0x241) = 1;
      }
      param_1[0x19] = (int)lVar9 - *(int *)(lVar5 + 0x27e0);
    }
    else {
      lVar9 = FUN_1802a8a40(param_1);
    }
    iVar15 = 0;
    iVar8 = param_1[0x1b];
    param_1[0x18] = *(undefined4 *)(lVar9 + 4);
    param_1[0x39] = *(undefined4 *)(lVar9 + 8);
    fVar6 = DAT_180381384;
    if (0 < iVar8) {
      do {
        puVar13 = (uint *)((longlong)iVar15 * 0x74 + *(longlong *)(param_1 + 6));
        uVar4 = *puVar13;
        fVar2 = (float)puVar13[8];
        fVar17 = fVar6;
        if (((uVar4 & 0x10) != 0) && (0.0 < fVar2)) {
          fVar17 = fVar2;
        }
        puVar13[4] = (uint)fVar17;
        fVar17 = fVar6;
        if ((0.0 < fVar2) && ((uVar4 & 8) != 0)) {
          fVar17 = fVar2;
        }
        puVar13[7] = (uint)fVar17;
        if (0.0 < fVar2) {
          *(undefined1 *)((longlong)puVar13 + 0x6f) = 0;
        }
        *(short *)((longlong)puVar13 + 0x56) =
             (short)(((longlong)puVar13 - *(longlong *)(param_1 + 6)) / 0x74);
        bVar7 = ~(byte)(uVar4 >> 1) & 1;
        *(byte *)(puVar13 + 0x1a) = bVar7;
        *(byte *)((longlong)puVar13 + 0x67) = bVar7;
        *(ushort *)((longlong)puVar13 + 0x5e) = ((uVar4 & 4) != 0) - 1;
        if ((uVar4 & 4) == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = ((uVar4 >> 0xf & 1) != 0) + 1;
        }
        *(byte *)((longlong)puVar13 + 0x71) = *(byte *)((longlong)puVar13 + 0x71) & 0xfc;
        iVar15 = iVar15 + 1;
        *(byte *)((longlong)puVar13 + 0x71) = *(byte *)((longlong)puVar13 + 0x71) | bVar7;
        *(undefined1 *)((longlong)puVar13 + 0x6f) = 0;
        iVar8 = param_1[0x1b];
      } while (iVar15 < iVar8);
    }
    iVar15 = 0;
    puVar12 = (undefined4 *)(lVar9 + 0x14);
    if (0 < *(short *)(lVar9 + 0xc)) {
      do {
        sVar3 = *(short *)(puVar12 + 2);
        if ((-1 < sVar3) && ((int)sVar3 < (int)param_1[0x1b])) {
          lVar5 = *(longlong *)(param_1 + 6);
          lVar14 = (longlong)sVar3 * 0x74;
          if ((*(byte *)(lVar9 + 4) & 1) != 0) {
            if ((*(byte *)((longlong)puVar12 + 0xe) & 0x10) == 0) {
              *(undefined4 *)(lVar14 + 0x10 + lVar5) = *puVar12;
            }
            else {
              *(undefined4 *)(lVar14 + 0x1c + lVar5) = *puVar12;
            }
          }
          if ((*(byte *)(lVar9 + 4) & 2) != 0) {
            *(undefined2 *)(lVar14 + 0x56 + lVar5) = *(undefined2 *)((longlong)puVar12 + 10);
          }
          if (((*(byte *)(lVar9 + 4) & 4) != 0) &&
             (bVar7 = *(char *)((longlong)puVar12 + 0xe) << 4, (bVar7 & 0xc0) != 0xc0)) {
            bVar16 = (bVar7 & 0xc0) == 0x40;
            *(bool *)(lVar14 + 0x68 + lVar5) = bVar16;
            *(bool *)(lVar14 + 0x67 + lVar5) = bVar16;
          }
          *(undefined2 *)(lVar14 + 0x5e + lVar5) = *(undefined2 *)(puVar12 + 3);
          pbVar1 = (byte *)(lVar14 + 0x71 + lVar5);
          *pbVar1 = *pbVar1 ^ (*(byte *)(lVar14 + 0x71 + lVar5) ^ *(byte *)((longlong)puVar12 + 0xe)
                              ) & 3;
        }
        iVar15 = iVar15 + 1;
        puVar12 = puVar12 + 4;
      } while (iVar15 < *(short *)(lVar9 + 0xc));
      iVar8 = param_1[0x1b];
    }
    if ((*(byte *)(lVar9 + 4) & 2) != 0) {
      if (*(char *)(lVar11 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar11 = *(longlong *)(lVar11 + 0xec0);
      iVar8 = param_1[0x1b];
      if (*(int *)(lVar11 + 0x2aec) < iVar8 * 0x10) {
        pvVar10 = (void *)FUN_18026f580();
        if (*(void **)(lVar11 + 0x2af0) != (void *)0x0) {
          memcpy(pvVar10,*(void **)(lVar11 + 0x2af0),(longlong)*(int *)(lVar11 + 0x2ae8));
          FUN_18026f680();
        }
        *(void **)(lVar11 + 0x2af0) = pvVar10;
        *(int *)(lVar11 + 0x2aec) = iVar8 * 0x10;
      }
      iVar8 = param_1[0x1b];
      iVar15 = 0;
      pvVar10 = *(void **)(lVar11 + 0x2af0);
      if (0 < iVar8) {
        do {
          lVar11 = (longlong)iVar15;
          *(short *)((longlong)pvVar10 + lVar11 * 0x10) = (short)iVar15;
          iVar15 = iVar15 + 1;
          *(undefined4 **)((longlong)pvVar10 + lVar11 * 0x10 + 8) = param_1;
          iVar8 = param_1[0x1b];
        } while (iVar15 < iVar8);
      }
      if (1 < (ulonglong)(longlong)iVar8) {
        qsort(pvVar10,(longlong)iVar8,0x10,(_PtFuncCompare *)&LAB_1802a9020);
      }
      iVar15 = 0;
      if ((int)param_1[0x1b] < 1) {
        return;
      }
      do {
        *(short *)((longlong)*(short *)((longlong)pvVar10 + (longlong)iVar15 * 0x10) * 0x74 + 0x56 +
                  *(longlong *)(param_1 + 6)) = (short)iVar15;
        iVar15 = iVar15 + 1;
        iVar8 = param_1[0x1b];
      } while (iVar15 < iVar8);
    }
    iVar15 = 0;
    if (0 < iVar8) {
      do {
        *(short *)(*(longlong *)(param_1 + 10) +
                  (longlong)*(short *)((longlong)iVar15 * 0x74 + 0x56 + *(longlong *)(param_1 + 6))
                  * 2) = (short)iVar15;
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)param_1[0x1b]);
    }
  }
  return;
}


