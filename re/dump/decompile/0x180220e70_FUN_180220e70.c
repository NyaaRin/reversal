// 0x180220e70  FUN_180220e70
// size=365 thunk=false
// signature: undefined FUN_180220e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180220e70(void *param_1)

{
  BOOL BVar1;
  undefined1 auStackY_318 [32];
  tagOFNW local_2c8;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStackY_318;
  memset(local_228,0,0x208);
  local_2c8.hwndOwner = (HWND)0x0;
  local_2c8.hInstance = (HINSTANCE)0x0;
  local_2c8.lpstrCustomFilter = (LPWSTR)0x0;
  local_2c8.nMaxCustFilter = 0;
  local_2c8.nFilterIndex = 0;
  local_2c8.lpstrFileTitle = (LPWSTR)0x0;
  local_2c8.nMaxFileTitle = 0;
  local_2c8._76_4_ = 0;
  local_2c8.lpstrInitialDir = (LPCWSTR)0x0;
  local_2c8.lpstrDefExt = (LPCWSTR)0x0;
  local_2c8.lCustData = 0;
  local_2c8.lpfnHook = (LPOFNHOOKPROC)0x0;
  local_2c8.lpTemplateName = (LPCWSTR)0x0;
  local_2c8.pvReserved = (void *)0x0;
  local_2c8.dwReserved = 0;
  local_2c8.FlagsEx = 0;
  local_2c8.lStructSize = 0x98;
  local_2c8._4_4_ = 0;
  local_2c8.lpstrFilter = L"Valve Texture (*.vtf)";
  local_2c8.lpstrFile = local_228;
  local_2c8.nMaxFile = 0x104;
  local_2c8._60_4_ = 0;
  local_2c8.lpstrTitle = L"Select skybox VTF";
  local_2c8.Flags = 0x81008;
  local_2c8.nFileOffset = 0;
  local_2c8.nFileExtension = 0;
  BVar1 = GetOpenFileNameW(&local_2c8);
  if ((BVar1 != 0) && (local_228[0] != L'\0')) {
    WideCharToMultiByte(0xfde9,0,local_228,-1,&DAT_180400ec0,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  LOCK();
  DAT_1804011c0 = 0;
  UNLOCK();
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


