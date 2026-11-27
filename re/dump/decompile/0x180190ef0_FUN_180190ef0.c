// 0x180190ef0  FUN_180190ef0
// size=214 thunk=false
// signature: undefined FUN_180190ef0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180190ef0(ulonglong param_1)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((DAT_1805b8880 & 1) == 0) {
    DAT_1805b8880 = DAT_1805b8880 | 1;
    DAT_180427798 = 0;
    DAT_1804277a0 = 0;
    pHVar2 = GetModuleHandleA("client.dll");
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    if (pHVar2 != (HMODULE)0x0) {
      pvVar3 = GetCurrentProcess();
      iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_28,0x18);
      if (iVar1 != 0) {
        DAT_180427798 = local_28;
        DAT_1804277a0 = (uStack_20 & 0xffffffff) + local_28;
      }
    }
  }
  if (((DAT_180427798 == 0) || (param_1 < DAT_180427798)) || (DAT_1804277a0 <= param_1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


