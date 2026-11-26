// 0x180182a10  FUN_180182a10
// size=370 thunk=false
// signature: undefined FUN_180182a10()
// status: ok


void FUN_180182a10(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  longlong lVar3;
  INT_PTR IVar4;
  int iVar5;
  char *local_58 [4];
  char *local_38;
  char *local_30;
  undefined8 local_28;
  
  lVar3 = DAT_18040a3d8;
  if (DAT_18040a3e0 == '\0') {
    DAT_18040a3e0 = '\x01';
    hModule = GetModuleHandleA("steam_api64.dll");
    if (hModule == (HMODULE)0x0) {
      hModule = GetModuleHandleA("steam_api.dll");
    }
    lVar3 = DAT_18040a3d8;
    if (hModule != (HMODULE)0x0) {
      DAT_18040a3e8 = GetProcAddress(hModule,"SteamAPI_ISteamFriends_HasFriend");
      pFVar1 = GetProcAddress(hModule,"SteamAPI_ISteamFriends_GetFriendCount");
      lVar3 = DAT_18040a3d8;
      if (DAT_18040a3e8 != (FARPROC)0x0) {
        local_58[0] = "SteamAPI_SteamFriends_v017";
        local_58[1] = "SteamAPI_SteamFriends_v018";
        local_58[2] = "SteamAPI_SteamFriends_v019";
        local_58[3] = "SteamAPI_SteamFriends_v020";
        local_38 = "SteamAPI_SteamFriends_v016";
        local_30 = "SteamAPI_SteamFriends_v015";
        local_28 = 0;
        iVar5 = 0;
        while ((lVar3 = DAT_18040a3d8, local_58[iVar5] != (LPCSTR)0x0 &&
               (((pFVar2 = GetProcAddress(hModule,local_58[iVar5]), pFVar2 == (FARPROC)0x0 ||
                 (lVar3 = (*pFVar2)(), lVar3 == 0)) ||
                ((pFVar1 != (FARPROC)0x0 && (IVar4 = (*pFVar1)(lVar3,4), 0x2000 < (uint)IVar4)))))))
        {
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  DAT_18040a3d8 = lVar3;
  return;
}


