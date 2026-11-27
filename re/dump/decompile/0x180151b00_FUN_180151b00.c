// 0x180151b00  FUN_180151b00
// size=1810 thunk=false
// signature: undefined FUN_180151b00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180151b00(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined8 ***pppuVar6;
  longlong lVar7;
  char *_Str;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 **local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 **local_160;
  undefined8 **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 **local_138;
  longlong local_130;
  longlong lStack_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [16];
  longlong local_e8;
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1a8 = 0;
  FUN_18014e3b0(local_f8);
  if (local_e8 == 0) {
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    FUN_18001d080(&local_180,"Game folder not found - file steps skipped",0x2a);
    FUN_18014de20(&local_180);
    FUN_18020e450(&local_180);
    local_1a0 = (undefined8 ***)0x0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    FUN_18001d080(&local_1a0,"Game folder not found",0x15);
    local_160 = (undefined8 **)&DAT_1803e7a40;
    iVar3 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppuVar6 = &local_1a0;
    if (0xf < local_188) {
      pppuVar6 = (undefined8 ***)local_1a0;
    }
    FUN_180212700(&DAT_1803ea218,pppuVar6,local_190);
    _Mtx_unlock(&DAT_1803e7a40);
    FUN_18020e450(&local_1a0);
    DAT_180400b09 = 0;
  }
  else {
    local_160 = &local_1a0;
    local_1a0 = (undefined8 **)0x0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    FUN_180211510(&local_1a0,L"garrysmod",9);
    local_1a8 = 0;
    FUN_180066720(local_118,local_f8,&local_1a0);
    FUN_18021e290(&local_1a0);
    if (*param_1 != '\0') {
      local_160 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"data",4);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,&DAT_18035ef0c);
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
    }
    if ((param_1[1] != '\0') && (DAT_180423571 == '\0')) {
      local_160 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"download",8);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"download/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
      local_138 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"downloads",9);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"downloads/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
      local_158 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"downloadlists",0xd);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"downloadlists/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
    }
    if ((param_1[2] != '\0') && (DAT_180423571 == '\0')) {
      local_158 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"cache",5);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"cache/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
    }
    if ((param_1[5] != '\0') && (DAT_180423571 == '\0')) {
      FUN_18014f450(local_118);
    }
    if ((param_1[3] != '\0') && (DAT_180423571 == '\0')) {
      local_130 = 0;
      lStack_128 = 0;
      local_120 = 0;
      FUN_18014f070(local_f8,&local_130);
      lVar2 = lStack_128;
      if (local_130 == lStack_128) {
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_18001d080(&local_180,"crash dumps: none",0x11);
        FUN_18014de20(&local_180);
      }
      else {
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0;
        lVar7 = local_130;
        do {
          FUN_18014eda0(lVar7,&local_150);
          lVar7 = lVar7 + 0x20;
        } while (lVar7 != lVar2);
        local_1b0 = local_140;
        local_1b8 = uStack_148;
        FUN_180012ac0(local_d8,0xa0,"crash dumps: %lld deleted, %lld wiped, %d refused",local_150);
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        sVar5 = strlen(local_d8);
        FUN_18001d080(&local_180,local_d8,sVar5);
        FUN_18014de20(&local_180);
      }
      FUN_18020e450(&local_180);
      FUN_18021c690(&local_130);
    }
    if ((param_1[4] != '\0') && (DAT_180423571 == '\0')) {
      FUN_18014f780(local_118);
    }
    if (((param_1[7] != '\0') || (param_1[8] != '\0')) && (DAT_180423571 == '\0')) {
      FUN_18014fe90(local_f8,param_1[8]);
    }
    _Str = "Finished - see log";
    if (DAT_180423571 != '\0') {
      _Str = "Stopped (cheat unloading)";
    }
    local_1a0 = (undefined8 ***)0x0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    sVar5 = strlen(_Str);
    FUN_18001d080(&local_1a0,_Str,sVar5);
    local_158 = (undefined8 **)&DAT_1803e7a40;
    iVar3 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppuVar6 = &local_1a0;
    if (0xf < local_188) {
      pppuVar6 = (undefined8 ***)local_1a0;
    }
    FUN_180212700(&DAT_1803ea218,pppuVar6,local_190);
    _Mtx_unlock(&DAT_1803e7a40);
    FUN_18020e450(&local_1a0);
    DAT_180400b09 = 0;
    if (DAT_180423571 == '\0') {
      FUN_180151970();
    }
    FUN_18021e290(local_118);
  }
  FUN_18021e290(local_f8);
  return;
}


