// 0x180188450  FUN_180188450
// size=6690 thunk=false
// signature: undefined FUN_180188450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180188450(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int *piVar14;
  byte ******ppppppbVar15;
  undefined1 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_498 [32];
  longlong local_478;
  char *local_470;
  undefined8 local_468;
  undefined4 local_458;
  longlong *local_450;
  longlong local_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined1 uStack_42f;
  undefined2 uStack_42e;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined8 uStack_424;
  undefined4 local_41c;
  ulong local_418;
  undefined1 uStack_414;
  undefined1 uStack_413;
  undefined1 uStack_412;
  undefined1 uStack_411;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  byte *****local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  ulonglong uStack_3d8;
  byte *****local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  ulonglong uStack_3b8;
  byte *****local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  ulonglong uStack_398;
  byte *****local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  ulonglong uStack_378;
  byte *****local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  ulonglong uStack_358;
  byte *****local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  ulonglong uStack_338;
  byte *****local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  ulonglong uStack_318;
  byte *****local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulonglong uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  byte *****local_2d0 [3];
  ulonglong local_2b8;
  byte *****local_2b0 [3];
  ulonglong local_298;
  byte *****local_290 [3];
  ulonglong local_278;
  byte *****local_270 [3];
  ulonglong local_258;
  byte *****local_250 [3];
  ulonglong local_238;
  byte *****local_230 [3];
  ulonglong local_218;
  byte *****local_210 [3];
  ulonglong local_1f8;
  byte *****local_1f0 [3];
  ulonglong local_1d8;
  byte *****local_1d0 [3];
  ulonglong local_1b8;
  byte *****local_1b0 [3];
  ulonglong local_198;
  undefined1 local_190 [32];
  undefined1 local_170 [32];
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [16];
  longlong local_c0;
  longlong *local_b0;
  ulonglong local_a8;
  
  uVar16 = DAT_1803e89e2;
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_498;
  local_458 = 0;
  if (DAT_1803edce0 != DAT_1803edce8) {
    DAT_1803edce8 = DAT_1803edce0;
  }
  local_3f0 = (byte *****)0x0;
  uStack_3e8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_450 = param_1;
  local_b0 = param_1;
  FUN_18001d080(&local_3f0,"players.show_friends",0x14);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_3f0;
  if (uStack_3d8 < 0x10) {
    ppppppbVar15 = &local_3f0;
    goto LAB_180188521;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_180188521:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 != (longlong *)0x0) {
    plVar11 = plVar10 + 2;
    plVar6 = plVar10;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar6 = (longlong *)*plVar10;
    }
    if ((*plVar11 != 1) || ((char)*plVar6 != '1')) {
      if (0xf < (ulonglong)plVar10[3]) {
        plVar10 = (longlong *)*plVar10;
      }
      if ((*plVar11 != 4) || ((int)*plVar10 != 0x65757274)) {
        uVar16 = 0;
        goto LAB_1801885bc;
      }
    }
    uVar16 = 1;
  }
LAB_1801885bc:
  DAT_1803e89e2 = uVar16;
  FUN_18020e450(&local_3f0);
  uVar16 = DAT_1803e89f8;
  local_410 = 0;
  uStack_408 = 0;
  local_400 = 0;
  uStack_3f8 = 0;
  FUN_18001d080(&local_410,"players.show_focus",0x12);
  piVar5 = (int *)FUN_180189e90(&local_b0,&local_410);
  if (piVar5 != (int *)0x0) {
    plVar11 = (longlong *)(piVar5 + 4);
    piVar14 = piVar5;
    if (0xf < *(ulonglong *)(piVar5 + 6)) {
      piVar14 = *(int **)piVar5;
    }
    if ((*plVar11 != 1) || ((char)*piVar14 != '1')) {
      if (0xf < *(ulonglong *)(piVar5 + 6)) {
        piVar5 = *(int **)piVar5;
      }
      if ((*plVar11 != 4) || (*piVar5 != 0x65757274)) {
        uVar16 = 0;
        goto LAB_18018864c;
      }
    }
    uVar16 = 1;
  }
