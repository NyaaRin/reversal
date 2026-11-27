// 0x1801fbe40  FUN_1801fbe40
// size=196 thunk=false
// signature: undefined FUN_1801fbe40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801fbe40(undefined8 param_1)

{
  int iVar1;
  HANDLE pvVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  int local_20;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  _set_se_translator(FUN_180014ce0);
  SetUnhandledExceptionFilter(FUN_180014d70);
  DAT_1803f9288 = param_1;
  if ((DAT_1803da690 == 0) || (DAT_1803da690 == 0x7fffffff)) {
    pvVar2 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar2,param_1,local_28,0x18);
    if (iVar1 == 0) {
      FUN_180014410("Module info not available (headers cleared?), using default.\n");
      DAT_1803da690 = 0x7fffffff;
    }
    else {
      FUN_180014410("Got module info! Size: %u\n",local_20);
      DAT_1803da690 = local_20;
    }
  }
  else {
    FUN_180014410("Module info pre-read in DllMain. Size: %u\n");
  }
  FUN_1801fbda0();
  return;
}


