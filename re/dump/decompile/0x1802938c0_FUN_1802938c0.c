// 0x1802938c0  FUN_1802938c0
// size=1335 thunk=false
// signature: undefined FUN_1802938c0()
// status: ok


void FUN_1802938c0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  
  if ((2 < (int)param_3) && ((param_4 & 0xff000000) != 0)) {
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      FUN_1802927a0(param_1,(param_3 - 2) * 3,param_3);
      uVar18 = 0;
      do {
        lVar4 = uVar18 * 8;
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + lVar4);
        lVar4 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar4 + 8) = uVar1;
        *(undefined4 *)(lVar4 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      } while ((int)uVar17 < (int)param_3);
      iVar15 = 2;
      do {
        **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
        sVar12 = (short)iVar15;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar12 + -1 + *(short *)(param_1 + 0x34);
        iVar15 = iVar15 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar12 + *(short *)(param_1 + 0x34);
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        uVar17 = param_3;
      } while (iVar15 < (int)param_3);
    }
    else {
      uVar17 = param_3 * 2;
      fVar28 = *(float *)(param_1 + 0xd0);
      FUN_1802927a0(param_1,param_3 * 9 + -6,uVar17);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      iVar15 = 2;
      do {
        sVar12 = (short)iVar15;
        iVar15 = iVar15 + 1;
        sVar19 = (short)uVar3;
        sVar12 = sVar12 * 2 + sVar19;
        **(short **)(param_1 + 0x48) = sVar19;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar12 + -2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar12;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      } while (iVar15 < (int)param_3);
      lVar4 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(lVar4 + 0x4c) < (int)param_3) {
        if (*(longlong *)(lVar4 + 0x50) != 0) {
          FUN_18026f680();
        }
        uVar9 = FUN_18026f580((longlong)(int)param_3 << 3);
        *(undefined8 *)(lVar4 + 0x50) = uVar9;
        *(uint *)(lVar4 + 0x4c) = param_3;
      }
      uVar7 = DAT_1803817f0;
      iVar13 = param_3 - 1;
      iVar11 = 0;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x50);
      iVar15 = iVar13;
      if ((int)param_3 < 4) goto LAB_180293b46;
      do {
        lVar10 = (longlong)iVar11;
        lVar16 = (longlong)iVar15;
        fVar20 = *(float *)(param_2 + lVar10 * 8) - *(float *)(param_2 + lVar16 * 8);
        fVar23 = *(float *)(param_2 + 4 + lVar10 * 8) - *(float *)(param_2 + 4 + lVar16 * 8);
        fVar24 = fVar23 * fVar23 + fVar20 * fVar20;
        if (0.0 < fVar24) {
          auVar26 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar20 = fVar20 * auVar26._0_4_;
          fVar23 = fVar23 * auVar26._0_4_;
        }
        *(float *)(lVar4 + lVar16 * 8) = fVar23;
        *(uint *)(lVar4 + 4 + lVar16 * 8) = (uint)fVar20 ^ uVar7;
        fVar20 = *(float *)(param_2 + 8 + lVar10 * 8) - *(float *)(param_2 + lVar10 * 8);
        fVar23 = *(float *)(param_2 + 0xc + lVar10 * 8) - *(float *)(param_2 + 4 + lVar10 * 8);
        fVar24 = fVar23 * fVar23 + fVar20 * fVar20;
        if (0.0 < fVar24) {
          auVar26 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar20 = fVar20 * auVar26._0_4_;
          fVar23 = fVar23 * auVar26._0_4_;
        }
        *(float *)(lVar4 + lVar10 * 8) = fVar23;
        *(uint *)(lVar4 + 4 + lVar10 * 8) = (uint)fVar20 ^ uVar7;
        fVar20 = *(float *)(param_2 + 0x10 + lVar10 * 8) - *(float *)(param_2 + 8 + lVar10 * 8);
        fVar23 = *(float *)(param_2 + 0x14 + lVar10 * 8) - *(float *)(param_2 + 0xc + lVar10 * 8);
        fVar24 = fVar23 * fVar23 + fVar20 * fVar20;
        if (0.0 < fVar24) {
          auVar26 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar20 = fVar20 * auVar26._0_4_;
          fVar23 = fVar23 * auVar26._0_4_;
        }
        *(float *)(lVar4 + 8 + lVar10 * 8) = fVar23;
        *(uint *)(lVar4 + 0xc + lVar10 * 8) = (uint)fVar20 ^ uVar7;
        fVar20 = *(float *)(param_2 + 0x18 + lVar10 * 8) - *(float *)(param_2 + 0x10 + lVar10 * 8);
        fVar23 = *(float *)(param_2 + 0x1c + lVar10 * 8) - *(float *)(param_2 + 0x14 + lVar10 * 8);
        fVar24 = fVar23 * fVar23 + fVar20 * fVar20;
        if (0.0 < fVar24) {
          auVar26 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar20 = fVar20 * auVar26._0_4_;
          fVar23 = fVar23 * auVar26._0_4_;
        }
        iVar15 = iVar11 + 3;
        *(float *)(lVar4 + 0x10 + lVar10 * 8) = fVar23;
        iVar11 = iVar11 + 4;
        *(uint *)(lVar4 + 0x14 + lVar10 * 8) = (uint)fVar20 ^ uVar7;
        iVar8 = iVar11;
        fVar20 = DAT_180380938;
        fVar23 = DAT_180380ac0;
        fVar24 = DAT_180380bb0;
        fVar6 = DAT_180381120;
      } while (iVar11 < (int)(param_3 - 3));
      while (iVar11 = iVar8, DAT_180380938 = fVar20, DAT_180380ac0 = fVar23, DAT_180380bb0 = fVar24,
            DAT_180381120 = fVar6, iVar11 < (int)param_3) {
LAB_180293b46:
        lVar10 = (longlong)iVar15;
        fVar20 = *(float *)(param_2 + (longlong)iVar11 * 8) - *(float *)(param_2 + lVar10 * 8);
        fVar23 = *(float *)(param_2 + 4 + (longlong)iVar11 * 8) -
                 *(float *)(param_2 + 4 + lVar10 * 8);
        fVar24 = fVar23 * fVar23 + fVar20 * fVar20;
        if (0.0 < fVar24) {
          auVar26 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar20 = fVar20 * auVar26._0_4_;
          fVar23 = fVar23 * auVar26._0_4_;
        }
        *(float *)(lVar4 + lVar10 * 8) = fVar23;
        *(uint *)(lVar4 + 4 + lVar10 * 8) = (uint)fVar20 ^ uVar7;
        iVar15 = iVar11;
        fVar20 = DAT_180380938;
        fVar23 = DAT_180380ac0;
        fVar24 = DAT_180380bb0;
        fVar6 = DAT_180381120;
        iVar8 = iVar11 + 1;
      }
      fVar28 = fVar28 * fVar23;
      iVar15 = 0;
      do {
        lVar10 = (longlong)iVar15;
        fVar25 = (*(float *)(lVar4 + (longlong)iVar13 * 8) + *(float *)(lVar4 + lVar10 * 8)) *
                 fVar23;
        fVar27 = (*(float *)(lVar4 + 4 + (longlong)iVar13 * 8) + *(float *)(lVar4 + 4 + lVar10 * 8))
                 * fVar23;
        fVar21 = fVar27 * fVar27 + fVar25 * fVar25;
        if (fVar20 < fVar21) {
          fVar21 = fVar24 / fVar21;
          fVar22 = fVar6;
          if (fVar21 <= fVar6) {
            fVar22 = fVar21;
          }
          fVar25 = fVar25 * fVar22;
          fVar27 = fVar27 * fVar22;
        }
        sVar12 = (short)iVar13 * 2;
        sVar5 = (short)iVar15 * 2;
        fVar25 = fVar28 * fVar25;
        fVar27 = fVar28 * fVar27;
        sVar14 = sVar5 + sVar19;
        **(float **)(param_1 + 0x40) = *(float *)(param_2 + lVar10 * 8) - fVar25;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) =
             *(float *)(param_2 + 4 + lVar10 * 8) - fVar27;
        lVar16 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar16 + 8) = uVar1;
        *(undefined4 *)(lVar16 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar25 + *(float *)(param_2 + lVar10 * 8)
        ;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) =
             fVar27 + *(float *)(param_2 + 4 + lVar10 * 8);
        lVar10 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar10 + 0x1c) = uVar1;
        *(undefined4 *)(lVar10 + 0x20) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4 & 0xffffff;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        **(short **)(param_1 + 0x48) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar19 + sVar12;
        sVar12 = sVar19 + 1 + sVar12;
        iVar11 = iVar15 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar12;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar12;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar5 + sVar19 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar14;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        iVar13 = iVar15;
        iVar15 = iVar11;
      } while (iVar11 < (int)param_3);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (uVar17 & 0xffff);
  }
  return;
}