LAB_18018864c:
  DAT_1803e89f8 = uVar16;
  FUN_18020e450(&local_410);
  uVar16 = DAT_1803e89e1;
  local_3d0 = (byte *****)0x0;
  uStack_3c8 = 0;
  local_3c0 = 0;
  uStack_3b8 = 0;
  FUN_18001d080(&local_3d0,"players.focus_tracer",0x14);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_3d0;
  if (uStack_3b8 < 0x10) {
    ppppppbVar15 = &local_3d0;
    goto LAB_1801886a2;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_1801886a2:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 != (longlong *)0x0) {
    plVar11 = plVar10 + 2;
    plVar6 = plVar10;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar6 = (longlong *)*plVar10;
    }
    if ((*plVar11 != 1) || ((char)*plVar6 != '1')) {
      if (0xf < (ulonglong)plVar10[3]) {
        plVar10 = (longlong *)*plVar10;
      }
      if ((*plVar11 != 4) || ((int)*plVar10 != 0x65757274)) {
        uVar16 = 0;
        goto LAB_18018873d;
      }
    }
    uVar16 = 1;
  }
LAB_18018873d:
  DAT_1803e89e1 = uVar16;
  FUN_18020e450(&local_3d0);
  uVar16 = DAT_18040a3d4;
  local_3b0 = (byte *****)0x0;
  uStack_3a8 = 0;
  local_3a0 = 0;
  uStack_398 = 0;
  FUN_18001d080(&local_3b0,"players.auto_steam",0x12);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_3b0;
  if (uStack_398 < 0x10) {
    ppppppbVar15 = &local_3b0;
    goto LAB_180188793;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_180188793:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 != (longlong *)0x0) {
    plVar11 = plVar10 + 2;
    plVar6 = plVar10;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar6 = (longlong *)*plVar10;
    }
    if ((*plVar11 != 1) || ((char)*plVar6 != '1')) {
      if (0xf < (ulonglong)plVar10[3]) {
        plVar10 = (longlong *)*plVar10;
      }
      if ((*plVar11 != 4) || ((int)*plVar10 != 0x65757274)) {
        uVar16 = 0;
        goto LAB_18018882e;
      }
    }
    uVar16 = 1;
  }
