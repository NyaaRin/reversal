// 0x1800f9930  FUN_1800f9930
// size=1597 thunk=false
// signature: undefined FUN_1800f9930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800f9930(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined4 local_284;
  undefined1 local_280;
  undefined4 local_278;
  undefined1 local_274;
  undefined1 local_270 [32];
  undefined1 local_250 [32];
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_208;
  undefined1 local_204;
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_318;
  if ((DAT_180427610 & 1) == 0) {
    DAT_180427610 = DAT_180427610 | 1;
    atexit((_func_5014 *)&LAB_180309ca0);
  }
  if (DAT_180400a08 == DAT_180400a10) {
    local_b4 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0xf;
    local_90 = 0;
    local_6c = 1;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_b8 = 0;
    local_70 = 0x2b;
    FUN_180212700(&local_b0,"Player",6);
    FUN_180212700(&local_90,&DAT_180345dd8,4);
    uStack_60 = CONCAT44(uStack_60._4_4_,0x3f800000);
    local_194 = 0;
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 0xf;
    local_190 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0xf;
    local_170 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_198 = 0;
    local_150 = 0x58;
    local_14c = 3;
    FUN_180212700(&local_190,"Player",6);
    FUN_180212700(&local_170,"chest",5);
    uStack_140 = CONCAT44(uStack_140._4_4_,0x3f800000);
    local_124 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_108 = 0xf;
    local_120 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0xf;
    local_100 = 0;
    local_dc = 1;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_128 = 1;
    local_e0 = 0x1a;
    FUN_180212700(&local_120,"Enemy",5);
    FUN_180212700(&local_100,"74 hp",5);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,0x3f800000);
    local_2e8 = local_b8;
    local_2e4 = local_b4;
    FUN_18016d4c0(local_2e0,&local_b0);
    FUN_18016d4c0(local_2c0,&local_90);
    local_2a0 = local_70;
    local_29c = local_6c;
    local_298 = local_68;
    uStack_290 = uStack_60;
    local_288 = local_58;
    local_284 = local_54;
    local_280 = local_50;
    local_278 = local_198;
    local_274 = local_194;
    FUN_18016d4c0(local_270,&local_190);
    FUN_18016d4c0(local_250,&local_170);
    local_230 = local_150;
    local_22c = local_14c;
    local_228 = local_148;
    uStack_220 = uStack_140;
    local_218 = local_138;
    local_214 = local_134;
    local_210 = local_130;
    local_208 = local_128;
    local_204 = local_124;
    FUN_18016d4c0(local_200,&local_120);
    FUN_18016d4c0(local_1e0,&local_100);
    local_1c0 = local_e0;
    local_1bc = local_dc;
    local_1b8 = local_d8;
    uStack_1b0 = uStack_d0;
    local_1a8 = local_c8;
    local_1a4 = local_c4;
    local_1a0 = local_c0;
    if ((ulonglong)((DAT_180400a18 - DAT_180400a08 >> 4) * 0x6db6db6db6db6db7) < 3) {
      FUN_18022ca00(0x6db6db6db6db6db7,3);
      lVar3 = FUN_1802265e0(&local_2e8,3,DAT_180400a08,&DAT_180400a08);
    }
    else {
      lVar3 = DAT_180400a10 - DAT_180400a08 >> 4;
      puVar6 = &local_2e8;
      if ((ulonglong)(lVar3 * 0x6db6db6db6db6db7) < 3) {
        lVar4 = DAT_180400a08;
        if (DAT_180400a08 != DAT_180400a10) {
          do {
            FUN_18021ee90(lVar4,puVar6);
            lVar4 = lVar4 + 0x70;
            puVar6 = puVar6 + 0x1c;
          } while (lVar4 != DAT_180400a10);
        }
        lVar3 = FUN_1802265e0(puVar6,lVar3 * -0x6db6db6db6db6db7 + 3,DAT_180400a10,&DAT_180400a08);
      }
      else {
        lVar3 = DAT_180400a08 + 0x150;
        lVar5 = 3;
        lVar4 = DAT_180400a08;
        do {
          FUN_18021ee90(lVar4,puVar6);
          lVar2 = DAT_180400a10;
          lVar4 = lVar4 + 0x70;
          puVar6 = puVar6 + 0x1c;
          lVar5 = lVar5 + -1;
          lVar1 = lVar3;
        } while (lVar5 != 0);
        for (; local_2f8 = lVar1, lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
          FUN_18020e450(lVar1 + 0x28);
          FUN_18020e450(lVar1 + 8);
        }
      }
    }
    DAT_180400a10 = lVar3;
    _eh_vector_destructor_iterator_(&local_2e8,0x70,3,FUN_1800f5670);
    FUN_18020e450(&local_100);
    FUN_18020e450(&local_120);
    FUN_18020e450(&local_170);
    FUN_18020e450(&local_190);
    FUN_18020e450(&local_90);
    FUN_18020e450(&local_b0);
  }
  return &DAT_180400a08;
}


