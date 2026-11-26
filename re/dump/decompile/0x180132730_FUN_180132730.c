// 0x180132730  FUN_180132730
// size=247 thunk=false
// signature: undefined FUN_180132730()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132730(undefined8 *param_1)

{
  LSTATUS LVar1;
  size_t sVar2;
  undefined1 auStackY_188 [32];
  DWORD local_138 [4];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStackY_188;
  memset(local_128,0,0x104);
  local_138[0] = 0x104;
  LVar1 = RegGetValueA((HKEY)0xffffffff80000001,"Software\\Valve\\Steam","SteamPath",2,(LPDWORD)0x0,
                       local_128,local_138);
  if ((LVar1 == 0) && (local_128[0] != '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar2 = strlen(local_128);
    FUN_18001d080(param_1,local_128,sVar2);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}