LAB_18018882e:
  DAT_18040a3d4 = uVar16;
  FUN_18020e450(&local_3b0);
  local_390 = (byte *****)0x0;
  uStack_388 = 0;
  local_380 = 0;
  uStack_378 = 0;
  FUN_18001d080(&local_390,"players.default_color.r",0x17);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_390;
  if (uStack_378 < 0x10) {
    ppppppbVar15 = &local_390;
    goto LAB_180188880;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_180188880:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  FUN_18020e450(&local_390);
  if (plVar10 != (longlong *)0x0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    DAT_1803e89e8 = strtof(plVar10,0);
  }
  local_370 = (byte *****)0x0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  FUN_18001d080(&local_370,"players.default_color.g",0x17);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_370;
  if (uStack_358 < 0x10) {
    ppppppbVar15 = &local_370;
    goto LAB_180188945;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_180188945:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  FUN_18020e450(&local_370);
  if (plVar10 != (longlong *)0x0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    DAT_1803e89ec = strtof(plVar10,0);
  }
  local_350 = (byte *****)0x0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  FUN_18001d080(&local_350,"players.default_color.b",0x17);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_350;
  if (uStack_338 < 0x10) {
    ppppppbVar15 = &local_350;
    goto LAB_180188a11;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_180188a11:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  FUN_18020e450(&local_350);
  if (plVar10 != (longlong *)0x0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    DAT_1803e89f0 = strtof(plVar10,0);
  }
  local_330 = (byte *****)0x0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  FUN_18001d080(&local_330,"players.default_color.a",0x17);
  uVar12 = 0x14650fb0739d0383;
  ppppppbVar15 = (byte ******)local_330;
  if (uStack_318 < 0x10) {
    ppppppbVar15 = &local_330;
    goto LAB_180188ae0;
  }
  for (; ppppppbVar15 != (byte ******)0x0; ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1))
  {
LAB_180188ae0:
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
  }
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  FUN_18020e450(&local_330);
  if (plVar10 != (longlong *)0x0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    DAT_1803e89f4 = strtof(plVar10,0);
  }
  iVar4 = 0;
  local_310 = (byte *****)0x0;
  uStack_308 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  FUN_18001d080(&local_310,"players.count",0xd);
  uVar12 = 0x14650fb0739d0383;
  if (uStack_2f8 < 0x10) {
    ppppppbVar15 = &local_310;
  }
  else {
    ppppppbVar15 = (byte ******)local_310;
    if ((byte ******)local_310 == (byte ******)0x0) goto LAB_180188bd4;
  }
  do {
    if (*(byte *)ppppppbVar15 == 0) break;
    uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
    ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1);
  } while (ppppppbVar15 != (byte ******)0x0);
LAB_180188bd4:
  plVar11 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar11[1];
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar6 = plVar11;
  while (cVar1 == '\0') {
    plVar13 = plVar10;
    if ((ulonglong)plVar10[4] < uVar12) {
      plVar10 = plVar10 + 2;
      plVar13 = plVar6;
    }
    plVar10 = (longlong *)*plVar10;
    plVar6 = plVar13;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
    plVar6 = plVar11;
  }
  plVar10 = plVar6 + 5;
  if (plVar6 == plVar11) {
    plVar10 = (longlong *)0x0;
  }
  FUN_18020e450(&local_310);
  if (plVar10 != (longlong *)0x0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    iVar4 = atoi((char *)plVar10);
  }
  lVar3 = _UNK_180381758;
  lVar2 = _DAT_180381750;
  iVar17 = 0;
  if (0 < iVar4) {
    do {
      uVar7 = FUN_180013ba0(local_f0,iVar17);
      puVar8 = (undefined8 *)FUN_18022a630(uVar7);
      local_2f0 = *puVar8;
      uStack_2e8 = puVar8[1];
      local_2e0 = puVar8[2];
      uStack_2d8 = puVar8[3];
      *(undefined1 *)puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      local_458 = 1;
      FUN_1801fc680(local_d0,&local_2f0,&DAT_18033ea54);
      local_458 = 0;
      FUN_18020e450(&local_2f0);
      FUN_18020e450(local_f0);
      if (0x7fffffffffffffffU - local_c0 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_468 = 7;
      local_470 = "steam64";
      local_478 = local_c0;
      FUN_18020e930(local_2d0);
      uVar12 = 0x14650fb0739d0383;
      ppppppbVar15 = (byte ******)local_2d0[0];
      if (local_2b8 < 0x10) {
        ppppppbVar15 = local_2d0;
        goto LAB_180188d83;
      }
      for (; ppppppbVar15 != (byte ******)0x0;
          ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180188d83:
        if (*(byte *)ppppppbVar15 == 0) break;
        uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
      }
      plVar11 = (longlong *)*param_1;
      plVar10 = (longlong *)plVar11[1];
      cVar1 = *(char *)((longlong)plVar10 + 0x19);
      plVar6 = plVar11;
      while (cVar1 == '\0') {
        plVar13 = plVar10;
        if ((ulonglong)plVar10[4] < uVar12) {
          plVar10 = plVar10 + 2;
          plVar13 = plVar6;
        }
        plVar10 = (longlong *)*plVar10;
        plVar6 = plVar13;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
      }
      if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
        plVar6 = plVar11;
      }
      plVar10 = plVar6 + 5;
      if (plVar6 == plVar11) {
        plVar10 = (longlong *)0x0;
      }
      local_458 = 0;
      FUN_18020e450(local_2d0);
      if (plVar10 != (longlong *)0x0) {
        uStack_440 = lVar2;
        uStack_438 = lVar3;
        uStack_430 = 0;
        uStack_42f = 0;
        uStack_42c = (undefined4)lVar2;
        uStack_428 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uStack_424 = lVar3;
        local_41c = CONCAT31(local_41c._1_3_,1);
        local_418 = 0;
        uStack_414 = 0;
        uStack_413 = 0;
        uStack_412 = 0;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        lVar9 = strtoull(plVar10,0,10);
        local_448 = lVar9;
        if (0x7fffffffffffffffU - local_c0 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.r";
        local_478 = local_c0;
        FUN_18020e930(local_2b0);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_2b0[0];
        if (local_298 < 0x10) {
          ppppppbVar15 = local_2b0;
          goto LAB_180188ee0;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180188ee0:
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)*param_1;
        plVar10 = (longlong *)plVar11[1];
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        plVar6 = plVar11;
        while (cVar1 == '\0') {
          plVar13 = plVar10;
          if ((ulonglong)plVar10[4] < uVar12) {
            plVar10 = plVar10 + 2;
            plVar13 = plVar6;
          }
          plVar10 = (longlong *)*plVar10;
          plVar6 = plVar13;
          cVar1 = *(char *)((longlong)plVar10 + 0x19);
        }
        if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
          plVar6 = plVar11;
        }
        plVar10 = plVar6 + 5;
        if (plVar6 == plVar11) {
          plVar10 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_2b0);
        if (plVar10 == (longlong *)0x0) {
          uVar18 = (undefined4)uStack_440;
        }
        else {
          if (0xf < (ulonglong)plVar10[3]) {
            plVar10 = (longlong *)*plVar10;
          }
          uVar18 = strtof(plVar10,0);
          uStack_440 = CONCAT44(uStack_440._4_4_,uVar18);
        }
        if (0x7fffffffffffffffU - local_c0 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.g";
        local_478 = local_c0;
        FUN_18020e930(local_290);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_290[0];
        if (local_278 < 0x10) {
          ppppppbVar15 = local_290;
          goto LAB_180189008;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189008:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)*param_1;
        plVar10 = (longlong *)plVar11[1];
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        plVar6 = plVar11;
        while (cVar1 == '\0') {
          plVar13 = plVar10;
          if ((ulonglong)plVar10[4] < uVar12) {
            plVar10 = plVar10 + 2;
            plVar13 = plVar6;
          }
          plVar10 = (longlong *)*plVar10;
          plVar6 = plVar13;
          cVar1 = *(char *)((longlong)plVar10 + 0x19);
        }
        if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
          plVar6 = plVar11;
        }
        plVar10 = plVar6 + 5;
        if (plVar6 == plVar11) {
          plVar10 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_290);
        if (plVar10 == (longlong *)0x0) {
          uVar19 = uStack_440._4_4_;
        }
        else {
          if (0xf < (ulonglong)plVar10[3]) {
            plVar10 = (longlong *)*plVar10;
          }
          uVar19 = strtof(plVar10,0);
          uStack_440 = CONCAT44(uVar19,(undefined4)uStack_440);
        }
        if (0x7fffffffffffffffU - local_c0 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.b";
        local_478 = local_c0;
        FUN_18020e930(local_270);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_270[0];
        if (local_258 < 0x10) {
          ppppppbVar15 = local_270;
          goto LAB_180189134;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189134:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)*param_1;
        plVar10 = (longlong *)plVar11[1];
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        plVar6 = plVar11;
        while (cVar1 == '\0') {
          plVar13 = plVar10;
          if ((ulonglong)plVar10[4] < uVar12) {
            plVar10 = plVar10 + 2;
            plVar13 = plVar6;
          }
          plVar10 = (longlong *)*plVar10;
          plVar6 = plVar13;
          cVar1 = *(char *)((longlong)plVar10 + 0x19);
        }
        if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
          plVar6 = plVar11;
        }
        plVar10 = plVar6 + 5;
        if (plVar6 == plVar11) {
          plVar10 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_270);
        if (plVar10 == (longlong *)0x0) {
          uVar20 = (undefined4)uStack_438;
        }
        else {
          if (0xf < (ulonglong)plVar10[3]) {
            plVar10 = (longlong *)*plVar10;
          }
          uVar20 = strtof(plVar10,0);
          uStack_438 = CONCAT44(uStack_438._4_4_,uVar20);
        }
        if (0x7fffffffffffffffU - local_c0 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 7;
        local_470 = "color.a";
        local_478 = local_c0;
        FUN_18020e930(local_250);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_250[0];
        if (local_238 < 0x10) {
          ppppppbVar15 = local_250;
          goto LAB_180189260;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189260:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)*param_1;
        plVar10 = (longlong *)plVar11[1];
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        plVar6 = plVar11;
        while (cVar1 == '\0') {
          plVar13 = plVar10;
          if ((ulonglong)plVar10[4] < uVar12) {
            plVar10 = plVar10 + 2;
            plVar13 = plVar6;
          }
          plVar10 = (longlong *)*plVar10;
          plVar6 = plVar13;
          cVar1 = *(char *)((longlong)plVar10 + 0x19);
        }
        if ((*(char *)((longlong)plVar6 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar6[4])) {
          plVar6 = plVar11;
        }
        plVar10 = plVar6 + 5;
        if (plVar6 == plVar11) {
          plVar10 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_250);
        if (plVar10 == (longlong *)0x0) {
          uVar21 = uStack_438._4_4_;
        }
        else {
          if (0xf < (ulonglong)plVar10[3]) {
            plVar10 = (longlong *)*plVar10;
          }
          uVar21 = strtof(plVar10,0);
          uStack_438 = CONCAT44(uVar21,(undefined4)uStack_438);
        }
        if (0x7fffffffffffffffU - local_c0 < 9) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 9;
        local_470 = "highlight";
        local_478 = local_c0;
        FUN_18020e930(&local_410);
        local_458 = 0x20;
        piVar5 = (int *)FUN_180189e90(&local_b0,&local_410);
        if (piVar5 == (int *)0x0) {
LAB_1801893b3:
          uStack_430 = 0;
        }
        else {
          plVar11 = (longlong *)(piVar5 + 4);
          piVar14 = piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar14 = *(int **)piVar5;
          }
          if ((*plVar11 != 1) || ((char)*piVar14 != '1')) {
            if (0xf < *(ulonglong *)(piVar5 + 6)) {
              piVar5 = *(int **)piVar5;
            }
            if ((*plVar11 != 4) || (*piVar5 != 0x65757274)) goto LAB_1801893b3;
          }
          uStack_430 = 1;
        }
        local_458 = 0;
        FUN_18020e450(&local_410);
        if (0x7fffffffffffffffU - local_c0 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "highlight_text";
        local_478 = local_c0;
        FUN_18020e930(local_190);
        local_458 = 0x40;
        piVar5 = (int *)FUN_180189e90(&local_b0,local_190);
        if (piVar5 == (int *)0x0) {
LAB_180189477:
          uStack_42f = 0;
        }
        else {
          plVar11 = (longlong *)(piVar5 + 4);
          piVar14 = piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar14 = *(int **)piVar5;
          }
          if ((*plVar11 != 1) || ((char)*piVar14 != '1')) {
            if (0xf < *(ulonglong *)(piVar5 + 6)) {
              piVar5 = *(int **)piVar5;
            }
            if ((*plVar11 != 4) || (*piVar5 != 0x65757274)) goto LAB_180189477;
          }
          uStack_42f = 1;
        }
        local_458 = 0;
        FUN_18020e450(local_190);
        uStack_424 = CONCAT44(uVar21,uVar20);
        uStack_42c = uVar18;
        uStack_428 = uVar19;
        if (0x7fffffffffffffffU - local_c0 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.r";
        local_478 = local_c0;
        FUN_18020e930(local_230);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_230[0];
        if (local_218 < 0x10) {
          ppppppbVar15 = local_230;
          goto LAB_180189532;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189532:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        plVar10 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar6 = plVar11;
          if ((ulonglong)plVar11[4] < uVar12) {
            plVar11 = plVar11 + 2;
            plVar6 = plVar10;
          }
          plVar11 = (longlong *)*plVar11;
          plVar10 = plVar6;
          cVar1 = *(char *)((longlong)plVar11 + 0x19);
        }
        if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
          plVar10 = (longlong *)*param_1;
        }
        plVar11 = plVar10 + 5;
        if (plVar10 == (longlong *)*param_1) {
          plVar11 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_230);
        if (plVar11 != (longlong *)0x0) {
          if (0xf < (ulonglong)plVar11[3]) {
            plVar11 = (longlong *)*plVar11;
          }
          uStack_42c = strtof(plVar11,0);
        }
        if (0x7fffffffffffffffU - local_c0 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.g";
        local_478 = local_c0;
        FUN_18020e930(local_210);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_210[0];
        if (local_1f8 < 0x10) {
          ppppppbVar15 = local_210;
          goto LAB_180189650;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189650:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        plVar10 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar6 = plVar11;
          if ((ulonglong)plVar11[4] < uVar12) {
            plVar11 = plVar11 + 2;
            plVar6 = plVar10;
          }
          plVar11 = (longlong *)*plVar11;
          plVar10 = plVar6;
          cVar1 = *(char *)((longlong)plVar11 + 0x19);
        }
        if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
          plVar10 = (longlong *)*param_1;
        }
        plVar11 = plVar10 + 5;
        if (plVar10 == (longlong *)*param_1) {
          plVar11 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_210);
        if (plVar11 != (longlong *)0x0) {
          if (0xf < (ulonglong)plVar11[3]) {
            plVar11 = (longlong *)*plVar11;
          }
          uStack_428 = strtof(plVar11,0);
        }
        if (0x7fffffffffffffffU - local_c0 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.b";
        local_478 = local_c0;
        FUN_18020e930(local_1f0);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_1f0[0];
        if (local_1d8 < 0x10) {
          ppppppbVar15 = local_1f0;
          goto LAB_180189770;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189770:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        plVar10 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar6 = plVar11;
          if ((ulonglong)plVar11[4] < uVar12) {
            plVar11 = plVar11 + 2;
            plVar6 = plVar10;
          }
          plVar11 = (longlong *)*plVar11;
          plVar10 = plVar6;
          cVar1 = *(char *)((longlong)plVar11 + 0x19);
        }
        if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
          plVar10 = (longlong *)*param_1;
        }
        plVar11 = plVar10 + 5;
        if (plVar10 == (longlong *)*param_1) {
          plVar11 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_1f0);
        if (plVar11 != (longlong *)0x0) {
          if (0xf < (ulonglong)plVar11[3]) {
            plVar11 = (longlong *)*plVar11;
          }
          uVar18 = strtof(plVar11,0);
          uStack_424 = CONCAT44(uStack_424._4_4_,uVar18);
        }
        if (0x7fffffffffffffffU - local_c0 < 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xc;
        local_470 = "text_color.a";
        local_478 = local_c0;
        FUN_18020e930(local_1d0);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_1d0[0];
        if (local_1b8 < 0x10) {
          ppppppbVar15 = local_1d0;
          goto LAB_180189890;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189890:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        plVar10 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar6 = plVar11;
          if ((ulonglong)plVar11[4] < uVar12) {
            plVar11 = plVar11 + 2;
            plVar6 = plVar10;
          }
          plVar11 = (longlong *)*plVar11;
          plVar10 = plVar6;
          cVar1 = *(char *)((longlong)plVar11 + 0x19);
        }
        if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
          plVar10 = (longlong *)*param_1;
        }
        plVar11 = plVar10 + 5;
        if (plVar10 == (longlong *)*param_1) {
          plVar11 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_1d0);
        if (plVar11 != (longlong *)0x0) {
          if (0xf < (ulonglong)plVar11[3]) {
            plVar11 = (longlong *)*plVar11;
          }
          uVar18 = strtof(plVar11,0);
          uStack_424 = CONCAT44(uVar18,(undefined4)uStack_424);
        }
        if (0x7fffffffffffffffU - local_c0 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "text_scope_all";
        local_478 = local_c0;
        FUN_18020e930(local_170);
        local_458 = 0x800;
        piVar5 = (int *)FUN_180189e90(&local_b0,local_170);
        if (piVar5 == (int *)0x0) {
LAB_1801899d6:
          uVar16 = 1;
        }
        else {
          plVar11 = (longlong *)(piVar5 + 4);
          piVar14 = piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar14 = *(int **)piVar5;
          }
          if ((*plVar11 == 1) && ((char)*piVar14 == '1')) goto LAB_1801899d6;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar5 = *(int **)piVar5;
          }
          if ((*plVar11 == 4) && (*piVar5 == 0x65757274)) goto LAB_1801899d6;
          uVar16 = 0;
        }
        local_41c = CONCAT31(local_41c._1_3_,uVar16);
        local_458 = 0;
        FUN_18020e450(local_170);
        if (0x7fffffffffffffffU - local_c0 < 0xf) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xf;
        local_470 = "text_scope_mask";
        local_478 = local_c0;
        FUN_18020e930(local_1b0);
        uVar12 = 0x14650fb0739d0383;
        ppppppbVar15 = (byte ******)local_1b0[0];
        if (local_198 < 0x10) {
          ppppppbVar15 = local_1b0;
          goto LAB_180189a80;
        }
        for (; ppppppbVar15 != (byte ******)0x0;
            ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1)) {
LAB_180189a80:
          param_1 = local_450;
          if (*(byte *)ppppppbVar15 == 0) break;
          uVar12 = (uVar12 ^ *(byte *)ppppppbVar15) * 0x100000001b3;
        }
        plVar11 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        plVar10 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar6 = plVar11;
          if ((ulonglong)plVar11[4] < uVar12) {
            plVar11 = plVar11 + 2;
            plVar6 = plVar10;
          }
          plVar11 = (longlong *)*plVar11;
          plVar10 = plVar6;
          cVar1 = *(char *)((longlong)plVar11 + 0x19);
        }
        if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar12 < (ulonglong)plVar10[4])) {
          plVar10 = (longlong *)*param_1;
        }
        plVar11 = plVar10 + 5;
        if (plVar10 == (longlong *)*param_1) {
          plVar11 = (longlong *)0x0;
        }
        local_458 = 0;
        FUN_18020e450(local_1b0);
        if (plVar11 != (longlong *)0x0) {
          if (0xf < (ulonglong)plVar11[3]) {
            plVar11 = (longlong *)*plVar11;
          }
          local_418 = strtoul((char *)plVar11,(char **)0x0,10);
        }
        if (0x7fffffffffffffffU - local_c0 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 6;
        local_470 = "tracer";
        local_478 = local_c0;
        FUN_18020e930(local_150);
        local_458 = 0x2000;
        piVar5 = (int *)FUN_180189e90(&local_b0,local_150);
        if (piVar5 == (int *)0x0) {
LAB_180189bc9:
          uStack_414 = 0;
        }
        else {
          plVar11 = (longlong *)(piVar5 + 4);
          piVar14 = piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar14 = *(int **)piVar5;
          }
          if ((*plVar11 != 1) || ((char)*piVar14 != '1')) {
            if (0xf < *(ulonglong *)(piVar5 + 6)) {
              piVar5 = *(int **)piVar5;
            }
            if ((*plVar11 != 4) || (*piVar5 != 0x65757274)) goto LAB_180189bc9;
          }
          uStack_414 = 1;
        }
        local_458 = 0;
        FUN_18020e450(local_150);
        if (0x7fffffffffffffffU - local_c0 < 0xd) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xd;
        local_470 = "ignore_aimbot";
        local_478 = local_c0;
        FUN_18020e930(local_130);
        local_458 = 0x4000;
        piVar5 = (int *)FUN_180189e90(&local_b0,local_130);
        if (piVar5 == (int *)0x0) {
LAB_180189c91:
          uStack_413 = 0;
        }
        else {
          plVar11 = (longlong *)(piVar5 + 4);
          piVar14 = piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar14 = *(int **)piVar5;
          }
          if ((*plVar11 != 1) || ((char)*piVar14 != '1')) {
            if (0xf < *(ulonglong *)(piVar5 + 6)) {
              piVar5 = *(int **)piVar5;
            }
            if ((*plVar11 != 4) || (*piVar5 != 0x65757274)) goto LAB_180189c91;
          }
          uStack_413 = 1;
        }
        local_458 = 0;
        FUN_18020e450(local_130);
        if (0x7fffffffffffffffU - local_c0 < 0xe) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_468 = 0xe;
        local_470 = "ignore_visuals";
        local_478 = local_c0;
        FUN_18020e930(local_110);
        local_458 = 0x8000;
        piVar5 = (int *)FUN_180189e90(&local_b0,local_110);
        if (piVar5 == (int *)0x0) {
LAB_180189d59:
          uStack_412 = 0;
        }
        else {
          plVar11 = (longlong *)(piVar5 + 4);
          piVar14 = piVar5;
          if (0xf < *(ulonglong *)(piVar5 + 6)) {
            piVar14 = *(int **)piVar5;
          }
          if ((*plVar11 != 1) || ((char)*piVar14 != '1')) {
            if (0xf < *(ulonglong *)(piVar5 + 6)) {
              piVar5 = *(int **)piVar5;
            }
            if ((*plVar11 != 4) || (*piVar5 != 0x65757274)) goto LAB_180189d59;
          }
          uStack_412 = 1;
        }
        local_458 = 0;
        uVar18 = FUN_18020e450(local_110);
        plVar11 = DAT_1803edce8;
        if (lVar9 != 0) {
          if (DAT_1803edce8 == DAT_1803edcf0) {
            FUN_1802225c0(uVar18,DAT_1803edce8,&local_448);
          }
          else {
            *DAT_1803edce8 = local_448;
            plVar11[1] = uStack_440;
            plVar11[2] = uStack_438;
            plVar11[3] = CONCAT44(uStack_42c,CONCAT22(uStack_42e,CONCAT11(uStack_42f,uStack_430)));
            *(undefined4 *)(plVar11 + 4) = uStack_428;
            *(undefined4 *)((longlong)plVar11 + 0x24) = (undefined4)uStack_424;
            *(undefined4 *)(plVar11 + 5) = uStack_424._4_4_;
            *(undefined4 *)((longlong)plVar11 + 0x2c) = local_41c;
            plVar11[6] = CONCAT17(uStack_411,
                                  CONCAT16(uStack_412,
                                           CONCAT15(uStack_413,CONCAT14(uStack_414,local_418))));
            DAT_1803edce8 = DAT_1803edce8 + 7;
          }
        }
      }
      FUN_18020e450(local_d0);
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar4);
  }
  return;
}


