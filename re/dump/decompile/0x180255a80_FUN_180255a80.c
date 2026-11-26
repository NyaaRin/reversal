// 0x180255a80  FUN_180255a80
// size=1237 thunk=false
// signature: undefined FUN_180255a80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180255a80(longlong *param_1,ulonglong *param_2,undefined8 *param_3,char param_4,char param_5,
             ulonglong *param_6,ulonglong *param_7)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  ushort uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  ushort uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  ushort *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  char local_e8;
  ulonglong *local_e0;
  ulonglong local_d8;
  ushort local_d0 [4];
  ushort *local_c8;
  longlong *local_c0;
  longlong local_b8;
  ulonglong *local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  void *local_68;
  ushort *puStack_60;
  ushort *local_58;
  ulonglong local_50;
  
  puVar14 = auStack_108;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_b0 = param_6;
  local_a8 = param_7;
  uVar24 = 0;
  local_68 = (void *)0x0;
  puStack_60 = (ushort *)0x0;
  local_58 = (ushort *)0x0;
  pbVar17 = (byte *)*param_3 + param_3[1];
  pbVar10 = (byte *)*param_3;
  local_e8 = param_4;
  local_e0 = param_2;
  local_c0 = param_1;
  while (local_c8 = puStack_60, pbVar10 != pbVar17) {
    cVar4 = -1;
    if (pbVar17 <= pbVar10) {
      cVar4 = '\x01';
    }
    if (-1 < cVar4) break;
    if ((pbVar10 < pbVar17) && (uVar15 = (ushort)(char)*pbVar10, -1 < (char)*pbVar10)) {
      pbVar11 = pbVar10 + 1;
    }
    else {
      pbVar11 = pbVar10 + 1;
      if ((pbVar11 < pbVar17) && ((*pbVar10 & 0xe0) == 0xc0)) {
        uVar15 = (ushort)(*pbVar10 & 0x1f) << 6 | (ushort)(*pbVar11 & 0x3f);
        pbVar11 = pbVar10 + 2;
      }
      else if ((pbVar10 + 2 < pbVar17) && ((*pbVar10 & 0xf0) == 0xe0)) {
        uVar15 = ((ushort)(*pbVar11 & 0x3f) | (short)(char)*pbVar10 << 6) << 6 |
                 (ushort)(pbVar10[2] & 0x3f);
        pbVar11 = pbVar10 + 3;
      }
      else if ((pbVar10 + 3 < pbVar17) && ((*pbVar10 & 0xf8) == 0xf0)) {
        uVar15 = 0xfffd;
        pbVar11 = pbVar10 + 4;
      }
      else {
        uVar15 = 0xfffd;
      }
    }
    if (param_4 == '\0') {
      if (uVar15 < 0x7f) {
        if (uVar15 - 0x41 < 0x1a) {
          uVar15 = uVar15 | 0x20;
        }
      }
      else {
        lVar5 = FUN_180261490(uVar24,uVar15);
        uVar24 = extraout_XMM0_Da;
        if ((lVar5 != 0) && (iVar1 = *(int *)(lVar5 + 8), iVar1 != 0)) {
          if (iVar1 == 0xffff) {
            uVar15 = uVar15 | 1;
          }
          else {
            uVar15 = uVar15 + (short)iVar1;
          }
        }
      }
    }
    pbVar10 = pbVar11;
    local_d0[0] = uVar15;
    if (local_c8 == local_58) {
      uVar24 = FUN_180223f60(&local_68,local_c8,local_d0);
    }
    else {
      *local_c8 = uVar15;
      puStack_60 = puStack_60 + 1;
    }
  }
  puVar12 = (ulonglong *)*local_e0;
  local_d8 = local_e0[1];
  puVar19 = puStack_60;
  local_e0 = puVar12;
  local_98 = (ulonglong)puVar12;
  local_90 = local_d8;
  do {
    lVar5 = *local_c0;
    uVar20 = (local_c0[1] - lVar5 >> 5) * -0x5555555555555555;
    local_b8 = lVar5;
    if (uVar20 < puVar12 || uVar20 - (longlong)puVar12 == 0) goto LAB_180255f50;
    local_a0 = (longlong)puVar12 * 0x60;
    uVar21 = *(longlong *)(local_a0 + 8 + lVar5) - *(longlong *)(local_a0 + lVar5) >> 4;
    uVar22 = 0;
    pvVar8 = local_68;
    uVar16 = local_d8;
    uVar18 = (ulonglong)puVar12;
    while (plVar3 = local_c0, puVar12 = local_e0, uVar6 = (longlong)puVar19 - (longlong)pvVar8 >> 1,
          uVar22 < uVar6) {
      uVar15 = *(ushort *)((longlong)pvVar8 + uVar22 * 2);
      if (uVar15 == 10) {
        if ((uVar16 != uVar21) || (uVar18 == uVar20 - 1)) goto LAB_180255e47;
        uVar18 = uVar18 + 1;
        if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_180255f50;
        uVar16 = 0;
        uVar21 = *(longlong *)(uVar18 * 0x60 + 8 + lVar5) - *(longlong *)(uVar18 * 0x60 + lVar5) >>
                 4;
        uVar22 = uVar22 + 1;
      }
      else {
        if (uVar16 == uVar21) goto LAB_180255e47;
        if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_180255f50;
        uVar9 = *(ushort *)(*(longlong *)(uVar18 * 0x60 + lVar5) + uVar16 * 0x10);
        if (local_e8 == '\0') {
          if (uVar9 < 0x7f) {
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
          }
          else {
            lVar7 = FUN_180261490(lVar5,uVar9);
            lVar5 = local_b8;
            pvVar8 = local_68;
            puVar19 = local_c8;
            if ((lVar7 != 0) && (iVar1 = *(int *)(lVar7 + 8), iVar1 != 0)) {
              if (iVar1 == 0xffff) {
                uVar9 = uVar9 | 1;
              }
              else {
                uVar9 = uVar9 + (short)iVar1;
              }
            }
          }
        }
        puVar12 = local_e0;
        if (uVar9 != uVar15) goto LAB_180255e47;
        uVar16 = uVar16 + 1;
        uVar22 = uVar22 + 1;
      }
    }
    if (uVar22 == uVar6) {
      *local_b0 = (ulonglong)local_e0;
      local_b0[1] = local_d8;
      *local_a8 = uVar18;
      local_a8[1] = uVar16;
      if (param_5 == '\0') {
LAB_180255f07:
        uVar13 = 1;
        goto LAB_180255ed0;
      }
      uVar20 = *local_b0;
      bVar23 = uVar18 < uVar20;
      if (uVar18 == uVar20) {
        bVar23 = uVar16 <= local_b0[1];
      }
      if ((!bVar23) && (uVar20 == uVar18)) {
        local_88 = uVar20;
        local_80 = local_b0[1];
        cVar4 = FUN_180255f60(local_c0,&local_88,0);
        if ((cVar4 != '\0') &&
           (local_78 = uVar18, local_70 = uVar16, cVar4 = FUN_180256230(plVar3,&local_78,0),
           cVar4 != '\0')) goto LAB_180255f07;
        local_c8 = puStack_60;
        puVar19 = puStack_60;
      }
    }
LAB_180255e47:
    lVar5 = *local_c0;
    uVar20 = (local_c0[1] - lVar5 >> 5) * -0x5555555555555555;
    if (uVar20 < puVar12 || uVar20 - (longlong)puVar12 == 0) {
LAB_180255f50:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    if (local_d8 == *(longlong *)(lVar5 + 8 + local_a0) - *(longlong *)(lVar5 + local_a0) >> 4) {
      if (puVar12 == (ulonglong *)(uVar20 - 1)) {
        puVar12 = (ulonglong *)0x0;
        local_e0 = (ulonglong *)0x0;
        local_d8 = 0;
      }
      else {
        puVar12 = (ulonglong *)((longlong)puVar12 + 1);
        local_d8 = 0;
        local_e0 = puVar12;
      }
    }
    else {
      local_d8 = local_d8 + 1;
    }
  } while ((puVar12 != (ulonglong *)local_98) || (local_d8 != local_90));
  uVar13 = 0;
LAB_180255ed0:
  if (local_68 != (void *)0x0) {
    pvVar8 = local_68;
    puVar14 = auStack_108;
    if ((0xfff < (ulonglong)(((longlong)local_58 - (longlong)local_68 >> 1) * 2)) &&
       (pvVar8 = *(void **)((longlong)local_68 + -8), puVar14 = auStack_108,
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar8)))) {
      pvVar8 = (void *)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar14 = auStack_100;
    }
    *(undefined8 *)(puVar14 + -8) = 0x180255f1d;
    free(pvVar8);
  }
  *(undefined8 *)(puVar14 + -8) = 0x180255f3c;
  return uVar13;
}


