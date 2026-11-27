// 0x180254730  FUN_180254730
// size=1179 thunk=false
// signature: undefined FUN_180254730()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong *
FUN_180254730(longlong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  size_t sVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  ulonglong *local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  longlong local_e0;
  byte *local_d8;
  ulonglong *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_118 = *param_4;
  plVar14 = (longlong *)(local_118 * 0x60 + *param_1);
  local_d8 = (byte *)*param_5 + param_5[1];
  pbVar15 = (byte *)*param_5;
  uVar21 = param_4[1];
  pbVar22 = local_d8;
  local_110 = param_3;
  local_108 = param_1;
  local_d0 = param_2;
  local_c8 = local_118;
LAB_1802547a4:
  puVar10 = local_d0;
  uVar24 = 0;
  if (pbVar15 < pbVar22) {
    uVar12 = (ushort)(char)*pbVar15;
    if ((char)*pbVar15 < '\0') {
      pbVar16 = pbVar15 + 1;
      if ((pbVar16 < pbVar22) && ((*pbVar15 & 0xe0) == 0xc0)) {
        uVar12 = (ushort)(*pbVar16 & 0x3f) | ((short)(char)*pbVar15 & 0x1fU) << 6;
        pbVar16 = pbVar15 + 2;
        goto LAB_18025482e;
      }
      if ((pbVar15 + 2 < pbVar22) && ((*pbVar15 & 0xf0) == 0xe0)) {
        uVar12 = ((ushort)(*pbVar16 & 0x3f) | (short)(char)*pbVar15 << 6) << 6 |
                 (ushort)(pbVar15[2] & 0x3f);
        pbVar16 = pbVar15 + 3;
        goto LAB_18025482e;
      }
      if ((pbVar15 + 3 < pbVar22) && ((*pbVar15 & 0xf8) == 0xf0)) {
        uVar12 = 0xfffd;
        pbVar16 = pbVar15 + 4;
      }
      else {
        uVar12 = 0xfffd;
      }
    }
    else {
      pbVar16 = pbVar15 + 1;
LAB_18025482e:
      if (uVar12 == 10) {
        uVar24 = local_118 + 1;
        local_e0 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0x1020001;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        plStack_78 = (longlong *)0x0;
        local_70 = 0;
        uStack_68 = 0;
        FUN_180261be0(param_1,&local_e0,*param_1 + uVar24 * 0x60,&local_c0);
        plVar14 = plStack_78;
        if (plStack_78 != (longlong *)0x0) {
          LOCK();
          plVar23 = plStack_78 + 1;
          lVar9 = *plVar23;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_78)(plStack_78);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
        }
        FUN_18020d430(&local_c0);
        plVar14 = (longlong *)param_1[0xb];
        if (plVar14 != (longlong *)0x0) {
          local_60 = uVar24;
          uVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_60);
          *(undefined8 *)(local_e0 + 0x58) = uVar11;
        }
        plVar23 = (longlong *)(local_118 * 0x60 + *param_1);
        plVar14 = (longlong *)(*param_1 + uVar24 * 0x60);
        puVar17 = (undefined4 *)(*plVar23 + uVar21 * 0x10);
        local_118 = uVar24;
        while (puVar17 < (undefined4 *)plVar23[1]) {
          puVar3 = (undefined4 *)plVar14[1];
          if (puVar3 == (undefined4 *)plVar14[2]) {
            FUN_18022f0a0(plVar14,puVar3,puVar17);
            puVar17 = puVar17 + 4;
          }
          else {
            uVar6 = puVar17[1];
            uVar7 = puVar17[2];
            uVar8 = puVar17[3];
            *puVar3 = *puVar17;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            plVar14[1] = plVar14[1] + 0x10;
            puVar17 = puVar17 + 4;
          }
        }
        puVar17 = (undefined4 *)(*plVar23 + uVar21 * 0x10);
        if (puVar17 != (undefined4 *)plVar23[1]) {
          plVar23[1] = (longlong)puVar17;
        }
        uVar21 = 0;
        pbVar15 = pbVar16;
        param_3 = local_110;
        param_1 = local_108;
        goto LAB_1802547a4;
      }
    }
    pbVar15 = pbVar16;
    if (((char)param_3[1] == '\0') || (uVar12 != 9)) {
      if (uVar12 != 0xd) {
        local_f0 = CONCAT22(0x300,uVar12);
        uStack_e8 = 0;
        uVar24 = uVar21 + 1;
        puVar18 = (undefined8 *)(uVar21 * 0x10 + *plVar14);
        puVar5 = (undefined8 *)plVar14[1];
        uVar21 = uVar24;
        if (puVar5 == (undefined8 *)plVar14[2]) {
          FUN_18022f0a0(plVar14,puVar18,&local_f0);
          param_3 = local_110;
        }
        else if (puVar18 == puVar5) {
          *(undefined4 *)puVar5 = local_f0;
          *(undefined4 *)((longlong)puVar5 + 4) = uStack_ec;
          *(undefined4 *)(puVar5 + 1) = 0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          plVar14[1] = plVar14[1] + 0x10;
        }
        else {
          *puVar5 = puVar5[-2];
          puVar5[1] = puVar5[-1];
          plVar14[1] = plVar14[1] + 0x10;
          sVar19 = (longlong)(puVar5 + -2) - (longlong)puVar18;
          memmove((void *)((longlong)puVar5 - sVar19),puVar18,sVar19);
          *(undefined4 *)puVar18 = local_f0;
          *(undefined4 *)((longlong)puVar18 + 4) = uStack_ec;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_e8;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_e8._4_4_;
          param_3 = local_110;
        }
      }
    }
    else {
      uVar4 = *param_3;
      uVar13 = uVar21 % uVar4;
      uVar20 = uVar21;
      param_1 = local_108;
      if (uVar4 != uVar13) {
        do {
          local_100 = 0x3000020;
          uStack_f8 = 0;
          uVar21 = uVar20 + 1;
          puVar18 = (undefined8 *)(uVar20 * 0x10 + *plVar14);
          puVar5 = (undefined8 *)plVar14[1];
          if (puVar5 == (undefined8 *)plVar14[2]) {
            FUN_18022f0a0(plVar14,puVar18,&local_100);
          }
          else if (puVar18 == puVar5) {
            *(undefined4 *)puVar5 = 0x3000020;
            *(undefined4 *)((longlong)puVar5 + 4) = uStack_fc;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            plVar14[1] = plVar14[1] + 0x10;
          }
          else {
            *puVar5 = puVar5[-2];
            puVar5[1] = puVar5[-1];
            plVar14[1] = plVar14[1] + 0x10;
            sVar19 = (longlong)(puVar5 + -2) - (longlong)puVar18;
            memmove((void *)((longlong)puVar5 - sVar19),puVar18,sVar19);
            *(undefined4 *)puVar18 = local_100;
            *(undefined4 *)((longlong)puVar18 + 4) = uStack_fc;
            *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_f8;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_f8._4_4_;
          }
          uVar24 = uVar24 + 1;
          param_3 = local_110;
          uVar20 = uVar21;
          pbVar22 = local_d8;
          param_1 = local_108;
        } while (uVar24 < uVar4 - uVar13);
      }
    }
    goto LAB_1802547a4;
  }
  *local_d0 = local_118;
  local_d0[1] = uVar21;
  uVar24 = local_c8;
  uVar21 = local_118;
  if (local_c8 <= local_118) {
    do {
      uVar21 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
      if (uVar21 < uVar24 || uVar21 - uVar24 == 0) {
LAB_180254bc6:
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      *(undefined1 *)(uVar24 * 0x60 + 0x20 + *param_1) = 1;
      uVar21 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
      if (uVar21 < uVar24 || uVar21 - uVar24 == 0) goto LAB_180254bc6;
      *(undefined1 *)(uVar24 * 0x60 + 0x23 + *param_1) = 1;
      uVar24 = uVar24 + 1;
      uVar21 = *local_d0;
    } while (uVar24 <= uVar21);
  }
  FUN_180256830(param_1,param_3,local_c8,uVar21);
  *(undefined1 *)(param_1 + 3) = 1;
  return puVar10;
}


