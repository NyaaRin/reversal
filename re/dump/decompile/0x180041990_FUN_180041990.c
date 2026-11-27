// 0x180041990  FUN_180041990
// size=532 thunk=false
// signature: undefined FUN_180041990()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_180041990(ulonglong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  char *pcVar5;
  size_t sVar6;
  char *_Str;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = param_1;
  if (((param_2 == (longlong *)0x0) || (lVar1 = param_2[1], lVar1 == 0)) || (DAT_1803ff8a8 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,&DAT_18033f5b0,3);
  }
  else {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar3,"lua_gettop");
    }
    uVar4 = (*DAT_1803fcfa0)(lVar1);
    lVar2 = DAT_1803ff8a8;
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar3,"lua_pushvalue");
    }
    (*DAT_180423ad0)(lVar2,(ulonglong)param_3);
    lVar2 = DAT_1803ff8a8;
    if (DAT_1803feb38 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_1803feb38 = GetProcAddress(pHVar3,"lua_xmove");
    }
    (*DAT_1803feb38)(lVar2,lVar1,1);
    pcVar5 = (char *)(**(code **)(*param_2 + 0x3c0))(param_2,0xffffffff);
    _Str = "?";
    if (pcVar5 != (char *)0x0) {
      _Str = pcVar5;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    sVar6 = strlen(_Str);
    FUN_18001d080(&local_68,_Str,sVar6);
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar4 & 0xffffffff);
    *param_1 = local_68;
    param_1[1] = uStack_60;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
    local_58 = _DAT_1803814b0;
    uStack_50 = _UNK_1803814b8;
    local_68 = local_68 & 0xffffffffffffff00;
    local_78 = 1;
    FUN_18020e450(&local_68);
  }
  return param_1;
}


