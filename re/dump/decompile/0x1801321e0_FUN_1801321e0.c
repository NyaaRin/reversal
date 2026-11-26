// 0x1801321e0  FUN_1801321e0
// size=266 thunk=false
// signature: undefined FUN_1801321e0()
// status: ok


INT_PTR FUN_1801321e0(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  INT_PTR IVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  INT_PTR IVar9;
  undefined **ppuVar10;
  
  pHVar1 = DAT_180423ae0;
  if ((DAT_180423ae0 != (HMODULE)0x0) ||
     (pHVar1 = GetModuleHandleA("steam_api64.dll"), pHVar1 != (HMODULE)0x0)) {
    DAT_180423ae0 = pHVar1;
    pHVar1 = DAT_180423ae0;
    pFVar2 = GetProcAddress(DAT_180423ae0,"SteamAPI_SteamUser_v023");
    if ((pFVar2 != (FARPROC)0x0) && (IVar3 = (*pFVar2)(), IVar3 != 0)) {
      return IVar3;
    }
    pFVar2 = GetProcAddress(pHVar1,"SteamAPI_GetHSteamUser");
    pFVar4 = GetProcAddress(pHVar1,"SteamAPI_GetHSteamPipe");
    pFVar5 = GetProcAddress(pHVar1,"SteamClient");
    pFVar6 = GetProcAddress(pHVar1,"SteamAPI_ISteamClient_GetISteamUser");
    if ((((pFVar2 != (FARPROC)0x0) && (pFVar4 != (FARPROC)0x0)) && (pFVar5 != (FARPROC)0x0)) &&
       ((pFVar6 != (FARPROC)0x0 && (IVar3 = (*pFVar5)(), IVar3 != 0)))) {
      uVar7 = (*pFVar2)();
      uVar8 = (*pFVar4)();
      ppuVar10 = &PTR_s_SteamUser023_1803e9258;
      do {
        IVar9 = (*pFVar6)(IVar3,uVar7 & 0xffffffff,uVar8 & 0xffffffff,*ppuVar10);
        if (IVar9 != 0) {
          return IVar9;
        }
        ppuVar10 = ppuVar10 + 1;
      } while (ppuVar10 != (undefined **)&DAT_1803e9290);
    }
  }
  return 0;
}


