// 0x1800ea7a0  FUN_1800ea7a0
// size=853 thunk=false
// signature: undefined FUN_1800ea7a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ea7a0(undefined8 param_1)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_538 [32];
  wchar_t *local_518;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined1 local_480 [40];
  wchar_t local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_538;
  local_508 = 0;
  local_488 = param_1;
  memset(local_458,0,0x208);
  local_518 = local_458;
  iVar1 = SHGetFolderPathW(0,0x8005,0,0);
  if (iVar1 < 0) {
    memset(local_248,0,0x208);
    DVar2 = GetEnvironmentVariableW(L"USERPROFILE",local_248,0x104);
    local_490 = &local_4c0;
    if (DVar2 == 0) {
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      FUN_180211510(&local_4c0,L"mayrrX64",8);
      local_508 = 0;
      uVar4 = FUN_180068190(local_480);
      FUN_180066720(param_1,uVar4,&local_4c0);
      local_508 = 1;
      FUN_18021e290(local_480);
    }
    else {
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      local_498 = local_490;
      FUN_180211510(&local_4c0,L"mayrrX64",8);
      local_508 = 0;
      local_4a0 = &local_500;
      local_500 = 0;
      uStack_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      FUN_180211510(&local_500,L"Documents",9);
      local_508 = 0;
      local_490 = &local_4e0;
      sVar3 = wcslen(local_248);
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      FUN_180211510(&local_4e0,local_248,sVar3);
      local_508 = 0;
      uVar4 = FUN_180066720(local_480,&local_4e0,&local_500);
      FUN_180066720(param_1,uVar4,&local_4c0);
      local_508 = 1;
      FUN_18021e290(local_480);
      FUN_18021e290(&local_4e0);
      FUN_18021e290(&local_500);
    }
    puVar5 = &local_4c0;
  }
  else {
    local_4a0 = &local_4e0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    local_4c8 = 0;
    FUN_180211510(&local_4e0,L"mayrrX64",8);
    local_508 = 0;
    local_498 = &local_500;
    sVar3 = wcslen(local_458);
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    local_4e8 = 0;
    FUN_180211510(&local_500,local_458,sVar3);
    local_508 = 0;
    FUN_180066720(param_1,&local_500,&local_4e0);
    local_508 = 1;
    FUN_18021e290(&local_500);
    puVar5 = &local_4e0;
  }
  FUN_18021e290(puVar5);
  return param_1;
}


