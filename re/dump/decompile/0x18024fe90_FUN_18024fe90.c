// 0x18024fe90  FUN_18024fe90
// size=3697 thunk=false
// signature: undefined FUN_18024fe90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024fe90(longlong param_1,ushort param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  char cVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  byte *pbVar22;
  ulonglong *puVar23;
  byte *pbVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_188 [32];
  byte **local_168;
  byte **local_160;
  ushort local_158;
  undefined1 local_156 [14];
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  byte *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte *local_f8;
  longlong *plStack_f0;
  byte *local_e8;
  ulonglong uStack_e0;
  byte *local_d8;
  ulonglong uStack_d0;
  byte *local_c8;
  longlong *plStack_c0;
  byte *local_b8;
  ulonglong uStack_b0;
  byte *local_a8;
  ulonglong uStack_a0;
  byte **local_98;
  byte **local_90;
  longlong local_88;
  longlong local_80;
  byte local_78;
  byte local_77 [7];
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  uVar17 = (uint)param_2;
  local_118 = (byte *)0x0;
  plStack_110 = (longlong *)0x0;
  local_158 = param_2;
  FUN_180253050(0,&local_118,0);
  if (((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x22) != '\0')) &&
     ((param_2 == 0x7b ||
      (((ushort)(param_2 - 0x22) < 0x3a &&
       ((0x200000000000061U >> ((ulonglong)(param_2 - 0x22) & 0x3f) & 1) != 0)))))) {
    bVar29 = true;
  }
  else {
    bVar29 = false;
  }
  if (param_2 == 0x7b) {
    local_138 = 0x7d;
  }
  else if (param_2 == 0x5b) {
    local_138 = 0x5d;
  }
  else {
    local_138 = (uint)param_2;
    if (param_2 == 0x28) {
      local_138 = 0x29;
    }
  }
  if (*(ushort *)(param_1 + 0x800) != 0) {
    if (*(ushort *)(param_1 + 0x800) == param_2) {
      uVar25 = *(ulonglong *)(param_1 + 0x110);
      puVar14 = *(undefined8 **)(param_1 + 0xf0);
      uVar18 = (*(longlong *)(param_1 + 0xf8) - (longlong)puVar14 >> 4) * -0x5555555555555555;
      if (uVar18 < uVar25 || uVar18 - uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      puVar23 = puVar14 + uVar25 * 6;
      uVar25 = puVar23[2];
      uVar18 = *puVar23;
      bVar28 = uVar18 < uVar25;
      bVar30 = false;
      if (uVar18 == uVar25) {
        bVar28 = puVar23[1] < puVar23[3];
        bVar30 = puVar23[1] == puVar23[3];
      }
      if (bVar28 || bVar30) {
        puVar23 = puVar23 + 2;
        uVar18 = uVar25;
      }
      if ((*(ulonglong *)(param_1 + 0x808) == uVar18) &&
         (*(ulonglong *)(param_1 + 0x810) == puVar23[1])) {
        *(undefined2 *)(param_1 + 0x800) = 0;
        puVar5 = *(undefined8 **)(param_1 + 0xf8);
        for (; puVar14 != puVar5; puVar14 = puVar14 + 6) {
          pbVar22 = (byte *)puVar14[2];
          pbVar24 = (byte *)*puVar14;
          bVar29 = pbVar24 < pbVar22;
          bVar30 = pbVar24 == pbVar22;
          if (bVar30) {
            uVar25 = puVar14[3];
            bVar29 = (ulonglong)puVar14[1] < uVar25;
            bVar30 = puVar14[1] == uVar25;
            if (!bVar30) goto LAB_1802500dc;
            lVar6 = *(longlong *)(param_1 + 0x50);
            pbVar24 = (byte *)((*(longlong *)(param_1 + 0x58) - lVar6 >> 5) * -0x5555555555555555);
            if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0) {
LAB_180250cf8:
                    /* WARNING: Subroutine does not return */
              FUN_180262180();
            }
            if (uVar25 == *(longlong *)((longlong)pbVar22 * 0x60 + 8 + lVar6) -
                          *(longlong *)((longlong)pbVar22 * 0x60 + lVar6) >> 4) {
              if (pbVar22 == pbVar24 + -1) goto LAB_1802500c5;
              do {
                pbVar22 = pbVar22 + 1;
                if (pbVar24 + -1 <= pbVar22) break;
                if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0)
                goto LAB_180250cf8;
              } while (*(char *)((longlong)pbVar22 * 0x60 + 0x22 + lVar6) == '\x03');
              uStack_120 = 0;
              *puVar14 = pbVar22;
              *(undefined4 *)(puVar14 + 1) = 0;
              *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
              puVar14[2] = pbVar22;
              *(undefined4 *)(puVar14 + 3) = 0;
              *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
              *(undefined1 *)((longlong)puVar14 + 0x22) = 1;
              local_128 = pbVar22;
            }
            else {
              uVar25 = uVar25 + 1;
LAB_1802500c5:
              uStack_120 = uVar25;
              local_128._0_4_ = SUB84(pbVar22,0);
              local_128._4_4_ = (undefined4)((ulonglong)pbVar22 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_128;
              *(undefined4 *)((longlong)puVar14 + 4) = local_128._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_120;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_120._4_4_;
              *(undefined4 *)(puVar14 + 2) = (undefined4)local_128;
              *(undefined4 *)((longlong)puVar14 + 0x14) = local_128._4_4_;
              *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_120;
              *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_120._4_4_;
              *(undefined1 *)((longlong)puVar14 + 0x22) = 1;
              local_128 = pbVar22;
            }
          }
          else {
LAB_1802500dc:
            puVar26 = puVar14 + 2;
            if (!bVar29 && !bVar30) {
              puVar26 = puVar14;
            }
            bVar30 = pbVar24 < pbVar22;
            bVar29 = false;
            if (pbVar24 == pbVar22) {
              bVar30 = (ulonglong)puVar14[1] < (ulonglong)puVar14[3];
              bVar29 = puVar14[1] == puVar14[3];
            }
            puVar20 = puVar14 + 2;
            if (!bVar30 && !bVar29) {
              puVar20 = puVar14;
            }
            uVar10 = *puVar26;
            uVar11 = puVar26[1];
            uVar31 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar8 = *(undefined4 *)(puVar20 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar20 + 0xc);
            *(undefined4 *)puVar14 = *(undefined4 *)puVar20;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar31;
            *(undefined4 *)(puVar14 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar9;
            puVar14[2] = uVar10;
            puVar14[3] = uVar11;
          }
          *(undefined1 *)((longlong)puVar14 + 0x22) = 1;
        }
        FUN_18024f370(param_1);
        *(undefined1 *)(param_1 + 0x7fa) = 0;
        goto LAB_180250c88;
      }
    }
    *(undefined2 *)(param_1 + 0x800) = 0;
  }
  puVar23 = *(ulonglong **)(param_1 + 0xf0);
  for (puVar15 = puVar23; puVar15 < *(ulonglong **)(param_1 + 0xf8); puVar15 = puVar15 + 6) {
    if ((*puVar15 != puVar15[2]) || (puVar15[1] != puVar15[3])) {
      if (!bVar29) goto LAB_1802509d0;
      goto LAB_180250190;
    }
  }
  if (bVar29) {
    local_78 = (byte)param_2;
    if (param_2 < 0x80) {
      pbVar22 = local_77;
    }
    else {
      bVar19 = local_78 & 0x3f | 0x80;
      bVar12 = (byte)(param_2 >> 6);
      if (param_2 < 0x800) {
        local_78 = bVar12 & 0x1f | 0xc0;
        pbVar22 = local_77 + 1;
        local_77[0] = bVar19;
      }
      else {
        local_78 = (byte)(param_2 >> 0xc) | 0xe0;
        local_77[0] = bVar12 & 0x3f | 0x80;
        pbVar22 = local_77 + 2;
        local_77[1] = bVar19;
      }
    }
    pbVar24 = pbVar22 + 1;
    if ((ushort)local_138 < 0x80) {
      *pbVar22 = (byte)local_138;
    }
    else {
      bVar19 = (byte)local_138 & 0x3f | 0x80;
      bVar12 = (byte)(local_138 >> 6);
      if ((ushort)local_138 < 0x800) {
        *pbVar22 = bVar12 & 0x1f | 0xc0;
        *pbVar24 = bVar19;
        pbVar24 = pbVar22 + 2;
      }
      else {
        *pbVar22 = (byte)(local_138 >> 0xc) | 0xe0;
        *pbVar24 = bVar12 & 0x3f | 0x80;
        pbVar22[2] = bVar19;
        pbVar24 = pbVar22 + 3;
      }
    }
    uVar25 = (longlong)pbVar24 - (longlong)&local_78;
    local_b8 = &local_78;
    uStack_b0 = uVar25;
    for (; puVar23 < *(ulonglong **)(param_1 + 0xf8); puVar23 = puVar23 + 6) {
      puVar15 = puVar23 + 2;
      pbVar22 = (byte *)*puVar15;
      pbVar24 = (byte *)*puVar23;
      bVar29 = pbVar24 < pbVar22;
      if (pbVar24 == pbVar22) {
        bVar29 = puVar23[1] < puVar23[3];
      }
      if (bVar29) {
        pbVar22 = pbVar24;
        puVar15 = puVar23;
      }
      uVar18 = puVar15[1];
      local_90 = &local_f8;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
        UNLOCK();
      }
      local_f8 = local_118;
      plStack_f0 = plStack_110;
      local_98 = &local_f8;
      local_168 = &local_b8;
      local_e8 = pbVar22;
      uStack_e0 = uVar18;
      local_d8 = pbVar22;
      uStack_d0 = uVar18;
      FUN_180254730(param_1 + 0x50,&local_148,param_1,&local_d8);
      pbVar27 = local_f8;
      local_c8 = local_148;
      plStack_c0 = uStack_140;
      local_156[0] = 0;
      pbVar24 = *(byte **)(local_f8 + 8);
      local_d8 = &local_78;
      uStack_d0 = uVar25;
      local_a8 = pbVar22;
      uStack_a0 = uVar18;
      if (pbVar24 == *(byte **)(local_f8 + 0x10)) {
        local_160 = &local_d8;
        local_168 = &local_c8;
        FUN_180262680(local_f8,pbVar24,local_156,&local_a8);
      }
      else {
        *pbVar24 = 0;
        *(byte **)(pbVar24 + 8) = pbVar22;
        *(ulonglong *)(pbVar24 + 0x10) = uVar18;
        *(undefined4 *)(pbVar24 + 0x18) = (undefined4)local_148;
        *(undefined4 *)(pbVar24 + 0x1c) = local_148._4_4_;
        *(undefined4 *)(pbVar24 + 0x20) = (undefined4)uStack_140;
        *(undefined4 *)(pbVar24 + 0x24) = uStack_140._4_4_;
        pbVar1 = pbVar24 + 0x28;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        pbVar24[0x30] = 0;
        pbVar24[0x31] = 0;
        pbVar24[0x32] = 0;
        pbVar24[0x33] = 0;
        pbVar24[0x34] = 0;
        pbVar24[0x35] = 0;
        pbVar24[0x36] = 0;
        pbVar24[0x37] = 0;
        pbVar24[0x38] = 0;
        pbVar24[0x39] = 0;
        pbVar24[0x3a] = 0;
        pbVar24[0x3b] = 0;
        pbVar24[0x3c] = 0;
        pbVar24[0x3d] = 0;
        pbVar24[0x3e] = 0;
        pbVar24[0x3f] = 0;
        pbVar24[0x40] = 0;
        pbVar24[0x41] = 0;
        pbVar24[0x42] = 0;
        pbVar24[0x43] = 0;
        pbVar24[0x44] = 0;
        pbVar24[0x45] = 0;
        pbVar24[0x46] = 0;
        pbVar24[0x47] = 0;
        local_128 = pbVar24;
        FUN_18001d080(pbVar1,&local_78,uVar25);
        *(longlong *)(pbVar27 + 8) = *(longlong *)(pbVar27 + 8) + 0x48;
      }
      FUN_18024f370(param_1);
      plVar7 = plStack_f0;
      puVar15 = puVar23;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      while (puVar16 = puVar15 + 6, puVar16 < *(ulonglong **)(param_1 + 0xf8)) {
        uVar21 = puVar15[7];
        if ((byte *)*puVar16 == pbVar22) {
          uVar21 = (puVar15[7] - uVar18) + (longlong)uStack_140;
        }
        *puVar16 = (ulonglong)((byte *)*puVar16 + ((longlong)local_148 - (longlong)pbVar22));
        puVar15[7] = uVar21;
        uVar21 = puVar15[9];
        if ((byte *)puVar15[8] == pbVar22) {
          uVar21 = (puVar15[9] - uVar18) + (longlong)uStack_140;
        }
        puVar15[8] = (ulonglong)((byte *)puVar15[8] + ((longlong)local_148 - (longlong)pbVar22));
        puVar15[9] = uVar21;
        puVar15 = puVar16;
      }
      lVar6 = *(longlong *)(param_1 + 0x50);
      pbVar24 = (byte *)((*(longlong *)(param_1 + 0x58) - lVar6 >> 5) * -0x5555555555555555);
      if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0) {
LAB_180250d04:
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      if (uVar18 == *(longlong *)((longlong)pbVar22 * 0x60 + 8 + lVar6) -
                    *(longlong *)((longlong)pbVar22 * 0x60 + lVar6) >> 4) {
        if (pbVar22 != pbVar24 + -1) {
          do {
            pbVar22 = pbVar22 + 1;
            if (pbVar24 + -1 <= pbVar22) break;
            if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0) goto LAB_180250d04;
          } while (*(char *)((longlong)pbVar22 * 0x60 + 0x22 + lVar6) == '\x03');
          uStack_100 = 0;
          uVar18 = uStack_100;
        }
      }
      else {
        uVar18 = uVar18 + 1;
      }
      uStack_100 = uVar18;
      local_108 = pbVar22;
      *(undefined4 *)puVar23 = (undefined4)local_108;
      *(undefined4 *)((longlong)puVar23 + 4) = local_108._4_4_;
      *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_100._4_4_;
      *(undefined4 *)(puVar23 + 2) = (undefined4)local_108;
      *(undefined4 *)((longlong)puVar23 + 0x14) = local_108._4_4_;
      *(undefined4 *)(puVar23 + 3) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)puVar23 + 0x1c) = uStack_100._4_4_;
      *(undefined1 *)((longlong)puVar23 + 0x22) = 1;
    }
    *(short *)(param_1 + 0x800) = (short)local_138;
    uVar25 = *(ulonglong *)(param_1 + 0x110);
    uVar18 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) *
             -0x5555555555555555;
    if (uVar18 < uVar25 || uVar18 - uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    puVar23 = (ulonglong *)(uVar25 * 0x30 + *(longlong *)(param_1 + 0xf0));
    uVar25 = puVar23[2];
    bVar30 = *puVar23 < uVar25;
    bVar29 = false;
    if (*puVar23 == uVar25) {
      bVar30 = puVar23[1] < puVar23[3];
      bVar29 = puVar23[1] == puVar23[3];
    }
    puVar15 = puVar23 + 2;
    if (!bVar30 && !bVar29) {
      puVar15 = puVar23;
    }
    uVar25 = puVar15[1];
    *(ulonglong *)(param_1 + 0x808) = *puVar15;
    *(ulonglong *)(param_1 + 0x810) = uVar25;
LAB_18025094f:
    uVar17 = (uint)local_158;
  }
  else {
LAB_1802509d0:
    if (*(char *)(param_1 + 0x24) == '\0') {
      if ((*(char *)(param_1 + 0x13) != '\0') && (param_2 == 10)) {
        local_128 = (byte *)&local_148;
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
          UNLOCK();
        }
        local_148 = local_118;
        uStack_140 = plStack_110;
        FUN_1802536c0(param_1,&local_148);
        goto LAB_18025095b;
      }
    }
    else {
      for (; puVar23 < *(ulonglong **)(param_1 + 0xf8); puVar23 = puVar23 + 6) {
        pbVar22 = (byte *)puVar23[2];
        if (((byte *)*puVar23 == pbVar22) && (puVar23[1] == puVar23[3])) {
          lVar6 = *(longlong *)(param_1 + 0x50);
          pbVar24 = (byte *)((*(longlong *)(param_1 + 0x58) - lVar6 >> 5) * -0x5555555555555555);
          if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180262180();
          }
          plVar7 = (longlong *)puVar23[3];
          if (plVar7 != (longlong *)
                        (*(longlong *)((longlong)pbVar22 * 0x60 + 8 + lVar6) -
                         *(longlong *)((longlong)pbVar22 * 0x60 + lVar6) >> 4)) {
            uVar25 = (longlong)plVar7 + 1;
            local_128 = (byte *)&local_148;
            if (plStack_110 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
              UNLOCK();
            }
            local_148 = local_118;
            uStack_140 = plStack_110;
            local_e8 = pbVar22;
            uStack_e0 = uVar25;
            local_d8 = pbVar22;
            uStack_d0 = uVar25;
            local_c8 = pbVar22;
            plStack_c0 = plVar7;
            FUN_180253fc0(param_1,&local_148,&local_c8,&local_d8);
            puVar15 = puVar23;
            while (puVar16 = puVar15 + 6, puVar16 < *(ulonglong **)(param_1 + 0xf8)) {
              uVar18 = puVar15[7];
              if ((byte *)*puVar16 == pbVar22) {
                uVar18 = (longlong)plVar7 + (uVar18 - uVar25);
              }
              *puVar16 = *puVar16;
              puVar15[7] = uVar18;
              uVar18 = puVar15[9];
              if ((byte *)puVar15[8] == pbVar22) {
                uVar18 = (longlong)plVar7 + (uVar18 - uVar25);
              }
              puVar15[8] = puVar15[8];
              puVar15[9] = uVar18;
              puVar15 = puVar16;
            }
          }
        }
      }
      uVar17 = (uint)local_158;
    }
    local_78 = (byte)uVar17;
    if ((ushort)uVar17 < 0x80) {
      uStack_e0 = 1;
    }
    else {
      bVar19 = local_78 & 0x3f | 0x80;
      bVar12 = (byte)(uVar17 >> 6);
      if ((ushort)uVar17 < 0x800) {
        local_78 = bVar12 & 0x1f | 0xc0;
        uStack_e0 = 2;
        local_77[0] = bVar19;
      }
      else {
        local_78 = (byte)(uVar17 >> 0xc) | 0xe0;
        local_77[0] = bVar12 & 0x3f | 0x80;
        uStack_e0 = 3;
        local_77[1] = bVar19;
      }
    }
    local_e8 = &local_78;
    local_128 = (byte *)&local_148;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    local_148 = local_118;
    uStack_140 = plStack_110;
    FUN_1802532f0(param_1,&local_148,&local_e8);
  }
