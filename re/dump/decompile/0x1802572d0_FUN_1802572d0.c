// 0x1802572d0  FUN_1802572d0
// size=3411 thunk=false
// signature: undefined FUN_1802572d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802572d0(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  ushort *puVar12;
  ulonglong uVar13;
  undefined8 *****pppppuVar14;
  ushort *puVar15;
  undefined7 uVar17;
  ulonglong uVar16;
  uint7 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  ushort uVar22;
  ushort *puVar23;
  ushort *puVar24;
  undefined4 uVar25;
  undefined1 auStack_228 [32];
  ulonglong *local_208;
  uint local_1f8;
  ushort *local_1f0;
  ulonglong local_1e8;
  longlong *local_1e0;
  ulonglong *local_1d0;
  ushort *local_1c8;
  ushort *local_1c0;
  ushort *local_1b8;
  ushort *local_1b0;
  ushort *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  ushort *local_e8;
  byte local_e0;
  byte local_df;
  byte local_de;
  ushort *local_d8;
  ushort local_d0 [4];
  undefined8 ****local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ushort *local_a0;
  ulonglong local_98;
  ushort *local_90;
  ulonglong local_88;
  ushort *local_80;
  ulonglong local_78;
  ushort *local_70;
  ulonglong local_68;
  
  uVar5 = _UNK_1803814b8;
  uVar4 = _DAT_1803814b0;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_228;
  local_1e8 = (ulonglong)*(byte *)((longlong)param_2 + 0x21);
  uVar13 = (ulonglong)param_2 & 0xffffffffffffff00;
  local_1f8 = (uint)uVar13;
  puVar8 = (ushort *)*param_2;
  local_1b8 = (ushort *)param_2[1];
  local_1c0 = (ushort *)
              (((longlong)local_1b8 - (longlong)puVar8 & 0xfffffffffffffff0U) + (longlong)puVar8);
  uVar16 = local_1e8;
  local_1f0 = puVar8;
  local_1e0 = param_1;
  local_1d0 = param_2;
  puVar24 = local_1c0;
  puVar23 = local_1b8;
