// 0x18014eea0  FUN_18014eea0
// size=450 thunk=false
// signature: undefined FUN_18014eea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014eea0(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
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
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  local_188 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  cVar2 = FUN_18014e6f0(0,&local_108,0);
  lVar1 = lStack_100;
  if (cVar2 == '\0') {
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    sVar3 = strlen(param_2);
    FUN_18001d080(&local_148,param_2,sVar3);
    puVar4 = (undefined4 *)FUN_18021aef0(&local_148,": not present",0xd);
    local_168 = *puVar4;
    uStack_164 = puVar4[1];
    uStack_160 = puVar4[2];
    uStack_15c = puVar4[3];
    local_158 = *(undefined8 *)(puVar4 + 4);
    uStack_150 = *(undefined8 *)(puVar4 + 6);
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    local_188 = 1;
    FUN_18014de20(&local_168);
    local_188 = 0;
    FUN_18020e450(&local_168);
    puVar5 = &local_148;
  }
  else {
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_1a8 = local_180;
    local_1a0 = uStack_178;
    local_198 = local_170;
    for (lVar6 = local_108; local_180 = local_1a8, uStack_178 = local_1a0, local_170 = local_198,
        lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
      FUN_18014eda0(lVar6,&local_180);
      local_1a8 = local_180;
      local_1a0 = uStack_178;
      local_198 = local_170;
    }
    FUN_180012ac0(local_e8,0xc0,"%s: %lld deleted, %lld wiped (locked), %d refused",param_2);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    sVar3 = strlen(local_e8);
    FUN_18001d080(&local_128,local_e8,sVar3);
    FUN_18014de20(&local_128);
    puVar5 = &local_128;
  }
  FUN_18020e450(puVar5);
  FUN_18021c690(&local_108);
  return;
}


