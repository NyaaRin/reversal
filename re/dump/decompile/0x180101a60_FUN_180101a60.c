// 0x180101a60  FUN_180101a60
// size=6653 thunk=false
// signature: undefined FUN_180101a60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180101a60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *******pppppppbVar20;
  undefined8 *******pppppppuVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [24];
  longlong local_478;
  char *local_470;
  undefined8 local_468;
  undefined4 local_458;
  longlong *local_450;
  longlong *local_448;
  byte ******local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  ulonglong local_428;
  longlong *local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  byte ******local_3d8 [3];
  ulonglong local_3c0;
  byte ******local_3b8 [3];
  ulonglong local_3a0;
  byte ******local_398 [3];
  ulonglong local_380;
  byte ******local_378 [3];
  ulonglong local_360;
  byte ******local_358 [3];
  ulonglong local_340;
  byte ******local_338 [3];
  ulonglong local_320;
  byte ******local_318 [3];
  ulonglong local_300;
  byte ******local_2f8 [3];
  ulonglong local_2e0;
  byte ******local_2d8 [3];
  ulonglong local_2c0;
  byte ******local_2b8 [3];
  ulonglong local_2a0;
  byte ******local_298 [3];
  ulonglong local_280;
  byte ******local_278 [3];
  ulonglong local_260;
  byte ******local_258 [3];
  ulonglong local_240;
  byte ******local_238 [3];
  ulonglong local_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  char *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined1 local_178 [16];
  longlong local_168;
  longlong *local_158;
  longlong *plStack_150;
  longlong *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 ******local_e8 [2];
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  
  puVar23 = auStack_498;
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_498;
  iVar24 = 0;
  iVar10 = 0;
  local_458 = 0;
  local_158 = (longlong *)0x0;
  plStack_150 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  DAT_1803e8910 = 0xffffffff;
  local_440 = (byte ******)0x0;
  uStack_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_450 = param_1;
  local_448 = param_1;
  local_420 = param_1;
  FUN_18001d080(&local_440,"usergrouplist.count",0x13);
  pppppppbVar20 = &local_440;
  if (0xf < local_428) {
    pppppppbVar20 = (byte *******)local_440;
  }
  uVar16 = 0x14650fb0739d0383;
  for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
      pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
    uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
  }
  puVar13 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
  puVar15 = puVar13;
  puVar19 = (undefined8 *)puVar13[1];
  while (cVar1 == '\0') {
    if ((ulonglong)puVar19[4] < uVar16) {
      puVar14 = (undefined8 *)puVar19[2];
      puVar19 = puVar15;
    }
    else {
      puVar14 = (undefined8 *)*puVar19;
    }
    puVar15 = puVar19;
    puVar19 = puVar14;
    cVar1 = *(char *)((longlong)puVar14 + 0x19);
  }
  if (((*(char *)((longlong)puVar15 + 0x19) == '\0') && ((ulonglong)puVar15[4] <= uVar16)) &&
     (puVar15 != puVar13)) {
    local_1b8 = (char *)0x0;
    pcVar18 = (char *)(puVar15 + 5);
    pcVar17 = pcVar18;
    if (0xf < (ulonglong)puVar15[8]) {
      pcVar17 = *(char **)pcVar18;
    }
    iVar10 = strtol(pcVar17,&local_1b8,10);
    if (0xf < (ulonglong)puVar15[8]) {
      pcVar18 = *(char **)pcVar18;
    }
    if (local_1b8 == pcVar18) {
      iVar10 = 0;
    }
  }
  FUN_18020e450(&local_440);
  uVar6 = DAT_180380bb0;
  uVar5 = DAT_180380af0;
  uVar4 = DAT_180380a58;
  if (0 < iVar10) {
    do {
      uVar12 = FUN_180013ba0(local_1d8,iVar24);
      puVar13 = (undefined8 *)FUN_18022a630(uVar12);
      local_418 = *puVar13;
      uStack_410 = puVar13[1];
      local_408 = puVar13[2];
      uStack_400 = puVar13[3];
      puVar13[2] = 0;
      puVar13[3] = 0xf;
      *(undefined1 *)puVar13 = 0;
      local_458 = 1;
      FUN_1801fc680(local_178,&local_418,&DAT_18033ea54);
      local_458 = 0;
      FUN_18020e450(&local_418);
      FUN_18020e450(local_1d8);
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      local_3e0 = 0;
      FUN_18001d080(&local_3f8,&DAT_18033e5ea,0);
      if (0x7fffffffffffffffU - local_168 < 4) goto LAB_18010340d;
      local_468 = 4;
      local_470 = "name";
      local_478 = local_168;
      FUN_18020e930(local_218);
      local_458 = 8;
      FUN_1800fee30(&local_420,local_e8,local_218,&local_3f8);
      local_458 = 0;
      FUN_18020e450(local_218);
      FUN_18020e450(&local_3f8);
      if (local_d8 == 0) {
        FUN_18020e450(local_e8);
      }
      else {
        uStack_130 = 0;
        local_128 = 0;
        local_120 = 0xf;
        local_138 = 0;
        local_118 = 0;
        local_114 = 0x3f800000;
        local_110 = 0x3f1eb852;
        local_10c = 0x3e800000;
        local_108 = 0x3f800000;
        local_104 = 0;
        local_100 = 0x3f800000;
        local_fc = 0x3f1eb852;
        local_f8 = 0x3e800000;
        local_f4 = 0x3f800000;
        local_f0 = 1;
        local_ec = 0;
        pppppppuVar21 = local_e8;
        if (0xf < local_d0) {
          pppppppuVar21 = (undefined8 *******)local_e8[0];
        }
        FUN_180212700(&local_138,pppppppuVar21,local_d8);
        if (0x7fffffffffffffffU - local_168 < 10) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 10;
        local_470 = "ignore_aim";
        local_478 = local_168;
        FUN_18020e930(local_278);
        local_458 = 0x10;
        pppppppbVar20 = local_278;
        if (0xf < local_260) {
          pppppppbVar20 = (byte *******)local_278[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
        puVar15 = puVar13;
        puVar19 = (undefined8 *)puVar13[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar19[4] < uVar16) {
            puVar14 = (undefined8 *)puVar19[2];
            puVar19 = puVar15;
          }
          else {
            puVar14 = (undefined8 *)*puVar19;
          }
          puVar15 = puVar19;
          puVar19 = puVar14;
          cVar1 = *(char *)((longlong)puVar14 + 0x19);
        }
        if (((*(char *)((longlong)puVar15 + 0x19) == '\0') && ((ulonglong)puVar15[4] <= uVar16)) &&
           (puVar15 != puVar13)) {
          puVar19 = puVar15 + 5;
          lVar2 = puVar15[7];
          uVar16 = puVar15[8];
          puVar13 = puVar19;
          if (0xf < uVar16) {
            puVar13 = (undefined8 *)*puVar19;
          }
          if ((lVar2 != 1) || (iVar11 = memcmp(puVar13,&DAT_18034124c,1), iVar11 != 0)) {
            if (0xf < uVar16) {
              puVar19 = (undefined8 *)*puVar19;
            }
            if ((lVar2 != 4) || (iVar11 = memcmp(puVar19,&DAT_18033e5dc,4), iVar11 != 0))
            goto LAB_180101fcc;
          }
          uVar9 = 1;
        }
        else {
LAB_180101fcc:
          uVar9 = 0;
        }
        local_118 = CONCAT31(local_118._1_3_,uVar9);
        local_458 = 0;
        FUN_18020e450(local_278);
        if (0x7fffffffffffffffU - local_168 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "ignore_trigger";
        local_478 = local_168;
        FUN_18020e930(local_258);
        local_458 = 0x20;
        pppppppbVar20 = local_258;
        if (0xf < local_240) {
          pppppppbVar20 = (byte *******)local_258[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
        puVar15 = puVar13;
        puVar19 = (undefined8 *)puVar13[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar19[4] < uVar16) {
            puVar14 = (undefined8 *)puVar19[2];
            puVar19 = puVar15;
          }
          else {
            puVar14 = (undefined8 *)*puVar19;
          }
          puVar15 = puVar19;
          puVar19 = puVar14;
          cVar1 = *(char *)((longlong)puVar14 + 0x19);
        }
        if (((*(char *)((longlong)puVar15 + 0x19) == '\0') && ((ulonglong)puVar15[4] <= uVar16)) &&
           (puVar15 != puVar13)) {
          puVar19 = puVar15 + 5;
          lVar2 = puVar15[7];
          uVar16 = puVar15[8];
          puVar13 = puVar19;
          if (0xf < uVar16) {
            puVar13 = (undefined8 *)*puVar19;
          }
          if ((lVar2 != 1) || (iVar11 = memcmp(puVar13,&DAT_18034124c,1), iVar11 != 0)) {
            if (0xf < uVar16) {
              puVar19 = (undefined8 *)*puVar19;
            }
            if ((lVar2 != 4) || (iVar11 = memcmp(puVar19,&DAT_18033e5dc,4), iVar11 != 0))
            goto LAB_18010212b;
          }
          uVar9 = 1;
        }
        else {
LAB_18010212b:
          uVar9 = 0;
        }
        local_118._0_2_ = CONCAT11(uVar9,(undefined1)local_118);
        local_458 = 0;
        FUN_18020e450(local_258);
        if (0x7fffffffffffffffU - local_168 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "ignore_visuals";
        local_478 = local_168;
        FUN_18020e930(local_238);
        local_458 = 0x40;
        pppppppbVar20 = local_238;
        if (0xf < local_220) {
          pppppppbVar20 = (byte *******)local_238[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
        puVar15 = puVar13;
        puVar19 = (undefined8 *)puVar13[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar19[4] < uVar16) {
            puVar14 = (undefined8 *)puVar19[2];
            puVar19 = puVar15;
          }
          else {
            puVar14 = (undefined8 *)*puVar19;
          }
          puVar15 = puVar19;
          puVar19 = puVar14;
          cVar1 = *(char *)((longlong)puVar14 + 0x19);
        }
        if (((*(char *)((longlong)puVar15 + 0x19) == '\0') && ((ulonglong)puVar15[4] <= uVar16)) &&
           (puVar15 != puVar13)) {
          puVar19 = puVar15 + 5;
          lVar2 = puVar15[7];
          uVar16 = puVar15[8];
          puVar13 = puVar19;
          if (0xf < uVar16) {
            puVar13 = (undefined8 *)*puVar19;
          }
          if ((lVar2 != 1) || (iVar11 = memcmp(puVar13,&DAT_18034124c,1), iVar11 != 0)) {
            if (0xf < uVar16) {
              puVar19 = (undefined8 *)*puVar19;
            }
            if ((lVar2 != 4) || (iVar11 = memcmp(puVar19,&DAT_18033e5dc,4), iVar11 != 0))
            goto LAB_1801022bb;
          }
          uVar9 = 1;
        }
        else {
LAB_1801022bb:
          uVar9 = 0;
        }
        local_118._0_3_ = CONCAT12(uVar9,(undefined2)local_118);
        local_458 = 0;
        FUN_18020e450(local_238);
        if (0x7fffffffffffffffU - local_168 < 9) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 9;
        local_470 = "highlight";
        local_478 = local_168;
        FUN_18020e930(local_3d8);
        local_458 = 0x80;
        pppppppbVar20 = local_3d8;
        if (0xf < local_3c0) {
          pppppppbVar20 = (byte *******)local_3d8[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
        puVar15 = puVar13;
        puVar19 = (undefined8 *)puVar13[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar19[4] < uVar16) {
            puVar14 = (undefined8 *)puVar19[2];
            puVar19 = puVar15;
          }
          else {
            puVar14 = (undefined8 *)*puVar19;
          }
          puVar15 = puVar19;
          puVar19 = puVar14;
          cVar1 = *(char *)((longlong)puVar14 + 0x19);
        }
        if (((*(char *)((longlong)puVar15 + 0x19) == '\0') && ((ulonglong)puVar15[4] <= uVar16)) &&
           (puVar15 != puVar13)) {
          puVar19 = puVar15 + 5;
          lVar2 = puVar15[7];
          uVar16 = puVar15[8];
          puVar13 = puVar19;
          if (0xf < uVar16) {
            puVar13 = (undefined8 *)*puVar19;
          }
          if ((lVar2 != 1) || (iVar11 = memcmp(puVar13,&DAT_18034124c,1), iVar11 != 0)) {
            if (0xf < uVar16) {
              puVar19 = (undefined8 *)*puVar19;
            }
            if ((lVar2 != 4) || (iVar11 = memcmp(puVar19,&DAT_18033e5dc,4), iVar11 != 0))
            goto LAB_180102437;
          }
          uVar9 = 1;
        }
        else {
LAB_180102437:
          uVar9 = 0;
        }
        local_118 = CONCAT13(uVar9,(undefined3)local_118);
        local_458 = 0;
        FUN_18020e450(local_3d8);
        if (0x7fffffffffffffffU - local_168 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.a";
        local_478 = local_168;
        FUN_18020e930(local_358);
        local_458 = 0x100;
        pppppppbVar20 = local_358;
        if (0xf < local_340) {
          pppppppbVar20 = (byte *******)local_358[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
        puVar15 = puVar13;
        puVar19 = (undefined8 *)puVar13[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar19[4] < uVar16) {
            puVar14 = (undefined8 *)puVar19[2];
            puVar19 = puVar15;
          }
          else {
            puVar14 = (undefined8 *)*puVar19;
          }
          puVar15 = puVar19;
          puVar19 = puVar14;
          cVar1 = *(char *)((longlong)puVar14 + 0x19);
        }
        if (((*(char *)((longlong)puVar15 + 0x19) == '\0') && ((ulonglong)puVar15[4] <= uVar16)) &&
           (puVar15 != puVar13)) {
          local_1b8 = (char *)0x0;
          pcVar17 = (char *)(puVar15 + 5);
          pcVar18 = pcVar17;
          if (0xf < (ulonglong)puVar15[8]) {
            pcVar18 = *(char **)pcVar17;
          }
          uVar25 = strtof(pcVar18,&local_1b8);
          if (0xf < (ulonglong)puVar15[8]) {
            pcVar17 = *(char **)pcVar17;
          }
          if (local_1b8 == pcVar17) goto LAB_18010256b;
        }
        else {
LAB_18010256b:
          uVar25 = uVar6;
        }
        if (0x7fffffffffffffffU - local_168 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.b";
        local_478 = local_168;
        FUN_18020e930(local_378);
        local_458 = 0x300;
        pppppppbVar20 = local_378;
        if (0xf < local_360) {
          pppppppbVar20 = (byte *******)local_378[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_1b0 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar26 = strtof(puVar13,&local_1b0);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_1b0 == puVar15) goto LAB_180102684;
        }
        else {
LAB_180102684:
          uVar26 = uVar4;
        }
        if (0x7fffffffffffffffU - local_168 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.g";
        local_478 = local_168;
        FUN_18020e930(local_398);
        local_458 = 0x700;
        pppppppbVar20 = local_398;
        if (0xf < local_380) {
          pppppppbVar20 = (byte *******)local_398[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_1a8 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar27 = strtof(puVar13,&local_1a8);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_1a8 == puVar15) goto LAB_1801027a2;
        }
        else {
LAB_1801027a2:
          uVar27 = uVar5;
        }
        if (0x7fffffffffffffffU - local_168 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.r";
        local_478 = local_168;
        FUN_18020e930(local_3b8);
        local_458 = 0xf00;
        pppppppbVar20 = local_3b8;
        if (0xf < local_3a0) {
          pppppppbVar20 = (byte *******)local_3b8[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_1a0 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar28 = strtof(puVar13,&local_1a0);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_1a0 == puVar15) goto LAB_1801028bc;
        }
        else {
LAB_1801028bc:
          uVar28 = uVar6;
        }
        local_458 = 0x700;
        local_114 = uVar28;
        local_110 = uVar27;
        local_10c = uVar26;
        local_108 = uVar25;
        FUN_18020e450(local_3b8);
        local_458 = 0x300;
        FUN_18020e450(local_398);
        local_458 = 0x100;
        FUN_18020e450(local_378);
        local_458 = 0;
        FUN_18020e450(local_358);
        if (0x7fffffffffffffffU - local_168 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "highlight_text";
        local_478 = local_168;
        FUN_18020e930(local_338);
        local_458 = 0x1000;
        pppppppbVar20 = local_338;
        if (0xf < local_320) {
          pppppppbVar20 = (byte *******)local_338[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar15 = (undefined8 *)*param_1;
        puVar13 = (undefined8 *)puVar15[1];
        puVar19 = puVar15;
        if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar13[4] < uVar16) {
              puVar14 = (undefined8 *)puVar13[2];
              puVar19 = puVar15;
            }
            else {
              puVar14 = (undefined8 *)*puVar13;
              puVar19 = puVar13;
            }
            puVar13 = puVar14;
            puVar15 = puVar19;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar15 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar15)) {
          puVar15 = puVar19 + 5;
          lVar2 = puVar19[7];
          uVar16 = puVar19[8];
          puVar13 = puVar15;
          if (0xf < uVar16) {
            puVar13 = (undefined8 *)*puVar15;
          }
          if ((lVar2 != 1) || (iVar11 = memcmp(puVar13,&DAT_18034124c,1), iVar11 != 0)) {
            if (0xf < uVar16) {
              puVar15 = (undefined8 *)*puVar15;
            }
            if ((lVar2 != 4) || (iVar11 = memcmp(puVar15,&DAT_18033e5dc,4), iVar11 != 0))
            goto LAB_180102a9f;
          }
          local_104 = 1;
        }
        else {
LAB_180102a9f:
          local_104 = 0;
        }
        local_458 = 0;
        FUN_18020e450(local_338);
        if (0x7fffffffffffffffU - local_168 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.a";
        local_478 = local_168;
        FUN_18020e930(local_2b8);
        local_458 = 0x2000;
        pppppppbVar20 = local_2b8;
        if (0xf < local_2a0) {
          pppppppbVar20 = (byte *******)local_2b8[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_198 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar29 = strtof(puVar13,&local_198);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_198 != puVar15) {
            uVar25 = uVar29;
          }
        }
        if (0x7fffffffffffffffU - local_168 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.b";
        local_478 = local_168;
        FUN_18020e930(local_2d8);
        local_458 = 0x6000;
        pppppppbVar20 = local_2d8;
        if (0xf < local_2c0) {
          pppppppbVar20 = (byte *******)local_2d8[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_190 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar29 = strtof(puVar13,&local_190);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_190 != puVar15) {
            uVar26 = uVar29;
          }
        }
        if (0x7fffffffffffffffU - local_168 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.g";
        local_478 = local_168;
        FUN_18020e930(local_2f8);
        local_458 = 0xe000;
        pppppppbVar20 = local_2f8;
        if (0xf < local_2e0) {
          pppppppbVar20 = (byte *******)local_2f8[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_188 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar29 = strtof(puVar13,&local_188);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_188 != puVar15) {
            uVar27 = uVar29;
          }
        }
        if (0x7fffffffffffffffU - local_168 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.r";
        local_478 = local_168;
        FUN_18020e930(local_318);
        local_458 = 0x1e000;
        pppppppbVar20 = local_318;
        if (0xf < local_300) {
          pppppppbVar20 = (byte *******)local_318[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          local_180 = (undefined8 *)0x0;
          puVar15 = puVar19 + 5;
          puVar13 = puVar15;
          if (0xf < (ulonglong)puVar19[8]) {
            puVar13 = (undefined8 *)*puVar15;
          }
          uVar29 = strtof(puVar13,&local_180);
          if (0xf < (ulonglong)puVar19[8]) {
            puVar15 = (undefined8 *)*puVar15;
          }
          if (local_180 != puVar15) {
            uVar28 = uVar29;
          }
        }
        local_458 = 0xe000;
        local_100 = uVar28;
        local_fc = uVar27;
        local_f8 = uVar26;
        local_f4 = uVar25;
        FUN_18020e450(local_318);
        local_458 = 0x6000;
        FUN_18020e450(local_2f8);
        local_458 = 0x2000;
        FUN_18020e450(local_2d8);
        local_458 = 0;
        FUN_18020e450(local_2b8);
        if (0x7fffffffffffffffU - local_168 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "text_scope_all";
        local_478 = local_168;
        FUN_18020e930(local_298);
        local_458 = 0x20000;
        pppppppbVar20 = local_298;
        if (0xf < local_280) {
          pppppppbVar20 = (byte *******)local_298[0];
        }
        uVar16 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_450, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar16 = (uVar16 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar13 = (undefined8 *)*param_1;
        puVar15 = (undefined8 *)puVar13[1];
        puVar19 = puVar13;
        if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar15[4] < uVar16) {
              puVar13 = (undefined8 *)puVar15[2];
            }
            else {
              puVar13 = (undefined8 *)*puVar15;
              puVar19 = puVar15;
            }
            puVar15 = puVar13;
          } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
          puVar13 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar19 + 0x19) == '\0') && ((ulonglong)puVar19[4] <= uVar16)) &&
           (puVar19 != puVar13)) {
          puVar13 = puVar19 + 5;
          lVar2 = puVar19[7];
          uVar16 = puVar19[8];
          puVar15 = puVar13;
          if (0xf < uVar16) {
            puVar15 = (undefined8 *)*puVar13;
          }
          if ((lVar2 == 1) && (iVar11 = memcmp(puVar15,&DAT_18034124c,1), iVar11 == 0))
          goto LAB_18010310f;
          if (0xf < uVar16) {
            puVar13 = (undefined8 *)*puVar13;
          }
          if ((lVar2 == 4) && (iVar11 = memcmp(puVar13,&DAT_18033e5dc,4), iVar11 == 0))
          goto LAB_18010310f;
          local_f0 = 0;
        }
        else {
LAB_18010310f:
          local_f0 = 1;
        }
        local_458 = 0;
        FUN_18020e450(local_298);
        if (0x7fffffffffffffffU - local_168 < 0xf) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xf;
        local_470 = "text_scope_mask";
        local_478 = local_168;
        FUN_18020e930(local_1f8);
        local_458 = 0x40000;
        local_ec = FUN_1800feee0(&local_448,local_1f8);
        local_458 = 0;
        FUN_18020e450(local_1f8);
        if (plStack_150 == local_148) {
          FUN_1802260c0(&local_158,plStack_150,&local_138);
        }
        else {
          FUN_18023cb00(plStack_150,&local_138);
          plStack_150 = plStack_150 + 10;
        }
        FUN_18020e450(&local_138);
        FUN_18020e450(local_e8);
      }
      FUN_18020e450(local_178);
      iVar24 = iVar24 + 1;
    } while (iVar24 < iVar10);
  }
  local_448 = (longlong *)&DAT_1803e8920;
  iVar10 = _Mtx_lock(&DAT_1803e8920);
  if (iVar10 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1803e896c == 0x7fffffff) {
    DAT_1803e896c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  plVar8 = DAT_1803e9c18;
  plVar7 = DAT_1803e9c10;
  plVar22 = DAT_1803e9c08;
  if (&stack0x00000000 != &DAT_1803e9d60) {
    DAT_1803e9c08 = local_158;
    local_158 = plVar22;
    DAT_1803e9c10 = plStack_150;
    plStack_150 = plVar7;
    DAT_1803e9c18 = local_148;
    local_148 = plVar8;
  }
  _Mtx_unlock(&DAT_1803e8920);
  plVar7 = plStack_150;
  _DAT_1803e8918 = DAT_1803813d8;
  plVar22 = local_158;
  if (local_158 != (longlong *)0x0) {
    for (; local_448 = plVar22, plVar22 != plVar7; plVar22 = plVar22 + 10) {
      FUN_18020e450(plVar22);
    }
    plVar22 = local_158;
    if ((0xfff < (ulonglong)(((longlong)local_148 - (longlong)local_158 >> 4) << 4)) &&
       (plVar22 = (longlong *)local_158[-1],
       0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)plVar22)))) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar23 = auStack_490;
LAB_18010340d:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar23 + -8) = 0x180103412;
      FUN_1800130a0();
    }
    free(plVar22);
  }
  return;
}


