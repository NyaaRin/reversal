// 0x18024ddd0  FUN_18024ddd0
// size=1022 thunk=false
// signature: undefined FUN_18024ddd0()
// status: ok


void FUN_18024ddd0(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  short sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  short sVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar13 = *(ulonglong **)(param_1 + 0xf0);
  puVar2 = *(ulonglong **)(param_1 + 0xf8);
  do {
    if (puVar13 == puVar2) {
      return;
    }
    uVar16 = puVar13[2];
    uVar12 = *puVar13;
    bVar17 = uVar12 < uVar16;
    if ((uVar12 == uVar16) && (bVar17 = puVar13[1] < puVar13[3], puVar13[1] == puVar13[3])) {
      uVar16 = puVar13[2];
      uVar12 = puVar13[3];
      local_88 = uVar16;
      uStack_80 = uVar12;
      FUN_180255690(param_1 + 0x50,&local_48,&local_88,0);
      local_88 = uVar16;
      uStack_80 = uVar12;
      FUN_180255880(param_1 + 0x50,&local_58,&local_88);
      local_c8._0_4_ = local_48;
      local_c8._4_4_ = uStack_44;
      local_d8._0_4_ = local_58;
      local_d8._4_4_ = uStack_54;
      uStack_d0._0_4_ = uStack_50;
      uStack_d0._4_4_ = uStack_4c;
      uStack_c0 = CONCAT44(uStack_3c,uStack_40);
LAB_18024e172:
      *(undefined4 *)puVar13 = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar13 + 4) = local_c8._4_4_;
      puVar13[1] = uStack_c0;
      *(undefined1 *)((longlong)puVar13 + 0x22) = 1;
      *(undefined4 *)(puVar13 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)puVar13 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_d0._4_4_;
    }
    else {
      puVar8 = puVar13;
      uVar14 = uVar12;
      if (!bVar17) {
        puVar8 = puVar13 + 2;
        uVar14 = uVar16;
      }
      uVar3 = puVar8[1];
      bVar18 = uVar12 < uVar16;
      bVar17 = false;
      if (uVar12 == uVar16) {
        bVar18 = puVar13[1] < puVar13[3];
        bVar17 = puVar13[1] == puVar13[3];
      }
      plVar1 = (longlong *)(param_1 + 0x50);
      puVar8 = puVar13 + 2;
      if (!bVar18 && !bVar17) {
        puVar8 = puVar13;
      }
      local_d8 = *puVar8;
      uStack_d0 = puVar8[1];
      if (uVar3 == 0) {
        local_78 = uVar14;
        local_70 = uVar3;
        FUN_180256690(plVar1,&local_b0,&local_78);
      }
      else {
        local_a8 = uVar3 - 1;
        local_b0 = uVar14;
      }
      lVar4 = *plVar1;
      uVar16 = (*(longlong *)(param_1 + 0x58) - lVar4 >> 5) * -0x5555555555555555;
      if (uVar16 < local_b0 || uVar16 - local_b0 == 0) goto LAB_18024e1c9;
      lVar5 = *(longlong *)(local_b0 * 0x60 + lVar4);
      if (local_a8 < (ulonglong)(*(longlong *)(local_b0 * 0x60 + 8 + lVar4) - lVar5 >> 4)) {
        sVar10 = *(short *)(lVar5 + local_a8 * 0x10);
      }
      else {
        sVar10 = -3;
      }
      if (uVar16 < local_d8 || uVar16 - local_d8 == 0) goto LAB_18024e1c9;
      lVar5 = *(longlong *)(local_d8 * 0x60 + lVar4);
      uVar12 = *(longlong *)(local_d8 * 0x60 + 8 + lVar4) - lVar5 >> 4;
      if (uStack_d0 < uVar12) {
        sVar15 = *(short *)(lVar5 + uStack_d0 * 0x10);
      }
      else {
        sVar15 = -3;
      }
      if (sVar10 == 0x7b) {
        sVar10 = 0x7d;
LAB_18024dfa6:
        if (sVar15 == sVar10) {
          if (uStack_d0 == uVar12) {
            if (local_d8 != uVar16 - 1) {
              do {
                local_d8 = local_d8 + 1;
                if (uVar16 - 1 <= local_d8) break;
                if (uVar16 < local_d8 || uVar16 - local_d8 == 0) goto LAB_18024e1c9;
              } while (*(char *)(local_d8 * 0x60 + 0x22 + lVar4) == '\x03');
              uStack_d0 = 0;
            }
          }
          else {
            uStack_d0 = uStack_d0 + 1;
          }
          if (uVar3 == 0) {
            local_68 = uVar14;
            local_60 = uVar3;
            FUN_180256690(plVar1,&local_a0,&local_68);
            local_c8._0_4_ = (undefined4)local_a0;
            local_c8._4_4_ = local_a0._4_4_;
            uStack_c0 = uStack_98;
          }
          else {
            uStack_98 = uVar3 - 1;
            local_a0._0_4_ = (undefined4)uVar14;
            local_a0._4_4_ = (undefined4)(uVar14 >> 0x20);
            local_c8._0_4_ = (undefined4)local_a0;
            local_c8._4_4_ = local_a0._4_4_;
            local_a0 = uVar14;
            uStack_c0 = uStack_98;
          }
          goto LAB_18024e172;
        }
      }
      else {
        if (sVar10 == 0x5b) {
          sVar10 = 0x5d;
          goto LAB_18024dfa6;
        }
        if (sVar10 == 0x28) {
          sVar10 = 0x29;
          goto LAB_18024dfa6;
        }
      }
      uVar12 = *(ulonglong *)(param_1 + 400);
      uVar11 = uVar12;
      for (uVar9 = *(ulonglong *)(param_1 + 0x188); uVar9 < uVar12; uVar9 = uVar9 + 0x40) {
        uVar6 = *(ulonglong *)(uVar9 + 8);
        bVar18 = uVar6 < uVar14;
        bVar17 = false;
        if (uVar6 == uVar14) {
          bVar18 = *(ulonglong *)(uVar9 + 0x10) < uVar3;
          bVar17 = *(ulonglong *)(uVar9 + 0x10) == uVar3;
        }
        if (!bVar18 && !bVar17) break;
        bVar17 = uVar6 < uVar14;
        if (uVar6 == uVar14) {
          bVar17 = *(ulonglong *)(uVar9 + 0x10) < uVar3;
        }
        if (bVar17) {
          uVar7 = *(ulonglong *)(uVar9 + 0x20);
          bVar17 = uVar14 <= uVar7;
          if (uVar7 == uVar14) {
            bVar17 = uVar3 <= *(ulonglong *)(uVar9 + 0x28);
          }
          if (bVar17) {
            bVar17 = uVar6 < local_d8;
            if (uVar6 == local_d8) {
              bVar17 = *(ulonglong *)(uVar9 + 0x10) < uStack_d0;
            }
            if (bVar17) {
              bVar17 = local_d8 <= uVar7;
              if (uVar7 == local_d8) {
                bVar17 = uStack_d0 <= *(ulonglong *)(uVar9 + 0x28);
              }
              if (bVar17) {
                uVar11 = uVar9;
              }
            }
          }
        }
      }
      if (uVar11 != uVar12) {
        local_c8 = *(ulonglong *)(uVar11 + 8);
        if (uVar16 < local_c8 || uVar16 - local_c8 == 0) {
LAB_18024e1c9:
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        lVar4 = *plVar1;
        uStack_c0 = *(ulonglong *)(uVar11 + 0x10);
        if (uStack_c0 ==
            *(longlong *)(local_c8 * 0x60 + 8 + lVar4) - *(longlong *)(local_c8 * 0x60 + lVar4) >> 4
           ) {
          if (local_c8 != uVar16 - 1) {
            do {
              local_c8 = local_c8 + 1;
              if (uVar16 - 1 <= local_c8) break;
              if (uVar16 < local_c8 || uVar16 - local_c8 == 0) goto LAB_18024e1c9;
            } while (*(char *)(local_c8 * 0x60 + 0x22 + lVar4) == '\x03');
            uStack_c0 = 0;
          }
        }
        else {
          uStack_c0 = uStack_c0 + 1;
        }
        local_d8._0_4_ = *(undefined4 *)(uVar11 + 0x20);
        local_d8._4_4_ = *(undefined4 *)(uVar11 + 0x24);
        uStack_d0._0_4_ = *(undefined4 *)(uVar11 + 0x28);
        uStack_d0._4_4_ = *(undefined4 *)(uVar11 + 0x2c);
        goto LAB_18024e172;
      }
    }
    puVar13 = puVar13 + 6;
  } while( true );
}