LAB_18025095b:
  local_128 = (byte *)&local_148;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  local_148 = local_118;
  uStack_140 = plStack_110;
  uVar31 = FUN_180253190(param_1,&local_148);
  if ((ushort)uVar17 < 0x7f) {
    if ((0x19 < (uVar17 | 0x20) - 0x61) && ((9 < uVar17 - 0x30 && ((ushort)uVar17 != 0x5f))))
    goto LAB_180250c88;
  }
  else {
    cVar13 = FUN_180260600(uVar31,uVar17);
    if ((cVar13 == '\0') && (cVar13 = FUN_180260690(extraout_XMM0_Da,uVar17), cVar13 == '\0'))
    goto LAB_180250c88;
  }
  if (((ulonglong)
       ((*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) * -0x5555555555555555)
       < 2) && ((((*(char *)(param_1 + 0x371) == '\0' && (*(char *)(param_1 + 0x372) == '\0')) &&
                 (*(char *)(param_1 + 0x370) != '\0')) && (*(char *)(param_1 + 0x3a0) != '\0')))) {
    *(undefined1 *)(param_1 + 0x4a0) = 0;
    FUN_18025f1e0((char *)(param_1 + 0x370),param_1 + 0xf0);
    FUN_18024f370(param_1);
  }
LAB_180250c88:
  plVar7 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  return;
