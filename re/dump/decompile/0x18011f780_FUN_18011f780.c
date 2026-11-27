// 0x18011f780  FUN_18011f780
// size=430 thunk=false
// signature: undefined FUN_18011f780()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011f780(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
  undefined8 **local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  char local_188;
  char local_178 [64];
  char local_138 [96];
  char local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  local_198 = 0x93fd561a96ab0c67;
  local_190 = 0xd1ec5445d87064a8;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_198);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,&local_1c8,&local_190);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if ((*pcVar2 != '\0') && (param_1 != 0)) {
    FUN_18011f6f0(param_1,local_178);
    FUN_18011f730(param_2,local_138);
    local_1d8 = local_138;
    if (local_138[0] == '\0') {
      local_1d8 = "<unnamed>";
    }
    local_1e8 = local_178;
    if (local_178[0] == '\0') {
      local_1e8 = "<unknown>";
    }
    local_1e0 = param_2;
    FUN_180012b20(local_d8,0xc0,0xffffffffffffffff,"%s::#%d %s");
    local_1c8 = (undefined8 ***)0x0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    sVar3 = strlen(local_d8);
    FUN_18001d080(&local_1c8,local_d8,sVar3);
    if (DAT_1804301b0 < 400) {
      FUN_180219e20(&DAT_1804301a0,&local_190,&local_1c8);
      if (local_188 != '\0') {
        pppuVar4 = &local_1c8;
        if (0xf < uStack_1b0) {
          pppuVar4 = (undefined8 ***)local_1c8;
        }
        FUN_180014410("[SEPROBE] %s\n",pppuVar4);
      }
    }
    FUN_18020e450(&local_1c8);
  }
  (*DAT_1804236e0)(param_1,param_2);
  return;
}


