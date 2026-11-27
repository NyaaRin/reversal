// 0x18002a1c0  FUN_18002a1c0
// size=4985 thunk=false
// signature: undefined FUN_18002a1c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18002a1c0(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  byte ****ppppbVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_538 [32];
  longlong local_518;
  char *local_510;
  undefined8 local_508;
  undefined4 local_4f8;
  ulonglong local_4f0;
  undefined8 ***local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  ulonglong uStack_4d0;
  undefined8 ***local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  ulonglong uStack_4b0;
  undefined8 ***local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  ulonglong uStack_490;
  undefined8 ***local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  ulonglong uStack_470;
  undefined8 ***local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  ulonglong uStack_450;
  undefined8 ***local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  ulonglong uStack_430;
  undefined8 ***local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  ulonglong uStack_410;
  undefined8 ***local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  ulonglong uStack_3f0;
  undefined8 ***local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  ulonglong uStack_3d0;
  undefined8 ***local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  ulonglong uStack_3b0;
  undefined8 ***local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  ulonglong uStack_390;
  byte ***local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  ulonglong uStack_370;
  byte ***local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  ulonglong uStack_350;
  byte ***local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  ulonglong uStack_330;
  byte ***local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  ulonglong uStack_310;
  byte ***local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  ulonglong uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  byte ***local_2c8 [3];
  ulonglong local_2b0;
  byte ***local_2a8 [3];
  ulonglong local_290;
  byte ***local_288 [3];
  ulonglong local_270;
  byte ***local_268 [3];
  ulonglong local_250;
  byte ***local_248 [3];
  ulonglong local_230;
  byte ***local_228 [3];
  ulonglong local_210;
  undefined *local_208;
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined8 uStack_88;
  char local_80 [24];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_538;
  local_4f8 = 0;
  local_208 = &DAT_1803e9140;
  iVar3 = _Mtx_lock(&DAT_1803e9140);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e918c == 0x7fffffff) {
    DAT_1803e918c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180423751 == '\0') {
    FUN_180029fc0();
  }
  FUN_1801fc280(param_1,"\n# Netvar sources\n");
  local_328 = (byte ***)0x0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  FUN_18001d080(&local_328,"netvars.version",0xf);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_328;
  if (uStack_310 < 0x10) {
    ppppbVar11 = &local_328;
    goto LAB_18002a2d0;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a2d0:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_488 = (undefined8 ****)0x0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_488,local_80,sVar4);
  local_4f8 = 0x400000;
  ppppuVar12 = &local_488;
  if (0xf < uStack_470) {
    ppppuVar12 = (undefined8 ****)local_488;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_478);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5,&DAT_18034118c);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,6);
  FUN_1801fc280(pbVar7,&DAT_18033e92c);
  local_4f8 = 0;
  FUN_18020e450(&local_488);
  FUN_18020e450(&local_328);
  local_308 = (byte ***)0x0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_18001d080(&local_308,"netvars.override.name",0x15);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_308;
  if (uStack_2f0 < 0x10) {
    ppppbVar11 = &local_308;
    goto LAB_18002a3f8;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a3f8:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_468 = (undefined8 ****)0x0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_468,local_80,sVar4);
  local_4f8 = 0x1000000;
  ppppuVar12 = &local_468;
  if (0xf < uStack_450) {
    ppppuVar12 = (undefined8 ****)local_468;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_458);
  uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
  puVar8 = (undefined8 *)FUN_180029880(local_1c0,&DAT_1803ebb90,0x80);
  puVar9 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
  FUN_1801fc280(uVar5,&DAT_18033e92c);
  FUN_18020e450(local_1c0);
  local_4f8 = 0;
  FUN_18020e450(&local_468);
  FUN_18020e450(&local_308);
  local_388 = (byte ***)0x0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  FUN_18001d080(&local_388,"netvars.override.group",0x16);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_388;
  if (uStack_370 < 0x10) {
    ppppbVar11 = &local_388;
    goto LAB_18002a554;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a554:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_448 = (undefined8 ****)0x0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_448,local_80,sVar4);
  local_4f8 = 0x4000000;
  ppppuVar12 = &local_448;
  if (0xf < uStack_430) {
    ppppuVar12 = (undefined8 ****)local_448;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_438);
  uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
  puVar8 = (undefined8 *)FUN_180029880(local_1a0,&DAT_1803e9ae8,0x80);
  puVar9 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
  FUN_1801fc280(uVar5,&DAT_18033e92c);
  FUN_18020e450(local_1a0);
  local_4f8 = 0;
  FUN_18020e450(&local_448);
  FUN_18020e450(&local_388);
  local_368 = (byte ***)0x0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  FUN_18001d080(&local_368,"netvars.override.job",0x14);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_368;
  if (uStack_350 < 0x10) {
    ppppbVar11 = &local_368;
    goto LAB_18002a6b0;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a6b0:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_428 = (undefined8 ****)0x0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_428,local_80,sVar4);
  local_4f8 = 0x40000000;
  ppppuVar12 = &local_428;
  if (0xf < uStack_410) {
    ppppuVar12 = (undefined8 ****)local_428;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_418);
  uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
  puVar8 = (undefined8 *)FUN_180029880(local_180,&DAT_1803ea258,0x80);
  puVar9 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
  FUN_1801fc280(uVar5,&DAT_18033e92c);
  FUN_18020e450(local_180);
  local_4f8 = 0;
  FUN_18020e450(&local_428);
  FUN_18020e450(&local_368);
  local_348 = (byte ***)0x0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  FUN_18001d080(&local_348,"netvars.count",0xd);
  uVar13 = 0x14650fb0739d0383;
  if (uStack_330 < 0x10) {
    ppppbVar11 = &local_348;
  }
  else {
    ppppbVar11 = (byte ****)local_348;
    if ((byte ****)local_348 == (byte ****)0x0) goto LAB_18002a824;
  }
  do {
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
    ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1);
  } while (ppppbVar11 != (byte ****)0x0);
