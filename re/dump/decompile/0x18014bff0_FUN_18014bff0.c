// 0x18014bff0  FUN_18014bff0
// size=1330 thunk=false
// signature: undefined FUN_18014bff0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014bff0(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *_Memory;
  char *pcVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  void **local_108;
  char local_f8;
  undefined8 local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  byte local_d0 [8];
  uint local_c8;
  undefined4 **local_c0;
  undefined8 local_b8;
  longlong local_b0;
  char *local_a8;
  uint *local_a0;
  uint *puStack_98;
  uint *local_90;
  undefined8 local_88;
  void *local_80;
  void *pvStack_78;
  longlong local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  uVar17 = local_48;
  puVar15 = auStack_128;
  if (param_2 != 0) {
    uVar4 = *(uint *)(param_1 + 4);
    uVar17 = (ulonglong)uVar4;
    puVar15 = auStack_128;
    if (param_2 <= uVar4) {
      uStack_50 = 0;
      uVar4 = uVar4 + 1;
      uVar5 = 0;
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_d0[2] = 0;
      local_d0[3] = 0;
      uVar17 = (ulonglong)uVar4 + 0x1f >> 5;
      local_68 = (undefined4 *)0x0;
      puStack_60 = (undefined4 *)0x0;
      local_58 = 0;
      local_b0 = param_3;
      if (uVar17 != 0) {
        FUN_18022eb50(&local_68,uVar17);
        puVar13 = local_68;
        local_c0 = &local_68;
        local_d0[4] = 0;
        local_d0[5] = 0;
        local_d0[6] = 0;
        local_d0[7] = 0;
        lVar14 = 0;
        do {
          lVar10 = lVar14 + 1;
          if (local_d0[lVar14] != local_d0[lVar14 + 4]) {
            uVar5 = -(uint)(local_d0[lVar14] < local_d0[lVar14 + 4]) | 1;
            break;
          }
          lVar14 = lVar10;
        } while (lVar10 != 4);
        uVar19 = uVar17;
        if (uVar5 == 0) {
          memset(local_68,0,uVar17 * 4);
          puVar13 = puVar13 + uVar17;
        }
        else {
          do {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        local_c0 = (undefined4 **)0x0;
        puStack_60 = puVar13;
      }
      if ((uVar17 < (ulonglong)((longlong)puStack_60 - (longlong)local_68 >> 2)) &&
         (local_68 + uVar17 != puStack_60)) {
        puStack_60 = local_68 + uVar17;
      }
      if ((uVar4 & 0x1f) != 0) {
        local_68[uVar17 - 1] = local_68[uVar17 - 1] & (1 << (sbyte)(uVar4 & 0x1f)) - 1U;
      }
      local_a0 = (uint *)0x0;
      puStack_98 = (uint *)0x0;
      local_90 = (uint *)0x0;
      local_c8 = param_2;
      uStack_50 = (ulonglong)uVar4;
      FUN_18022eb50(&local_a0,1);
      *local_a0 = local_c8;
      puStack_98 = local_a0 + 1;
      local_b8 = 0;
      local_80 = (void *)0x0;
      pvStack_78 = (void *)0x0;
      local_70 = 0;
      uVar17 = 0;
      if (local_a0 != puStack_98) {
        do {
          local_d8 = uVar17 + 1;
          if (0x100000 < local_d8) {
            uVar17 = 0;
            goto LAB_18014c48d;
          }
          puVar8 = puStack_98 + -1;
          uVar4 = *puVar8;
          if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
            uVar5 = local_68[uVar4 >> 5];
            uVar6 = 1 << ((byte)uVar4 & 0x1f);
            if ((uVar5 & uVar6) == 0) {
              local_68[uVar4 >> 5] = uVar6 | uVar5;
              lVar10 = (ulonglong)(uVar4 - 1) * (ulonglong)*(uint *)(param_1 + 3) + *param_1;
              lVar14 = 0;
              if (uVar4 == 1) {
                lVar14 = 100;
              }
              local_a8 = (char *)(lVar14 + lVar10);
              local_f8 = *local_a8;
              if ((local_f8 == '\x05') || (local_f8 == '\r')) {
                local_e8 = 8;
                if (local_f8 == '\x05') {
                  local_e8 = 0xc;
                }
                uVar17 = (ulonglong)CONCAT11(local_a8[3],local_a8[4]);
                if (lVar14 + uVar17 * 2 + local_e8 <= (ulonglong)*(uint *)((longlong)param_1 + 0x1c)
                   ) {
                  if (local_f8 == '\x05') {
                    uVar4 = CONCAT31(CONCAT21(CONCAT11(local_a8[8],local_a8[9]),local_a8[10]),
                                     local_a8[0xb]);
                    local_f0 = CONCAT44(local_f0._4_4_,uVar4);
                    if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
                      if (puVar8 == local_90) {
                        puStack_98 = puVar8;
                        FUN_180229d20(&local_a0,puVar8,&local_f0);
                        puVar8 = puStack_98;
                      }
                      else {
                        *puVar8 = uVar4;
                        puVar8 = puStack_98;
                      }
                    }
                  }
                  puStack_98 = puVar8;
                  uVar19 = 0;
                  puVar8 = puStack_98;
                  if (uVar17 != 0) {
                    uVar18 = local_e8 + lVar14;
                    pcVar11 = (char *)(lVar14 + lVar10);
                    lVar14 = local_e8;
                    local_e0 = uVar18;
                    do {
                      uVar9 = (ulonglong)
                              CONCAT11(pcVar11[lVar14 + uVar19 * 2],
                                       *(undefined1 *)(uVar18 + uVar19 * 2 + 1 + lVar10));
                      if ((uVar18 <= uVar9) && (uVar9 < *(uint *)((longlong)param_1 + 0x1c))) {
                        puVar15 = (undefined1 *)(uVar9 + lVar10);
                        uVar9 = *(uint *)((longlong)param_1 + 0x1c) - uVar9;
                        if (local_f8 == '\x05') {
                          if (3 < uVar9) {
                            uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),
                                             puVar15[3]);
                            local_f0 = CONCAT44(local_f0._4_4_,uVar4);
                            if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
                              if (puStack_98 == local_90) {
                                FUN_180229d20(&local_a0,puStack_98,&local_f0);
                                uVar18 = local_e0;
                                lVar14 = local_e8;
                              }
                              else {
                                *puStack_98 = uVar4;
                                puStack_98 = puStack_98 + 1;
                              }
                            }
                          }
                        }
                        else {
                          local_f0 = 0;
                          local_88 = 0;
                          uVar12 = uVar9;
                          iVar7 = FUN_18014b840(puVar15,uVar9,&local_f0);
                          uVar18 = local_e0;
                          lVar14 = local_e8;
                          if (iVar7 != 0) {
                            lVar16 = (longlong)iVar7;
                            iVar7 = FUN_18014b840(puVar15 + lVar16,uVar12 - lVar16,&local_88);
                            uVar18 = local_e0;
                            lVar14 = local_e8;
                            if (iVar7 != 0) {
                              if (local_80 != pvStack_78) {
                                pvStack_78 = local_80;
                              }
                              local_108 = &local_80;
                              cVar3 = FUN_18014c530(param_1,local_f0,puVar15 + iVar7 + lVar16,
                                                    uVar9 - (iVar7 + lVar16));
                              uVar18 = local_e0;
                              lVar14 = local_e8;
                              if (cVar3 != '\0') {
                                plVar1 = *(longlong **)(local_b0 + 0x38);
                                if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  std::_Xbad_function_call();
                                }
                                (**(code **)(*plVar1 + 0x10))(plVar1,&local_88,&local_80);
                                uVar18 = local_e0;
                                lVar14 = local_e8;
                              }
                            }
                          }
                        }
                      }
                      uVar19 = uVar19 + 1;
                      pcVar11 = local_a8;
                      puVar8 = puStack_98;
                    } while (uVar19 < uVar17);
                  }
                }
              }
            }
          }
          puStack_98 = puVar8;
          uVar17 = local_d8;
        } while (local_a0 != puStack_98);
      }
      uVar17 = 1;
LAB_18014c48d:
      if (local_80 != (void *)0x0) {
        _Memory = local_80;
        if ((0xfff < (ulonglong)(local_70 - (longlong)local_80)) &&
           (_Memory = *(void **)((longlong)local_80 + -8),
           0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)_Memory)))) {
          pcVar2 = (code *)swi(0x29);
          uVar17 = (*pcVar2)(5);
          puVar15 = auStack_120;
          goto LAB_18014c4fd;
        }
        free(_Memory);
        local_80 = (void *)0x0;
        pvStack_78 = (void *)0x0;
        local_70 = 0;
      }
      FUN_18021e060(&local_a0);
      FUN_18021e060(&local_68);
      puVar15 = auStack_128;
      goto LAB_18014c4ff;
    }
  }
LAB_18014c4fd:
  uVar17 = uVar17 & 0xffffffffffffff00;
LAB_18014c4ff:
  *(undefined8 *)(puVar15 + -8) = 0x18014c50b;
  return uVar17;
}


