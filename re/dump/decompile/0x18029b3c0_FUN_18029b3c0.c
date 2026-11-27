// 0x18029b3c0  FUN_18029b3c0
// size=1433 thunk=false
// signature: undefined FUN_18029b3c0()
// status: ok


void FUN_18029b3c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int *piVar26;
  longlong lVar27;
  uint *puVar28;
  void *local_a0;
  
  lVar13 = *(longlong *)(param_1 + 0x2b0);
  *(undefined1 *)(lVar13 + 0xb8) = 1;
  puVar14 = *(undefined4 **)(param_1 + 0x38);
  puVar18 = (undefined4 *)FUN_18029b1e0();
  *(undefined1 *)((longlong)puVar18 + 0x56) = *(undefined1 *)((longlong)puVar14 + 0x56);
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar25 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((*(longlong *)(lVar25 + 0xec0) != 0) &&
     ((*(uint *)(*(longlong *)(lVar25 + 0xec0) + 0x28e4) & 0x100) != 0)) {
    FUN_180289170("[font] Texture #%03d: resize+repack %dx%d => Texture #%03d: %dx%d\n",*puVar14,
                  puVar14[7],puVar14[8],*puVar18,puVar18[7],puVar18[8]);
  }
  FUN_18029c170(param_1);
  local_a0 = (void *)0x0;
  iVar10 = *(int *)(lVar13 + 0x70);
  if (0 < iVar10) {
    iVar20 = iVar10;
    if (iVar10 < 8) {
      iVar20 = 8;
    }
    if (0 < iVar20) {
      local_a0 = (void *)FUN_18026f580((longlong)iVar20 << 2);
    }
  }
  if ((local_a0 != (void *)0x0) && (*(void **)(lVar13 + 0x78) != (void *)0x0)) {
    memcpy(local_a0,*(void **)(lVar13 + 0x78),(longlong)iVar10 << 2);
  }
  uVar11 = *(undefined4 *)(lVar13 + 0x60);
  *(undefined4 *)(lVar13 + 0x60) = 0;
  uVar12 = *(undefined4 *)(lVar13 + 100);
  *(undefined4 *)(lVar13 + 100) = 0;
  lVar27 = *(longlong *)(lVar13 + 0x68);
  *(undefined8 *)(lVar13 + 0x68) = 0;
  puVar28 = *(uint **)(lVar13 + 0x78);
  puVar1 = puVar28 + *(int *)(lVar13 + 0x70);
  do {
    if (puVar28 == puVar1) {
      uVar16 = 0;
      *(undefined8 *)(lVar13 + 0x9c) = 0;
      if (0 < *(int *)(lVar13 + 0xc0)) {
        do {
          uVar22 = uVar16 & 0x1f;
          uVar17 = uVar16;
          if ((int)uVar16 < 0) {
            uVar17 = uVar16 + 0x1f;
            uVar22 = uVar22 - 0x20;
          }
          lVar25 = *(longlong *)(*(longlong *)(lVar13 + 0xd0) + (longlong)((int)uVar17 >> 5) * 8);
          lVar24 = *(longlong *)(lVar25 + 0x38 + (longlong)(int)uVar22 * 0x68);
          lVar25 = (longlong)*(int *)(lVar25 + 0x30 + (longlong)(int)uVar22 * 0x68) * 0x2c + lVar24;
          for (; lVar24 != lVar25; lVar24 = lVar24 + 0x2c) {
            if (*(uint *)(lVar24 + 0x28) != 0xffffffff) {
              lVar23 = (longlong)
                       (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                                (ulonglong)(*(uint *)(lVar24 + 0x28) & 0x7ffff) * 4) << 0xc) >> 0xc;
              lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
              *(float *)(lVar24 + 0x18) =
                   (float)*(ushort *)(lVar21 + lVar23 * 8) * *(float *)(param_1 + 0x54);
              *(float *)(lVar24 + 0x1c) =
                   (float)*(ushort *)(lVar21 + 2 + lVar23 * 8) * *(float *)(param_1 + 0x58);
              *(float *)(lVar24 + 0x20) =
                   (float)((uint)*(ushort *)(lVar21 + 4 + lVar23 * 8) +
                          (uint)*(ushort *)(lVar21 + lVar23 * 8)) * *(float *)(param_1 + 0x54);
              *(float *)(lVar24 + 0x24) =
                   (float)((uint)*(ushort *)(lVar21 + 6 + lVar23 * 8) +
                          (uint)*(ushort *)(lVar21 + 2 + lVar23 * 8)) * *(float *)(param_1 + 0x58);
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < *(int *)(lVar13 + 0xc0));
      }
      FUN_180299e00(param_1);
      FUN_1802999b0(param_1);
      *(undefined1 *)(lVar13 + 0xb8) = 0;
      puVar19 = *(undefined8 **)(param_1 + 0x2a8);
      puVar2 = puVar19 + *(int *)(param_1 + 0x2a0);
      for (; puVar19 != puVar2; puVar19 = puVar19 + 1) {
        puVar15 = (undefined8 *)*puVar19;
        if (puVar15[2] == param_1) {
          *puVar15 = *(undefined8 *)(param_1 + 0x5c);
          puVar15[1] = param_1 + 0x88;
        }
      }
LAB_18029b842:
      if (local_a0 != (void *)0x0) {
        FUN_18026f680(local_a0);
      }
      if (lVar27 != 0) {
        FUN_18026f680(lVar27);
      }
      return;
    }
    piVar26 = (int *)(lVar13 + 0x70);
    if ((*puVar28 >> 0x1e & 1) != 0) {
      lVar21 = (longlong)(int)(*puVar28 << 0xc) >> 0xc;
      sVar3 = *(short *)(lVar27 + 4 + lVar21 * 8);
      lVar24 = lVar27 + lVar21 * 8;
      if ((sVar3 != 0) || (*(short *)(lVar24 + 6) != 0)) {
        uVar16 = FUN_18029c320(param_1,sVar3,*(undefined2 *)(lVar24 + 6),puVar28);
        if (uVar16 == 0xffffffff) {
          if (*(char *)(lVar25 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          if ((*(longlong *)(lVar25 + 0xec0) != 0) &&
             ((*(uint *)(*(longlong *)(lVar25 + 0xec0) + 0x28e4) & 0x100) != 0)) {
            FUN_180289170("[font] Texture #%03d: resize failed. Will grow.\n",*puVar18);
          }
          *(undefined1 *)((longlong)puVar18 + 0x57) = 1;
          *(undefined4 *)(lVar13 + 0x60) = uVar11;
          *(undefined4 *)(lVar13 + 100) = uVar12;
          lVar25 = *(longlong *)(lVar13 + 0x68);
          *(longlong *)(lVar13 + 0x68) = lVar27;
          if (*(longlong *)(lVar13 + 0x78) != 0) {
            piVar26[0] = 0;
            piVar26[1] = 0;
            FUN_18026f680();
            *(undefined8 *)(lVar13 + 0x78) = 0;
          }
          FUN_18028a770(piVar26,iVar10);
          if ((*(void **)(lVar13 + 0x78) != (void *)0x0) && (local_a0 != (void *)0x0)) {
            memcpy(*(void **)(lVar13 + 0x78),local_a0,(longlong)*piVar26 << 2);
          }
          FUN_18029b070(param_1,puVar14);
          FUN_18029b960(param_1,param_2,param_3);
          lVar27 = lVar25;
          goto LAB_18029b842;
        }
        lVar23 = (longlong)
                 (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                          (ulonglong)(uVar16 & 0x7ffff) * 4) << 0xc) >> 0xc;
        lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
        uVar4 = *(ushort *)(lVar24 + 6 + lVar23 * 8);
        uVar5 = *(ushort *)(lVar24 + 4 + lVar23 * 8);
        uVar6 = *(ushort *)(lVar24 + 2 + lVar23 * 8);
        uVar7 = *(ushort *)(lVar24 + lVar23 * 8);
        uVar8 = *(ushort *)(lVar27 + 2 + lVar21 * 8);
        uVar9 = *(ushort *)(lVar27 + lVar21 * 8);
        iVar20 = 0;
        if (uVar4 != 0) {
          do {
            memcpy((void *)((longlong)
                            (int)(((iVar20 + (uint)uVar6) * puVar18[7] + (uint)uVar7) * puVar18[9])
                           + *(longlong *)(puVar18 + 10)),
                   (void *)((longlong)
                            (int)(((iVar20 + (uint)uVar8) * puVar14[7] + (uint)uVar9) * puVar14[9])
                           + *(longlong *)(puVar14 + 10)),(longlong)(int)(puVar18[9] * (uint)uVar5))
            ;
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)(uint)uVar4);
        }
      }
    }
    puVar28 = puVar28 + 1;
  } while( true );
}