LAB_180250190:
  if (*(ulonglong **)(param_1 + 0xf8) <= puVar23) goto LAB_18025094f;
  pbVar22 = (byte *)puVar23[2];
  pbVar24 = (byte *)*puVar23;
  bVar29 = pbVar24 < pbVar22;
  if ((pbVar24 != pbVar22) || (bVar29 = puVar23[1] < puVar23[3], puVar23[1] != puVar23[3])) {
    puVar15 = puVar23;
    pbVar27 = pbVar24;
    if (!bVar29) {
      puVar15 = puVar23 + 2;
      pbVar27 = pbVar22;
    }
    uVar25 = puVar15[1];
    bVar30 = pbVar24 < pbVar22;
    bVar29 = false;
    if (pbVar24 == pbVar22) {
      bVar30 = puVar23[1] < puVar23[3];
      bVar29 = puVar23[1] == puVar23[3];
    }
    puVar15 = puVar23 + 2;
    if (!bVar30 && !bVar29) {
      puVar15 = puVar23;
    }
    pbVar22 = (byte *)*puVar15;
    uVar18 = puVar15[1];
    if ((ushort)local_138 < 0x80) {
      local_78 = (byte)local_138;
      uStack_b0 = 1;
    }
    else {
      uVar17 = local_138 & 0xffff;
      bVar19 = (byte)uVar17 & 0x3f | 0x80;
      bVar12 = (byte)(uVar17 >> 6);
      if ((ushort)local_138 < 0x800) {
        local_78 = bVar12 & 0x1f | 0xc0;
        uStack_b0 = 2;
        local_77[0] = bVar19;
      }
      else {
        local_78 = (byte)(uVar17 >> 0xc) | 0xe0;
        local_77[0] = bVar12 & 0x3f | 0x80;
        uStack_b0 = 3;
        local_77[1] = bVar19;
      }
    }
    local_b8 = &local_78;
    local_98 = &local_f8;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    local_f8 = local_118;
    plStack_f0 = plStack_110;
    local_168 = &local_b8;
    local_148 = pbVar22;
    uStack_140 = (longlong *)uVar18;
    local_d8 = pbVar22;
    uStack_d0 = uVar18;
    FUN_180253e80(param_1,&local_88,&local_f8,&local_d8);
    puVar15 = puVar23 + 6;
    for (puVar16 = puVar15; puVar16 < *(ulonglong **)(param_1 + 0xf8); puVar16 = puVar16 + 6) {
      uVar21 = puVar16[1];
      if ((byte *)*puVar16 == pbVar27) {
        uVar21 = (local_80 - uVar25) + puVar16[1];
      }
      *puVar16 = (ulonglong)((byte *)*puVar16 + (local_88 - (longlong)pbVar27));
      puVar16[1] = uVar21;
      uVar21 = puVar16[3];
      if ((byte *)puVar16[2] == pbVar27) {
        uVar21 = (puVar16[3] - uVar25) + local_80;
      }
      puVar16[2] = (ulonglong)((byte *)puVar16[2] + (local_88 - (longlong)pbVar27));
      puVar16[3] = uVar21;
    }
    local_78 = (byte)local_158;
    if (local_158 < 0x80) {
      plStack_c0 = (longlong *)0x1;
    }
    else {
      bVar19 = local_78 & 0x3f | 0x80;
      bVar12 = (byte)(local_158 >> 6);
      if (local_158 < 0x800) {
        local_78 = bVar12 & 0x1f | 0xc0;
        plStack_c0 = (longlong *)0x2;
        local_77[0] = bVar19;
      }
      else {
        local_78 = (byte)(local_158 >> 0xc) | 0xe0;
        local_77[0] = bVar12 & 0x3f | 0x80;
        plStack_c0 = (longlong *)0x3;
        local_77[1] = bVar19;
      }
    }
    local_c8 = &local_78;
    local_90 = &local_f8;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    local_f8 = local_118;
    plStack_f0 = plStack_110;
    local_168 = &local_c8;
    local_d8 = pbVar27;
    uStack_d0 = uVar25;
    local_a8 = pbVar27;
    uStack_a0 = uVar25;
    FUN_180253e80(param_1,&local_e8,&local_f8,&local_d8);
    for (; puVar15 < *(ulonglong **)(param_1 + 0xf8); puVar15 = puVar15 + 6) {
      uVar21 = puVar15[1];
      if ((byte *)*puVar15 == pbVar27) {
        uVar21 = (puVar15[1] - uVar25) + uStack_e0;
      }
      *puVar15 = (ulonglong)((byte *)*puVar15 + ((longlong)local_e8 - (longlong)pbVar27));
      puVar15[1] = uVar21;
      uVar21 = puVar15[3];
      if ((byte *)puVar15[2] == pbVar27) {
        uVar21 = (puVar15[3] - uVar25) + uStack_e0;
      }
      puVar15[2] = (ulonglong)((byte *)puVar15[2] + ((longlong)local_e8 - (longlong)pbVar27));
      puVar15[3] = uVar21;
    }
    lVar6 = *(longlong *)(param_1 + 0x50);
    pbVar24 = (byte *)((*(longlong *)(param_1 + 0x58) - lVar6 >> 5) * -0x5555555555555555);
    if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0) {
LAB_180250cfe:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    if (uVar18 == *(longlong *)((longlong)pbVar22 * 0x60 + 8 + lVar6) -
                  *(longlong *)((longlong)pbVar22 * 0x60 + lVar6) >> 4) {
      if (pbVar22 != pbVar24 + -1) {
        do {
          pbVar22 = pbVar22 + 1;
          if (pbVar24 + -1 <= pbVar22) break;
          if (pbVar24 < pbVar22 || (longlong)pbVar24 - (longlong)pbVar22 == 0) goto LAB_180250cfe;
        } while (*(char *)((longlong)pbVar22 * 0x60 + 0x22 + lVar6) == '\x03');
        uStack_120 = 0;
        uVar18 = uStack_120;
      }
    }
    else {
      uVar18 = uVar18 + 1;
    }
    uStack_120 = uVar18;
    local_128 = pbVar22;
    pbVar22 = (byte *)((*(longlong *)(param_1 + 0x58) - lVar6 >> 5) * -0x5555555555555555);
    if (pbVar22 < pbVar27 || (longlong)pbVar22 - (longlong)pbVar27 == 0) goto LAB_180250cfe;
    if (uVar25 == *(longlong *)((longlong)pbVar27 * 0x60 + 8 + lVar6) -
                  *(longlong *)((longlong)pbVar27 * 0x60 + lVar6) >> 4) {
      if (pbVar27 != pbVar22 + -1) {
        do {
          pbVar27 = pbVar27 + 1;
          if (pbVar22 + -1 <= pbVar27) break;
          if (pbVar22 < pbVar27 || (longlong)pbVar22 - (longlong)pbVar27 == 0) goto LAB_180250cfe;
        } while (*(char *)((longlong)pbVar27 * 0x60 + 0x22 + lVar6) == '\x03');
        uStack_100 = 0;
        uVar25 = uStack_100;
      }
    }
    else {
      uVar25 = uVar25 + 1;
    }
    uStack_100 = uVar25;
    local_108 = pbVar27;
    *(undefined4 *)puVar23 = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar23 + 4) = local_108._4_4_;
    *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_100._4_4_;
    puVar23[2] = (ulonglong)local_128;
    puVar23[3] = uStack_120;
    *(undefined1 *)((longlong)puVar23 + 0x22) = 1;
  }
  puVar23 = puVar23 + 6;
  goto LAB_180250190;
}


