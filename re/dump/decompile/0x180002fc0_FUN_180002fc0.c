// 0x180002fc0  FUN_180002fc0
// size=885 thunk=false
// signature: undefined FUN_180002fc0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002fc0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_18001d080(&local_1e8,"Nickname",8);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  FUN_18001d080(&local_1c8,"Health",6);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_18001d080(&local_1a8,"Max Health",10);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_18001d080(&local_188,"Usergroup",9);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  FUN_18001d080(&local_168,"Team/Job",8);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  FUN_18001d080(&local_148,"Held Weapon",0xb);
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  FUN_18001d080(&local_128,"Health %",8);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_18001d080(&local_108,"Distance",8);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_18001d080(&local_e8,"Protected",9);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_18001d080(&local_c8,"RP Name",7);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_18001d080(&local_a8,"Armor %",7);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_18001d080(&local_88,"Netvar",6);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_18001d080(&local_68,"Job custom",10);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_18001d080(&local_48,"Inventory",9);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_18001d080(&local_28,"Script",6);
  DAT_1803fa808 = 0;
  DAT_1803fa810 = 0;
  _DAT_1803fa818 = 0;
  lVar1 = FUN_18020dbc0(0,0xf);
  _DAT_1803fa818 = lVar1 + 0x1e0;
  puVar2 = &local_1e8;
  DAT_1803fa808 = lVar1;
  DAT_1803fa810 = lVar1;
  do {
    FUN_18016d4c0(lVar1,puVar2);
    lVar1 = lVar1 + 0x20;
    puVar2 = puVar2 + 4;
  } while (puVar2 != (undefined8 *)&stack0xfffffffffffffff8);
  DAT_1803fa810 = lVar1;
  _eh_vector_destructor_iterator_
            (&local_1e8,0x20,0xf,Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  atexit((_func_5014 *)&LAB_18030abe0);
  return;
}


