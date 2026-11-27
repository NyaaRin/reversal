// 0x180220c70  FUN_180220c70
// size=512 thunk=false
// signature: undefined FUN_180220c70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180220c70(void *param_1)

{
  BOOL BVar1;
  int cbMultiByte;
  longlong *plVar2;
  LPSTR **pppCVar3;
  LPSTR **pppCVar4;
  undefined1 auStackY_388 [32];
  undefined1 local_340 [16];
  undefined1 local_330 [24];
  tagOFNW local_318;
  LPSTR *local_278 [2];
  undefined8 local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_388;
  memset(local_248,0,0x208);
  local_318.hwndOwner = (HWND)0x0;
  local_318.hInstance = (HINSTANCE)0x0;
  local_318.lpstrCustomFilter = (LPWSTR)0x0;
  local_318.nMaxCustFilter = 0;
  local_318.nFilterIndex = 0;
  local_318.lpstrFileTitle = (LPWSTR)0x0;
  local_318.nMaxFileTitle = 0;
  local_318._76_4_ = 0;
  local_318.lpstrInitialDir = (LPCWSTR)0x0;
  local_318.lpstrDefExt = (LPCWSTR)0x0;
  local_318.lCustData = 0;
  local_318.lpfnHook = (LPOFNHOOKPROC)0x0;
  local_318.lpTemplateName = (LPCWSTR)0x0;
  local_318.pvReserved = (void *)0x0;
  local_318.dwReserved = 0;
  local_318.FlagsEx = 0;
  local_318.lStructSize = 0x98;
  local_318._4_4_ = 0;
  local_318.lpstrFilter = L"Web pages";
  local_318.lpstrFile = local_248;
  local_318.nMaxFile = 0x104;
  local_318._60_4_ = 0;
  local_318.lpstrTitle = L"Pick a loading screen page";
  local_318.Flags = 0x1808;
  local_318.nFileOffset = 0;
  local_318.nFileExtension = 0;
  BVar1 = GetOpenFileNameW(&local_318);
  if ((BVar1 != 0) && (local_248[0] != L'\0')) {
    cbMultiByte = WideCharToMultiByte(0xfde9,0,local_248,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (1 < cbMultiByte) {
      FUN_18020ea80(local_278,(longlong)cbMultiByte + -1,0);
      pppCVar3 = local_278;
      if (0xf < local_260) {
        pppCVar3 = (LPSTR **)local_278[0];
      }
      WideCharToMultiByte(0xfde9,0,local_248,-1,(LPSTR)pppCVar3,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      local_258 = 0x93fd561a96ab0c67;
      local_250 = 0xdf2349e24f8aaf7d;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_340,&local_258);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_330,&local_250);
      pppCVar3 = (LPSTR **)FUN_1802028c0(*plVar2 + 0x28);
      if (pppCVar3 != local_278) {
        pppCVar4 = local_278;
        if (0xf < local_260) {
          pppCVar4 = (LPSTR **)local_278[0];
        }
        FUN_180212700(pppCVar3,pppCVar4,local_268);
      }
      FUN_18020e450(local_278);
    }
  }
  LOCK();
  DAT_180423739 = 0;
  UNLOCK();
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


