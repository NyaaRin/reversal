// 0x1801313e0  FUN_1801313e0
// size=269 thunk=false
// signature: undefined FUN_1801313e0()
// status: ok


undefined8 FUN_1801313e0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  HMODULE pHVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  pHVar2 = DAT_180423b78;
  uVar4 = DAT_180425fd8;
  if (DAT_180425fd8 == 0) {
    pHVar2 = DAT_1803fea40;
    if ((DAT_1803fea40 == (HMODULE)0x0) &&
       (pHVar2 = GetModuleHandleA("steamclient64.dll"), pHVar2 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_1803fea40 = pHVar2;
    if ((short)DAT_1803fea40->unused != 0x5a4d) {
      return 0;
    }
    if (*(int *)((longlong)&DAT_1803fea40->unused + (longlong)DAT_1803fea40[0xf].unused) != 0x4550)
    {
      return 0;
    }
    uVar4 = (ulonglong)
            *(uint *)((longlong)&DAT_1803fea40[0x14].unused + (longlong)DAT_1803fea40[0xf].unused);
    pHVar2 = DAT_1803fea40;
    if (uVar4 == 0) {
      return 0;
    }
  }
  DAT_180425fd8 = uVar4;
  DAT_180423b78 = pHVar2;
  uVar4 = DAT_180425fd8;
  pHVar2 = DAT_180423b78;
  cVar1 = FUN_1801311e0(param_1);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 - param_1) + (longlong)pHVar2;
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
    lVar3 = 0;
    if (6 < param_3) {
      do {
        if (((((byte)(*(char *)(param_1 + lVar3) + 0xb8U) < 8) &&
             (*(char *)(param_1 + 1 + lVar3) == -0x73)) &&
            ((*(byte *)(param_1 + 2 + lVar3) & 199) == 5)) &&
           (cVar1 = FUN_180131390((longlong)*(int *)(param_1 + 3 + lVar3) + 7 + lVar3 + param_1,
                                  param_2), cVar1 != '\0')) {
          return 1;
        }
        uVar4 = lVar3 + 8;
        lVar3 = lVar3 + 1;
      } while (uVar4 <= param_3);
    }
  }
  return 0;
}


