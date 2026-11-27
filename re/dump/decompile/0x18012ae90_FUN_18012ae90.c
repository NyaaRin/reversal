// 0x18012ae90  FUN_18012ae90
// size=653 thunk=false
// signature: undefined FUN_18012ae90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18012ae90(undefined8 param_1)

{
  DWORD DVar1;
  HMODULE hModule;
  size_t sVar2;
  undefined8 uVar3;
  wchar_t **ppwVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  undefined1 local_288 [32];
  undefined8 local_268 [4];
  wchar_t *local_248;
  wchar_t *local_240;
  wchar_t *local_238 [66];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_2e8;
  local_2c8 = 0;
  local_290 = param_1;
  if ((DAT_18042cd64 & 1) == 0) {
    DAT_18042cd64 = DAT_18042cd64 | 1;
    atexit(FUN_18030a200);
  }
  if (DAT_1803e71c8 == 0) {
    memset(local_238,0,0x208);
    local_248 = L"client.dll";
    local_240 = L"engine.dll";
    ppwVar4 = &local_248;
    do {
      hModule = GetModuleHandleW(*ppwVar4);
      if ((hModule != (HMODULE)0x0) &&
         (DVar1 = GetModuleFileNameW(hModule,(LPWSTR)local_238,0x104), DVar1 != 0)) {
        local_2a0 = local_268;
        local_298 = &local_2c0;
        sVar2 = wcslen((wchar_t *)local_238);
        local_2c0 = 0;
        uStack_2b8 = 0;
        local_2b0 = 0;
        local_2a8 = 0;
        FUN_180211510(&local_2c0,local_238,sVar2);
        local_2c8 = 0;
        uVar3 = FUN_180065cd0(&local_2c0,local_268);
        uVar3 = FUN_18012b120(extraout_XMM0_Da,local_288,uVar3);
        FUN_180067660(&DAT_1803e71b8,uVar3);
        FUN_18021e290(local_288);
        FUN_18021e290(&local_2c0);
        if (DAT_1803e71c8 != 0) {
          FUN_18020e540(param_1,&DAT_1803e71b8);
          return param_1;
        }
      }
      ppwVar4 = ppwVar4 + 1;
    } while (ppwVar4 != local_238);
    DVar1 = GetCurrentDirectoryW(0x104,(LPWSTR)local_238);
    if (DVar1 != 0) {
      local_298 = &local_2c0;
      local_2a0 = &local_2c0;
      sVar2 = wcslen((wchar_t *)local_238);
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2b0 = 0;
      local_2a8 = 0;
      uVar5 = FUN_180211510(&local_2c0,local_238,sVar2);
      local_2c8 = 0;
      uVar3 = FUN_18012b120(uVar5,local_288,&local_2c0);
      FUN_180067660(&DAT_1803e71b8,uVar3);
      FUN_18021e290(local_288);
    }
    FUN_18020e540(param_1,&DAT_1803e71b8);
  }
  else {
    FUN_18020e540(param_1,&DAT_1803e71b8);
  }
  return param_1;
}


