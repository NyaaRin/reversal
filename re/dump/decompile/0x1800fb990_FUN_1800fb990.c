// 0x1800fb990  FUN_1800fb990
// size=6811 thunk=false
// signature: undefined FUN_1800fb990()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800fb990(undefined8 param_1)

{
  longlong lVar1;
  size_t sVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  byte ****ppppbVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_568 [32];
  longlong local_548;
  char *local_540;
  undefined8 local_538;
  undefined4 local_528;
  undefined4 local_524;
  undefined8 ***local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  ulonglong uStack_508;
  undefined8 ***local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  ulonglong uStack_4e8;
  undefined8 ***local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  ulonglong uStack_4c8;
  undefined8 ***local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  ulonglong uStack_4a8;
  undefined8 ***local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  ulonglong uStack_488;
  undefined8 ***local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  ulonglong uStack_468;
  undefined8 ***local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  ulonglong uStack_448;
  undefined8 ***local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  ulonglong uStack_428;
  undefined8 ***local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  ulonglong uStack_408;
  undefined8 ***local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  ulonglong uStack_3e8;
  undefined8 ***local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  ulonglong uStack_3c8;
  undefined8 ***local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  ulonglong uStack_3a8;
  undefined8 ***local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  ulonglong uStack_388;
  undefined8 ***local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  ulonglong uStack_368;
  undefined8 ***local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  ulonglong uStack_348;
  undefined8 ***local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  ulonglong uStack_328;
  undefined8 ***local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  ulonglong uStack_308;
  byte ***local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  ulonglong uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  byte ***local_2c0 [3];
  ulonglong local_2a8;
  byte ***local_2a0 [3];
  ulonglong local_288;
  byte ***local_280 [3];
  ulonglong local_268;
  byte ***local_260 [3];
  ulonglong local_248;
  byte ***local_240 [3];
  ulonglong local_228;
  byte ***local_220 [3];
  ulonglong local_208;
  byte ***local_200 [3];
  ulonglong local_1e8;
  byte ***local_1e0 [3];
  ulonglong local_1c8;
  byte ***local_1c0 [3];
  ulonglong local_1a8;
  byte ***local_1a0 [3];
  ulonglong local_188;
  byte ***local_180 [3];
  ulonglong local_168;
  byte ***local_160 [3];
  ulonglong local_148;
  byte ***local_140 [3];
  ulonglong local_128;
  byte ***local_120 [3];
  ulonglong local_108;
  byte ***local_100 [3];
  ulonglong local_e8;
  byte ***local_e0 [3];
  ulonglong local_c8;
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined8 uStack_88;
  char local_80 [24];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_568;
  local_528 = 0;
  local_524 = 0;
  FUN_1801fc280(param_1,"\n# Team list\n");
  local_300 = (byte ***)0x0;
  uStack_2f8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  FUN_18001d080(&local_300,"teamlist.count",0xe);
  uVar10 = 0x14650fb0739d0383;
  if (uStack_2e8 < 0x10) {
    ppppbVar8 = &local_300;
  }
  else {
    ppppbVar8 = (byte ****)local_300;
    if ((byte ****)local_300 == (byte ****)0x0) goto LAB_1800fba57;
  }
  do {
    if (*(byte *)ppppbVar8 == 0) break;
    uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
    ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1);
  } while (ppppbVar8 != (byte ****)0x0);
