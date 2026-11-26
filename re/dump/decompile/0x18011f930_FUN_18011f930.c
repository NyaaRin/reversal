// 0x18011f930  FUN_18011f930
// size=433 thunk=false
// signature: undefined FUN_18011f930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011f930(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined8 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 local_1a0;
  char local_198;
  char local_188 [64];
  char local_148 [96];
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  local_1a8 = 0x93fd561a96ab0c67;
  local_1a0 = 0xd1ec5445d87064a8;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_1a8);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,&local_1d8,&local_1a0);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if ((*pcVar2 != '\0') && (param_1 != 0)) {
    FUN_18011f6f0(param_1,local_188);
    FUN_18011f730(param_2,local_148);
    local_1e8 = local_148;
    if (local_148[0] == '\0') {
      local_1e8 = "<unnamed>";
    }
    local_1f8 = local_188;
    if (local_188[0] == '\0') {
      local_1f8 = "<unknown>";
    }
    local_1f0 = param_2;
    FUN_180012b20(local_e8,0xc0,0xffffffffffffffff,"%s::#%d %s [call]");
    local_1d8 = (undefined8 ***)0x0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    sVar3 = strlen(local_e8);
    FUN_18001d080(&local_1d8,local_e8,sVar3);
    if (DAT_1804301b0 < 400) {
      FUN_180219e20(&DAT_1804301a0,&local_1a0,&local_1d8);
      if (local_198 != '\0') {
        pppuVar4 = &local_1d8;
        if (0xf < uStack_1c0) {
          pppuVar4 = (undefined8 ***)local_1d8;
        }
        FUN_180014410("[SEPROBE] %s\n",pppuVar4);
      }
    }
    FUN_18020e450(&local_1d8);
  }
  (*DAT_1804236e8)(param_1,param_2,param_3);
  return;
}


