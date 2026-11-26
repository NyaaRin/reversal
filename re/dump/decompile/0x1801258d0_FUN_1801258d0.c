// 0x1801258d0  FUN_1801258d0
// size=8424 thunk=false
// signature: undefined FUN_1801258d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801258d0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  int *piVar23;
  byte *******pppppppbVar24;
  undefined8 *******pppppppuVar25;
  int iVar26;
  undefined4 uVar27;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  char *local_590;
  undefined8 local_588;
  undefined4 local_578;
  int local_574 [3];
  longlong *local_568;
  longlong *local_560;
  longlong *local_558;
  byte ******local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  ulonglong uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  byte ******local_510 [3];
  ulonglong local_4f8;
  byte ******local_4f0 [3];
  ulonglong local_4d8;
  byte ******local_4d0 [3];
  ulonglong local_4b8;
  byte ******local_4b0 [3];
  ulonglong local_498;
  byte ******local_490 [3];
  ulonglong local_478;
  byte ******local_470 [3];
  ulonglong local_458;
  byte ******local_450 [3];
  ulonglong local_438;
  byte ******local_430 [3];
  ulonglong local_418;
  byte ******local_410 [3];
  ulonglong local_3f8;
  byte ******local_3f0 [3];
  ulonglong local_3d8;
  byte ******local_3d0 [3];
  ulonglong local_3b8;
  byte ******local_3b0 [3];
  ulonglong local_398;
  byte ******local_390 [3];
  ulonglong local_378;
  byte ******local_370 [3];
  ulonglong local_358;
  byte ******local_350 [3];
  ulonglong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  byte ******local_310 [3];
  ulonglong local_2f8;
  byte ******local_2f0 [3];
  ulonglong local_2d8;
  byte ******local_2d0 [3];
  ulonglong local_2b8;
  byte ******local_2b0 [3];
  ulonglong local_298;
  byte ******local_290 [3];
  ulonglong local_278;
  byte ******local_270 [3];
  ulonglong local_258;
  undefined1 local_250 [32];
  undefined1 local_230 [32];
  undefined1 local_210 [32];
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  int local_100;
  undefined8 ******local_f8 [2];
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  
  plVar18 = DAT_1803eb380;
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_5b8;
  local_578 = 0;
  plVar17 = DAT_1803eb378;
  local_568 = param_1;
  if (DAT_1803eb378 != DAT_1803eb380) {
    do {
      local_1f0 = plVar17;
      FUN_18020e450(plVar17);
      local_1f0 = plVar17 + 0xe;
      plVar17 = local_1f0;
    } while (local_1f0 != plVar18);
    DAT_1803eb380 = DAT_1803eb378;
  }
  DAT_1803e8978 = 0xffffffff;
  FUN_18020b400(&DAT_1805c3990);
  local_550 = (byte ******)0x0;
  uStack_548 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_560 = param_1;
  local_558 = param_1;
  FUN_18001d080(&local_550,"entitylist.count",0x10);
  uVar20 = 0x14650fb0739d0383;
  if (uStack_538 < 0x10) {
    pppppppbVar24 = &local_550;
  }
  else {
    pppppppbVar24 = (byte *******)local_550;
    if ((byte *******)local_550 == (byte *******)0x0) goto LAB_180125a14;
  }
  do {
    if (*(byte *)pppppppbVar24 == 0) break;
    uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
    pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1);
  } while (pppppppbVar24 != (byte *******)0x0);
