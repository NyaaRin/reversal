// 0x180023330  FUN_180023330
// size=411 thunk=false
// signature: undefined FUN_180023330()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180023330(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  HMODULE hModule;
  void *_Memory;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((DAT_1803fb0b0 == (FARPROC)0x0) &&
     (hModule = GetModuleHandleA("lua_shared.dll"), hModule != (HMODULE)0x0)) {
    DAT_1803fb0b0 = GetProcAddress(hModule,"luaL_ref");
    DAT_1803fb0a8 = GetProcAddress(hModule,"luaL_unref");
  }
  cVar1 = *(char *)((longlong)DAT_1803fac68[1] + 0x19);
  puVar3 = (undefined8 *)DAT_1803fac68[1];
  puVar4 = DAT_1803fac68;
  while (puVar5 = puVar3, cVar1 == '\0') {
    if ((ulonglong)puVar5[4] < param_1) {
      puVar3 = (undefined8 *)puVar5[2];
      puVar5 = puVar4;
    }
    else {
      puVar3 = (undefined8 *)*puVar5;
    }
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    puVar4 = puVar5;
  }
  if ((*(char *)((longlong)puVar4 + 0x19) != '\0') || (param_1 < (ulonglong)puVar4[4])) {
    puVar4 = DAT_1803fac68;
  }
  if (puVar4 != DAT_1803fac68) {
    if ((DAT_1803fb0a8 != (FARPROC)0x0) && (0 < *(int *)(puVar4 + 5))) {
      (*DAT_1803fb0a8)(param_1,0xffffd8f0);
    }
    _Memory = (void *)FUN_18022e0e0(&DAT_1803fac68,puVar4);
    free(_Memory);
  }
  if ((param_1 != 0) && (uVar2 = *(ulonglong *)(param_1 + 0x10), uVar2 != 0)) {
    puVar3 = (undefined8 *)DAT_1803fa7f0[1];
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    puVar4 = puVar3;
    local_20 = DAT_1803fa7f0;
    local_28 = DAT_1803fa7f0;
    while (puVar5 = puVar4, cVar1 == '\0') {
      if ((ulonglong)puVar5[4] < uVar2) {
        puVar4 = (undefined8 *)puVar5[2];
        puVar5 = local_28;
      }
      else {
        if ((*(char *)((longlong)local_20 + 0x19) != '\0') && (uVar2 < (ulonglong)puVar5[4])) {
          local_20 = puVar5;
        }
        puVar4 = (undefined8 *)*puVar5;
      }
      cVar1 = *(char *)((longlong)puVar4 + 0x19);
      local_28 = puVar5;
    }
    if (*(char *)((longlong)local_20 + 0x19) == '\0') {
      puVar3 = (undefined8 *)*local_20;
    }
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    while (cVar1 == '\0') {
      if (uVar2 < (ulonglong)puVar3[4]) {
        puVar4 = (undefined8 *)*puVar3;
        local_20 = puVar3;
      }
      else {
        puVar4 = (undefined8 *)puVar3[2];
      }
      puVar3 = puVar4;
      cVar1 = *(char *)((longlong)puVar4 + 0x19);
    }
    FUN_18021d9b0(puVar5,&local_28);
  }
  return;
}


