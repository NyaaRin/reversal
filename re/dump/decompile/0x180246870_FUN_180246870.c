// 0x180246870  FUN_180246870
// size=1818 thunk=false
// signature: undefined FUN_180246870()
// status: ok


ulonglong FUN_180246870(ulonglong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  code *pcVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res20;
  float local_res24;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  longlong local_100;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  uVar14 = DAT_180380ef0;
  uVar13 = DAT_180380bb0;
  fVar12 = DAT_180380ac0;
  local_f0 = param_1[0xa2];
  fVar1 = *(float *)(param_1 + 0x9e);
  fVar2 = *(float *)(param_1 + 0x97);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1520) + 0x2c8);
  uVar19 = param_1[0xa4];
  uVar15 = uVar19 / *param_1;
  fVar26 = (float)local_f0 * *(float *)((longlong)param_1 + 0x4dc) +
           *(float *)((longlong)param_1 + 0x4bc);
  uVar19 = uVar19 - uVar19 % *param_1;
  if (local_f0 <= param_1[0xa3]) {
    do {
      uVar17 = 0;
      local_100 = local_f0 * 3;
      uVar15 = *(ulonglong *)(param_1[0x3b] + local_f0 * 0x18);
      plVar18 = (longlong *)(uVar15 * 0x60 + param_1[10]);
      uVar9 = local_f0;
      if ((char)param_1[2] == '\0') {
LAB_180246a46:
        uVar20 = plVar18[7];
        uVar11 = uVar17;
      }
      else {
        plVar7 = (longlong *)plVar18[8];
        uVar15 = 0;
        if (plVar7 == (longlong *)0x0) goto LAB_180246a46;
        lVar8 = *plVar7;
        uVar17 = *(ulonglong *)(param_1[0x3b] + 8 + local_f0 * 0x18);
        uVar15 = plVar7[1] - lVar8 >> 5;
        if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        lVar16 = uVar17 * 0x20;
        uVar17 = *(ulonglong *)(lVar16 + 0x18 + lVar8);
        uVar20 = *(ulonglong *)(lVar16 + 0x10 + lVar8);
        uVar11 = *(ulonglong *)(lVar16 + lVar8);
      }
      while ((local_f0 = uVar9, uVar17 < uVar20 && (uVar17 <= param_1[0xa5]))) {
        fVar3 = *(float *)(param_1 + 0x9b);
        sVar4 = *(short *)(*plVar18 + uVar11 * 0x10);
        if ((longlong)uVar17 < 0) {
          uVar15 = (ulonglong)((uint)uVar17 & 1);
        }
        local_108 = (float)uVar17 * fVar3 + fVar1 + fVar2;
        local_104 = fVar26;
        if (sVar4 == 9) {
          if ((*(char *)((longlong)param_1 + 0x15) != '\0') && (uVar19 <= uVar17)) {
            uVar5 = *(uint *)((longlong)param_1 + 0x94c);
            fVar23 = *(float *)(param_1 + 0x9a) * DAT_180380a20;
            fVar21 = local_108 + fVar3 + fVar12;
            fVar25 = (local_108 + fVar3) - fVar23;
            fVar24 = *(float *)(param_1 + 0x9a) * fVar12 + fVar26;
            fVar22 = fVar24 + fVar12;
            if ((uVar5 & 0xff000000) != 0) {
              local_res20 = fVar3 * DAT_180380a6c + local_108 + fVar12;
              local_res24 = fVar22;
              FUN_18020dc30(lVar6 + 0x50,&local_res20);
              local_138 = fVar21;
              local_134 = fVar22;
              FUN_18020dc30(lVar6 + 0x50,&local_138);
              FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar5,
                            uVar13,0);
              *(undefined4 *)(lVar6 + 0x50) = 0;
            }
            uVar5 = *(uint *)((longlong)param_1 + 0x94c);
            if ((uVar5 & 0xff000000) != 0) {
              local_130 = fVar21;
              local_12c = fVar22;
              FUN_18020dc30(lVar6 + 0x50,&local_130);
              local_128 = fVar25 + fVar12;
              local_124 = (fVar24 - fVar23) + fVar12;
              FUN_18020dc30(lVar6 + 0x50,&local_128);
              FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar5,
                            uVar13,0);
              *(undefined4 *)(lVar6 + 0x50) = 0;
            }
            uVar5 = *(uint *)((longlong)param_1 + 0x94c);
            if ((uVar5 & 0xff000000) != 0) {
              local_120 = fVar21;
              local_11c = fVar22;
              FUN_18020dc30(lVar6 + 0x50,&local_120);
              local_118 = fVar25 + fVar12;
              local_114 = fVar23 + fVar24 + fVar12;
              FUN_18020dc30(lVar6 + 0x50,&local_118);
              FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar5,
                            uVar13,0);
              *(undefined4 *)(lVar6 + 0x50) = 0;
            }
          }
          uVar9 = *param_1;
          uVar15 = uVar17 / uVar9;
          uVar17 = uVar17 + (uVar9 - uVar17 % uVar9);
        }
        else {
          if (sVar4 == 0x20) {
            if ((*(char *)((longlong)param_1 + 0x14) != '\0') && (uVar19 <= uVar17)) {
              uVar5 = *(uint *)((longlong)param_1 + 0x94c);
              local_110 = fVar3 * fVar12 + local_108;
              local_10c = *(float *)(param_1 + 0x9a) * fVar12 + fVar26;
              if ((uVar5 & 0xff000000) != 0) {
                FUN_1802941e0(lVar6,&local_110,DAT_180380c50,0,uVar14,3);
                uVar15 = FUN_1802938c0(lVar6,*(undefined8 *)(lVar6 + 0x58),
                                       *(undefined4 *)(lVar6 + 0x50),uVar5);
                *(undefined4 *)(lVar6 + 0x50) = 0;
              }
            }
          }
          else if (uVar19 <= uVar17) {
            uVar15 = (ulonglong)*(char *)(*plVar18 + 2 + uVar11 * 0x10);
            if (0x15 < uVar15) {
              FUN_1802623f0();
              pcVar10 = (code *)swi(3);
              uVar19 = (*pcVar10)();
              return uVar19;
            }
            uVar15 = FUN_18029e680(param_1[0x99],lVar6,(int)param_1[0x9a],&local_108,
                                   *(undefined4 *)((longlong)param_1 + uVar15 * 4 + 0x918),sVar4,0);
          }
          uVar17 = uVar17 + 1;
        }
        uVar9 = local_f0;
        uVar11 = uVar11 + 1;
      }
      if ((uVar9 == plVar18[6] + -1 + plVar18[5]) && (*(char *)((longlong)plVar18 + 0x22) == '\x01')
         ) {
        local_f8 = (float)*(ulonglong *)(param_1[0x3b] + 0x10 + local_100 * 8) *
                   *(float *)(param_1 + 0x9b) + *(float *)(param_1 + 0x9e) +
                   *(float *)(param_1 + 0x97);
        local_f4 = (float)uVar9 * *(float *)((longlong)param_1 + 0x4dc) +
                   *(float *)((longlong)param_1 + 0x4bc);
        uVar15 = FUN_18029e680(param_1[0x99],lVar6,(int)param_1[0x9a],&local_f8,(int)param_1[0x123],
                               *(undefined2 *)(param_1[0x99] + 0x30),0);
      }
      fVar26 = fVar26 + *(float *)((longlong)param_1 + 0x4dc);
      local_f0 = uVar9 + 1;
    } while (local_f0 <= param_1[0xa3]);
  }
  return uVar15;
}