LAB_180125a14:
  plVar18 = (longlong *)*param_1;
  plVar17 = (longlong *)plVar18[1];
  cVar1 = *(char *)((longlong)plVar17 + 0x19);
  plVar22 = plVar18;
  while (cVar1 == '\0') {
    plVar21 = plVar17;
    if ((ulonglong)plVar17[4] < uVar20) {
      plVar17 = plVar17 + 2;
      plVar21 = plVar22;
    }
    plVar17 = (longlong *)*plVar17;
    plVar22 = plVar21;
    cVar1 = *(char *)((longlong)plVar17 + 0x19);
  }
  if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
     (plVar22 != plVar18)) {
    local_1e8 = (longlong *)0x0;
    plVar18 = plVar22 + 5;
    plVar17 = plVar18;
    if (0xf < (ulonglong)plVar22[8]) {
      plVar17 = (longlong *)*plVar18;
    }
    iVar13 = strtol((char *)plVar17,(char **)&local_1e8,10);
    if (0xf < (ulonglong)plVar22[8]) {
      plVar18 = (longlong *)*plVar18;
    }
    if (local_1e8 == plVar18) {
      iVar13 = 0;
    }
  }
  else {
    iVar13 = 0;
  }
  iVar26 = 0;
  FUN_18020e450(&local_550);
  uVar11 = _UNK_1803815c8;
  uVar10 = ram0x0001803815c0;
  uVar9 = _UNK_1803814b8;
  uVar8 = _DAT_1803814b0;
  uVar7 = DAT_180380bb0;
  uVar6 = DAT_180380b4c;
  uVar5 = DAT_180380af0;
  uVar4 = DAT_180380ae4;
  uVar3 = DAT_180380a88;
  uVar2 = DAT_180380a3c;
  if (0 < iVar13) {
    do {
      uVar15 = FUN_180013ba0(local_210,iVar26);
      puVar16 = (undefined8 *)FUN_18022a630(uVar15);
      local_530 = *puVar16;
      uStack_528 = puVar16[1];
      local_520 = puVar16[2];
      uStack_518 = puVar16[3];
      *(undefined1 *)puVar16 = 0;
      puVar16[2] = 0;
      puVar16[3] = 0xf;
      local_578 = 4;
      FUN_1801fc680(local_188,&local_530,&DAT_18033ea54);
      local_578 = 0;
      FUN_18020e450(&local_530);
      FUN_18020e450(local_210);
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      FUN_18001d080(&local_330,&DAT_18033e5ea,0);
      if (0x7fffffffffffffffU - local_178 < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_588 = 5;
      local_590 = "class";
      local_598 = local_178;
      FUN_18020e930(local_250);
      local_578 = 1;
      FUN_1800fee30(&local_560,local_f8,local_250,&local_330);
      local_578 = 0;
      FUN_18020e450(local_250);
      FUN_18020e450(&local_330);
      if (local_e8 == 0) {
        FUN_18020e450(local_f8);
      }
      else {
        uStack_160 = 0;
        local_158 = uVar8;
        uStack_150 = uVar9;
        local_168 = 0;
        local_148 = 0x1000101;
        local_144 = 0;
        local_142 = 1;
        local_140 = 0;
        local_13c = 0x3f19999a;
        local_138 = 0x3f59999a;
        local_134 = 0x3f800000;
        local_130 = 0x3f800000;
        local_12c = 0;
        local_128 = 0;
        local_124 = 0x3eb33333;
        local_120 = 0x3f59999a;
        local_11c = 0x3f800000;
        local_118 = uVar10;
        uStack_110 = uVar11;
        local_108 = 0x3f800000;
        local_104 = 0;
        local_100 = 2;
        pppppppuVar25 = local_f8;
        if (0xf < local_e0) {
          pppppppuVar25 = (undefined8 *******)local_f8[0];
        }
        FUN_180212700(&local_168,pppppppuVar25,local_e8);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "enabled";
        local_598 = local_178;
        FUN_18020e930(local_4f0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_4f0[0];
        if (local_4d8 < 0x10) {
          pppppppbVar24 = local_4f0;
          goto LAB_180125de0;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180125de0:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180125e6b;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180125e6b;
          uVar12 = 0;
        }
        else {
LAB_180125e6b:
          uVar12 = 1;
        }
        local_148 = CONCAT31(local_148._1_3_,uVar12);
        local_578 = 0;
        FUN_18020e450(local_4f0);
        if (0x7fffffffffffffffU - local_178 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 3;
        local_590 = "box";
        local_598 = local_178;
        FUN_18020e930(local_2f0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_2f0[0];
        if (local_2d8 < 0x10) {
          pppppppbVar24 = local_2f0;
          goto LAB_180125f10;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180125f10:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180125f9b;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180125f9b;
          uVar12 = 0;
        }
        else {
LAB_180125f9b:
          uVar12 = 1;
        }
        local_148._0_2_ = CONCAT11(uVar12,(undefined1)local_148);
        local_578 = 0;
        FUN_18020e450(local_2f0);
        if (0x7fffffffffffffffU - local_178 < 0xd) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xd;
        local_590 = "stable_bounds";
        local_598 = local_178;
        FUN_18020e930(local_2d0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_2d0[0];
        if (local_2b8 < 0x10) {
          pppppppbVar24 = local_2d0;
          goto LAB_180126040;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126040:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_1801260cb;
          }
          uVar12 = 1;
        }
        else {
LAB_1801260cb:
          uVar12 = 0;
        }
        local_148._0_3_ = CONCAT12(uVar12,(undefined2)local_148);
        local_578 = 0;
        FUN_18020e450(local_2d0);
        if (0x7fffffffffffffffU - local_178 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 4;
        local_590 = "name";
        local_598 = local_178;
        FUN_18020e930(local_2b0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_2b0[0];
        if (local_298 < 0x10) {
          pppppppbVar24 = local_2b0;
          goto LAB_180126170;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126170:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_1801261fb;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_1801261fb;
          uVar12 = 0;
        }
        else {
LAB_1801261fb:
          uVar12 = 1;
        }
        local_148 = CONCAT13(uVar12,(undefined3)local_148);
        local_578 = 0;
        FUN_18020e450(local_2b0);
        if (0x7fffffffffffffffU - local_178 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 6;
        local_590 = "health";
        local_598 = local_178;
        FUN_18020e930(local_290);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_290[0];
        if (local_278 < 0x10) {
          pppppppbVar24 = local_290;
          goto LAB_1801262a1;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801262a1:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_18012632c;
          }
          uVar12 = 1;
        }
        else {
LAB_18012632c:
          uVar12 = 0;
        }
        local_144 = CONCAT11(local_144._1_1_,uVar12);
        local_578 = 0;
        FUN_18020e450(local_290);
        if (0x7fffffffffffffffU - local_178 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 8;
        local_590 = "distance";
        local_598 = local_178;
        FUN_18020e930(local_270);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_270[0];
        if (local_258 < 0x10) {
          pppppppbVar24 = local_270;
          goto LAB_1801263d2;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801263d2:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_180126462;
          }
          uVar12 = 1;
        }
        else {
LAB_180126462:
          uVar12 = 0;
        }
        local_144 = CONCAT11(uVar12,(undefined1)local_144);
        local_578 = 0;
        FUN_18020e450(local_270);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "dormant";
        local_598 = local_178;
        FUN_18020e930(local_510);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_510[0];
        if (local_4f8 < 0x10) {
          pppppppbVar24 = local_510;
          goto LAB_180126500;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126500:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180126590;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180126590;
          local_142 = 0;
        }
        else {
LAB_180126590:
          local_142 = 1;
        }
        local_578 = 0;
        FUN_18020e450(local_510);
        local_574[2] = 3;
        local_574[0] = 0;
        if (0x7fffffffffffffffU - local_178 < 9) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 9;
        local_590 = "box_style";
        local_598 = local_178;
        FUN_18020e930(local_4d0);
        local_578 = 0x800;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_4d0[0];
        if (local_4b8 < 0x10) {
          pppppppbVar24 = local_4d0;
          goto LAB_180126632;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126632:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar18 + 0x19);
        plVar17 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar22 = plVar18;
          if ((ulonglong)plVar18[4] < uVar20) {
            plVar18 = plVar18 + 2;
            plVar22 = plVar17;
          }
          plVar18 = (longlong *)*plVar18;
          plVar17 = plVar22;
          cVar1 = *(char *)((longlong)plVar18 + 0x19);
        }
        if ((*(char *)((longlong)plVar17 + 0x19) != '\0') || (uVar20 < (ulonglong)plVar17[4])) {
          plVar17 = (longlong *)*param_1;
        }
        if (plVar17 == (longlong *)*param_1) {
          local_574[1] = 0;
        }
        else {
          local_190 = (longlong *)0x0;
          plVar18 = plVar17 + 5;
          plVar22 = plVar18;
          if (0xf < (ulonglong)plVar17[8]) {
            plVar22 = (longlong *)*plVar18;
          }
          local_574[1] = strtol((char *)plVar22,(char **)&local_190,10);
          if (0xf < (ulonglong)plVar17[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_190 == plVar18) {
            local_574[1] = 0;
          }
        }
        piVar23 = local_574;
        if (-1 < local_574[1]) {
          piVar23 = local_574 + 1;
        }
        piVar19 = local_574 + 2;
        if (local_574[1] < 4) {
          piVar19 = piVar23;
        }
        local_140 = *piVar19;
        local_578 = 0;
        FUN_18020e450(local_4d0);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.r";
        local_598 = local_178;
        FUN_18020e930(local_4b0);
        local_578 = 0x1000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_4b0[0];
        if (local_498 < 0x10) {
          pppppppbVar24 = local_4b0;
          goto LAB_180126790;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126790:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1e0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_13c = strtof(plVar17,&local_1e0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1e0 == plVar18) goto LAB_18012681e;
        }
        else {
LAB_18012681e:
          local_13c = uVar4;
        }
        local_578 = 0;
        FUN_18020e450(local_4b0);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.g";
        local_598 = local_178;
        FUN_18020e930(local_490);
        local_578 = 0x2000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_490[0];
        if (local_478 < 0x10) {
          pppppppbVar24 = local_490;
          goto LAB_1801268c3;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801268c3:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1d8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_138 = strtof(plVar17,&local_1d8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1d8 == plVar18) goto LAB_180126951;
        }
        else {
LAB_180126951:
          local_138 = uVar6;
        }
        local_578 = 0;
        FUN_18020e450(local_490);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.b";
        local_598 = local_178;
        FUN_18020e930(local_470);
        local_578 = 0x4000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_470[0];
        if (local_458 < 0x10) {
          pppppppbVar24 = local_470;
          goto LAB_1801269f5;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801269f5:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1d0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_134 = strtof(plVar17,&local_1d0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1d0 == plVar18) goto LAB_180126a8d;
        }
        else {
LAB_180126a8d:
          local_134 = uVar7;
        }
        local_578 = 0;
        FUN_18020e450(local_470);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.a";
        local_598 = local_178;
        FUN_18020e930(local_450);
        local_578 = 0x8000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_450[0];
        if (local_438 < 0x10) {
          pppppppbVar24 = local_450;
          goto LAB_180126b34;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126b34:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1c8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_130 = strtof(plVar17,&local_1c8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1c8 == plVar18) goto LAB_180126bcd;
        }
        else {
LAB_180126bcd:
          local_130 = uVar7;
        }
        local_578 = 0;
        FUN_18020e450(local_450);
        if (0x7fffffffffffffffU - local_178 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 5;
        local_590 = "chams";
        local_598 = local_178;
        FUN_18020e930(local_430);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_430[0];
        if (local_418 < 0x10) {
          pppppppbVar24 = local_430;
          goto LAB_180126c80;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126c80:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_180126d15;
          }
          local_12c = 1;
        }
        else {
LAB_180126d15:
          local_12c = 0;
        }
        local_578 = 0;
        FUN_18020e450(local_430);
        local_574[0] = 1;
        lVar14 = 0;
        local_574[2] = 0;
        if (0x7fffffffffffffffU - local_178 < 10) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 10;
        local_590 = "chams_mode";
        local_598 = local_178;
        FUN_18020e930(local_410);
        local_578 = 0x20000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_410[0];
        if (local_3f8 < 0x10) {
          pppppppbVar24 = local_410;
          goto LAB_180126dd0;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126dd0:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar18 + 0x19);
        plVar17 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar22 = plVar18;
          if ((ulonglong)plVar18[4] < uVar20) {
            plVar18 = plVar18 + 2;
            plVar22 = plVar17;
          }
          plVar18 = (longlong *)*plVar18;
          plVar17 = plVar22;
          cVar1 = *(char *)((longlong)plVar18 + 0x19);
        }
        if ((*(char *)((longlong)plVar17 + 0x19) != '\0') || (uVar20 < (ulonglong)plVar17[4])) {
          plVar17 = (longlong *)*param_1;
        }
        if (plVar17 != (longlong *)*param_1) {
          local_1c0 = (longlong *)0x0;
          plVar18 = plVar17 + 5;
          plVar22 = plVar18;
          if (0xf < (ulonglong)plVar17[8]) {
            plVar22 = (longlong *)*plVar18;
          }
          lVar14 = strtol((char *)plVar22,(char **)&local_1c0,10);
          if (0xf < (ulonglong)plVar17[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1c0 == plVar18) {
            lVar14 = 0;
          }
        }
        local_574[1] = lVar14;
        piVar23 = local_574 + 2;
        if (-1 < lVar14) {
          piVar23 = local_574 + 1;
        }
        piVar19 = local_574;
        if (lVar14 < 2) {
          piVar19 = piVar23;
        }
        local_128 = *piVar19;
        local_578 = 0;
        FUN_18020e450(local_410);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thr.r";
        local_598 = local_178;
        FUN_18020e930(local_3f0);
        local_578 = 0x40000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_3f0[0];
        if (local_3d8 < 0x10) {
          pppppppbVar24 = local_3f0;
          goto LAB_180126f40;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126f40:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1b8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_124 = strtof(plVar17,&local_1b8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1b8 == plVar18) goto LAB_180126fcf;
        }
        else {
LAB_180126fcf:
          local_124 = uVar3;
        }
        local_578 = 0;
        FUN_18020e450(local_3f0);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thr.g";
        local_598 = local_178;
        FUN_18020e930(local_3d0);
        local_578 = 0x80000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_3d0[0];
        if (local_3b8 < 0x10) {
          pppppppbVar24 = local_3d0;
          goto LAB_180127083;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180127083:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1b0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_120 = strtof(plVar17,&local_1b0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1b0 == plVar18) goto LAB_18012711d;
        }
        else {
LAB_18012711d:
          local_120 = uVar6;
        }
        local_578 = 0;
        FUN_18020e450(local_3d0);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thr.b";
        local_598 = local_178;
        FUN_18020e930(local_3b0);
        local_578 = 0x100000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_3b0[0];
        if (local_398 < 0x10) {
          pppppppbVar24 = local_3b0;
          goto LAB_1801271d0;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801271d0:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1a8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_11c = strtof(plVar17,&local_1a8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1a8 == plVar18) goto LAB_180127263;
        }
        else {
LAB_180127263:
          local_11c = uVar7;
        }
        local_578 = 0;
        FUN_18020e450(local_3b0);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_vis.r";
        local_598 = local_178;
        FUN_18020e930(local_390);
        local_578 = 0x200000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_390[0];
        if (local_378 < 0x10) {
          pppppppbVar24 = local_390;
          goto LAB_180127316;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180127316:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1a0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          uVar27 = strtof(plVar17,&local_1a0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1a0 == plVar18) goto LAB_1801273ad;
        }
        else {
LAB_1801273ad:
          uVar27 = uVar7;
        }
        local_118 = CONCAT44(uVar27,(undefined4)local_118);
        local_578 = 0;
        FUN_18020e450(local_390);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_vis.g";
        local_598 = local_178;
        FUN_18020e930(local_310);
        local_578 = 0x400000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_310[0];
        if (local_2f8 < 0x10) {
          pppppppbVar24 = local_310;
          goto LAB_180127460;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180127460:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_198 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          uVar27 = strtof(plVar17,&local_198);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_198 == plVar18) goto LAB_1801274f3;
        }
        else {
LAB_1801274f3:
          uVar27 = uVar5;
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar27);
        local_578 = 0;
        FUN_18020e450(local_310);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_vis.b";
        local_598 = local_178;
        FUN_18020e930(local_370);
        local_578 = 0x800000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_370[0];
        if (local_358 < 0x10) {
          pppppppbVar24 = local_370;
          goto LAB_1801275a7;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801275a7:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1f0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          uVar27 = strtof(plVar17,&local_1f0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1f0 == plVar18) goto LAB_18012763d;
        }
        else {
LAB_18012763d:
          uVar27 = uVar2;
        }
        uStack_110 = CONCAT44(uVar27,(undefined4)uStack_110);
        local_578 = 0;
        FUN_18020e450(local_370);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_sharp";
        local_598 = local_178;
        FUN_18020e930(local_350);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_350[0];
        if (local_338 < 0x10) {
          pppppppbVar24 = local_350;
          goto LAB_1801276f4;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801276f4:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_18012778f;
          }
          local_104 = 1;
        }
        else {
LAB_18012778f:
          local_104 = 0;
        }
        local_578 = 0;
        FUN_18020e450(local_350);
        local_574[0] = 10;
        local_574[2] = 1;
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thick";
        local_598 = local_178;
        FUN_18020e930(local_230);
        local_578 = 0x2000000;
        local_574[1] = FUN_1801279d0(&local_558,local_230,2);
        piVar23 = local_574 + 2;
        if (0 < local_574[1]) {
          piVar23 = local_574 + 1;
        }
        piVar19 = local_574;
        if (local_574[1] < 0xb) {
          piVar19 = piVar23;
        }
        local_100 = *piVar19;
        local_578 = 0;
        uVar27 = FUN_18020e450(local_230);
        if (DAT_1803eb380 == DAT_1803eb388) {
          FUN_180225990(uVar27,DAT_1803eb380,&local_168);
        }
        else {
          FUN_180232650();
          DAT_1803eb380 = DAT_1803eb380 + 0xe;
        }
        FUN_18020e450(&local_168);
        FUN_18020e450(local_f8);
      }
      FUN_18020e450(local_188);
      iVar26 = iVar26 + 1;
    } while (iVar26 < iVar13);
  }
  if (DAT_1803eb378 != DAT_1803eb380) {
    DAT_1803e8978 = 0;
  }
  return;
}


