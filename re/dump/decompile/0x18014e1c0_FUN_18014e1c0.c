// 0x18014e1c0  FUN_18014e1c0
// size=179 thunk=false
// signature: undefined FUN_18014e1c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18014e1c0(uint param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  ULONGLONG UVar3;
  ulonglong uVar4;
  uint local_res18;
  int local_res1c;
  
  if (param_2 <= (int)param_1) {
    return (ulonglong)param_1;
  }
  local_res18 = param_1;
  local_res1c = param_2;
  if ((DAT_180430158 & 1) == 0) {
    DAT_180430158 = DAT_180430158 | 1;
    UVar3 = GetTickCount64();
    DVar1 = GetCurrentThreadId();
    uVar2 = DVar1 ^ (uint)UVar3;
    _DAT_18042bc74 = 0xffffffff;
    uVar4 = 1;
    _DAT_18042a8f4 = uVar2;
    do {
      uVar2 = (uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)uVar4;
      *(uint *)(&DAT_18042a8f4 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x270);
    _DAT_18042a8f0 = 0x270;
  }
  uVar4 = FUN_1801fcf20(&local_res18,&DAT_18042a8f0);
  return uVar4;
}