LAB_18025735c:
  do {
    puVar15 = puVar8;
    plVar3 = local_1e0;
    cVar6 = (char)uVar16;
    if (puVar23 <= puVar15) {
LAB_180257ff5:
      return uVar16 & 0xff;
    }
    if (cVar6 == '\0') {
      if ((((char)uVar13 == '\0') && (*(ushort *)(*local_1e0 + 0x22) != 0)) &&
         (*puVar15 != *(ushort *)(*local_1e0 + 0x22))) {
        cVar6 = FUN_18025f490();
        local_1f8 = local_1f8 & 0xff;
        if (cVar6 == '\0') {
          local_1f8 = 1;
        }
      }
      plVar2 = *(longlong **)(*plVar3 + 0xe0);
      puVar12 = puVar15;
      if (plVar2 == (longlong *)0x0) {
LAB_180257457:
        plVar2 = *(longlong **)(*plVar3 + 0x1f0);
        puVar8 = puVar12;
        if (plVar2 != (longlong *)0x0) {
          local_90 = (ushort *)0x0;
          local_208 = &local_98;
          local_e8 = puVar24;
          local_d8 = puVar15;
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_90,&local_d8,&local_e8);
          if (local_90 != puVar15) {
            if (7 < local_98) {
              local_98 = 7;
            }
            uVar16 = (ulonglong)((int)local_98 + 0xd);
            puVar8 = (ushort *)
                     (((longlong)local_90 - (longlong)puVar15 & 0xfffffffffffffff0U) +
                     (longlong)puVar12);
            for (; local_1f0 = puVar8, local_1e8 = uVar16, puVar12 < puVar8; puVar12 = puVar12 + 8)
            {
              *(undefined1 *)(puVar12 + 1) = 4;
            }
          }
        }
        if (puVar8 == puVar15) {
          uVar22 = *puVar8;
          cVar6 = FUN_18025f490(uVar22);
          if (cVar6 == '\0') {
            lVar9 = *plVar3;
            lVar10 = *(longlong *)(lVar9 + 0x78);
            uVar17 = (undefined7)((ulonglong)lVar9 >> 8);
            if (lVar10 != 0) {
              local_140 = lVar9 + 0x68;
              if (0xf < *(ulonglong *)(lVar9 + 0x80)) {
                local_140 = *(longlong *)local_140;
              }
              local_138 = lVar10;
              cVar6 = FUN_1802571c0(puVar8,puVar23,&local_140);
              if (cVar6 == '\0') goto LAB_18025758f;
              local_1e8 = CONCAT71(uVar17,1);
              puVar12 = puVar8 + lVar10 * 8;
              for (; puVar8 < puVar12; puVar8 = puVar8 + 8) {
                *(undefined1 *)(puVar8 + 1) = 9;
              }
LAB_180257586:
              uVar13 = (ulonglong)local_1f8;
              uVar16 = local_1e8;
              goto LAB_1802575df;
            }
LAB_18025758f:
            if (*(longlong *)(lVar9 + 0x38) != 0) {
              local_150 = lVar9 + 0x28;
              if (0xf < *(ulonglong *)(lVar9 + 0x40)) {
                local_150 = *(longlong *)local_150;
              }
              local_148 = *(longlong *)(lVar9 + 0x38);
              cVar6 = FUN_1802571c0(puVar8,puVar23,&local_150);
              if (cVar6 == '\0') goto LAB_1802575fa;
              for (; puVar8 < puVar23; puVar8 = puVar8 + 8) {
                *(undefined1 *)(puVar8 + 1) = 9;
              }
LAB_1802575d7:
              uVar13 = (ulonglong)local_1f8;
              puVar12 = puVar23;
              uVar16 = local_1e8;
              goto LAB_1802575df;
            }
LAB_1802575fa:
            if (*(longlong *)(lVar9 + 0x58) != 0) {
              local_160 = lVar9 + 0x48;
              if (0xf < *(ulonglong *)(lVar9 + 0x60)) {
                local_160 = *(longlong *)local_160;
              }
              local_158 = *(longlong *)(lVar9 + 0x58);
              cVar6 = FUN_1802571c0(puVar8,puVar23,&local_160);
              if (cVar6 != '\0') {
                for (; puVar8 < puVar23; puVar8 = puVar8 + 8) {
                  *(undefined1 *)(puVar8 + 1) = 9;
                }
                goto LAB_1802575d7;
              }
            }
            lVar10 = *(longlong *)(lVar9 + 0x140);
            if (lVar10 != 0) {
              local_170 = lVar9 + 0x130;
              if (0xf < *(ulonglong *)(lVar9 + 0x148)) {
                local_170 = *(longlong *)local_170;
              }
              local_168 = lVar10;
              cVar6 = FUN_1802571c0(puVar8,puVar23,&local_170);
              if (cVar6 != '\0') {
                local_1e8 = CONCAT71(uVar17,0xb);
                puVar12 = puVar8 + lVar10 * 8;
                for (; puVar8 < puVar12; puVar8 = puVar8 + 8) {
                  *(undefined1 *)(puVar8 + 1) = 4;
                }
                goto LAB_180257586;
              }
            }
            lVar10 = *(longlong *)(lVar9 + 0x180);
            if (lVar10 != 0) {
              local_180 = lVar9 + 0x170;
              if (0xf < *(ulonglong *)(lVar9 + 0x188)) {
                local_180 = *(longlong *)local_180;
              }
              local_178 = lVar10;
              cVar6 = FUN_1802571c0(puVar8,puVar23,&local_180);
              if (cVar6 != '\0') {
                local_1e8 = CONCAT71(uVar17,0xc);
                puVar12 = puVar8 + lVar10 * 8;
                for (; puVar8 < puVar12; puVar8 = puVar8 + 8) {
                  *(undefined1 *)(puVar8 + 1) = 4;
                }
                goto LAB_180257586;
              }
            }
            if ((*(char *)(lVar9 + 0x128) != '\0') && (uVar22 == 0x27)) {
              uVar16 = CONCAT71(uVar17,9);
LAB_180257719:
              puVar12 = puVar8 + 8;
              *(undefined1 *)(puVar8 + 1) = 4;
              uVar13 = (ulonglong)local_1f8;
              local_1e8 = uVar16;
              goto LAB_1802575df;
            }
            if ((*(char *)(lVar9 + 0x129) != '\0') && (uVar22 == 0x22)) {
              uVar16 = CONCAT71(uVar17,10);
              goto LAB_180257719;
            }
            puVar12 = puVar8;
            if (((*(ushort *)(lVar9 + 0x22) != 0) && ((char)local_1f8 == '\0')) &&
               (uVar22 == *(ushort *)(lVar9 + 0x22))) {
              for (puVar8 = (ushort *)*local_1d0; puVar8 < puVar23; puVar8 = puVar8 + 8) {
                *(undefined1 *)(puVar8 + 1) = 6;
              }
              goto LAB_1802575d7;
            }
          }
          else {
            *(undefined1 *)(puVar8 + 1) = 0xd;
            uVar13 = (ulonglong)local_1f8;
            puVar12 = puVar8 + 8;
LAB_1802575df:
            puVar8 = puVar12;
            local_1f0 = puVar12;
            param_1 = local_1e0;
            if (puVar12 != puVar15) goto LAB_18025735c;
          }
          param_1 = local_1e0;
          plVar3 = *(longlong **)(*local_1e0 + 0x3f8);
          if (plVar3 == (longlong *)0x0) {
LAB_1802577e5:
            plVar3 = *(longlong **)(*param_1 + 0x378);
            if ((plVar3 != (longlong *)0x0) &&
               (local_e8 = puVar24, local_d8 = puVar15,
               (**(code **)(*plVar3 + 0x10))(plVar3,&local_1b0,&local_d8,&local_e8),
               puVar8 = local_1b0, local_1b0 != puVar15)) {
              local_e8 = (ushort *)((longlong)local_1b0 - (longlong)puVar15 >> 4);
              uVar25 = 0;
              uStack_c0 = 0;
              local_b8 = uVar4;
              uStack_b0 = uVar5;
              local_c8 = (undefined8 *****)0x0;
              local_f0[0] = 7;
              uVar16 = local_b8;
              uVar21 = local_f0[0];
              for (; local_f0[0] = uVar21, local_b8 = uVar16, puVar15 < puVar8;
                  puVar15 = puVar15 + 8) {
                uVar22 = *puVar15;
                uVar16 = (ulonglong)uVar22;
                if (*(char *)(*param_1 + 0x20) == '\0') {
                  if (uVar22 < 0x7f) {
                    if (uVar22 - 0x41 < 0x1a) {
                      uVar16 = (ulonglong)(uVar22 | 0x20);
                    }
                  }
                  else {
                    lVar9 = FUN_180261490(uVar25,uVar22);
                    if ((lVar9 != 0) && (iVar1 = *(int *)(lVar9 + 8), iVar1 != 0)) {
                      if (iVar1 == 0xffff) {
                        uVar16 = (ulonglong)(uVar22 | 1);
                      }
                      else {
                        uVar16 = (ulonglong)(ushort)(uVar22 + (short)iVar1);
                      }
                    }
                  }
                }
                uVar22 = (ushort)uVar16;
                if (uVar22 < 0x80) {
                  uVar19 = 1;
LAB_180257909:
                  local_e0 = (byte)uVar16;
                }
                else {
                  bVar11 = (byte)uVar16 & 0x3f | 0x80;
                  bVar7 = (byte)(uVar22 >> 6);
                  if (0x7ff < uVar22) {
                    uVar16 = (ulonglong)(byte)((byte)(uVar16 >> 8) >> 4 | 0xe0);
                    local_df = bVar7 & 0x3f | 0x80;
                    uVar19 = 3;
                    local_de = bVar11;
                    goto LAB_180257909;
                  }
                  local_e0 = bVar7 & 0x1f | 0xc0;
                  uVar19 = 2;
                  local_df = bVar11;
                }
                uVar25 = FUN_18021aef0(&local_c8,&local_e0,uVar19);
                puVar12 = local_1f0;
                uVar16 = local_b8;
                uVar21 = local_f0[0];
                puVar24 = local_1c0;
                puVar23 = local_1b8;
              }
              lVar9 = *param_1;
              pppppuVar14 = &local_c8;
              if (0xf < uStack_b0) {
                pppppuVar14 = (undefined8 *****)local_c8;
              }
              uVar13 = 0;
              uVar20 = 0xcbf29ce484222325;
              if (uVar16 != 0) {
                do {
                  uVar20 = (uVar20 ^ *(byte *)(uVar13 + (longlong)pppppuVar14)) * 0x100000001b3;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar16);
              }
              lVar10 = FUN_180229bd0(lVar9 + 0x240,local_120,&local_c8,uVar20);
              lVar10 = *(longlong *)(lVar10 + 8);
              if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar9 + 0x248);
              }
              if (lVar10 == *(longlong *)(lVar9 + 0x248)) {
                pppppuVar14 = &local_c8;
                if (0xf < uStack_b0) {
                  pppppuVar14 = (undefined8 *****)local_c8;
                }
                uVar13 = 0;
                uVar20 = 0xcbf29ce484222325;
                if (uVar16 != 0) {
                  do {
                    uVar20 = (uVar20 ^ *(byte *)((longlong)pppppuVar14 + uVar13)) * 0x100000001b3;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < uVar16);
                }
                lVar10 = FUN_180229bd0(lVar9 + 0x280,local_110,&local_c8,uVar20);
                lVar10 = *(longlong *)(lVar10 + 8);
                if (lVar10 == 0) {
                  lVar10 = *(longlong *)(lVar9 + 0x288);
                }
                if (lVar10 == *(longlong *)(lVar9 + 0x288)) {
                  pppppuVar14 = &local_c8;
                  if (0xf < uStack_b0) {
                    pppppuVar14 = (undefined8 *****)local_c8;
                  }
                  uVar13 = 0;
                  uVar20 = 0xcbf29ce484222325;
                  if (uVar16 != 0) {
                    do {
                      uVar20 = (uVar20 ^ *(byte *)((longlong)pppppuVar14 + uVar13)) * 0x100000001b3;
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar16);
                  }
                  lVar10 = FUN_180229bd0(lVar9 + 0x2c0,local_100,&local_c8,uVar20);
                  lVar10 = *(longlong *)(lVar10 + 8);
                  if (lVar10 == 0) {
                    lVar10 = *(longlong *)(lVar9 + 0x2c8);
                  }
                  if (lVar10 != *(longlong *)(lVar9 + 0x2c8)) {
                    uVar21 = 8;
                    local_f0[0] = uVar21;
                  }
                }
                else {
                  uVar21 = 2;
                  local_f0[0] = uVar21;
                }
              }
              else {
                uVar21 = 1;
                local_f0[0] = uVar21;
              }
              puVar8 = puVar12 + (longlong)local_e8 * 8;
              for (; puVar12 < puVar8; puVar12 = puVar12 + 8) {
                *(undefined1 *)(puVar12 + 1) = uVar21;
              }
              local_1f0 = puVar8;
              FUN_18020e450(&local_c8);
              uVar13 = (ulonglong)local_1f8;
              uVar16 = local_1e8;
              param_1 = local_1e0;
              goto LAB_18025735c;
            }
            plVar3 = *(longlong **)(*param_1 + 0x3b8);
            if ((plVar3 == (longlong *)0x0) ||
               (local_e8 = puVar24, local_d8 = puVar15,
               (**(code **)(*plVar3 + 0x10))(plVar3,&local_1c8,&local_d8,&local_e8),
               local_1c8 == puVar15)) {
              plVar3 = *(longlong **)(*param_1 + 0x338);
              if (plVar3 != (longlong *)0x0) {
                local_d0[0] = *puVar12;
                cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,local_d0);
                if (cVar6 != '\0') {
                  *(undefined1 *)(puVar12 + 1) = 5;
                  local_1f0 = puVar12 + 8;
                  uVar13 = (ulonglong)local_1f8;
                  puVar8 = local_1f0;
                  uVar16 = local_1e8;
                  goto LAB_18025735c;
                }
              }
              *(undefined1 *)(puVar12 + 1) = 0;
              local_1f0 = puVar12 + 8;
              uVar13 = (ulonglong)local_1f8;
              puVar8 = local_1f0;
              uVar16 = local_1e8;
              goto LAB_18025735c;
            }
            local_1f0 = (ushort *)
                        (((longlong)local_1c8 - (longlong)puVar15 & 0xfffffffffffffff0U) +
                        (longlong)puVar12);
            for (; puVar12 < local_1f0; puVar12 = puVar12 + 8) {
              *(undefined1 *)(puVar12 + 1) = 3;
            }
          }
          else {
            local_208 = (ulonglong *)local_f0;
            local_e8 = puVar24;
            local_d8 = puVar15;
            (**(code **)(*plVar3 + 0x10))(plVar3,&local_1a8,&local_d8,&local_e8);
            if (local_1a8 == puVar15) goto LAB_1802577e5;
            local_1f0 = (ushort *)
                        (((longlong)local_1a8 - (longlong)puVar15 & 0xfffffffffffffff0U) +
                        (longlong)puVar12);
            for (; puVar12 < local_1f0; puVar12 = puVar12 + 8) {
              *(undefined1 *)(puVar12 + 1) = local_f0[0];
            }
          }
          uVar13 = (ulonglong)local_1f8;
          puVar8 = local_1f0;
          uVar16 = local_1e8;
          goto LAB_18025735c;
        }
      }
      else {
        local_80 = (ushort *)0x0;
        local_208 = &local_88;
        local_e8 = puVar15;
        local_d8 = puVar24;
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_80,&local_e8,&local_d8);
        if (local_80 == puVar15) goto LAB_180257457;
        if (7 < local_88) {
          local_88 = 7;
        }
        uVar16 = CONCAT71((int7)(local_88 >> 8),(char)local_88 + '\x01');
        puVar12 = (ushort *)
                  (((longlong)local_80 - (longlong)puVar15 & 0xfffffffffffffff0U) +
                  (longlong)puVar15);
        for (puVar8 = puVar15; puVar8 < puVar12; puVar8 = puVar8 + 8) {
          *(undefined1 *)(puVar8 + 1) = 9;
        }
        puVar8 = puVar12;
        local_1f0 = puVar12;
        local_1e8 = uVar16;
        if (puVar12 == puVar15) goto LAB_180257457;
      }
      uVar13 = (ulonglong)local_1f8;
      param_1 = local_1e0;
      goto LAB_18025735c;
    }
    if (7 < (byte)(cVar6 - 1U)) {
      if (7 < (byte)(cVar6 - 0xdU)) {
        if (cVar6 == '\v') {
          lVar9 = *param_1;
          if (*puVar15 == *(ushort *)(lVar9 + 0x1b0)) {
LAB_180257dd0:
            *(undefined1 *)(puVar15 + 1) = 4;
            if (puVar23 <= puVar15 + 8) goto LAB_180257ff5;
            *(undefined1 *)(puVar15 + 9) = 4;
            puVar8 = puVar15 + 0x10;
            local_1f0 = puVar15 + 0x10;
            goto LAB_18025735c;
          }
          local_1a0 = lVar9 + 0x150;
          if (0xf < *(ulonglong *)(lVar9 + 0x168)) {
            local_1a0 = *(longlong *)local_1a0;
          }
          lVar9 = *(longlong *)(lVar9 + 0x160);
          local_198 = lVar9;
          cVar6 = FUN_1802571c0(puVar15,puVar23,&local_1a0);
          if (cVar6 == '\0') {
LAB_180257ec8:
            *(undefined1 *)(puVar15 + 1) = 4;
            uVar13 = (ulonglong)local_1f8;
            puVar8 = puVar15 + 8;
            uVar16 = local_1e8;
            local_1f0 = puVar15 + 8;
            goto LAB_18025735c;
          }
          uVar16 = lVar9 * 0x10;
          puVar8 = puVar15 + lVar9 * 8;
          for (; puVar15 < puVar8; puVar15 = puVar15 + 8) {
            *(undefined1 *)(puVar15 + 1) = 4;
          }
        }
        else {
          if (cVar6 != '\f') {
            uVar18 = (uint7)(uVar16 >> 8);
            if (cVar6 == '\t') {
              puVar8 = puVar15 + 8;
              local_1f0 = puVar8;
              if (*puVar15 == *(ushort *)(*param_1 + 0x1b0)) {
                *(undefined1 *)(puVar15 + 1) = 4;
                uVar13 = (ulonglong)local_1f8;
                if ((puVar8 != puVar23) && (puVar8 < puVar23)) {
                  *(undefined1 *)(puVar15 + 9) = 4;
                  puVar8 = puVar15 + 0x10;
                  local_1f0 = puVar15 + 0x10;
                }
                goto LAB_18025735c;
              }
              if (*puVar15 == 0x27) {
                *(undefined1 *)(puVar15 + 1) = 4;
                local_1e8 = (ulonglong)uVar18 << 8;
                uVar13 = (ulonglong)local_1f8;
                uVar16 = local_1e8;
                goto LAB_18025735c;
              }
            }
            else {
              puVar8 = puVar15;
              if (cVar6 != '\n') goto LAB_18025735c;
              puVar8 = puVar15 + 8;
              local_1f0 = puVar8;
              if (*puVar15 == *(ushort *)(*param_1 + 0x1b0)) {
                *(undefined1 *)(puVar15 + 1) = 4;
                uVar13 = (ulonglong)local_1f8;
                if ((puVar8 != puVar23) && (puVar8 < puVar23)) {
                  *(undefined1 *)(puVar15 + 9) = 4;
                  puVar8 = puVar15 + 0x10;
                  local_1f0 = puVar15 + 0x10;
                }
                goto LAB_18025735c;
              }
              if (*puVar15 == 0x22) {
                *(undefined1 *)(puVar15 + 1) = 4;
                local_1e8 = (ulonglong)uVar18 << 8;
                uVar13 = (ulonglong)local_1f8;
                uVar16 = local_1e8;
                goto LAB_18025735c;
              }
            }
            *(undefined1 *)(puVar15 + 1) = 4;
            uVar13 = (ulonglong)local_1f8;
            puVar8 = puVar15 + 8;
            local_1f0 = puVar15 + 8;
            goto LAB_18025735c;
          }
          lVar9 = *param_1;
          if (*puVar15 == *(ushort *)(lVar9 + 0x1b0)) goto LAB_180257dd0;
          local_130 = lVar9 + 400;
          if (0xf < *(ulonglong *)(lVar9 + 0x1a8)) {
            local_130 = *(longlong *)local_130;
          }
          lVar9 = *(longlong *)(lVar9 + 0x1a0);
          local_128 = lVar9;
          cVar6 = FUN_1802571c0(puVar15,puVar23,&local_130);
          if (cVar6 == '\0') goto LAB_180257ec8;
          uVar16 = lVar9 * 0x10;
          puVar8 = puVar15 + lVar9 * 8;
          for (; puVar15 < puVar8; puVar15 = puVar15 + 8) {
            *(undefined1 *)(puVar15 + 1) = 4;
          }
        }
LAB_180257cc8:
        local_1e8 = uVar16 & 0xffffffffffffff00;
        uVar13 = (ulonglong)local_1f8;
        uVar16 = local_1e8;
        local_1f0 = puVar8;
        goto LAB_18025735c;
      }
      local_70 = (ushort *)0x0;
      plVar3 = *(longlong **)(*param_1 + 0x230);
      if (plVar3 == (longlong *)0x0) {
        local_e8 = puVar24;
        local_d8 = puVar15;
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      local_208 = &local_78;
      local_e8 = puVar24;
      local_d8 = puVar15;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_70,&local_d8,&local_e8);
      if (local_70 != puVar15) {
        if (7 < local_78) {
          local_78 = 7;
        }
        if (cVar6 == (char)((char)local_78 + '\r')) {
          puVar8 = (ushort *)
                   (((longlong)local_70 - (longlong)puVar15 & 0xfffffffffffffff0U) +
                   (longlong)puVar15);
          for (; puVar15 < puVar8; puVar15 = puVar15 + 8) {
            *(undefined1 *)(puVar15 + 1) = 4;
          }
          goto LAB_180257cc8;
        }
      }
      *(undefined1 *)(puVar15 + 1) = 4;
      uVar13 = (ulonglong)local_1f8;
      puVar8 = puVar15 + 8;
      local_1f0 = puVar15 + 8;
      goto LAB_18025735c;
    }
    lVar9 = *param_1;
    lVar10 = *(longlong *)(lVar9 + 0x98);
    if (lVar10 != 0) {
      local_190 = lVar9 + 0x88;
      if (0xf < *(ulonglong *)(lVar9 + 0xa0)) {
        local_190 = *(longlong *)local_190;
      }
      local_188 = lVar10;
      cVar6 = FUN_1802571c0(puVar15,puVar23,&local_190);
      if (cVar6 != '\0') {
        puVar8 = puVar15 + lVar10 * 8;
        for (; uVar16 = lVar10 * 0x10, puVar15 < puVar8; puVar15 = puVar15 + 8) {
          *(undefined1 *)(puVar15 + 1) = 9;
        }
        goto LAB_180257cc8;
      }
    }
    plVar3 = *(longlong **)(lVar9 + 0x120);
    if (plVar3 != (longlong *)0x0) {
      local_a0 = (ushort *)0x0;
      local_208 = &local_a8;
      local_e8 = puVar24;
      local_d8 = puVar15;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_a0,&local_d8,&local_e8);
      if (local_a0 != puVar15) {
        if (7 < local_a8) {
          local_a8 = 7;
        }
        if ((char)local_1e8 == (char)((char)local_a8 + '\x01')) {
          puVar8 = (ushort *)
                   (((longlong)local_a0 - (longlong)puVar15 & 0xfffffffffffffff0U) +
                   (longlong)puVar15);
          for (; uVar16 = local_1e8, puVar15 < puVar8; puVar15 = puVar15 + 8) {
            *(undefined1 *)(puVar15 + 1) = 9;
          }
          goto LAB_180257cc8;
        }
      }
    }
    *(undefined1 *)(puVar15 + 1) = 9;
    uVar13 = (ulonglong)local_1f8;
    puVar8 = puVar15 + 8;
    uVar16 = local_1e8;
    local_1f0 = puVar15 + 8;
  } while( true );
}


