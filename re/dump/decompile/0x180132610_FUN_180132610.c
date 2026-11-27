// 0x180132610  FUN_180132610
// size=277 thunk=false
// signature: undefined FUN_180132610()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_180132610(ulonglong *param_1,BYTE *param_2,DWORD param_3,BYTE *param_4)

{
  DWORD *pDVar1;
  BOOL BVar2;
  DATA_BLOB *pOptionalEntropy;
  undefined1 auStackY_c8 [32];
  DATA_BLOB local_78;
  DATA_BLOB local_68;
  DATA_BLOB local_58;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_c8;
  pDVar1 = (DWORD *)(param_4 + 0x10);
  local_68.cbData = *pDVar1;
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(BYTE **)param_4;
  }
  local_78.cbData = 0;
  local_78.pbData = (BYTE *)0x0;
  pOptionalEntropy = &local_68;
  if (*(longlong *)pDVar1 == 0) {
    pOptionalEntropy = (DATA_BLOB *)0x0;
  }
  local_68.pbData = param_4;
  local_58.cbData = param_3;
  local_58.pbData = param_2;
  BVar2 = CryptUnprotectData(&local_58,(LPWSTR *)0x0,pOptionalEntropy,(PVOID)0x0,
                             (CRYPTPROTECT_PROMPTSTRUCT *)0x0,0,&local_78);
  if (BVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_18001d080(&local_48,local_78.pbData,local_78.cbData);
    if (local_78.pbData != (BYTE *)0x0) {
      LocalFree(local_78.pbData);
    }
    *param_1 = local_48;
    param_1[1] = uStack_40;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
    local_38 = _DAT_1803814b0;
    uStack_30 = _UNK_1803814b8;
    local_48 = local_48 & 0xffffffffffffff00;
    FUN_18020e450(&local_48);
  }
  return param_1;
}


