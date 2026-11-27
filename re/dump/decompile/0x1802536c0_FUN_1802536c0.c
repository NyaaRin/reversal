// 0x1802536c0  FUN_1802536c0
// size=1972 thunk=false
// signature: undefined FUN_1802536c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802536c0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined1 *puVar5;
  short sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  char cVar10;
  byte bVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  byte bVar14;
  undefined8 ***pppuVar15;
  ulonglong uVar16;
  undefined8 ****ppppuVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ushort uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 ***pppuVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_238 [32];
  undefined8 ***local_218;
  undefined8 ***local_210;
  ulonglong local_208;
  undefined1 local_1f8 [4];
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  ulonglong *local_1e0;
  longlong *plStack_1d8;
  undefined8 **local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  ulonglong *local_1b0;
  longlong *local_1a8;
  ulonglong uStack_1a0;
  undefined8 **local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 **local_158;
  ulonglong local_150;
  undefined8 **local_148;
  ulonglong local_140;
  undefined8 **local_138;
  ulonglong local_130;
  undefined8 **local_128;
  ulonglong uStack_120;
  undefined8 ***local_118;
  undefined8 local_110;
  undefined8 ***local_108;
  undefined8 local_100;
  undefined8 ***local_f8 [2];
  undefined8 local_e8;
  ulonglong local_e0;
  ulonglong *local_d8;
  longlong **local_d0;
  undefined8 **local_c8;
  ulonglong **local_c0;
  ulonglong **local_b8;
  undefined1 *local_b0;
  byte local_a8;
  byte local_a7;
  byte local_a6;
  undefined8 ***local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 ***local_80 [2];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  uVar8 = _UNK_1803814b8;
  uVar7 = _DAT_1803814b0;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  local_1ec = 0;
  local_1e8 = 0;
  puVar18 = *(ulonglong **)(param_1 + 0xf0);
  local_1b8 = param_1;
  local_1b0 = param_2;
  local_d8 = param_2;
  do {
    local_1e0 = puVar18;
    if (*(ulonglong **)(param_1 + 0xf8) <= puVar18) {
      plVar24 = (longlong *)local_1b0[1];
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar24 + 1;
        lVar23 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
      return;
    }
    pppuVar15 = (undefined8 ***)puVar18[2];
    pppuVar4 = (undefined8 ***)*puVar18;
    bVar26 = pppuVar4 < pppuVar15;
    if (pppuVar4 == pppuVar15) {
      bVar26 = puVar18[1] < puVar18[3];
    }
    puVar12 = puVar18;
    pppuVar25 = pppuVar4;
    if (!bVar26) {
      puVar12 = puVar18 + 2;
      pppuVar25 = pppuVar15;
    }
    uVar19 = puVar12[1];
    bVar26 = pppuVar4 < pppuVar15;
    bVar27 = pppuVar4 == pppuVar15;
    local_198 = pppuVar25;
    local_178 = uVar19;
    if (!bVar27) {
LAB_180253787:
      puVar12 = puVar18 + 2;
      if (!bVar26 && !bVar27) {
        puVar12 = puVar18;
      }
      local_188 = (undefined8 ***)*puVar12;
      local_1c8 = (undefined8 **)*puVar12;
      uStack_180 = puVar12[1];
      uStack_1c0 = puVar12[1];
      local_d0 = &local_1a8;
      if (local_1b0[1] != 0) {
        LOCK();
        piVar1 = (int *)(local_1b0[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_1a8 = (longlong *)*local_1b0;
      uStack_1a0 = local_1b0[1];
      local_158 = pppuVar25;
      local_150 = uVar19;
      FUN_180253fc0(param_1,&local_1a8,&local_158,&local_188);
      puVar12 = puVar18 + 6;
LAB_180253800:
      do {
        if (*(ulonglong **)(param_1 + 0xf8) <= puVar12) goto LAB_1802538ab;
        pppuVar15 = (undefined8 ***)*puVar12;
        uVar16 = puVar12[1];
        if (pppuVar25 == (undefined8 ***)local_1c8) {
          if (pppuVar15 == (undefined8 ***)local_1c8) {
            *puVar12 = (ulonglong)pppuVar15;
            puVar12[1] = (uVar16 - uStack_1c0) + uVar19;
            pppuVar15 = (undefined8 ***)puVar12[2];
            uVar16 = puVar12[3];
          }
          else {
LAB_180253872:
            *puVar12 = (ulonglong)pppuVar15;
            puVar12[1] = uVar16;
            pppuVar15 = (undefined8 ***)puVar12[2];
            uVar16 = puVar12[3];
            if (pppuVar25 != (undefined8 ***)local_1c8) goto LAB_180253855;
          }
          if (pppuVar15 == (undefined8 ***)local_1c8) {
            puVar12[2] = (ulonglong)pppuVar15;
            puVar12[3] = (uVar16 - uStack_1c0) + uVar19;
            puVar12 = puVar12 + 6;
            goto LAB_180253800;
          }
        }
        else {
          pppuVar15 = (undefined8 ***)
                      (((longlong)pppuVar15 - (longlong)local_1c8) + (longlong)pppuVar25);
          if (pppuVar15 != (undefined8 ***)local_1c8) goto LAB_180253872;
          *puVar12 = (ulonglong)pppuVar15;
          puVar12[1] = uVar16 - uStack_1c0;
          pppuVar15 = (undefined8 ***)puVar12[2];
          uVar16 = puVar12[3];
LAB_180253855:
          pppuVar15 = (undefined8 ***)
                      (((longlong)pppuVar15 - (longlong)local_1c8) + (longlong)pppuVar25);
          if (pppuVar15 == (undefined8 ***)local_1c8) {
            uVar16 = uVar16 - uStack_1c0;
          }
        }
        puVar12[2] = (ulonglong)pppuVar15;
        puVar12[3] = uVar16;
        puVar12 = puVar12 + 6;
      } while( true );
    }
    bVar26 = puVar18[1] < puVar18[3];
    bVar27 = puVar18[1] == puVar18[3];
    if (!bVar27) goto LAB_180253787;
LAB_1802538ab:
    local_1a8 = (longlong *)(param_1 + 0x50);
    plVar24 = (longlong *)((longlong)pppuVar25 * 0x60 + *local_1a8);
    if (uVar19 == 0) {
      local_1f0 = 0;
    }
    else {
      local_1f0 = (uint)*(ushort *)(uVar19 * 0x10 + -0x10 + *plVar24);
    }
    lVar23 = *plVar24;
    uVar16 = plVar24[1] - lVar23 >> 4;
    if (uVar19 < uVar16) {
      local_1f4 = (uint)*(ushort *)(uVar19 * 0x10 + lVar23);
    }
    else {
      local_1f4 = 0;
    }
    cVar10 = FUN_18025f490(local_1f4);
    uVar22 = uVar19;
    if (cVar10 != '\0') {
      while ((uVar22 < uVar16 &&
             (cVar10 = FUN_18025f490(*(undefined2 *)(lVar23 + uVar22 * 0x10)), cVar10 != '\0'))) {
        uVar22 = uVar22 + 1;
      }
      lVar23 = local_1b8;
      local_c8 = &local_1c8;
      if (local_1b0[1] != 0) {
        LOCK();
        piVar1 = (int *)(local_1b0[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_1c8 = (undefined8 **)*local_1b0;
      uStack_1c0 = local_1b0[1];
      local_148 = pppuVar25;
      local_140 = uVar22;
      local_138 = pppuVar25;
      local_130 = uVar19;
      FUN_180253fc0(local_1b8,&local_1c8,&local_138,&local_148);
      puVar12 = puVar18;
      while (puVar13 = puVar12 + 6, puVar13 < *(ulonglong **)(lVar23 + 0xf8)) {
        uVar16 = puVar12[7];
        if ((undefined8 ***)*puVar13 == pppuVar25) {
          uVar16 = (puVar12[7] - uVar22) + uVar19;
        }
        puVar12[7] = uVar16;
        uVar16 = puVar12[9];
        if ((undefined8 ***)puVar12[8] == pppuVar25) {
          uVar16 = (puVar12[9] - uVar22) + uVar19;
        }
        puVar12[9] = uVar16;
        puVar12 = puVar13;
      }
    }
    uStack_98 = 0;
    local_90 = uVar7;
    uStack_88 = uVar8;
    local_a0 = (undefined8 ****)0x0;
    lVar23 = *plVar24;
    if (plVar24[1] - lVar23 >> 4 != 0) {
      uVar19 = 0;
      do {
        uVar20 = *(ushort *)(lVar23 + uVar19 * 0x10);
        cVar10 = FUN_18025f490(uVar20);
        puVar18 = local_1e0;
        pppuVar25 = (undefined8 ***)local_198;
        if (cVar10 == '\0') break;
        if (uVar20 < 0x80) {
          uVar21 = 1;
LAB_180253aa4:
          local_a8 = (byte)uVar20;
        }
        else {
          bVar14 = (byte)uVar20 & 0x3f | 0x80;
          bVar11 = (byte)(uVar20 >> 6);
          if (0x7ff < uVar20) {
            uVar20 = (ushort)(byte)((byte)(uVar20 >> 0xc) | 0xe0);
            local_a7 = bVar11 & 0x3f | 0x80;
            uVar21 = 3;
            local_a6 = bVar14;
            goto LAB_180253aa4;
          }
          local_a8 = bVar11 & 0x1f | 0xc0;
          uVar21 = 2;
          local_a7 = bVar14;
        }
        FUN_18021aef0(&local_a0,&local_a8,uVar21);
        uVar19 = uVar19 + 1;
        lVar23 = *plVar24;
        puVar18 = local_1e0;
        pppuVar25 = (undefined8 ***)local_198;
      } while (uVar19 < (ulonglong)(plVar24[1] - lVar23 >> 4));
    }
    FUN_1801fd120(local_80,&DAT_18033e92c,&local_a0);
    uVar19 = local_90;
    sVar6 = (short)local_1f0;
    if ((sVar6 - 0x5bU & 0xffdf) == 0) {
      FUN_18021aef0(local_80,&DAT_18037cb38,1);
      uVar19 = uVar19 + 1;
      if (sVar6 == 0x7b) {
        if ((short)local_1f4 == 0x7d) {
LAB_180253b5f:
          if (local_90 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_210 = &local_a0;
          if (0xf < uStack_88) {
            local_210 = local_a0;
          }
          local_208 = local_90;
          local_218 = (undefined8 ***)0x1;
          FUN_18020e930(local_f8);
          uVar9 = local_1ec;
          local_1e8 = local_1ec | 2;
          ppppuVar17 = local_f8;
          if (0xf < local_e0) {
            ppppuVar17 = (undefined8 ****)local_f8[0];
          }
          FUN_18021aef0(local_80,ppppuVar17,local_e8);
          local_1ec = uVar9 & 0xfffffffd;
          local_1e8 = local_1ec;
          FUN_18020e450(local_f8);
        }
      }
      else if ((sVar6 == 0x5b) && ((short)local_1f4 == 0x5d)) goto LAB_180253b5f;
    }
    uVar21 = local_70;
    uVar16 = local_178;
    ppppuVar17 = local_80;
    if (0xf < local_68) {
      ppppuVar17 = (undefined8 ****)local_80[0];
    }
    local_110 = local_70;
    local_c0 = &local_1e0;
    if (local_1b0[1] != 0) {
      LOCK();
      piVar1 = (int *)(local_1b0[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_1e0 = (ulonglong *)*local_1b0;
    plStack_1d8 = (longlong *)local_1b0[1];
    local_b8 = &local_1e0;
    uStack_120 = local_178;
    uStack_180 = local_178;
    local_218 = &local_118;
    local_188 = pppuVar25;
    local_128 = pppuVar25;
    local_118 = ppppuVar17;
    FUN_180254730(local_1a8,&local_168,local_1b8,&local_188);
    puVar12 = local_1e0;
    local_100 = uVar21;
    local_188 = (undefined8 ***)CONCAT44(uStack_164,local_168);
    uStack_180 = CONCAT44(uStack_15c,uStack_160);
    uStack_1c0 = uVar16;
    local_1f8[0] = 0;
    puVar5 = (undefined1 *)local_1e0[1];
    local_1c8 = pppuVar25;
    local_108 = ppppuVar17;
    if (puVar5 == (undefined1 *)local_1e0[2]) {
      local_210 = &local_108;
      local_218 = (undefined8 ***)&local_188;
      FUN_180262680(local_1e0,puVar5,local_1f8,&local_1c8);
    }
    else {
      *puVar5 = 0;
      *(undefined8 ****)(puVar5 + 8) = pppuVar25;
      *(ulonglong *)(puVar5 + 0x10) = uVar16;
      *(undefined4 *)(puVar5 + 0x18) = local_168;
      *(undefined4 *)(puVar5 + 0x1c) = uStack_164;
      *(undefined4 *)(puVar5 + 0x20) = uStack_160;
      *(undefined4 *)(puVar5 + 0x24) = uStack_15c;
      *(undefined8 *)(puVar5 + 0x28) = 0;
      *(undefined8 *)(puVar5 + 0x30) = 0;
      *(undefined8 *)(puVar5 + 0x38) = 0;
      *(undefined8 *)(puVar5 + 0x40) = 0;
      local_b0 = puVar5;
      FUN_18001d080(puVar5 + 0x28,ppppuVar17,uVar21);
      puVar12[1] = puVar12[1] + 0x48;
    }
    param_1 = local_1b8;
    FUN_18024f370(local_1b8);
    plVar24 = plStack_1d8;
    if (plStack_1d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1d8 + 1;
      lVar23 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plStack_1d8)(plStack_1d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar24 + 8))(plVar24);
        }
      }
    }
    puVar12 = puVar18;
    while (puVar13 = puVar12 + 6, puVar13 < *(ulonglong **)(param_1 + 0xf8)) {
      uVar22 = puVar12[7];
      if ((undefined8 ***)*puVar13 == pppuVar25) {
        uVar22 = (puVar12[7] - uVar16) + CONCAT44(uStack_15c,uStack_160);
      }
      lVar23 = CONCAT44(uStack_164,local_168) - (longlong)pppuVar25;
      *puVar13 = lVar23 + (longlong)*puVar13;
      puVar12[7] = uVar22;
      uVar22 = puVar12[9];
      if ((undefined8 ***)puVar12[8] == pppuVar25) {
        uVar22 = (CONCAT44(uStack_15c,uStack_160) - uVar16) + puVar12[9];
      }
      puVar12[8] = lVar23 + (longlong)puVar12[8];
      puVar12[9] = uVar22;
      puVar12 = puVar13;
    }
    *puVar18 = (longlong)pppuVar25 + 1U;
    puVar18[1] = uVar19;
    puVar18[2] = (longlong)pppuVar25 + 1U;
    puVar18[3] = uVar19;
    *(undefined1 *)((longlong)puVar18 + 0x22) = 1;
    FUN_18020e450(local_80);
    FUN_18020e450(&local_a0);
    puVar18 = puVar18 + 6;
  } while( true );
}


