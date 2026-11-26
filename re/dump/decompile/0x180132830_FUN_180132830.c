// 0x180132830  FUN_180132830
// size=851 thunk=false
// signature: undefined FUN_180132830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132830(undefined8 *param_1)

{
  DWORD DVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined1 auStack_248 [32];
  longlong local_228;
  char *local_220;
  undefined8 local_218;
  undefined4 local_208;
  undefined1 local_200 [32];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  undefined1 local_158 [16];
  longlong local_148;
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_208 = 1;
  local_160 = param_1;
  FUN_180132730(local_158);
  if (local_148 != 0) {
    if (0x7fffffffffffffffU - local_148 < 0x11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 0x11;
    local_220 = "\\config\\local.vdf";
    local_228 = local_148;
    FUN_18020e930(local_200);
    local_208 = 3;
    FUN_180214300(param_1,local_200);
    local_208 = 1;
    FUN_18020e450(local_200);
    if (0x7fffffffffffffffU - local_148 < 10) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 10;
    local_220 = "\\local.vdf";
    local_228 = local_148;
    FUN_18020e930(local_200);
    local_208 = 5;
    FUN_180214300(param_1,local_200);
    local_208 = 1;
    FUN_18020e450(local_200);
    if (0x7fffffffffffffffU - local_148 < 0x12) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 0x12;
    local_220 = "\\config\\config.vdf";
    local_228 = local_148;
    FUN_18020e930(local_200);
    local_208 = 9;
    FUN_180214300(param_1);
    local_208 = 1;
    FUN_18020e450(local_200);
  }
  memset(local_138,0,0x104);
  DVar1 = GetEnvironmentVariableA("LOCALAPPDATA",local_138,0x104);
  if (DVar1 != 0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    sVar2 = strlen(local_138);
    FUN_18001d080(&local_1c0,local_138,sVar2);
    puVar3 = (undefined4 *)FUN_18021aef0(&local_1c0,"\\Steam\\local.vdf",0x10);
    local_1e0 = *puVar3;
    uStack_1dc = puVar3[1];
    uStack_1d8 = puVar3[2];
    uStack_1d4 = puVar3[3];
    local_1d0 = *(undefined8 *)(puVar3 + 4);
    uStack_1c8 = *(undefined8 *)(puVar3 + 6);
    *(undefined8 *)(puVar3 + 6) = 0xf;
    *(undefined1 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    local_208 = 0x11;
    FUN_180214300(param_1,&local_1e0);
    local_208 = 1;
    FUN_18020e450(&local_1e0);
    FUN_18020e450(&local_1c0);
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    sVar2 = strlen(local_138);
    FUN_18001d080(&local_180,local_138,sVar2);
    puVar3 = (undefined4 *)FUN_18021aef0(&local_180,"\\Steam\\config\\local.vdf",0x17);
    local_1a0 = *puVar3;
    uStack_19c = puVar3[1];
    uStack_198 = puVar3[2];
    uStack_194 = puVar3[3];
    local_190 = *(undefined8 *)(puVar3 + 4);
    uStack_188 = *(undefined8 *)(puVar3 + 6);
    *(undefined1 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    local_208 = 0x21;
    FUN_180214300(param_1,&local_1a0);
    local_208 = 1;
    FUN_18020e450(&local_1a0);
    FUN_18020e450(&local_180);
  }
  FUN_18020e450(local_158);
  return param_1;
}


