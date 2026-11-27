// 0x1801f0e10  FUN_1801f0e10
// size=308 thunk=false
// signature: undefined FUN_1801f0e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1801f0e10(undefined8 *param_1,LPCSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  char *_Src;
  undefined1 auStack_158 [32];
  HMODULE local_138 [2];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  if ((*(LPCSTR *)*param_1 <= param_2) && (param_2 < *(LPCSTR *)param_1[1])) {
    return "client.dll";
  }
  if ((*(LPCSTR *)param_1[2] <= param_2) && (param_2 < *(LPCSTR *)param_1[3])) {
    return "engine.dll";
  }
  local_138[0] = (HMODULE)0x0;
  if (param_2 != (LPCSTR)0x0) {
    BVar1 = GetModuleHandleExA(6,param_2,local_138);
    if ((BVar1 != 0) && (local_138[0] != (HMODULE)0x0)) {
      DVar2 = GetModuleFileNameA(local_138[0],local_128,0x104);
      if (DVar2 != 0) {
        pcVar3 = strrchr(local_128,0x5c);
        _Src = pcVar3 + 1;
        if (pcVar3 == (char *)0x0) {
          _Src = local_128;
        }
        strncpy_s(&DAT_180427680,0x104,_Src,0xffffffffffffffff);
        return &DAT_180427680;
      }
    }
  }
  return "???";
}


