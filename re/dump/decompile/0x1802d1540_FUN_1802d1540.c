// 0x1802d1540  FUN_1802d1540
// size=777 thunk=false
// signature: undefined FUN_1802d1540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d1540(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  SHORT SVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  HWND pHVar8;
  char *pcVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  tagRECT local_68;
  tagPOINT local_58;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  puVar7 = (undefined8 *)FUN_1802d0a30();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_68.left = 0;
  local_68.top = 0;
  local_68.right = 0;
  local_68.bottom = 0;
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  lVar11 = lVar2 + 0x28;
  GetClientRect((HWND)*puVar7,&local_68);
  *(float *)(lVar2 + 0x34) = (float)(local_68.bottom - local_68.top);
  *(float *)(lVar2 + 0x30) = (float)(local_68.right - local_68.left);
  local_50.QuadPart = 0;
  QueryPerformanceCounter(&local_50);
  *(float *)(lVar2 + 0x40) =
       (float)((double)(local_50.QuadPart - puVar7[3]) / (double)(longlong)puVar7[4]);
  ((LARGE_INTEGER *)(puVar7 + 3))->QuadPart = (LONGLONG)local_50;
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  pHVar8 = GetForegroundWindow();
  if (pHVar8 == (HWND)*puVar3) {
    if (*(char *)(lVar2 + 0xd3) != '\0') {
      local_58.x = (LONG)*(float *)(lVar2 + 0x100);
      local_58.y = (LONG)*(float *)(lVar2 + 0x104);
      BVar6 = ClientToScreen((HWND)*puVar3,&local_58);
      if (BVar6 != 0) {
        SetCursorPos(local_58.x,local_58.y);
      }
      if (*(char *)(lVar2 + 0xd3) != '\0') goto LAB_1802d16be;
    }
    if (*(int *)(puVar3 + 2) == 0) {
      BVar6 = GetCursorPos(&local_58);
      if (BVar6 != 0) {
        BVar6 = ScreenToClient((HWND)*puVar3,&local_58);
        if (BVar6 != 0) {
          FUN_180267dd0(lVar11);
        }
      }
    }
  }
LAB_1802d16be:
  pcVar9 = (char *)FUN_180267330(0x210);
  if (*pcVar9 != '\0') {
    cVar4 = FUN_18027deb0(0x210,0);
    if (cVar4 != '\0') {
      SVar5 = GetKeyState(0xa0);
      if ((-1 < SVar5) && (*(char *)(lVar2 + 0xbcd) != '\0')) {
        FUN_180267b90(lVar11,0x210,0,0);
      }
    }
  }
  pcVar9 = (char *)FUN_180267330(0x214);
  if (*pcVar9 != '\0') {
    cVar4 = FUN_18027deb0(0x214,0);
    if (cVar4 != '\0') {
      SVar5 = GetKeyState(0xa1);
      if ((-1 < SVar5) && (*(char *)(lVar2 + 0xbcd) != '\0')) {
        FUN_180267b90(lVar11,0x214,0,0);
      }
    }
  }
  pcVar9 = (char *)FUN_180267330(0x212);
  if (*pcVar9 != '\0') {
    cVar4 = FUN_18027deb0(0x212,0);
    if (cVar4 != '\0') {
      SVar5 = GetKeyState(0x5b);
      if ((-1 < SVar5) && (*(char *)(lVar2 + 0xbcd) != '\0')) {
        FUN_180267b90(lVar11,0x212,0,0);
      }
    }
  }
  pcVar9 = (char *)FUN_180267330(0x216);
  if (*pcVar9 != '\0') {
    cVar4 = FUN_18027deb0(0x216,0);
    if (cVar4 != '\0') {
      SVar5 = GetKeyState(0x5c);
      if ((-1 < SVar5) && (*(char *)(lVar2 + 0xbcd) != '\0')) {
        FUN_180267b90(lVar11,0x216,0,0);
      }
    }
  }
  if (*(char *)(lVar2 + 0x78) == '\0') {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar10 = *(int *)(*(longlong *)(lVar1 + 0xec0) + 0x2508);
  }
  else {
    iVar10 = -1;
  }
  if (*(int *)(puVar7 + 5) != iVar10) {
    *(int *)(puVar7 + 5) = iVar10;
    FUN_1802d0d70(lVar11);
  }
  FUN_1802d0f20(lVar11);
  return;
}


