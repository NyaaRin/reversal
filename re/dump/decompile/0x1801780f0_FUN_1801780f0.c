// 0x1801780f0  FUN_1801780f0
// size=3509 thunk=false
// signature: undefined FUN_1801780f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801780f0(longlong *param_1)

{
  char cVar1;
  float fVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong *plVar16;
  byte ****ppppbVar17;
  longlong *plVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auStack_e48 [32];
  undefined4 local_e28;
  int local_e24;
  int local_e20 [3];
  int local_e14;
  undefined8 *local_e10;
  int local_e08 [12];
  undefined8 *local_dd8;
  longlong *local_dd0;
  byte ***local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  ulonglong uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  byte ***local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  ulonglong uStack_d70;
  byte ***local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  ulonglong uStack_d50;
  undefined4 local_d28;
  undefined4 uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined4 local_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined4 local_ce8;
  undefined4 uStack_ce4;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined4 local_cc8;
  undefined4 uStack_cc4;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined4 local_ca8;
  undefined4 uStack_ca4;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined4 local_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined4 local_c68;
  undefined4 uStack_c64;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined1 local_be8 [32];
  undefined1 local_bc8 [32];
  undefined1 local_ba8 [32];
  undefined1 local_b88 [32];
  undefined1 local_b68 [32];
  undefined1 local_b48 [32];
  undefined1 local_b28 [32];
  undefined1 local_b08 [32];
  undefined1 local_ae8 [32];
  undefined1 local_ac8 [32];
  undefined1 local_aa8 [32];
  undefined1 local_a88 [32];
  undefined1 local_a68 [32];
  undefined1 local_a48 [32];
  undefined1 local_a28 [32];
  undefined1 local_a08 [32];
  undefined1 local_9e8 [32];
  undefined1 local_9c8 [32];
  undefined1 local_9a8 [32];
  undefined1 local_988 [32];
  undefined1 local_968 [32];
  undefined1 local_948 [32];
  undefined1 local_928 [32];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [32];
  undefined1 local_8a8 [2016];
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  
  uVar3 = DAT_1803da697;
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_e48;
  iVar19 = 0;
  local_e28 = 0;
  local_e20[1] = 0;
  local_da8 = 0;
  uStack_da0 = 0;
  local_d98 = 0;
  uStack_d90 = 0;
  local_dd0 = param_1;
  FUN_18001d080(&local_da8,"esp.minimal",0xb);
  DAT_1803da697 = FUN_180175790(param_1,&local_da8,uVar3);
  FUN_18020e450(&local_da8);
  local_dc8 = (byte ***)0x0;
  uStack_dc0 = 0;
  local_db8 = 0;
  uStack_db0 = 0;
  FUN_18001d080(&local_dc8,"esp.count",9);
  uVar13 = 0x14650fb0739d0383;
  if (uStack_db0 < 0x10) {
    ppppbVar17 = &local_dc8;
  }
  else {
    ppppbVar17 = (byte ****)local_dc8;
    if ((byte ****)local_dc8 == (byte ****)0x0) goto LAB_180178214;
  }
  do {
    if (*(byte *)ppppbVar17 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar17) * 0x100000001b3;
    ppppbVar17 = (byte ****)((longlong)ppppbVar17 + 1);
  } while (ppppbVar17 != (byte ****)0x0);
LAB_180178214:
  plVar12 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar12[1];
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  plVar16 = plVar12;
  while (cVar1 == '\0') {
    plVar18 = plVar11;
    if ((ulonglong)plVar11[4] < uVar13) {
      plVar11 = plVar11 + 2;
      plVar18 = plVar16;
    }
    plVar11 = (longlong *)*plVar11;
    plVar16 = plVar18;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (((*(char *)((longlong)plVar16 + 0x19) == '\0') && ((ulonglong)plVar16[4] <= uVar13)) &&
     (plVar16 != plVar12)) {
    local_c8 = (longlong *)0x0;
    plVar12 = plVar16 + 5;
    plVar11 = plVar12;
    if (0xf < (ulonglong)plVar16[8]) {
      plVar11 = (longlong *)*plVar12;
    }
    lVar4 = strtol((char *)plVar11,(char **)&local_c8,10);
    if (0xf < (ulonglong)plVar16[8]) {
      plVar12 = (longlong *)*plVar12;
    }
    if (local_c8 == plVar12) {
      lVar4 = -1;
    }
  }
  else {
    lVar4 = -1;
  }
  local_e20[2] = lVar4;
  FUN_18020e450(&local_dc8);
  plVar12 = DAT_1803fb108;
  if (-1 < lVar4) {
    plVar11 = DAT_1803fb100;
    if (DAT_1803fb100 != DAT_1803fb108) {
      do {
        puVar8 = (undefined8 *)*plVar11;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar12);
      DAT_1803fb108 = DAT_1803fb100;
    }
    fVar2 = DAT_1803812b8;
    fVar22 = DAT_180381120;
    DAT_1803fa5f8 = 0;
    if (0 < local_e20[2]) {
      do {
        uVar6 = FUN_180013ba0(local_ba8,iVar19);
        uVar6 = FUN_1801fd1b0(local_bc8,&DAT_180361cb4,uVar6);
        uVar6 = FUN_1801fc680(local_be8,uVar6,&DAT_18033ea54);
        puVar7 = (undefined4 *)FUN_18021aef0(uVar6,&DAT_180361d3c,4);
        local_d28 = *puVar7;
        uStack_d24 = puVar7[1];
        uStack_d20 = puVar7[2];
        uStack_d1c = puVar7[3];
        local_d18 = *(undefined8 *)(puVar7 + 4);
        uStack_d10 = *(undefined8 *)(puVar7 + 6);
        *(undefined1 *)puVar7 = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        *(undefined8 *)(puVar7 + 6) = 0xf;
        local_e28 = 1;
        FUN_18020e450(local_be8);
        FUN_18020e450(local_bc8);
        FUN_18020e450(local_ba8);
        iVar5 = FUN_1801758f0(param_1,&local_d28,0);
        local_e28 = 0;
        local_e14 = iVar5;
        FUN_18020e450(&local_d28);
        switch(iVar5) {
        case 1:
          local_e10 = (undefined8 *)0x0;
          uVar20 = FUN_1802137f0(&local_e10);
          puVar8 = local_e10;
          local_e10 = (undefined8 *)0x0;
          local_dd8 = puVar8;
          if (DAT_1803fb108 == DAT_1803fb110) {
            FUN_180222800(uVar20,DAT_1803fb108,&local_dd8);
          }
          else {
            local_dd8 = (undefined8 *)0x0;
            *DAT_1803fb108 = (longlong)puVar8;
            DAT_1803fb108 = DAT_1803fb108 + 1;
          }
          if (local_dd8 != (undefined8 *)0x0) {
            (**(code **)*local_dd8)(local_dd8,1);
          }
          if (local_e10 != (undefined8 *)0x0) {
            (**(code **)*local_e10)(local_e10,1);
          }
          break;
        case 2:
          puVar8 = (undefined8 *)FUN_180207940();
          break;
        case 3:
          puVar8 = (undefined8 *)FUN_1802074f0();
          break;
        case 4:
          puVar8 = (undefined8 *)FUN_180207610();
          break;
        case 5:
          puVar8 = (undefined8 *)FUN_180207a60();
          break;
        case 6:
          puVar8 = (undefined8 *)FUN_180207580();
          break;
        case 7:
          puVar8 = (undefined8 *)FUN_1802079d0();
          break;
        default:
          goto switchD_180178426_default;
        }
        if (puVar8 != (undefined8 *)0x0) {
          uVar3 = *(undefined1 *)((longlong)puVar8 + 0x14);
          uVar6 = FUN_180013ba0(local_b48,iVar19);
          uVar6 = FUN_1801fd1b0(local_b68,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_b88,uVar6,&DAT_18033ea54);
          puVar7 = (undefined4 *)FUN_18021aef0(uVar6,"visible",7);
          local_d08 = *puVar7;
          uStack_d04 = puVar7[1];
          uStack_d00 = puVar7[2];
          uStack_cfc = puVar7[3];
          local_cf8 = *(undefined8 *)(puVar7 + 4);
          uStack_cf0 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar7 + 6) = 0xf;
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          local_e28 = 0x1000;
          FUN_18020e450(local_b88);
          FUN_18020e450(local_b68);
          FUN_18020e450(local_b48);
          uVar3 = FUN_180175790(param_1,&local_d08,uVar3);
          *(undefined1 *)((longlong)puVar8 + 0x14) = uVar3;
          local_e28 = 0;
          FUN_18020e450(&local_d08);
          uVar3 = *(undefined1 *)((longlong)puVar8 + 0x15);
          uVar6 = FUN_180013ba0(local_ae8,iVar19);
          uVar6 = FUN_1801fd1b0(local_b08,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_b28,uVar6,&DAT_18033ea54);
          puVar7 = (undefined4 *)FUN_18021aef0(uVar6,"hide_at_distance",0x10);
          local_ce8 = *puVar7;
          uStack_ce4 = puVar7[1];
          uStack_ce0 = puVar7[2];
          uStack_cdc = puVar7[3];
          local_cd8 = *(undefined8 *)(puVar7 + 4);
          uStack_cd0 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar7 + 6) = 0xf;
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          local_e28 = 0x10000;
          FUN_18020e450(local_b28);
          FUN_18020e450(local_b08);
          FUN_18020e450(local_ae8);
          uVar3 = FUN_180175790(param_1,&local_ce8,uVar3);
          *(undefined1 *)((longlong)puVar8 + 0x15) = uVar3;
          local_e28 = 0;
          FUN_18020e450(&local_ce8);
          uVar3 = *(undefined1 *)((longlong)puVar8 + 0x16);
          uVar6 = FUN_180013ba0(local_a88,iVar19);
          uVar6 = FUN_1801fd1b0(local_aa8,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_ac8,uVar6,&DAT_18033ea54);
          puVar7 = (undefined4 *)FUN_18021aef0(uVar6,"always_show_hidden",0x12);
          local_cc8 = *puVar7;
          uStack_cc4 = puVar7[1];
          uStack_cc0 = puVar7[2];
          uStack_cbc = puVar7[3];
          local_cb8 = *(undefined8 *)(puVar7 + 4);
          uStack_cb0 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar7 + 6) = 0xf;
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          local_e28 = 0x100000;
          FUN_18020e450(local_ac8);
          FUN_18020e450(local_aa8);
          FUN_18020e450(local_a88);
          uVar3 = FUN_180175790(param_1,&local_cc8,uVar3);
          *(undefined1 *)((longlong)puVar8 + 0x16) = uVar3;
          local_e28 = 0;
          FUN_18020e450(&local_cc8);
          uVar3 = *(undefined1 *)((longlong)puVar8 + 0x1d);
          uVar6 = FUN_180013ba0(local_a28,iVar19);
          uVar6 = FUN_1801fd1b0(local_a48,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_a68,uVar6,&DAT_18033ea54);
          puVar7 = (undefined4 *)FUN_18021aef0(uVar6,"ignore_dormant_fade",0x13);
          local_ca8 = *puVar7;
          uStack_ca4 = puVar7[1];
          uStack_ca0 = puVar7[2];
          uStack_c9c = puVar7[3];
          local_c98 = *(undefined8 *)(puVar7 + 4);
          uStack_c90 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar7 + 6) = 0xf;
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          local_e28 = 0x1000000;
          FUN_18020e450(local_a68);
          FUN_18020e450(local_a48);
          FUN_18020e450(local_a28);
          uVar3 = FUN_180175790(param_1,&local_ca8,uVar3);
          *(undefined1 *)((longlong)puVar8 + 0x1d) = uVar3;
          local_e28 = 0;
          FUN_18020e450(&local_ca8);
          uVar20 = *(undefined4 *)(puVar8 + 3);
          uVar6 = FUN_180013ba0(local_9c8,iVar19);
          uVar6 = FUN_1801fd1b0(local_9e8,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_a08,uVar6,&DAT_18033ea54);
          puVar7 = (undefined4 *)FUN_18021aef0(uVar6,"hide_distance",0xd);
          local_c88 = *puVar7;
          uStack_c84 = puVar7[1];
          uStack_c80 = puVar7[2];
          uStack_c7c = puVar7[3];
          local_c78 = *(undefined8 *)(puVar7 + 4);
          uStack_c70 = *(undefined8 *)(puVar7 + 6);
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0xf;
          local_e28 = 0x10000000;
          FUN_18020e450(local_a08);
          FUN_18020e450(local_9e8);
          FUN_18020e450(local_9c8);
          fVar21 = (float)FUN_1801759e0(param_1,&local_c88,uVar20);
          if ((fVar22 <= fVar21) && (fVar22 = fVar2, fVar21 <= fVar2)) {
            fVar22 = fVar21;
          }
          *(float *)(puVar8 + 3) = fVar22;
          local_e28 = 0;
          FUN_18020e450(&local_c88);
          local_e24 = 0xc;
          local_e08[0] = 0;
          uVar20 = *(undefined4 *)(puVar8 + 1);
          uVar6 = FUN_180013ba0(local_968,iVar19);
          uVar6 = FUN_1801fd1b0(local_988,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_9a8,uVar6,&DAT_18033ea54);
          puVar7 = (undefined4 *)FUN_18021aef0(uVar6,"anchor",6);
          local_c68 = *puVar7;
          uStack_c64 = puVar7[1];
          uStack_c60 = puVar7[2];
          uStack_c5c = puVar7[3];
          local_c58 = *(undefined8 *)(puVar7 + 4);
          uStack_c50 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar7 + 6) = 0xf;
          *(undefined1 *)puVar7 = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          local_e20[1] = 1;
          FUN_18020e450(local_9a8);
          FUN_18020e450(local_988);
          FUN_18020e450(local_968);
          local_e20[0] = FUN_1801758f0(param_1,&local_c68,uVar20);
          piVar14 = local_e08;
          if (-1 < local_e20[0]) {
            piVar14 = local_e20;
          }
          piVar9 = &local_e24;
          if (local_e20[0] < 0xd) {
            piVar9 = piVar14;
          }
          *(int *)(puVar8 + 1) = *piVar9;
          local_e20[1] = 0;
          FUN_18020e450(&local_c68);
          uVar20 = *(undefined4 *)((longlong)puVar8 + 0xc);
          uVar6 = FUN_180013ba0(local_908,iVar19);
          uVar6 = FUN_1801fd1b0(local_928,&DAT_180361cb4,uVar6);
          uVar6 = FUN_1801fc680(local_948,uVar6,&DAT_18033ea54);
          puVar10 = (undefined8 *)FUN_18021aef0(uVar6,"offset_x",8);
          ppppbVar17 = (byte ****)*puVar10;
          uStack_d80 = puVar10[1];
          local_d78 = puVar10[2];
          uVar13 = puVar10[3];
          *(undefined1 *)puVar10 = 0;
          puVar10[2] = 0;
          puVar10[3] = 0xf;
          local_e28 = 0x10;
          local_d88 = (byte ***)ppppbVar17;
          uStack_d70 = uVar13;
          FUN_18020e450(local_948);
          FUN_18020e450(local_928);
          FUN_18020e450(local_908);
          uVar15 = 0x14650fb0739d0383;
          if (0xf < uVar13) {
            if (ppppbVar17 != (byte ****)0x0) goto LAB_180178ba0;
            goto LAB_180178bb9;
          }
          ppppbVar17 = &local_d88;
          goto LAB_180178ba0;
        }
