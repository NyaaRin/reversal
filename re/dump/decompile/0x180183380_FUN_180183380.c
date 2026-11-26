// 0x180183380  FUN_180183380
// size=234 thunk=false
// signature: undefined FUN_180183380()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180183380(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  LPCSTR **lpFile;
  undefined1 auStackY_88 [32];
  undefined1 local_50 [32];
  LPCSTR *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  if (param_1 != 0) {
    local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;
    uVar1 = FUN_180013d70(local_50,param_1);
    puVar2 = (undefined8 *)FUN_18022a630(uVar1);
    local_30 = (LPCSTR *)*puVar2;
    uStack_28 = puVar2[1];
    local_20 = puVar2[2];
    uStack_18 = puVar2[3];
    *(undefined1 *)puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    FUN_18020e450(local_50);
    lpFile = &local_30;
    if (0xf < uStack_18) {
      lpFile = (LPCSTR **)local_30;
    }
    ShellExecuteA((HWND)0x0,"open",(LPCSTR)lpFile,(LPCSTR)0x0,(LPCSTR)0x0,1);
    FUN_18020e450(&local_30);
  }
  return;
}