LAB_18002a824:
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_408 = (undefined8 ****)0x0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_408,local_80,sVar4);
  local_4f8 = 0x10000000;
  ppppuVar12 = &local_408;
  if (0xf < uStack_3f0) {
    ppppuVar12 = (undefined8 ****)local_408;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_3f8);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5,&DAT_18034118c);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar6,(DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5);
  FUN_1801fc280(pbVar7);
  local_4f8 = 0;
  FUN_18020e450(&local_408);
  FUN_18020e450(&local_348);
  local_4f0 = 0;
  if ((DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5 != 0) {
    do {
      lVar14 = local_4f0 * 0x68 + DAT_1803e9b08;
      uVar5 = FUN_180013d70(local_160);
      puVar9 = (undefined8 *)FUN_18022a630(uVar5);
      local_2e8 = *puVar9;
      uStack_2e0 = puVar9[1];
      local_2d8 = puVar9[2];
      uStack_2d0 = puVar9[3];
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      local_4f8 = 0x800;
      puVar10 = (undefined4 *)FUN_18021aef0(&local_2e8,&DAT_18033ea54,1);
      local_a0 = *puVar10;
      uStack_9c = puVar10[1];
      uStack_98 = puVar10[2];
      uStack_94 = puVar10[3];
      lVar2 = *(longlong *)(puVar10 + 4);
      uStack_88 = *(undefined8 *)(puVar10 + 6);
      *(undefined1 *)puVar10 = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      local_4f8 = 0x1000;
      local_90 = lVar2;
      FUN_18020e450(&local_2e8);
      FUN_18020e450(local_160);
      if (0x7fffffffffffffffU - lVar2 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 4;
      local_510 = "path";
      local_518 = lVar2;
      FUN_18020e930(local_2c8);
      local_4f8 = 0x3000;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_2c8[0];
      if (local_2b0 < 0x10) {
        ppppbVar11 = local_2c8;
        goto LAB_18002aa95;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002aa95:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_3e8 = (undefined8 ****)0x0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_3e8,local_80,sVar4);
      local_4f8 = 0x7000;
      ppppuVar12 = &local_3e8;
      if (0xf < uStack_3d0) {
        ppppuVar12 = (undefined8 ****)local_3e8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_3d8);
      uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
      puVar8 = (undefined8 *)FUN_180029880(local_140,lVar14 + 8,0x80);
      puVar9 = puVar8 + 2;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
      FUN_1801fc280(uVar5,&DAT_18033e92c);
      FUN_18020e450(local_140);
      local_4f8 = 0x3000;
      FUN_18020e450(&local_3e8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_2c8);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 7;
      local_510 = "enabled";
      local_518 = local_90;
      FUN_18020e930(local_2a8);
      local_4f8 = 0x11000;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_2a8[0];
      if (local_290 < 0x10) {
        ppppbVar11 = local_2a8;
        goto LAB_18002ac30;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002ac30:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_3c8 = (undefined8 ****)0x0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_3c8,local_80,sVar4);
      local_4f8 = 0x31000;
      ppppuVar12 = &local_3c8;
      if (0xf < uStack_3b0) {
        ppppuVar12 = (undefined8 ****)local_3c8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_3b8);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,(uint)(*(char *)(lVar14 + 0x40) != '\0'));
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x11000;
      FUN_18020e450(&local_3c8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_2a8);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 0xb;
      local_510 = "tpl_enabled";
      local_518 = local_90;
      FUN_18020e930(local_288);
      local_4f8 = 0x81000;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_288[0];
      if (local_270 < 0x10) {
        ppppbVar11 = local_288;
        goto LAB_18002ada0;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002ada0:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_3a8 = (undefined8 ****)0x0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_3a8,local_80,sVar4);
      local_4f8 = 0x181000;
      ppppuVar12 = &local_3a8;
      if (0xf < uStack_390) {
        ppppuVar12 = (undefined8 ****)local_3a8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_398);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,(uint)(*(char *)(lVar14 + 0x41) != '\0'));
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x81000;
      FUN_18020e450(&local_3a8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_288);
      if (0x7fffffffffffffffU - local_90 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 3;
      local_510 = "tpl";
      local_518 = local_90;
      FUN_18020e930(local_268);
      local_4f8 = 0x1004;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_268[0];
      if (local_250 < 0x10) {
        ppppbVar11 = local_268;
        goto LAB_18002af17;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002af17:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_4e8 = (undefined8 ****)0x0;
      uStack_4e0 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_4e8,local_80,sVar4);
      local_4f8 = 0x100c;
      ppppuVar12 = &local_4e8;
      if (0xf < uStack_4d0) {
        ppppuVar12 = (undefined8 ****)local_4e8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_4d8);
      uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
      puVar8 = (undefined8 *)FUN_180029880(local_120,lVar14 + 0x48,0x80);
      puVar9 = puVar8 + 2;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
      FUN_1801fc280(uVar5,&DAT_18033e92c);
      FUN_18020e450(local_120);
      local_4f8 = 0x1004;
      FUN_18020e450(&local_4e8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_268);
      if (0x7fffffffffffffffU - local_90 < 9) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 9;
      local_510 = "tpl_first";
      local_518 = local_90;
      FUN_18020e930(local_248);
      local_4f8 = 0x1020;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_248[0];
      if (local_230 < 0x10) {
        ppppbVar11 = local_248;
        goto LAB_18002b0b1;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002b0b1:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_4c8 = (undefined8 ****)0x0;
      uStack_4c0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_4c8,local_80,sVar4);
      local_4f8 = 0x1060;
      ppppuVar12 = &local_4c8;
      if (0xf < uStack_4b0) {
        ppppuVar12 = (undefined8 ****)local_4c8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_4b8);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,(uint)(*(char *)(lVar14 + 0x42) != '\0'));
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x1020;
      FUN_18020e450(&local_4c8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_248);
      if (0x7fffffffffffffffU - local_90 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 8;
      local_510 = "keycount";
      local_518 = local_90;
      FUN_18020e930(local_228);
      local_4f8 = 0x1100;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_228[0];
      if (local_210 < 0x10) {
        ppppbVar11 = local_228;
        goto LAB_18002b213;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002b213:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_4a8 = (undefined8 ****)0x0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_4a8,local_80,sVar4);
      local_4f8 = 0x1300;
      ppppuVar12 = &local_4a8;
      if (0xf < uStack_490) {
        ppppuVar12 = (undefined8 ****)local_4a8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_498);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5,&DAT_18034118c);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5);
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x1100;
      FUN_18020e450(&local_4a8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_228);
      uVar13 = 0;
      if (*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5 != 0) {
        do {
          FUN_180013d70(local_c0,uVar13);
          if (0x7fffffffffffffffU - local_90 < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_508 = 4;
          local_510 = "key.";
          local_518 = local_90;
          FUN_18020e930(local_1e0);
          local_4f8 = 0x1001;
          FUN_18021e540(local_200);
          local_4f8 = 0x1003;
          puVar8 = (undefined8 *)FUN_180014fa0(local_e0,local_200);
          puVar9 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar8 = (undefined8 *)*puVar8;
          }
          uVar5 = FUN_180210c60(param_1,puVar8,*puVar9);
          uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
          puVar8 = (undefined8 *)
                   FUN_180029880(local_100,uVar13 * 0x20 + *(longlong *)(lVar14 + 0x28),0x40);
          puVar9 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar8 = (undefined8 *)*puVar8;
          }
          uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
          FUN_1801fc280(uVar5,&DAT_18033e92c);
          FUN_18020e450(local_100);
          FUN_18020e450(local_e0);
          local_4f8 = 0x1001;
          FUN_18020e450(local_200);
          local_4f8 = 0x1000;
          FUN_18020e450(local_1e0);
          FUN_18020e450(local_c0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulonglong)
                          (*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5));
      }
      local_4f8 = 0;
      FUN_18020e450(&local_a0);
      local_4f0 = local_4f0 + 1;
    } while (local_4f0 < (ulonglong)((DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  _Mtx_unlock(&DAT_1803e9140);
  return;
}


