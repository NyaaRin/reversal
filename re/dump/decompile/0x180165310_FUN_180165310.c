// 0x180165310  FUN_180165310
// size=2046 thunk=false
// signature: undefined FUN_180165310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180165310(longlong *param_1,char *param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  void *pvVar9;
  int *piVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int *piVar24;
  void *pvVar25;
  int *piVar26;
  undefined4 *puVar27;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  uint local_148;
  uint local_140;
  int local_138;
  longlong **local_130;
  undefined8 local_128;
  undefined4 local_120;
  uint local_118;
  uint local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  uint local_e8;
  uint *local_e0;
  uint local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  int *local_b8;
  longlong *local_b0;
  char *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong lStack_88;
  int *local_80;
  int *piStack_78;
  longlong local_70;
  void *local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  
  puVar16 = auStack_168;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  local_80 = (int *)0x0;
  piStack_78 = (int *)0x0;
  uVar23 = 0;
  local_70 = 0;
  local_e0 = param_4;
  local_d8 = param_3;
  local_b0 = param_1;
  local_a8 = param_2;
  if ((((DAT_1803f9248 == (longlong *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) ||
     (lVar8 = (**(code **)(*DAT_1803f9248 + 0x10))(DAT_1803f9248,0,&DAT_1803589f0,&DAT_1803589e8),
     lVar8 == 0)) {
LAB_180165a8e:
    FUN_180014410("[MP] no vtf \'%s\'\n",param_2);
  }
  else {
    if (local_80 != piStack_78) {
      piStack_78 = local_80;
    }
    (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar8,0,0);
    uVar13 = uVar23;
    do {
      FUN_180218360(&local_80,uVar13 + 0x40000);
      iVar6 = (**(code **)*DAT_1803f9248)(DAT_1803f9248,(longlong)local_80 + uVar13,0x40000,lVar8);
      if (0 < iVar6) {
        uVar13 = uVar13 + (longlong)iVar6;
      }
      uVar14 = uVar13;
    } while ((0x3ffff < iVar6) && (uVar14 = uVar23, uVar13 < 0x10000001));
    (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar8);
    FUN_180218360(&local_80,uVar14);
    piVar10 = local_80;
    if (uVar14 == 0) goto LAB_180165a8e;
    local_b8 = local_80;
    local_c8 = (longlong)piStack_78 - (longlong)local_80;
    if (local_c8 < 0x41) goto LAB_180165a8e;
    if (((*local_80 == 0x465456) && (local_80[1] == 7)) &&
       (((short)local_80[4] != 0 && (*(short *)((longlong)local_80 + 0x12) != 0)))) {
      iVar6 = local_80[0xd];
      switch(iVar6) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x14:
        uVar7 = (uint)*(ushort *)(local_80 + 6);
        if (*(ushort *)(local_80 + 6) == 0) {
          uVar7 = 1;
        }
        local_e8 = uVar7;
        if ((uint)local_80[2] < 3) {
          if (((*(int *)((longlong)local_80 + 0x39) != -1) &&
              (*(char *)((longlong)local_80 + 0x3d) != '\0')) &&
             (uVar23 = 0, *(char *)((longlong)local_80 + 0x3e) != '\0')) {
            uVar23 = FUN_180165230(*(char *)((longlong)local_80 + 0x3d),
                                   *(char *)((longlong)local_80 + 0x3e));
          }
          uVar23 = (uint)piVar10[3] + uVar23;
LAB_18016558d:
          puVar27 = (undefined4 *)((longlong)piVar10 + 0x39);
          piVar26 = piVar10 + 3;
          if (local_e0 != (uint *)0x0) {
            *local_e0 = uVar7;
          }
          iVar17 = *(byte *)(piVar10 + 0xe) - 1;
          puVar18 = puVar27;
          piVar24 = piVar26;
          local_d0 = uVar23;
          if (0 < iVar17) {
            uVar1 = *(ushort *)((longlong)piVar10 + 0x12);
            uVar2 = *(ushort *)(piVar10 + 4);
            local_e0 = (uint *)CONCAT44(local_e0._4_4_,(uint)uVar2);
            uVar13 = (ulonglong)local_e8;
            do {
              lVar8 = FUN_180165230(uVar2 >> ((byte)iVar17 & 0x1f),uVar1 >> ((byte)iVar17 & 0x1f),
                                    iVar6);
              uVar23 = uVar23 + lVar8 * uVar13;
              iVar17 = iVar17 + -1;
            } while (0 < iVar17);
            piVar10 = local_b8;
            puVar18 = (undefined4 *)((longlong)local_b8 + 0x39);
            piVar24 = local_b8 + 3;
          }
          uVar13 = local_d0;
          lVar8 = FUN_180165230((short)piVar10[4],*(undefined2 *)((longlong)piVar10 + 0x12),iVar6);
          if ((0 < (int)local_d8) && (puVar18 = puVar27, piVar24 = piVar26, 1 < local_e8)) {
            uVar23 = uVar23 + (int)(local_d8 % local_e8) * lVar8;
          }
          if ((lVar8 != 0) && (piVar24 = piVar26, puVar18 = puVar27, lVar8 + uVar23 <= local_c8)) {
            pvVar9 = (void *)((longlong)piVar10 + uVar23);
            if ((iVar6 - 0xdU < 3) || (iVar6 == 0x14)) {
              bVar4 = true;
              if ((iVar6 == 0xd) || (iVar6 == 0x14)) {
                uVar7 = 0x31545844;
              }
              else if (iVar6 == 0xe) {
                uVar7 = 0x33545844;
              }
              else {
                bVar5 = true;
                if (iVar6 != 0xf) goto LAB_180165663;
                uVar7 = 0x35545844;
              }
            }
            else {
              bVar5 = false;
LAB_180165663:
              bVar4 = bVar5;
              uVar7 = 0x15;
              if (iVar6 == 0x10) {
                uVar7 = 0x16;
              }
            }
            local_68 = (void *)0x0;
            uStack_60 = 0;
            plVar15 = (longlong *)0x0;
            local_58 = 0;
            pvVar25 = pvVar9;
            if ((!bVar4) && ((iVar6 - 0xcU & 0xfffffffb) != 0)) {
              FUN_180218360(&local_68,
                            (ulonglong)*(ushort *)((longlong)piVar10 + 0x12) *
                            (ulonglong)*(ushort *)(piVar10 + 4) * 4);
              iVar17 = (uint)*(ushort *)((longlong)piVar10 + 0x12) * (uint)*(ushort *)(piVar10 + 4);
              plVar22 = plVar15;
              pvVar25 = local_68;
              if (0 < iVar17) {
                do {
                  puVar21 = (undefined1 *)
                            ((longlong)plVar22 * ((ulonglong)(1 < iVar6 - 2U) + 3) +
                            (longlong)pvVar9);
                  if (iVar6 == 0) {
                    *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4) = puVar21[2];
                    *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 1) = puVar21[1];
                    *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 2) = *puVar21;
                    uVar11 = puVar21[3];
LAB_1801657f1:
                    *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 3) = uVar11;
                  }
                  else {
                    if (iVar6 == 1) {
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4) = puVar21[1];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 1) = puVar21[2];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 2) = puVar21[3];
                      uVar11 = *puVar21;
                      goto LAB_1801657f1;
                    }
                    if (iVar6 == 2) {
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4) = puVar21[2];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 1) = puVar21[1];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 2) = *puVar21;
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 3) = 0xff;
                    }
                    else if (iVar6 == 3) {
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4) = *puVar21;
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 1) = puVar21[1];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 2) = puVar21[2];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 3) = 0xff;
                    }
                    else if (iVar6 == 0xb) {
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4) = puVar21[3];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 1) = puVar21[2];
                      *(undefined1 *)((longlong)local_68 + (longlong)plVar22 * 4 + 2) = puVar21[1];
                      uVar11 = *puVar21;
                      goto LAB_1801657f1;
                    }
                  }
                  uVar20 = (int)plVar22 + 1;
                  plVar22 = (longlong *)(ulonglong)uVar20;
                } while ((int)uVar20 < iVar17);
              }
            }
            plVar22 = local_b0;
            local_a0 = (longlong *)0x0;
            local_128 = 0;
            local_130 = &local_a0;
            local_138 = 2;
            local_148 = 0;
            local_140 = uVar7;
            iVar6 = (**(code **)(*local_b0 + 0xb8))
                              (local_b0,(short)piVar10[4],*(undefined2 *)((longlong)piVar10 + 0x12),
                               1);
            if ((-1 < iVar6) && (local_a0 != (longlong *)0x0)) {
              local_90 = 0;
              lStack_88 = 0;
              local_148 = 0;
              iVar6 = (**(code **)(*local_a0 + 0x98))(local_a0,0,&local_90,0);
              if (iVar6 < 0) {
                (**(code **)(*local_a0 + 0x10))();
              }
              else {
                uVar20 = (uint)*(ushort *)((longlong)piVar10 + 0x12);
                if (bVar4) {
                  uVar20 = *(ushort *)((longlong)piVar10 + 0x12) + 3 >> 2;
                  iVar6 = 0x10;
                  if (uVar7 == 0x31545844) {
                    iVar6 = 8;
                  }
                  uVar12 = (*(ushort *)(piVar10 + 4) + 3 >> 2) * iVar6;
                }
                else {
                  uVar12 = (uint)*(ushort *)(piVar10 + 4) << 2;
                }
                if (uVar20 != 0) {
                  do {
                    memcpy((void *)((longlong)(int)local_90 * (longlong)plVar15 + lStack_88),
                           (void *)((ulonglong)uVar12 * (longlong)plVar15 + (longlong)pvVar25),
                           (ulonglong)uVar12);
                    uVar19 = (int)plVar15 + 1;
                    plVar15 = (longlong *)(ulonglong)uVar19;
                  } while ((int)uVar19 < (int)uVar20);
                }
                (**(code **)(*local_a0 + 0xa0))(local_a0,0);
                local_98 = (longlong *)0x0;
                local_128 = 0;
                local_130 = &local_98;
                local_138 = 0;
                local_148 = 0;
                local_140 = uVar7;
                iVar6 = (**(code **)(*plVar22 + 0xb8))
                                  (plVar22,(short)piVar10[4],
                                   *(undefined2 *)((longlong)piVar10 + 0x12),1);
                if (((iVar6 < 0) ||
                    ((local_98 != (longlong *)0x0 &&
                     (iVar6 = (**(code **)(*plVar22 + 0xf8))(plVar22,local_a0), iVar6 < 0)))) &&
                   (local_98 != (longlong *)0x0)) {
                  (**(code **)(*local_98 + 0x10))();
                  local_98 = (longlong *)0x0;
                }
                (**(code **)(*local_a0 + 0x10))();
                plVar15 = local_98;
              }
            }
            if (local_68 != (void *)0x0) {
              pvVar9 = local_68;
              puVar16 = auStack_168;
              if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
                 (pvVar9 = *(void **)((longlong)local_68 + -8), puVar16 = auStack_168,
                 0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar9)))) {
                pcVar3 = (code *)swi(0x29);
                pvVar9 = (void *)(*pcVar3)(5);
                puVar16 = auStack_160;
              }
              *(undefined8 *)(puVar16 + -8) = 0x1801659dc;
              free(pvVar9);
              local_68 = (void *)0x0;
              uStack_60 = 0;
              local_58 = 0;
            }
            goto LAB_180165aa0;
          }
          local_f0 = local_c8;
          local_110 = (uint)*(byte *)((longlong)piVar10 + 0x3e);
          local_118 = (uint)*(byte *)((longlong)piVar10 + 0x3d);
          local_120 = *puVar18;
          local_128 = CONCAT44(local_128._4_4_,local_e8);
          local_130 = (longlong **)CONCAT44(local_130._4_4_,(uint)*(byte *)(piVar10 + 0xe));
          local_140 = (uint)*(ushort *)((longlong)piVar10 + 0x12);
          local_148 = (uint)*(ushort *)(piVar10 + 4);
          local_138 = iVar6;
          local_108 = uVar13;
          local_100 = uVar23;
          local_f8 = lVar8;
          FUN_180014410("[MP] vtf \'%s\': bad data layout: ver 7.%u hs=%u %ux%u fmt=%u mips=%u frames=%d low=%u %ux%u imgStart=%zu ofs=%zu top=%zu file=%zu\n"
                        ,local_a8,piVar10[2],*piVar24);
        }
        else {
          uVar13 = uVar23;
          if (0x47 < local_c8) {
            uVar13 = (ulonglong)(uint)local_80[0x11];
          }
          if ((uint)uVar13 != 0) {
            do {
              uVar20 = (int)uVar23 + 1;
              if ((ulonglong)((longlong)piStack_78 - (longlong)local_80) <
                  (ulonglong)uVar20 * 8 + 0x50) break;
              if ((((char)local_80[uVar23 * 2 + 0x14] == '0') &&
                  (*(char *)((longlong)local_80 + uVar23 * 8 + 0x51) == '\0')) &&
                 (*(char *)((longlong)local_80 + uVar23 * 8 + 0x52) == '\0')) {
                uVar23 = (ulonglong)(uint)local_80[uVar23 * 2 + 0x15];
                local_d0 = uVar23;
                if (uVar23 != 0) goto LAB_18016558d;
                break;
              }
              uVar23 = (ulonglong)uVar20;
            } while (uVar20 < (uint)uVar13);
          }
          FUN_180014410("[MP] vtf \'%s\': v7.%u, no image resource (numRes at 68)\n",param_2,
                        local_80[2]);
        }
        break;
      default:
        FUN_180014410("[MP] vtf \'%s\': unsupported fmt %u\n",param_2,iVar6);
      }
    }
    else {
      local_148 = local_80[2];
      FUN_180014410("[MP] vtf \'%s\': bad header (sig %.3s ver %u.%u)\n",param_2,local_80,
                    local_80[1]);
    }
  }
  plVar15 = (longlong *)0x0;
  puVar16 = auStack_168;
LAB_180165aa0:
  if (local_80 != (int *)0x0) {
    piVar10 = local_80;
    if ((0xfff < (ulonglong)(local_70 - (longlong)local_80)) &&
       (piVar10 = *(int **)(local_80 + -2),
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)piVar10)))) {
      pcVar3 = (code *)swi(0x29);
      piVar10 = (int *)(*pcVar3)(5);
      puVar16 = puVar16 + 8;
    }
    *(undefined8 *)(puVar16 + -8) = 0x180165adf;
    free(piVar10);
  }
  *(undefined8 *)(puVar16 + -8) = 0x180165afa;
  return plVar15;
}