LAB_1800fba57:
  FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
  local_4e0 = (undefined8 ****)0x0;
  uStack_4d8 = 0;
  local_4d0 = 0;
  uStack_4c8 = 0;
  sVar2 = strlen(local_80);
  FUN_18001d080(&local_4e0,local_80,sVar2);
  local_524 = 0x40000;
  ppppuVar9 = &local_4e0;
  if (0xf < uStack_4c8) {
    ppppuVar9 = (undefined8 ****)local_4e0;
  }
  uVar3 = FUN_180210c60(param_1,ppppuVar9,local_4d0);
  pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
  pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar4,(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x3333333333333333);
  FUN_1801fc280(pbVar5,&DAT_18033e92c);
  local_524 = 0;
  FUN_18020e450(&local_4e0);
  FUN_18020e450(&local_300);
  iVar11 = 0;
  if (0 < (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333) {
    do {
      puVar12 = (undefined8 *)((longlong)iVar11 * 0x50 + DAT_1803e9c20);
      uVar3 = FUN_180013ba0(local_c0,iVar11);
      puVar6 = (undefined8 *)FUN_18022a630(uVar3);
      local_2e0 = *puVar6;
      uStack_2d8 = puVar6[1];
      local_2d0 = puVar6[2];
      uStack_2c8 = puVar6[3];
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      local_528 = 8;
      puVar7 = (undefined4 *)FUN_18021aef0(&local_2e0,&DAT_18033ea54,1);
      local_a0 = *puVar7;
      uStack_9c = puVar7[1];
      uStack_98 = puVar7[2];
      uStack_94 = puVar7[3];
      lVar1 = *(longlong *)(puVar7 + 4);
      uStack_88 = *(undefined8 *)(puVar7 + 6);
      *(undefined1 *)puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      local_528 = 0x10;
      local_90 = lVar1;
      FUN_18020e450(&local_2e0);
      FUN_18020e450(local_c0);
      if (0x7fffffffffffffffU - lVar1 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 4;
      local_540 = "name";
      local_548 = lVar1;
      FUN_18020e930(local_2c0);
      local_528 = 0x30;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_2c0[0];
      if (local_2a8 < 0x10) {
        ppppbVar8 = local_2c0;
        goto LAB_1800fbcd0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fbcd0:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_4c0 = (undefined8 ****)0x0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      uStack_4a8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_4c0,local_80,sVar2);
      local_528 = 0x70;
      ppppuVar9 = &local_4c0;
      if (0xf < uStack_4a8) {
        ppppuVar9 = (undefined8 ****)local_4c0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_4b0);
      uVar3 = FUN_1801fc280(uVar3,&DAT_18034118c);
      puVar6 = puVar12;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar6 = (undefined8 *)*puVar12;
      }
      uVar3 = FUN_180210c60(uVar3,puVar6,puVar12[2]);
      FUN_1801fc280(uVar3,&DAT_18033e92c);
      local_528 = 0x30;
      FUN_18020e450(&local_4c0);
      local_528 = 0x10;
      FUN_18020e450(local_2c0);
      if (0x7fffffffffffffffU - local_90 < 10) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 10;
      local_540 = "ignore_aim";
      local_548 = local_90;
      FUN_18020e930(local_2a0);
      local_528 = 0x110;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_2a0[0];
      if (local_288 < 0x10) {
        ppppbVar8 = local_2a0;
        goto LAB_1800fbe40;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fbe40:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_4a0 = (undefined8 ****)0x0;
      uStack_498 = 0;
      local_490 = 0;
      uStack_488 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_4a0,local_80,sVar2);
      local_528 = 0x310;
      ppppuVar9 = &local_4a0;
      if (0xf < uStack_488) {
        ppppuVar9 = (undefined8 ****)local_4a0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_490);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)(puVar12 + 4) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x110;
      FUN_18020e450(&local_4a0);
      local_528 = 0x10;
      FUN_18020e450(local_2a0);
      if (0x7fffffffffffffffU - local_90 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xe;
      local_540 = "ignore_trigger";
      local_548 = local_90;
      FUN_18020e930(local_280);
      local_528 = 0x810;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_280[0];
      if (local_268 < 0x10) {
        ppppbVar8 = local_280;
        goto LAB_1800fbfa7;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fbfa7:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_480 = (undefined8 ****)0x0;
      uStack_478 = 0;
      local_470 = 0;
      uStack_468 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_480,local_80,sVar2);
      local_528 = 0x1810;
      ppppuVar9 = &local_480;
      if (0xf < uStack_468) {
        ppppuVar9 = (undefined8 ****)local_480;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_470);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x21) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x810;
      FUN_18020e450(&local_480);
      local_528 = 0x10;
      FUN_18020e450(local_280);
      if (0x7fffffffffffffffU - local_90 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xe;
      local_540 = "ignore_visuals";
      local_548 = local_90;
      FUN_18020e930(local_260);
      local_528 = 0x4010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_260[0];
      if (local_248 < 0x10) {
        ppppbVar8 = local_260;
        goto LAB_1800fc110;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc110:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_460 = (undefined8 ****)0x0;
      uStack_458 = 0;
      local_450 = 0;
      uStack_448 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_460,local_80,sVar2);
      local_528 = 0xc010;
      ppppuVar9 = &local_460;
      if (0xf < uStack_448) {
        ppppuVar9 = (undefined8 ****)local_460;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_450);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x22) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x4010;
      FUN_18020e450(&local_460);
      local_528 = 0x10;
      FUN_18020e450(local_260);
      if (0x7fffffffffffffffU - local_90 < 9) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 9;
      local_540 = "highlight";
      local_548 = local_90;
      FUN_18020e930(local_240);
      local_528 = 0x20010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_240[0];
      if (local_228 < 0x10) {
        ppppbVar8 = local_240;
        goto LAB_1800fc277;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc277:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_440 = (undefined8 ****)0x0;
      uStack_438 = 0;
      local_430 = 0;
      uStack_428 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_440,local_80,sVar2);
      local_528 = 0x60010;
      ppppuVar9 = &local_440;
      if (0xf < uStack_428) {
        ppppuVar9 = (undefined8 ****)local_440;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_430);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x23) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x20010;
      FUN_18020e450(&local_440);
      local_528 = 0x10;
      FUN_18020e450(local_240);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 7;
      local_540 = "color.r";
      local_548 = local_90;
      FUN_18020e930(local_220);
      local_528 = 0x100010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_220[0];
      if (local_208 < 0x10) {
        ppppbVar8 = local_220;
        goto LAB_1800fc3e0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc3e0:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_420 = (undefined8 ****)0x0;
      uStack_418 = 0;
      local_410 = 0;
      uStack_408 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_420,local_80,sVar2);
      local_528 = 0x300010;
      ppppuVar9 = &local_420;
      if (0xf < uStack_408) {
        ppppuVar9 = (undefined8 ****)local_420;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_410);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x24));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x100010;
      FUN_18020e450(&local_420);
      local_528 = 0x10;
      FUN_18020e450(local_220);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 7;
      local_540 = "color.g";
      local_548 = local_90;
      FUN_18020e930(local_200);
      local_528 = 0x800010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_200[0];
      if (local_1e8 < 0x10) {
        ppppbVar8 = local_200;
        goto LAB_1800fc544;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc544:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_400 = (undefined8 ****)0x0;
      uStack_3f8 = 0;
      local_3f0 = 0;
      uStack_3e8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_400,local_80,sVar2);
      local_528 = 0x1800010;
      ppppuVar9 = &local_400;
      if (0xf < uStack_3e8) {
        ppppuVar9 = (undefined8 ****)local_400;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_3f0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 5));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x800010;
      FUN_18020e450(&local_400);
      local_528 = 0x10;
      FUN_18020e450(local_200);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 7;
      local_540 = "color.b";
      local_548 = local_90;
      FUN_18020e930(local_1e0);
      local_528 = 0x4000010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_1e0[0];
      if (local_1c8 < 0x10) {
        ppppbVar8 = local_1e0;
        goto LAB_1800fc6b0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc6b0:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_3e0 = (undefined8 ****)0x0;
      uStack_3d8 = 0;
      local_3d0 = 0;
      uStack_3c8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_3e0,local_80,sVar2);
      local_528 = 0xc000010;
      ppppuVar9 = &local_3e0;
      if (0xf < uStack_3c8) {
        ppppuVar9 = (undefined8 ****)local_3e0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_3d0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x2c));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x4000010;
      FUN_18020e450(&local_3e0);
      local_528 = 0x10;
      FUN_18020e450(local_1e0);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 7;
      local_540 = "color.a";
      local_548 = local_90;
      FUN_18020e930(local_1c0);
      local_528 = 0x20000010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_1c0[0];
      if (local_1a8 < 0x10) {
        ppppbVar8 = local_1c0;
        goto LAB_1800fc830;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc830:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_3c0 = (undefined8 ****)0x0;
      uStack_3b8 = 0;
      local_3b0 = 0;
      uStack_3a8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_3c0,local_80,sVar2);
      local_528 = 0x60000010;
      ppppuVar9 = &local_3c0;
      if (0xf < uStack_3a8) {
        ppppuVar9 = (undefined8 ****)local_3c0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_3b0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 6));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x20000010;
      FUN_18020e450(&local_3c0);
      local_528 = 0x10;
      FUN_18020e450(local_1c0);
      if (0x7fffffffffffffffU - local_90 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xe;
      local_540 = "highlight_text";
      local_548 = local_90;
      FUN_18020e930(local_1a0);
      local_524 = 1;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_1a0[0];
      if (local_188 < 0x10) {
        ppppbVar8 = local_1a0;
        goto LAB_1800fc9b0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fc9b0:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_3a0 = (undefined8 ****)0x0;
      uStack_398 = 0;
      local_390 = 0;
      uStack_388 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_3a0,local_80,sVar2);
      local_524 = 3;
      ppppuVar9 = &local_3a0;
      if (0xf < uStack_388) {
        ppppuVar9 = (undefined8 ****)local_3a0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_390);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x34) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_524 = 1;
      FUN_18020e450(&local_3a0);
      local_524 = 0;
      FUN_18020e450(local_1a0);
      if (0x7fffffffffffffffU - local_90 < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xc;
      local_540 = "text_color.r";
      local_548 = local_90;
      FUN_18020e930(local_180);
      local_524 = 8;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_180[0];
      if (local_168 < 0x10) {
        ppppbVar8 = local_180;
        goto LAB_1800fcb30;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fcb30:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_380 = (undefined8 ****)0x0;
      uStack_378 = 0;
      local_370 = 0;
      uStack_368 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_380,local_80,sVar2);
      local_524 = 0x18;
      ppppuVar9 = &local_380;
      if (0xf < uStack_368) {
        ppppuVar9 = (undefined8 ****)local_380;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_370);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 7));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_524 = 8;
      FUN_18020e450(&local_380);
      local_524 = 0;
      FUN_18020e450(local_180);
      if (0x7fffffffffffffffU - local_90 < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xc;
      local_540 = "text_color.g";
      local_548 = local_90;
      FUN_18020e930(local_160);
      local_524 = 0x40;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_160[0];
      if (local_148 < 0x10) {
        ppppbVar8 = local_160;
        goto LAB_1800fcca6;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fcca6:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_360 = (undefined8 ****)0x0;
      uStack_358 = 0;
      local_350 = 0;
      uStack_348 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_360,local_80,sVar2);
      local_524 = 0xc0;
      ppppuVar9 = &local_360;
      if (0xf < uStack_348) {
        ppppuVar9 = (undefined8 ****)local_360;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_350);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x3c));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_524 = 0x40;
      FUN_18020e450(&local_360);
      local_524 = 0;
      FUN_18020e450(local_160);
      if (0x7fffffffffffffffU - local_90 < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xc;
      local_540 = "text_color.b";
      local_548 = local_90;
      FUN_18020e930(local_140);
      local_524 = 0x200;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_140[0];
      if (local_128 < 0x10) {
        ppppbVar8 = local_140;
        goto LAB_1800fce21;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fce21:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_340 = (undefined8 ****)0x0;
      uStack_338 = 0;
      local_330 = 0;
      uStack_328 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_340,local_80,sVar2);
      local_524 = 0x600;
      ppppuVar9 = &local_340;
      if (0xf < uStack_328) {
        ppppuVar9 = (undefined8 ****)local_340;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_330);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 8));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_524 = 0x200;
      FUN_18020e450(&local_340);
      local_524 = 0;
      FUN_18020e450(local_140);
      if (0x7fffffffffffffffU - local_90 < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xc;
      local_540 = "text_color.a";
      local_548 = local_90;
      FUN_18020e930(local_120);
      local_524 = 0x1000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_120[0];
      if (local_108 < 0x10) {
        ppppbVar8 = local_120;
        goto LAB_1800fcfa0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fcfa0:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_320 = (undefined8 ****)0x0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_320,local_80,sVar2);
      local_524 = 0x3000;
      ppppuVar9 = &local_320;
      if (0xf < uStack_308) {
        ppppuVar9 = (undefined8 ****)local_320;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_310);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x44));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_524 = 0x1000;
      FUN_18020e450(&local_320);
      local_524 = 0;
      FUN_18020e450(local_120);
      if (0x7fffffffffffffffU - local_90 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xe;
      local_540 = "text_scope_all";
      local_548 = local_90;
      FUN_18020e930(local_100);
      local_524 = 0x8000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_100[0];
      if (local_e8 < 0x10) {
        ppppbVar8 = local_100;
        goto LAB_1800fd120;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fd120:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_520 = (undefined8 ****)0x0;
      uStack_518 = 0;
      local_510 = 0;
      uStack_508 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_520,local_80,sVar2);
      local_524 = 0x18000;
      ppppuVar9 = &local_520;
      if (0xf < uStack_508) {
        ppppuVar9 = (undefined8 ****)local_520;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_510);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)(puVar12 + 9) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_524 = 0x8000;
      FUN_18020e450(&local_520);
      local_524 = 0;
      FUN_18020e450(local_100);
      if (0x7fffffffffffffffU - local_90 < 0xf) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_538 = 0xf;
      local_540 = "text_scope_mask";
      local_548 = local_90;
      FUN_18020e930(local_e0);
      local_528 = 0x11;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_e0[0];
      if (local_c8 < 0x10) {
        ppppbVar8 = local_e0;
        goto LAB_1800fd290;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1800fd290:
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_500 = (undefined8 ****)0x0;
      uStack_4f8 = 0;
      local_4f0 = 0;
      uStack_4e8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_500,local_80,sVar2);
      local_528 = 0x13;
      ppppuVar9 = &local_500;
      if (0xf < uStack_4e8) {
        ppppuVar9 = (undefined8 ****)local_500;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_4f0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(uint *)((longlong)puVar12 + 0x4c));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_528 = 0x11;
      FUN_18020e450(&local_500);
      local_528 = 0x10;
      FUN_18020e450(local_e0);
      local_528 = 0;
      FUN_18020e450(&local_a0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333);
  }
  return;
}


