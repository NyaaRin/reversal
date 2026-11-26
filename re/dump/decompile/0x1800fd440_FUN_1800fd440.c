// 0x1800fd440  FUN_1800fd440
// size=6613 thunk=false
// signature: undefined FUN_1800fd440()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800fd440(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  char *pcVar19;
  byte *******pppppppbVar20;
  undefined8 *puVar21;
  undefined8 *******pppppppuVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [24];
  longlong local_488;
  char *local_480;
  undefined8 local_478;
  undefined4 local_468;
  longlong *local_460;
  longlong *local_458;
  byte ******local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  ulonglong local_438;
  longlong *local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  byte ******local_3e8 [3];
  ulonglong local_3d0;
  byte ******local_3c8 [3];
  ulonglong local_3b0;
  byte ******local_3a8 [3];
  ulonglong local_390;
  byte ******local_388 [3];
  ulonglong local_370;
  byte ******local_368 [3];
  ulonglong local_350;
  byte ******local_348 [3];
  ulonglong local_330;
  byte ******local_328 [3];
  ulonglong local_310;
  byte ******local_308 [3];
  ulonglong local_2f0;
  byte ******local_2e8 [3];
  ulonglong local_2d0;
  byte ******local_2c8 [3];
  ulonglong local_2b0;
  byte ******local_2a8 [3];
  ulonglong local_290;
  byte ******local_288 [3];
  ulonglong local_270;
  byte ******local_268 [3];
  ulonglong local_250;
  byte ******local_248 [3];
  ulonglong local_230;
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  char *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined1 local_188 [16];
  longlong local_178;
  longlong *local_168;
  longlong *plStack_160;
  longlong *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 ******local_f8 [2];
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  
  puVar24 = auStack_4a8;
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_4a8;
  iVar25 = 0;
  iVar11 = 0;
  local_468 = 0;
  local_168 = (longlong *)0x0;
  plStack_160 = (longlong *)0x0;
  local_158 = (longlong *)0x0;
  DAT_1803e88b0 = 0xffffffff;
  local_450 = (byte ******)0x0;
  uStack_448 = 0;
  local_440 = 0;
  local_438 = 0;
  local_460 = param_1;
  local_458 = param_1;
  local_430 = param_1;
  FUN_18001d080(&local_450,"teamlist.count",0xe);
  pppppppbVar20 = &local_450;
  if (0xf < local_438) {
    pppppppbVar20 = (byte *******)local_450;
  }
  uVar17 = 0x14650fb0739d0383;
  for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
      pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
    uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
  }
  puVar14 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
  puVar16 = puVar14;
  puVar21 = (undefined8 *)puVar14[1];
  while (cVar1 == '\0') {
    if ((ulonglong)puVar21[4] < uVar17) {
      puVar15 = (undefined8 *)puVar21[2];
      puVar21 = puVar16;
    }
    else {
      puVar15 = (undefined8 *)*puVar21;
    }
    puVar16 = puVar21;
    puVar21 = puVar15;
    cVar1 = *(char *)((longlong)puVar15 + 0x19);
  }
  if (((*(char *)((longlong)puVar16 + 0x19) == '\0') && ((ulonglong)puVar16[4] <= uVar17)) &&
     (puVar16 != puVar14)) {
    local_1c8 = (char *)0x0;
    pcVar19 = (char *)(puVar16 + 5);
    pcVar18 = pcVar19;
    if (0xf < (ulonglong)puVar16[8]) {
      pcVar18 = *(char **)pcVar19;
    }
    iVar11 = strtol(pcVar18,&local_1c8,10);
    if (0xf < (ulonglong)puVar16[8]) {
      pcVar19 = *(char **)pcVar19;
    }
    if (local_1c8 == pcVar19) {
      iVar11 = 0;
    }
  }
  FUN_18020e450(&local_450);
  uVar7 = DAT_180380bb0;
  uVar6 = DAT_180380b74;
  uVar5 = DAT_180380afc;
  uVar4 = DAT_180380ad4;
  if (0 < iVar11) {
    do {
      uVar13 = FUN_180013ba0(local_1e8,iVar25);
      puVar14 = (undefined8 *)FUN_18022a630(uVar13);
      local_428 = *puVar14;
      uStack_420 = puVar14[1];
      local_418 = puVar14[2];
      uStack_410 = puVar14[3];
      puVar14[2] = 0;
      puVar14[3] = 0xf;
      *(undefined1 *)puVar14 = 0;
      local_468 = 1;
      FUN_1801fc680(local_188,&local_428,&DAT_18033ea54);
      local_468 = 0;
      FUN_18020e450(&local_428);
      FUN_18020e450(local_1e8);
      local_408 = 0;
      uStack_400 = 0;
      local_3f8 = 0;
      local_3f0 = 0;
      FUN_18001d080(&local_408,&DAT_18033e5ea,0);
      if (0x7fffffffffffffffU - local_178 < 4) goto LAB_1800fedc5;
      local_478 = 4;
      local_480 = "name";
      local_488 = local_178;
      FUN_18020e930(local_228);
      local_468 = 8;
      FUN_1800fee30(&local_430,local_f8,local_228,&local_408);
      local_468 = 0;
      FUN_18020e450(local_228);
      FUN_18020e450(&local_408);
      if (local_e8 == 0) {
        FUN_18020e450(local_f8);
      }
      else {
        uStack_140 = 0;
        local_138 = 0;
        local_130 = 0xf;
        local_148 = 0;
        local_128 = 0;
        local_124 = 0x3f0ccccd;
        local_120 = 0x3f733333;
        local_11c = 0x3f266666;
        local_118 = 0x3f800000;
        local_114 = 0;
        local_110 = 0x3f0ccccd;
        local_10c = 0x3f733333;
        local_108 = 0x3f266666;
        local_104 = 0x3f800000;
        local_100 = 1;
        local_fc = 0;
        pppppppuVar22 = local_f8;
        if (0xf < local_e0) {
          pppppppuVar22 = (undefined8 *******)local_f8[0];
        }
        FUN_180212700(&local_148,pppppppuVar22,local_e8);
        if (0x7fffffffffffffffU - local_178 < 10) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 10;
        local_480 = "ignore_aim";
        local_488 = local_178;
        FUN_18020e930(local_288);
        local_468 = 0x10;
        pppppppbVar20 = local_288;
        if (0xf < local_270) {
          pppppppbVar20 = (byte *******)local_288[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar16 = puVar14;
        puVar21 = (undefined8 *)puVar14[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar21[4] < uVar17) {
            puVar15 = (undefined8 *)puVar21[2];
            puVar21 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar21;
          }
          puVar16 = puVar21;
          puVar21 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if (((*(char *)((longlong)puVar16 + 0x19) == '\0') && ((ulonglong)puVar16[4] <= uVar17)) &&
           (puVar16 != puVar14)) {
          puVar21 = puVar16 + 5;
          lVar2 = puVar16[7];
          uVar17 = puVar16[8];
          puVar14 = puVar21;
          if (0xf < uVar17) {
            puVar14 = (undefined8 *)*puVar21;
          }
          if ((lVar2 != 1) || (iVar12 = memcmp(puVar14,&DAT_18034124c,1), iVar12 != 0)) {
            if (0xf < uVar17) {
              puVar21 = (undefined8 *)*puVar21;
            }
            if ((lVar2 != 4) || (iVar12 = memcmp(puVar21,&DAT_18033e5dc,4), iVar12 != 0))
            goto LAB_1800fd997;
          }
          uVar10 = 1;
        }
        else {
LAB_1800fd997:
          uVar10 = 0;
        }
        local_128 = CONCAT31(local_128._1_3_,uVar10);
        local_468 = 0;
        FUN_18020e450(local_288);
        if (0x7fffffffffffffffU - local_178 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xe;
        local_480 = "ignore_trigger";
        local_488 = local_178;
        FUN_18020e930(local_268);
        local_468 = 0x20;
        pppppppbVar20 = local_268;
        if (0xf < local_250) {
          pppppppbVar20 = (byte *******)local_268[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar16 = puVar14;
        puVar21 = (undefined8 *)puVar14[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar21[4] < uVar17) {
            puVar15 = (undefined8 *)puVar21[2];
            puVar21 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar21;
          }
          puVar16 = puVar21;
          puVar21 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if (((*(char *)((longlong)puVar16 + 0x19) == '\0') && ((ulonglong)puVar16[4] <= uVar17)) &&
           (puVar16 != puVar14)) {
          puVar21 = puVar16 + 5;
          lVar2 = puVar16[7];
          uVar17 = puVar16[8];
          puVar14 = puVar21;
          if (0xf < uVar17) {
            puVar14 = (undefined8 *)*puVar21;
          }
          if ((lVar2 != 1) || (iVar12 = memcmp(puVar14,&DAT_18034124c,1), iVar12 != 0)) {
            if (0xf < uVar17) {
              puVar21 = (undefined8 *)*puVar21;
            }
            if ((lVar2 != 4) || (iVar12 = memcmp(puVar21,&DAT_18033e5dc,4), iVar12 != 0))
            goto LAB_1800fdafd;
          }
          uVar10 = 1;
        }
        else {
LAB_1800fdafd:
          uVar10 = 0;
        }
        local_128._0_2_ = CONCAT11(uVar10,(undefined1)local_128);
        local_468 = 0;
        FUN_18020e450(local_268);
        if (0x7fffffffffffffffU - local_178 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xe;
        local_480 = "ignore_visuals";
        local_488 = local_178;
        FUN_18020e930(local_248);
        local_468 = 0x40;
        pppppppbVar20 = local_248;
        if (0xf < local_230) {
          pppppppbVar20 = (byte *******)local_248[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 && (*(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar16 = puVar14;
        puVar21 = (undefined8 *)puVar14[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar21[4] < uVar17) {
            puVar15 = (undefined8 *)puVar21[2];
            puVar21 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar21;
          }
          puVar16 = puVar21;
          puVar21 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if (((*(char *)((longlong)puVar16 + 0x19) == '\0') && ((ulonglong)puVar16[4] <= uVar17)) &&
           (puVar16 != puVar14)) {
          puVar21 = puVar16 + 5;
          lVar2 = puVar16[7];
          uVar17 = puVar16[8];
          puVar14 = puVar21;
          if (0xf < uVar17) {
            puVar14 = (undefined8 *)*puVar21;
          }
          if ((lVar2 != 1) || (iVar12 = memcmp(puVar14,&DAT_18034124c,1), iVar12 != 0)) {
            if (0xf < uVar17) {
              puVar21 = (undefined8 *)*puVar21;
            }
            if ((lVar2 != 4) || (iVar12 = memcmp(puVar21,&DAT_18033e5dc,4), iVar12 != 0))
            goto LAB_1800fdc8b;
          }
          uVar10 = 1;
        }
        else {
LAB_1800fdc8b:
          uVar10 = 0;
        }
        local_128._0_3_ = CONCAT12(uVar10,(undefined2)local_128);
        local_468 = 0;
        FUN_18020e450(local_248);
        if (0x7fffffffffffffffU - local_178 < 9) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 9;
        local_480 = "highlight";
        local_488 = local_178;
        FUN_18020e930(local_3e8);
        local_468 = 0x80;
        pppppppbVar20 = local_3e8;
        if (0xf < local_3d0) {
          pppppppbVar20 = (byte *******)local_3e8[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar16 = puVar14;
        puVar21 = (undefined8 *)puVar14[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar21[4] < uVar17) {
            puVar15 = (undefined8 *)puVar21[2];
            puVar21 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar21;
          }
          puVar16 = puVar21;
          puVar21 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if (((*(char *)((longlong)puVar16 + 0x19) == '\0') && ((ulonglong)puVar16[4] <= uVar17)) &&
           (puVar16 != puVar14)) {
          puVar21 = puVar16 + 5;
          lVar2 = puVar16[7];
          uVar17 = puVar16[8];
          puVar14 = puVar21;
          if (0xf < uVar17) {
            puVar14 = (undefined8 *)*puVar21;
          }
          if ((lVar2 != 1) || (iVar12 = memcmp(puVar14,&DAT_18034124c,1), iVar12 != 0)) {
            if (0xf < uVar17) {
              puVar21 = (undefined8 *)*puVar21;
            }
            if ((lVar2 != 4) || (iVar12 = memcmp(puVar21,&DAT_18033e5dc,4), iVar12 != 0))
            goto LAB_1800fde07;
          }
          uVar10 = 1;
        }
        else {
LAB_1800fde07:
          uVar10 = 0;
        }
        local_128 = CONCAT13(uVar10,(undefined3)local_128);
        local_468 = 0;
        FUN_18020e450(local_3e8);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 7;
        local_480 = "color.a";
        local_488 = local_178;
        FUN_18020e930(local_368);
        local_468 = 0x100;
        pppppppbVar20 = local_368;
        if (0xf < local_350) {
          pppppppbVar20 = (byte *******)local_368[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar16 = puVar14;
        puVar21 = (undefined8 *)puVar14[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar21[4] < uVar17) {
            puVar15 = (undefined8 *)puVar21[2];
            puVar21 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar21;
          }
          puVar16 = puVar21;
          puVar21 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if (((*(char *)((longlong)puVar16 + 0x19) == '\0') && ((ulonglong)puVar16[4] <= uVar17)) &&
           (puVar16 != puVar14)) {
          local_1c8 = (char *)0x0;
          pcVar18 = (char *)(puVar16 + 5);
          pcVar19 = pcVar18;
          if (0xf < (ulonglong)puVar16[8]) {
            pcVar19 = *(char **)pcVar18;
          }
          uVar26 = strtof(pcVar19,&local_1c8);
          if (0xf < (ulonglong)puVar16[8]) {
            pcVar18 = *(char **)pcVar18;
          }
          if (local_1c8 == pcVar18) goto LAB_1800fdf3b;
        }
        else {
LAB_1800fdf3b:
          uVar26 = uVar7;
        }
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 7;
        local_480 = "color.b";
        local_488 = local_178;
        FUN_18020e930(local_388);
        local_468 = 0x300;
        pppppppbVar20 = local_388;
        if (0xf < local_370) {
          pppppppbVar20 = (byte *******)local_388[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_1c0 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar27 = strtof(puVar14,&local_1c0);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_1c0 == puVar16) goto LAB_1800fe054;
        }
        else {
LAB_1800fe054:
          uVar27 = uVar5;
        }
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 7;
        local_480 = "color.g";
        local_488 = local_178;
        FUN_18020e930(local_3a8);
        local_468 = 0x700;
        pppppppbVar20 = local_3a8;
        if (0xf < local_390) {
          pppppppbVar20 = (byte *******)local_3a8[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_1b8 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar28 = strtof(puVar14,&local_1b8);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_1b8 == puVar16) goto LAB_1800fe172;
        }
        else {
LAB_1800fe172:
          uVar28 = uVar6;
        }
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 7;
        local_480 = "color.r";
        local_488 = local_178;
        FUN_18020e930(local_3c8);
        local_468 = 0xf00;
        pppppppbVar20 = local_3c8;
        if (0xf < local_3b0) {
          pppppppbVar20 = (byte *******)local_3c8[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_1b0 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar29 = strtof(puVar14,&local_1b0);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_1b0 == puVar16) goto LAB_1800fe28c;
        }
        else {
LAB_1800fe28c:
          uVar29 = uVar4;
        }
        local_468 = 0x700;
        local_124 = uVar29;
        local_120 = uVar28;
        local_11c = uVar27;
        local_118 = uVar26;
        FUN_18020e450(local_3c8);
        local_468 = 0x300;
        FUN_18020e450(local_3a8);
        local_468 = 0x100;
        FUN_18020e450(local_388);
        local_468 = 0;
        FUN_18020e450(local_368);
        if (0x7fffffffffffffffU - local_178 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xe;
        local_480 = "highlight_text";
        local_488 = local_178;
        FUN_18020e930(local_348);
        local_468 = 0x1000;
        pppppppbVar20 = local_348;
        if (0xf < local_330) {
          pppppppbVar20 = (byte *******)local_348[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar16 = (undefined8 *)*param_1;
        puVar14 = (undefined8 *)puVar16[1];
        puVar21 = puVar16;
        if (*(char *)((longlong)puVar14 + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar14[4] < uVar17) {
              puVar15 = (undefined8 *)puVar14[2];
              puVar21 = puVar16;
            }
            else {
              puVar15 = (undefined8 *)*puVar14;
              puVar21 = puVar14;
            }
            puVar14 = puVar15;
            puVar16 = puVar21;
          } while (*(char *)((longlong)puVar15 + 0x19) == '\0');
          puVar16 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar16)) {
          puVar16 = puVar21 + 5;
          lVar2 = puVar21[7];
          uVar17 = puVar21[8];
          puVar14 = puVar16;
          if (0xf < uVar17) {
            puVar14 = (undefined8 *)*puVar16;
          }
          if ((lVar2 != 1) || (iVar12 = memcmp(puVar14,&DAT_18034124c,1), iVar12 != 0)) {
            if (0xf < uVar17) {
              puVar16 = (undefined8 *)*puVar16;
            }
            if ((lVar2 != 4) || (iVar12 = memcmp(puVar16,&DAT_18033e5dc,4), iVar12 != 0))
            goto LAB_1800fe46f;
          }
          local_114 = 1;
        }
        else {
LAB_1800fe46f:
          local_114 = 0;
        }
        local_468 = 0;
        FUN_18020e450(local_348);
        if (0x7fffffffffffffffU - local_178 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xc;
        local_480 = "text_color.a";
        local_488 = local_178;
        FUN_18020e930(local_2c8);
        local_468 = 0x2000;
        pppppppbVar20 = local_2c8;
        if (0xf < local_2b0) {
          pppppppbVar20 = (byte *******)local_2c8[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_1a8 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar30 = strtof(puVar14,&local_1a8);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_1a8 != puVar16) {
            uVar26 = uVar30;
          }
        }
        if (0x7fffffffffffffffU - local_178 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xc;
        local_480 = "text_color.b";
        local_488 = local_178;
        FUN_18020e930(local_2e8);
        local_468 = 0x6000;
        pppppppbVar20 = local_2e8;
        if (0xf < local_2d0) {
          pppppppbVar20 = (byte *******)local_2e8[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_1a0 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar30 = strtof(puVar14,&local_1a0);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_1a0 != puVar16) {
            uVar27 = uVar30;
          }
        }
        if (0x7fffffffffffffffU - local_178 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xc;
        local_480 = "text_color.g";
        local_488 = local_178;
        FUN_18020e930(local_308);
        local_468 = 0xe000;
        pppppppbVar20 = local_308;
        if (0xf < local_2f0) {
          pppppppbVar20 = (byte *******)local_308[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_198 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar30 = strtof(puVar14,&local_198);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_198 != puVar16) {
            uVar28 = uVar30;
          }
        }
        if (0x7fffffffffffffffU - local_178 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xc;
        local_480 = "text_color.r";
        local_488 = local_178;
        FUN_18020e930(local_328);
        local_468 = 0x1e000;
        pppppppbVar20 = local_328;
        if (0xf < local_310) {
          pppppppbVar20 = (byte *******)local_328[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          local_190 = (undefined8 *)0x0;
          puVar16 = puVar21 + 5;
          puVar14 = puVar16;
          if (0xf < (ulonglong)puVar21[8]) {
            puVar14 = (undefined8 *)*puVar16;
          }
          uVar30 = strtof(puVar14,&local_190);
          if (0xf < (ulonglong)puVar21[8]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (local_190 != puVar16) {
            uVar29 = uVar30;
          }
        }
        local_468 = 0xe000;
        local_110 = uVar29;
        local_10c = uVar28;
        local_108 = uVar27;
        local_104 = uVar26;
        FUN_18020e450(local_328);
        local_468 = 0x6000;
        FUN_18020e450(local_308);
        local_468 = 0x2000;
        FUN_18020e450(local_2e8);
        local_468 = 0;
        FUN_18020e450(local_2c8);
        if (0x7fffffffffffffffU - local_178 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xe;
        local_480 = "text_scope_all";
        local_488 = local_178;
        FUN_18020e930(local_2a8);
        local_468 = 0x20000;
        pppppppbVar20 = local_2a8;
        if (0xf < local_290) {
          pppppppbVar20 = (byte *******)local_2a8[0];
        }
        uVar17 = 0x14650fb0739d0383;
        for (; (pppppppbVar20 != (byte *******)0x0 &&
               (param_1 = local_460, *(byte *)pppppppbVar20 != 0));
            pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1)) {
          uVar17 = (uVar17 ^ *(byte *)pppppppbVar20) * 0x100000001b3;
        }
        puVar14 = (undefined8 *)*param_1;
        puVar16 = (undefined8 *)puVar14[1];
        puVar21 = puVar14;
        if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar16[4] < uVar17) {
              puVar14 = (undefined8 *)puVar16[2];
            }
            else {
              puVar14 = (undefined8 *)*puVar16;
              puVar21 = puVar16;
            }
            puVar16 = puVar14;
          } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
          puVar14 = (undefined8 *)*param_1;
        }
        if (((*(char *)((longlong)puVar21 + 0x19) == '\0') && ((ulonglong)puVar21[4] <= uVar17)) &&
           (puVar21 != puVar14)) {
          puVar16 = puVar21 + 5;
          lVar2 = puVar21[7];
          uVar17 = puVar21[8];
          puVar14 = puVar16;
          if (0xf < uVar17) {
            puVar14 = (undefined8 *)*puVar16;
          }
          if ((lVar2 == 1) && (iVar12 = memcmp(puVar14,&DAT_18034124c,1), iVar12 == 0))
          goto LAB_1800fead1;
          if (0xf < uVar17) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if ((lVar2 == 4) && (iVar12 = memcmp(puVar16,&DAT_18033e5dc,4), iVar12 == 0))
          goto LAB_1800fead1;
          local_100 = 0;
        }
        else {
LAB_1800fead1:
          local_100 = 1;
        }
        local_468 = 0;
        FUN_18020e450(local_2a8);
        if (0x7fffffffffffffffU - local_178 < 0xf) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_478 = 0xf;
        local_480 = "text_scope_mask";
        local_488 = local_178;
        FUN_18020e930(local_208);
        local_468 = 0x40000;
        local_fc = FUN_1800feee0(&local_458,local_208);
        local_468 = 0;
        FUN_18020e450(local_208);
        if (plStack_160 == local_158) {
          FUN_1802260c0(&local_168,plStack_160,&local_148);
        }
        else {
          FUN_18023cb00(plStack_160,&local_148);
          plStack_160 = plStack_160 + 10;
        }
        FUN_18020e450(&local_148);
        FUN_18020e450(local_f8);
      }
      FUN_18020e450(local_188);
      iVar25 = iVar25 + 1;
    } while (iVar25 < iVar11);
  }
  local_458 = (longlong *)&DAT_1803e88c0;
  iVar11 = _Mtx_lock(&DAT_1803e88c0);
  if (iVar11 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1803e890c == 0x7fffffff) {
    DAT_1803e890c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  plVar9 = DAT_1803e9c30;
  plVar8 = DAT_1803e9c28;
  plVar23 = DAT_1803e9c20;
  if (&stack0x00000000 != &DAT_1803e9d88) {
    DAT_1803e9c20 = local_168;
    local_168 = plVar23;
    DAT_1803e9c28 = plStack_160;
    plStack_160 = plVar8;
    DAT_1803e9c30 = local_158;
    local_158 = plVar9;
  }
  _Mtx_unlock(&DAT_1803e88c0);
  plVar8 = plStack_160;
  _DAT_1803e88b8 = DAT_1803813d8;
  plVar23 = local_168;
  if (local_168 != (longlong *)0x0) {
    for (; local_458 = plVar23, plVar23 != plVar8; plVar23 = plVar23 + 10) {
      FUN_18020e450(plVar23);
    }
    plVar23 = local_168;
    if ((0xfff < (ulonglong)(((longlong)local_158 - (longlong)local_168 >> 4) << 4)) &&
       (plVar23 = (longlong *)local_168[-1],
       0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)plVar23)))) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar24 = auStack_4a0;
LAB_1800fedc5:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar24 + -8) = 0x1800fedca;
      FUN_1800130a0();
    }
    free(plVar23);
  }
  return;
}


