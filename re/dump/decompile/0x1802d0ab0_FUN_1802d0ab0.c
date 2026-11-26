// 0x1802d0ab0  FUN_1802d0ab0
// size=509 thunk=false
// signature: undefined FUN_1802d0ab0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802d0ab0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  BOOL BVar4;
  int iVar5;
  undefined8 *puVar6;
  HKL pHVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  char *local_90 [4];
  char *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  BVar4 = QueryPerformanceFrequency(&local_50);
  if ((BVar4 != 0) && (BVar4 = QueryPerformanceCounter(&local_48), BVar4 != 0)) {
    puVar6 = (undefined8 *)FUN_18026f580(0x58);
    local_60 = local_98;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
    }
    *(undefined8 **)(lVar2 + 0xb8) = puVar6;
    *(char **)(lVar2 + 0xa8) = "imgui_impl_win32";
    *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) | 6;
    *puVar6 = param_1;
    *(LARGE_INTEGER *)(puVar6 + 4) = local_50;
    *(LARGE_INTEGER *)(puVar6 + 3) = local_48;
    *(undefined4 *)(puVar6 + 5) = 0xb;
    lVar2 = *(longlong *)(lVar2 + 0xb8);
    local_68 = puVar6;
    local_58 = puVar6;
    pHVar7 = GetKeyboardLayout(0);
    iVar5 = GetLocaleInfoA((uint)((ulonglong)pHVar7 >> 0x10) & 0xffff,0x20001004,
                           (LPSTR)(lVar2 + 0x2c),4);
    if (iVar5 == 0) {
      *(undefined4 *)(lVar2 + 0x2c) = 0;
    }
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = **(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0x2060);
    uVar3 = *puVar6;
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    *(undefined8 *)(lVar1 + 0x30) = uVar3;
    *(undefined1 *)((longlong)puVar6 + 0x31) = 1;
    local_90[0] = "xinput1_4.dll";
    local_90[1] = "xinput1_3.dll";
    local_90[2] = "xinput9_1_0.dll";
    local_90[3] = "xinput1_2.dll";
    local_70 = "xinput1_1.dll";
    uVar10 = 0;
    do {
      hModule = LoadLibraryA(local_90[uVar10]);
      if (hModule != (HMODULE)0x0) {
        puVar6[7] = hModule;
        pFVar8 = GetProcAddress(hModule,"XInputGetCapabilities");
        puVar6[8] = pFVar8;
        pFVar8 = GetProcAddress(hModule,"XInputGetState");
        puVar6[9] = pFVar8;
        return 1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < 5);
    return 1;
  }
  return 0;
}


