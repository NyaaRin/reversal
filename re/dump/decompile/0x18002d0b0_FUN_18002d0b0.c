// 0x18002d0b0  FUN_18002d0b0
// size=193 thunk=false
// signature: undefined FUN_18002d0b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18002d0b0(longlong param_1,undefined8 param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  char *_Str;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  _Str = "";
  if (param_3 != (char *)0x0) {
    _Str = param_3;
  }
  sVar2 = strlen(_Str);
  FUN_180212700(param_4,_Str,sVar2);
  if (((param_1 != 0) && (DAT_1803faff8 != (code *)0x0)) && (DAT_1803fb008 != (code *)0x0)) {
    iVar1 = (*DAT_1803faff8)(param_1,0xffffffff);
    if (iVar1 == 4) {
      local_28 = 0;
      lVar3 = (*DAT_1803fb008)(param_1,0xffffffff,&local_28);
      if (lVar3 != 0) {
        FUN_180212700(param_4,lVar3,local_28);
      }
    }
  }
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  return param_4;
}


