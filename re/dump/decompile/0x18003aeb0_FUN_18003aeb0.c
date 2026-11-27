// 0x18003aeb0  FUN_18003aeb0
// size=295 thunk=false
// signature: undefined FUN_18003aeb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18003aeb0(undefined8 *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  HMODULE pHVar2;
  INT_PTR IVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_48 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_40 = param_1;
  FUN_18001d080(0,&DAT_18033e9cc,1);
  local_48 = 1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
  }
  IVar3 = (*DAT_1803fe490)(uVar1,0xffffffff);
  if (((int)IVar3 == 4) && (DAT_1803fb008 != (code *)0x0)) {
    local_38 = 0;
    lVar4 = (*DAT_1803fb008)(*(undefined8 *)(param_2 + 0x18),0xffffffff,&local_38);
    if (lVar4 != 0) {
      FUN_180212700(param_1,lVar4,local_38);
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
  }
  (*DAT_180425540)(uVar1,(ulonglong)param_3);
  return param_1;
}