switchD_180178426_default:
        iVar19 = iVar19 + 1;
      } while (iVar19 < local_e20[2]);
    }
    if (DAT_1803fb100 == DAT_1803fb108) {
      FUN_180170f70();
    }
    else {
      DAT_1803fa5f8 = *DAT_1803fb100;
    }
  }
  return;
  while( true ) {
    uVar15 = (uVar15 ^ *(byte *)ppppbVar17) * 0x100000001b3;
    ppppbVar17 = (byte ****)((longlong)ppppbVar17 + 1);
    if (ppppbVar17 == (byte ****)0x0) break;
LAB_180178ba0:
    param_1 = local_dd0;
    if (*(byte *)ppppbVar17 == 0) break;
  }
LAB_180178bb9:
  plVar12 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar12[1];
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  plVar16 = plVar12;
  while (cVar1 == '\0') {
    plVar18 = plVar11;
    if ((ulonglong)plVar11[4] < uVar15) {
      plVar11 = plVar11 + 2;
      plVar18 = plVar16;
    }
    plVar11 = (longlong *)*plVar11;
    plVar16 = plVar18;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (((*(char *)((longlong)plVar16 + 0x19) == '\0') && ((ulonglong)plVar16[4] <= uVar15)) &&
     (plVar16 != plVar12)) {
    local_c0 = (longlong *)0x0;
    plVar12 = plVar16 + 5;
    plVar11 = plVar12;
    if (0xf < (ulonglong)plVar16[8]) {
      plVar11 = (longlong *)*plVar12;
    }
    uVar23 = strtof(plVar11,&local_c0);
    if (0xf < (ulonglong)plVar16[8]) {
      plVar12 = (longlong *)*plVar12;
    }
    if (local_c0 != plVar12) {
      uVar20 = uVar23;
    }
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = uVar20;
  local_e28 = 0;
  FUN_18020e450(&local_d88);
  uVar20 = *(undefined4 *)(puVar8 + 2);
  uVar6 = FUN_180013ba0(local_8a8,iVar19);
  uVar6 = FUN_1801fd1b0(local_8c8,&DAT_180361cb4,uVar6);
  uVar6 = FUN_1801fc680(local_8e8,uVar6,&DAT_18033ea54);
  puVar10 = (undefined8 *)FUN_18021aef0(uVar6,"offset_y",8);
  ppppbVar17 = (byte ****)*puVar10;
  uStack_d60 = puVar10[1];
  local_d58 = puVar10[2];
  uVar13 = puVar10[3];
  *(undefined1 *)puVar10 = 0;
  puVar10[2] = 0;
  puVar10[3] = 0xf;
  local_e28 = 0x100;
  local_d68 = (byte ***)ppppbVar17;
  uStack_d50 = uVar13;
  FUN_18020e450(local_8e8);
  FUN_18020e450(local_8c8);
  FUN_18020e450(local_8a8);
  uVar15 = 0x14650fb0739d0383;
  if (uVar13 < 0x10) {
    ppppbVar17 = &local_d68;
  }
  else if (ppppbVar17 == (byte ****)0x0) goto LAB_180178d69;
  do {
    param_1 = local_dd0;
    if (*(byte *)ppppbVar17 == 0) break;
    uVar15 = (uVar15 ^ *(byte *)ppppbVar17) * 0x100000001b3;
    ppppbVar17 = (byte ****)((longlong)ppppbVar17 + 1);
  } while (ppppbVar17 != (byte ****)0x0);
LAB_180178d69:
  param_1 = (longlong *)*param_1;
  plVar12 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar12 + 0x19);
  plVar11 = param_1;
  while (cVar1 == '\0') {
    plVar16 = plVar12;
    if ((ulonglong)plVar12[4] < uVar15) {
      plVar12 = plVar12 + 2;
      plVar16 = plVar11;
    }
    plVar12 = (longlong *)*plVar12;
    plVar11 = plVar16;
    cVar1 = *(char *)((longlong)plVar12 + 0x19);
  }
  if (((*(char *)((longlong)plVar11 + 0x19) == '\0') && ((ulonglong)plVar11[4] <= uVar15)) &&
     (plVar11 != param_1)) {
    local_b8 = (longlong *)0x0;
    plVar12 = plVar11 + 5;
    plVar16 = plVar12;
    if (0xf < (ulonglong)plVar11[8]) {
      plVar16 = (longlong *)*plVar12;
    }
    uVar23 = strtof(plVar16,&local_b8);
    if (0xf < (ulonglong)plVar11[8]) {
      plVar12 = (longlong *)*plVar12;
    }
    if (local_b8 != plVar12) {
      uVar20 = uVar23;
    }
  }
  *(undefined4 *)(puVar8 + 2) = uVar20;
  local_e28 = 0;
  FUN_18020e450(&local_d68);
                    /* WARNING: Could not recover jumptable at 0x000180178e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulonglong)*(uint *)(&DAT_180179ee8 + (longlong)(local_e14 + -1) * 4) + 0x180000000))
            ((code *)((ulonglong)*(uint *)(&DAT_180179ee8 + (longlong)(local_e14 + -1) * 4) +
                     0x180000000));
  return;
}


