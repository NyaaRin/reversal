// 0x18011d930  FUN_18011d930
// size=1724 thunk=false
// signature: undefined FUN_18011d930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011d930(longlong param_1,char param_2,int param_3,undefined8 *param_4,undefined8 param_5,
                  char *param_6)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_2b8 [32];
  uint local_298;
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
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
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  uVar7 = 0;
  local_298 = 0;
  DAT_180423742 = 0;
  if (param_2 == '\0') {
    FUN_180212700(&DAT_1803e9b38,"Off - the server\'s own loading screen is used.",0x2e);
    return;
  }
  if (param_4[2] == 0) {
    if (*(char *)(param_1 + 0x91) != '\0') {
      DAT_180423742 = 1;
      FUN_180212700(&DAT_1803e9b38,
                    "That page is too big to hand over (512 KB max) - blocking instead.",0x42);
      return;
    }
    if (*(char *)(param_1 + 0x92) != '\0') {
      DAT_180423742 = 1;
      FUN_180212700(&DAT_1803e9b38,"Could not find garrysmod\\html - blocking instead.",0x31);
      return;
    }
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    FUN_18001d080(&local_1a8,"Blocking server loading screens (",0x21);
    sVar2 = strlen(param_6);
    puVar3 = (undefined8 *)FUN_18021aef0(&local_1a8,param_6,sVar2);
    local_288 = *puVar3;
    uStack_280 = puVar3[1];
    local_278 = puVar3[2];
    uStack_270 = puVar3[3];
    puVar3[3] = 0xf;
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    local_298 = 0x80;
    puVar4 = (undefined4 *)FUN_18021aef0(&local_288,&DAT_18035792c,2);
    local_1c8 = *puVar4;
    uStack_1c4 = puVar4[1];
    uStack_1c0 = puVar4[2];
    uStack_1bc = puVar4[3];
    local_1b8 = *(undefined8 *)(puVar4 + 4);
    uStack_1b0 = *(undefined8 *)(puVar4 + 6);
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    local_298 = 0x180;
    FUN_18020e8a0(&DAT_1803e9b38,&local_1c8);
    local_298 = 0x80;
    FUN_18020e450(&local_1c8);
    local_298 = 0;
    FUN_18020e450(&local_288);
    FUN_18020e450(&local_1a8);
    return;
  }
  if (param_3 == 2) {
    cVar1 = FUN_18011a830(param_4);
    if (cVar1 == '\0') {
      DAT_180423742 = 1;
      FUN_180212700(&DAT_1803e9b38,
                    "Not a loadable address (http:// https:// asset://) - blocking instead.",0x46);
      return;
    }
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_18001d080(&local_108,"Active (",8);
    sVar2 = strlen(param_6);
    puVar3 = (undefined8 *)FUN_18021aef0(&local_108,param_6,sVar2);
    local_1e8 = *puVar3;
    uStack_1e0 = puVar3[1];
    local_1d8 = puVar3[2];
    uStack_1d0 = puVar3[3];
    puVar3[3] = 0xf;
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    local_298 = 0x200;
    puVar3 = (undefined8 *)FUN_18021aef0(&local_1e8,&DAT_1803579c0,3);
    local_208 = *puVar3;
    uStack_200 = puVar3[1];
    local_1f8 = puVar3[2];
    uStack_1f0 = puVar3[3];
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    local_298 = 0x600;
    puVar3 = param_4 + 2;
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    puVar4 = (undefined4 *)FUN_18021aef0(&local_208,param_4,*puVar3);
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    local_118 = *(undefined8 *)(puVar4 + 4);
    uStack_110 = *(undefined8 *)(puVar4 + 6);
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    local_298 = 0xe00;
    FUN_18020e8a0(&DAT_1803e9b38,&local_128);
    local_298 = 0x600;
    FUN_18020e450(&local_128);
    local_298 = 0x200;
    FUN_18020e450(&local_208);
    local_298 = 0;
    FUN_18020e450(&local_1e8);
    FUN_18020e450(&local_108);
    if (DAT_180423738 == '\0') {
      return;
    }
    if (DAT_180423728 != '\0') {
      return;
    }
    cVar1 = FUN_18011c8a0();
    if (cVar1 != '\0') {
      return;
    }
    FUN_18021aef0(&DAT_1803e9b38,
                  "\ncl_enable_loadingurl is 0 - set it to 1 or loading pages stay off.",0x43);
    return;
  }
  if (param_3 == 1) {
    local_290 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,param_5);
    lVar6 = FUN_18011a5c0(local_88,uVar5);
    uVar7 = 1;
    local_298 = 1;
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      local_290 = local_c8;
      uVar5 = FUN_18016d4c0(local_c8,param_5);
      puVar3 = (undefined8 *)FUN_18011a5c0(local_a8,uVar5);
      uVar7 = 3;
      goto LAB_18011dba9;
    }
  }
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_18001d080(&local_188,"built-in mayrr screen",0x15);
  puVar3 = &local_188;
  uVar7 = uVar7 | 4;
LAB_18011dba9:
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *(undefined4 *)puVar3;
  uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_60 = *(undefined4 *)(puVar3 + 1);
  uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_58 = puVar3[2];
  uStack_50 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  local_298 = uVar7;
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    local_298 = uVar7;
    FUN_18020e450(&local_188);
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    local_298 = uVar7;
    FUN_18020e450(local_a8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    local_298 = uVar7;
    FUN_18020e450(local_88);
  }
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  FUN_18001d080(&local_148,"Active (",8);
  sVar2 = strlen(param_6);
  puVar3 = (undefined8 *)FUN_18021aef0(&local_148,param_6,sVar2);
  local_228 = *puVar3;
  uStack_220 = puVar3[1];
  local_218 = puVar3[2];
  uStack_210 = puVar3[3];
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  local_298 = uVar7 | 0x20;
  puVar3 = (undefined8 *)FUN_18021aef0(&local_228,&DAT_1803579c0,3);
  local_248 = *puVar3;
  uStack_240 = puVar3[1];
  local_238 = puVar3[2];
  uStack_230 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  local_298 = uVar7 | 0x30;
  puVar4 = &local_68;
  if (0xf < uStack_50) {
    puVar4 = (undefined4 *)CONCAT44(uStack_64,local_68);
  }
  puVar3 = (undefined8 *)FUN_18021aef0(&local_248,puVar4,local_58);
  local_268 = *puVar3;
  uStack_260 = puVar3[1];
  local_258 = puVar3[2];
  uStack_250 = puVar3[3];
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  local_298 = uVar7 | 0x38;
  puVar4 = (undefined4 *)
           FUN_18021aef0(&local_268,
                         "\nWritten to garrysmod\\html for 5 seconds when the screen opens, then removed."
                         ,0x4d);
  local_168 = *puVar4;
  uStack_164 = puVar4[1];
  uStack_160 = puVar4[2];
  uStack_15c = puVar4[3];
  local_158 = *(undefined8 *)(puVar4 + 4);
  uStack_150 = *(undefined8 *)(puVar4 + 6);
  *(undefined1 *)puVar4 = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0xf;
  local_298 = uVar7 | 0x78;
  FUN_18020e8a0(&DAT_1803e9b38,&local_168);
  local_298 = uVar7 | 0x38;
  FUN_18020e450(&local_168);
  local_298 = uVar7 | 0x30;
  FUN_18020e450(&local_268);
  local_298 = uVar7 | 0x20;
  FUN_18020e450(&local_248);
  local_298 = uVar7;
  FUN_18020e450(&local_228);
  FUN_18020e450(&local_148);
  FUN_18020e450(&local_68);
  return;
}


