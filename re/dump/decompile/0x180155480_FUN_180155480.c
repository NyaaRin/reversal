// 0x180155480  FUN_180155480
// size=217 thunk=false
// signature: undefined FUN_180155480()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180155480(undefined8 param_1,char param_2)

{
  DWORD DVar1;
  ULONGLONG UVar2;
  undefined *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_180409d18 == '\0') {
    UVar2 = GetTickCount64();
    DVar1 = GetCurrentProcessId();
    FUN_180012ac0(&DAT_180409d18,0x18,"%016llx",
                  (ulonglong)DVar1 * 0x9e3779b1 ^ UVar2 << 0x14 ^ 0x180409d18);
  }
  puVar3 = &DAT_18035ff98;
  if (param_2 != '\0') {
    puVar3 = &DAT_18035ff90;
  }
  FUN_180012ac0(local_48,0x30,puVar3,&DAT_180409d18);
  (*DAT_180409f30)(param_1,local_48);
  (*DAT_180409f50)(param_1,1);
  return;
}


