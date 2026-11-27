// 0x18011ca90  Features_LoadingUrl_LoadingUrlFeature_vfunc04
// size=153 thunk=false
// signature: undefined Features_LoadingUrl_LoadingUrlFeature_vfunc04()
// status: ok


void Features_LoadingUrl_LoadingUrlFeature_vfunc04(undefined8 param_1)

{
  char cVar1;
  HMODULE hModule;
  INT_PTR IVar2;
  
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0')) {
    return;
  }
  FUN_18011c490();
  if ((DAT_180423738 == '\0') && (DAT_180423728 == '\0')) {
    if (DAT_180425534 == '\0') {
      DAT_180425534 = '\x01';
      hModule = GetModuleHandleA("tier0.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_1803fd108 = GetProcAddress(hModule,"ThreadInMainThread");
      }
    }
    if (DAT_1803fd108 == (FARPROC)0x0) {
      return;
    }
    IVar2 = (*DAT_1803fd108)();
    if ((char)IVar2 == '\0') {
      return;
    }
  }
  FUN_18011cf40(param_1);
  return;
}


