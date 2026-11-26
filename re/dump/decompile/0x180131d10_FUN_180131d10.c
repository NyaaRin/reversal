// 0x180131d10  FUN_180131d10
// size=104 thunk=false
// signature: undefined FUN_180131d10()
// status: ok


longlong FUN_180131d10(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = DAT_180426138;
  if (DAT_180426138 == 0) {
    pHVar1 = DAT_1803fea40;
    if (((DAT_1803fea40 == (HMODULE)0x0) &&
        (pHVar1 = GetModuleHandleA("steamclient64.dll"), pHVar1 == (HMODULE)0x0)) ||
       (DAT_1803fea40 = pHVar1, lVar2 = FUN_180131270(), *(char *)(lVar2 + 0x30) == '\0')) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_180131270();
    lVar2 = (*(code *)*puVar3)("CLIENTENGINE_INTERFACE_VERSION005",0);
    if (lVar2 != 0) {
      DAT_180426138 = lVar2;
    }
  }
  return lVar2;
}


