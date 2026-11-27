// 0x18024e1d0  FUN_18024e1d0
// size=1209 thunk=false
// signature: undefined FUN_18024e1d0()
// status: ok


void FUN_18024e1d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short sVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  short sVar19;
  ulonglong *puVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong uStack_30;
  
  puVar18 = *(ulonglong **)(param_1 + 0xf0);
  puVar2 = *(ulonglong **)(param_1 + 0xf8);
  do {
    if (puVar18 == puVar2) {
      return;
    }
    uVar12 = puVar18[2];
    uVar3 = *puVar18;
    bVar22 = uVar3 < uVar12;
    if ((uVar3 != uVar12) || (bVar22 = puVar18[1] < puVar18[3], puVar18[1] != puVar18[3])) {
      puVar20 = puVar18;
      local_c8 = uVar3;
      if (!bVar22) {
        puVar20 = puVar18 + 2;
        local_c8 = uVar12;
      }
      bVar23 = uVar3 < uVar12;
      bVar22 = false;
      if (uVar3 == uVar12) {
        bVar23 = puVar18[1] < puVar18[3];
        bVar22 = puVar18[1] == puVar18[3];
      }
      lVar4 = *(longlong *)(param_1 + 0x50);
      plVar1 = (longlong *)(param_1 + 0x50);
      puVar15 = puVar18 + 2;
      if (!bVar23 && !bVar22) {
        puVar15 = puVar18;
      }
      uVar12 = (*(longlong *)(param_1 + 0x58) - lVar4 >> 5) * -0x5555555555555555;
      if (uVar12 < local_c8 || uVar12 - local_c8 == 0) goto LAB_18024e684;
      uStack_c0 = puVar20[1];
      uVar12 = puVar15[1];
      uVar3 = *puVar15;
      lVar21 = local_c8 * 0x60;
      if (uStack_c0 <
          (ulonglong)(*(longlong *)(lVar4 + 8 + lVar21) - *(longlong *)(lVar4 + lVar21) >> 4)) {
        sVar19 = *(short *)(*(longlong *)(lVar4 + lVar21) + uStack_c0 * 0x10);
      }
      else {
        sVar19 = -3;
      }
      if (uVar12 == 0) {
        local_58 = uVar3;
        local_50 = uVar12;
        FUN_180256690(plVar1,&local_90,&local_58);
      }
      else {
        local_88 = uVar12 - 1;
        local_90 = uVar3;
      }
      local_60 = *(longlong *)(param_1 + 0x58);
      local_68 = *plVar1;
      local_70 = (local_60 - local_68 >> 5) * -0x5555555555555555;
      if (local_70 < local_90 || local_70 - local_90 == 0) goto LAB_18024e684;
      lVar4 = *(longlong *)(local_90 * 0x60 + local_68);
      if (local_88 < (ulonglong)(*(longlong *)(local_90 * 0x60 + 8 + local_68) - lVar4 >> 4)) {
        sVar11 = *(short *)(lVar4 + local_88 * 0x10);
      }
      else {
        sVar11 = -3;
      }
      if (sVar19 == 0x7b) {
        sVar19 = 0x7d;
LAB_18024e393:
        if (sVar11 == sVar19) {
          if (uVar12 == 0) {
            local_48 = uVar3;
            local_40 = uVar12;
            FUN_180256690(plVar1,&local_80,&local_48);
          }
          else {
            local_78 = uVar12 - 1;
            local_80 = uVar3;
          }
          lVar4 = *plVar1;
          uVar12 = (*(longlong *)(param_1 + 0x58) - lVar4 >> 5) * -0x5555555555555555;
          if (uVar12 < local_c8 || uVar12 - local_c8 == 0) goto LAB_18024e684;
          if (uStack_c0 == *(longlong *)(lVar4 + 8 + lVar21) - *(longlong *)(lVar4 + lVar21) >> 4) {
            if (local_c8 != uVar12 - 1) {
              do {
                local_c8 = local_c8 + 1;
                if (uVar12 - 1 <= local_c8) break;
                if (uVar12 < local_c8 || uVar12 - local_c8 == 0) goto LAB_18024e684;
              } while (*(char *)(local_c8 * 0x60 + 0x22 + lVar4) == '\x03');
              uStack_c0 = 0;
            }
          }
          else {
            uStack_c0 = uStack_c0 + 1;
          }
          *(undefined4 *)puVar18 = (undefined4)local_c8;
          *(undefined4 *)((longlong)puVar18 + 4) = local_c8._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_c0._4_4_;
          *(undefined1 *)((longlong)puVar18 + 0x22) = 1;
          puVar18[2] = local_80;
          puVar18[3] = local_78;
          local_38 = local_80;
          uStack_30 = local_78;
          goto LAB_18024e64a;
        }
      }
      else {
        if (sVar19 == 0x5b) {
          sVar19 = 0x5d;
          goto LAB_18024e393;
        }
        if (sVar19 == 0x28) {
          sVar19 = 0x29;
          goto LAB_18024e393;
        }
      }
      uVar5 = *(ulonglong *)(param_1 + 400);
      uVar17 = uVar5;
      for (uVar13 = *(ulonglong *)(param_1 + 0x188); uVar13 < uVar5; uVar13 = uVar13 + 0x40) {
        uVar14 = *(ulonglong *)(uVar13 + 8);
        bVar23 = uVar14 < local_c8;
        bVar22 = false;
        if (uVar14 == local_c8) {
          bVar23 = *(ulonglong *)(uVar13 + 0x10) < uStack_c0;
          bVar22 = *(ulonglong *)(uVar13 + 0x10) == uStack_c0;
        }
        if (!bVar23 && !bVar22) break;
        bVar22 = uVar14 < local_c8;
        if (uVar14 == local_c8) {
          bVar22 = *(ulonglong *)(uVar13 + 0x10) < uStack_c0;
        }
        if (bVar22) {
          uVar6 = *(ulonglong *)(uVar13 + 0x20);
          bVar22 = local_c8 <= uVar6;
          if (uVar6 == local_c8) {
            bVar22 = uStack_c0 <= *(ulonglong *)(uVar13 + 0x28);
          }
          if (bVar22) {
            bVar22 = uVar14 < uVar3;
            if (uVar14 == uVar3) {
              bVar22 = *(ulonglong *)(uVar13 + 0x10) < uVar12;
            }
            if (bVar22) {
              bVar22 = uVar3 <= uVar6;
              if (uVar6 == uVar3) {
                bVar22 = uVar12 <= *(ulonglong *)(uVar13 + 0x28);
              }
              if (bVar22) {
                uVar17 = uVar13;
              }
            }
          }
        }
      }
      if (uVar17 != uVar5) {
        bVar22 = false;
        uVar13 = uVar5;
        uVar14 = uVar17;
LAB_18024e523:
        uVar6 = uVar14;
        uVar14 = uVar6 + 0x40;
        if ((uVar14 < uVar5) && (!bVar22)) {
          uVar16 = uVar13;
          if (*(ulonglong *)(uVar17 + 0x30) < *(ulonglong *)(uVar6 + 0x70)) break;
          goto LAB_18024e56b;
        }
        if (uVar13 != uVar5) {
          local_b8 = *(ulonglong *)(uVar13 + 0x20);
          if (local_70 <= local_b8) {
LAB_18024e684:
                    /* WARNING: Subroutine does not return */
            FUN_180262180();
          }
          uStack_b0 = *(ulonglong *)(uVar13 + 0x28);
          if (uStack_b0 ==
              *(longlong *)(local_b8 * 0x60 + 8 + local_68) -
              *(longlong *)(local_b8 * 0x60 + local_68) >> 4) {
            if (local_b8 != local_70 - 1) {
              do {
                local_b8 = local_b8 + 1;
                if ((local_60 - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555 - 1U <=
                    local_b8) break;
                if (local_70 <= local_b8) goto LAB_18024e684;
              } while (*(char *)(local_b8 * 0x60 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x03');
              uStack_b0 = 0;
            }
          }
          else {
            uStack_b0 = uStack_b0 + 1;
          }
          uVar7 = *(undefined4 *)(uVar13 + 8);
          uVar8 = *(undefined4 *)(uVar13 + 0xc);
          uVar9 = *(undefined4 *)(uVar13 + 0x10);
          uVar10 = *(undefined4 *)(uVar13 + 0x14);
          *(undefined1 *)((longlong)puVar18 + 0x22) = 1;
          *(undefined4 *)puVar18 = uVar7;
          *(undefined4 *)((longlong)puVar18 + 4) = uVar8;
          *(undefined4 *)(puVar18 + 1) = uVar9;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uVar10;
          puVar18[2] = local_b8;
          puVar18[3] = uStack_b0;
        }
      }
    }
LAB_18024e64a:
    puVar18 = puVar18 + 6;
  } while( true );
  if (*(ulonglong *)(uVar6 + 0x70) == *(ulonglong *)(uVar17 + 0x30) + 1) {
    bVar24 = *(ulonglong *)(uVar6 + 0x48) < local_c8;
    bVar23 = false;
    if (*(ulonglong *)(uVar6 + 0x48) == local_c8) {
      bVar24 = *(ulonglong *)(uVar6 + 0x50) < uStack_c0;
      bVar23 = *(ulonglong *)(uVar6 + 0x50) == uStack_c0;
    }
    if (!bVar24 && !bVar23) {
      bVar23 = *(ulonglong *)(uVar6 + 0x60) < uVar3;
      if (*(ulonglong *)(uVar6 + 0x60) == uVar3) {
        bVar23 = *(ulonglong *)(uVar6 + 0x68) < uVar12;
      }
      uVar16 = uVar14;
      if (bVar23) {
LAB_18024e56b:
        bVar22 = true;
        uVar13 = uVar16;
      }
    }
  }
  goto LAB_18024e523;
}


