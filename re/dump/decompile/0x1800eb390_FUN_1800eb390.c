// 0x1800eb390  FUN_1800eb390
// size=1057 thunk=false
// signature: undefined FUN_1800eb390()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800eb390(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  char *_Src;
  undefined1 auStack_2a8 [48];
  int local_278;
  undefined4 local_274;
  undefined **local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined4 local_25e;
  undefined2 local_25a;
  longlong local_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined4 local_24e;
  undefined2 local_24a;
  undefined8 local_248;
  undefined1 local_240;
  undefined1 local_23f;
  undefined4 local_23e;
  undefined2 local_23a;
  longlong local_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined4 local_22e;
  undefined2 local_22a;
  longlong local_228;
  int local_220;
  int iStack_21c;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined **local_1e8;
  undefined8 local_1e0 [2];
  undefined8 ***local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b0 [32];
  undefined1 local_190 [40];
  longlong local_168 [2];
  int local_158 [14];
  longlong alStack_120 [25];
  undefined8 ***local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  local_228 = param_1;
  if ((*(int *)(param_1 + 0x9f0) < 0) ||
     ((int)(*(longlong *)(param_1 + 0x9e0) - *(longlong *)(param_1 + 0x9d8) >> 5) <=
      *(int *)(param_1 + 0x9f0))) {
    FUN_180212700(param_1 + 0xa58,"Select a script first.",0x16);
  }
  else {
    puVar1 = (undefined8 *)
             FUN_1800ea4d0(local_190,
                           (longlong)*(int *)(param_1 + 0x9f0) * 0x20 +
                           *(longlong *)(param_1 + 0x9d8));
    local_210 = *puVar1;
    uStack_208 = puVar1[1];
    local_200 = puVar1[2];
    uStack_1f8 = puVar1[3];
    puVar1[2] = 0;
    puVar1[3] = 7;
    *(undefined2 *)puVar1 = 0;
    uVar2 = FUN_1800eab00(local_1b0);
    FUN_180066720(local_38,uVar2,&local_210);
    FUN_18021e290(local_1b0);
    FUN_18021e290(&local_210);
    FUN_18021e290(local_190);
    local_278 = 0;
    local_270 = &PTR_vftable_std__System_error_category_1803e9500;
    piVar3 = (int *)FUN_180067c80(local_1e0,local_38);
    local_220 = *piVar3;
    iStack_21c = piVar3[1];
    local_1e0[0] = *(undefined8 *)piVar3;
    local_1f0 = piVar3[2];
    local_1e8 = &PTR_vftable_std__System_error_category_1803e9500;
    local_274 = local_1ec;
    local_278 = local_1f0;
    if (local_220 != 0) {
      local_278 = 0;
      local_270 = &PTR_vftable_std__System_error_category_1803e9500;
      if (local_220 != 1) {
        memset(local_168,0,0x110);
        FUN_180202040(local_168,local_38,0x20);
        if (*(int *)((longlong)local_158 + (longlong)*(int *)(local_168[0] + 4)) != 0) {
          FUN_180212700(param_1 + 0xa58,"Failed to load script.",0x16);
          FUN_18006afc0(local_168);
          FUN_18021e290(local_38);
          return 0;
        }
        local_248 = 0;
        local_240 = 1;
        local_23f = 0;
        local_258 = *(longlong *)((longlong)alStack_120 + (longlong)*(int *)(local_168[0] + 4));
        local_250 = local_258 == 0;
        local_22f = 0;
        local_268 = 0;
        local_260 = 1;
        local_25e = local_23e;
        local_25a = local_23a;
        local_24f = 0;
        local_24e = local_22e;
        local_24a = local_22a;
        local_238 = local_258;
        local_230 = local_250;
        FUN_180202170(local_58,&local_258);
        lVar4 = FUN_18021ea30(local_158);
        if (lVar4 == 0) {
          std::basic_ios<char,std::char_traits<char>_>::setstate
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),2,false);
        }
        local_1d0 = local_58;
        if (0xf < local_40) {
          local_1d0 = local_58[0];
        }
        local_1c8 = local_48;
        FUN_180015080(param_1 + 8,&local_1d0);
        _Src = (char *)((longlong)*(int *)(param_1 + 0x9f0) * 0x20 + *(longlong *)(param_1 + 0x9d8))
        ;
        if (0xf < *(ulonglong *)(_Src + 0x18)) {
          _Src = *(char **)_Src;
        }
        strncpy_s((char *)(param_1 + 0x9f4),0x60,_Src,0xffffffffffffffff);
        uVar2 = FUN_1801fd120(&local_1d0,"Loaded: ",
                              (longlong)*(int *)(param_1 + 0x9f0) * 0x20 +
                              *(longlong *)(param_1 + 0x9d8));
        FUN_18020e8a0(param_1 + 0xa58,uVar2);
        FUN_18020e450(&local_1d0);
        FUN_18020e450(local_58);
        FUN_18006afc0(local_168);
        FUN_18021e290(local_38);
        return 1;
      }
    }
    local_270 = &PTR_vftable_std__System_error_category_1803e9500;
    FUN_180212700(param_1 + 0xa58,"Script file not found.",0x16);
    FUN_18021e290(local_38);
  }
  return 0;
}


