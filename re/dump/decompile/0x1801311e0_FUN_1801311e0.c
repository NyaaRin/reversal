// 0x1801311e0  FUN_1801311e0
// size=143 thunk=false
// signature: undefined FUN_1801311e0()
// status: ok


ulonglong FUN_1801311e0(HMODULE param_1)

{
  HMODULE pHVar1;
  HMODULE pHVar2;
  
  pHVar1 = DAT_180423b78;
  pHVar2 = DAT_180425fd8;
  if (DAT_180425fd8 == (HMODULE)0x0) {
    pHVar1 = DAT_1803fea40;
    if (DAT_1803fea40 == (HMODULE)0x0) {
      pHVar1 = GetModuleHandleA("steamclient64.dll");
      pHVar2 = (HMODULE)0x0;
      if (pHVar1 == (HMODULE)0x0) goto LAB_180131267;
    }
    DAT_1803fea40 = pHVar1;
    pHVar2 = (HMODULE)0x5a4d;
    if ((((short)DAT_1803fea40->unused != 0x5a4d) ||
        (pHVar2 = (HMODULE)(longlong)DAT_1803fea40[0xf].unused,
        *(int *)((longlong)&DAT_1803fea40->unused + (longlong)&pHVar2->unused) != 0x4550)) ||
       (pHVar2 = (HMODULE)(ulonglong)
                          *(uint *)((longlong)&DAT_1803fea40->unused +
                                   (longlong)&pHVar2[0x14].unused), pHVar1 = DAT_1803fea40,
       pHVar2 == (HMODULE)0x0)) goto LAB_180131267;
  }
  DAT_180425fd8 = pHVar2;
  DAT_180423b78 = pHVar1;
  pHVar2 = DAT_180425fd8;
  if ((DAT_180423b78 <= param_1) &&
     (pHVar2 = (HMODULE)((longlong)&DAT_180423b78->unused + (longlong)&DAT_180425fd8->unused),
     param_1 < pHVar2)) {
    return CONCAT71((int7)((ulonglong)pHVar2 >> 8),1);
  }
LAB_180131267:
  return (ulonglong)pHVar2 & 0xffffffffffffff00;
}


