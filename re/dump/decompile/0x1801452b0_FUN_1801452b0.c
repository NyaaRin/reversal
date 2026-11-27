// 0x1801452b0  FUN_1801452b0
// size=848 thunk=false
// signature: undefined FUN_1801452b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801452b0(longlong param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_2b8 [32];
  char *local_298;
  char *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  uint local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 *local_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178;
  undefined8 local_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  uVar5 = 0;
  local_268 = 0;
  if ((param_1 != 0) && (cVar1 = FUN_1800170f0(), cVar1 == '\0')) {
    uVar2 = FUN_1800170a0(param_1);
    uVar5 = uVar2 & 0x406012;
    if (uVar5 != 0) {
      FUN_1800170c0(param_1,~uVar5 & uVar2);
    }
  }
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_298 = param_3;
  FUN_180012ac0(local_f8,0xc0,"%s %s",param_2);
  cVar1 = FUN_180017040(local_f8);
  local_178 = 0;
  local_177 = 0;
  uStack_16f = 0;
  local_167 = 0;
  uStack_15f = 0;
  local_157 = 0;
  uStack_14f = 0;
  local_147 = 0;
  uStack_13f = 0;
  local_137 = 0;
  uStack_12f = 0;
  local_127 = 0;
  uStack_11f = 0;
  local_117 = 0;
  uStack_10f = 0;
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  if (uVar5 != 0) {
    local_298 = "";
    local_278 = "";
    if (uVar5 >> 0x16 != 0) {
      local_278 = " NOT_CONNECTED";
    }
    local_280 = "";
    if ((uVar5 >> 0xd & 1) != 0) {
      local_280 = " REPLICATED";
    }
    local_288 = "";
    if ((uVar5 & 0x10) != 0) {
      local_288 = " HIDDEN";
    }
    local_290 = "";
    if ((uVar5 & 2) != 0) {
      local_290 = " DEVONLY";
    }
    if ((uVar5 >> 0xe & 1) != 0) {
      local_298 = " CHEAT";
    }
    FUN_180012ac0(&local_178,0x80," [cleared flags 0x%X:%s%s%s%s%s]",uVar5);
  }
  local_200 = &local_260;
  if (cVar1 == '\0') {
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    FUN_18001d080(&local_240,"engine refused the command: ",0x1c);
    local_268 = 0x10;
    puVar4 = (undefined8 *)FUN_1801fc680(local_1f8,&local_240,local_f8);
    uVar5 = 0x30;
  }
  else {
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    FUN_18001d080(&local_220,"sent: ",6);
    local_268 = 1;
    uVar3 = FUN_1801fc680(local_198,&local_220,local_f8);
    local_268 = 3;
    uVar3 = FUN_1801fc680(local_1b8,uVar3,&local_178);
    local_268 = 7;
    puVar4 = (undefined8 *)FUN_1801fc680(local_1d8,uVar3,&DAT_18035d598);
    uVar5 = 0xf;
  }
  local_260 = *puVar4;
  uStack_258 = puVar4[1];
  local_250 = puVar4[2];
  uStack_248 = puVar4[3];
  *(undefined1 *)puVar4 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  local_268 = uVar5;
  FUN_180144c60(&local_260);
  if ((uVar5 & 0x20) != 0) {
    uVar5 = uVar5 & 0xffffffdf;
    local_268 = uVar5;
    FUN_18020e450(local_1f8);
  }
  if ((uVar5 & 0x10) != 0) {
    uVar5 = uVar5 & 0xffffffef;
    local_268 = uVar5;
    FUN_18020e450(&local_240);
  }
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    local_268 = uVar5;
    FUN_18020e450(local_1d8);
  }
  if ((uVar5 & 4) != 0) {
    uVar5 = uVar5 & 0xfffffffb;
    local_268 = uVar5;
    FUN_18020e450(local_1b8);
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    local_268 = uVar5;
    FUN_18020e450(local_198);
  }
  if ((uVar5 & 1) != 0) {
    local_268 = uVar5 & 0xfffffffe;
    FUN_18020e450(&local_220);
  }
  FUN_180014410("[CVAR] set \'%s\' -> sent=%d%s\n",local_f8,cVar1,&local_178);
  return;
}


