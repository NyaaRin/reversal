// 0x180131270  FUN_180131270
// size=285 thunk=false
// signature: undefined FUN_180131270()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180131270(void)

{
  HMODULE pHVar1;
  
  if ((DAT_1803fedb8 == '\0') &&
     ((pHVar1 = DAT_1803fea40, DAT_1803fea40 != (HMODULE)0x0 ||
      (pHVar1 = GetModuleHandleA("steamclient64.dll"), pHVar1 != (HMODULE)0x0)))) {
    DAT_1803fea40 = pHVar1;
    pHVar1 = DAT_1803fea40;
    DAT_1803fed88 = GetProcAddress(DAT_1803fea40,"CreateInterface");
    DAT_1803fed90 = GetProcAddress(pHVar1,"Steam_CreateLocalUser");
    DAT_1803fed98 = GetProcAddress(pHVar1,"Steam_ReleaseUser");
    DAT_1803feda0 = GetProcAddress(pHVar1,"Steam_BGetCallback");
    DAT_1803feda8 = GetProcAddress(pHVar1,"Steam_FreeLastCallback");
    _DAT_1803fedb0 = GetProcAddress(pHVar1,"Steam_BReleaseSteamPipe");
    if ((DAT_1803fed88 == (FARPROC)0x0) ||
       ((((DAT_1803fed90 == (FARPROC)0x0 || (DAT_1803fed98 == (FARPROC)0x0)) ||
         (DAT_1803feda0 == (FARPROC)0x0)) || (DAT_1803fedb8 = '\x01', DAT_1803feda8 == (FARPROC)0x0)
        ))) {
      DAT_1803fedb8 = '\0';
    }
  }
  return &DAT_1803fed88;
}


