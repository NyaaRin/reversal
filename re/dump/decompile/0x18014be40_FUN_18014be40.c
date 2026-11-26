// 0x18014be40  FUN_18014be40
// size=417 thunk=false
// signature: undefined FUN_18014be40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014be40(LPCWSTR param_1,longlong *param_2,undefined8 param_3)

{
  BOOL BVar1;
  HANDLE hFile;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  DWORD nNumberOfBytesToRead;
  undefined8 uVar7;
  undefined1 auStackY_88 [32];
  DWORD local_48 [2];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  uVar2 = 0;
  hFile = CreateFileW(param_1,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    uVar7 = 0xb;
    pcVar5 = "cannot open";
  }
  else {
    local_40.QuadPart = 0;
    BVar1 = GetFileSizeEx(hFile,&local_40);
    if ((BVar1 == 0) || (local_40.QuadPart < 1)) {
      CloseHandle(hFile);
      uVar7 = 5;
      pcVar5 = "empty";
    }
    else if ((ulonglong)local_40 < 0x10000001) {
      FUN_180218360(param_2);
      lVar3 = param_2[1];
      lVar6 = *param_2;
      if (lVar3 != lVar6) {
        do {
          local_48[0] = 0;
          uVar4 = (lVar3 - lVar6) - uVar2;
          nNumberOfBytesToRead = 0x100000;
          if (uVar4 < 0x100000) {
            nNumberOfBytesToRead = (DWORD)uVar4;
          }
          BVar1 = ReadFile(hFile,(LPVOID)(lVar6 + uVar2),nNumberOfBytesToRead,local_48,
                           (LPOVERLAPPED)0x0);
          if ((BVar1 == 0) || (local_48[0] == 0)) break;
          lVar3 = param_2[1];
          uVar2 = uVar2 + local_48[0];
          lVar6 = *param_2;
        } while (uVar2 < (ulonglong)(lVar3 - lVar6));
      }
      CloseHandle(hFile);
      FUN_180218360(param_2,uVar2);
      if (0x1ff < (ulonglong)(param_2[1] - *param_2)) {
        return CONCAT71((int7)((ulonglong)(param_2[1] - *param_2) >> 8),1);
      }
      uVar7 = 9;
      pcVar5 = "truncated";
    }
    else {
      CloseHandle(hFile);
      uVar7 = 9;
      pcVar5 = "too large";
    }
  }
  uVar2 = FUN_180212700(param_3,pcVar5,uVar7);
  return uVar2 & 0xffffffffffffff00;
}


