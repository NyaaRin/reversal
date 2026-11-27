// 0x180015490  FUN_180015490
// size=240 thunk=false
// signature: undefined FUN_180015490()
// status: ok


undefined8 FUN_180015490(ushort param_1)

{
  longlong lVar1;
  DWORD DVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar3;
  undefined8 uVar4;
  
  hResInfo = FindResourceW(DAT_1803f9288,(LPCWSTR)(ulonglong)param_1,(LPCWSTR)0xa);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_1803f9288,hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x60);
      DVar2 = SizeofResource(DAT_1803f9288,hResInfo);
      pvVar3 = LockResource(hResData);
      uVar4 = FUN_180298b30(uVar4,pvVar3,DVar2);
      return uVar4;
    }
  }
  return 0;
}


