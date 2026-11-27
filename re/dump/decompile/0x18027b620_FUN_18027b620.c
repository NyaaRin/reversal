// 0x18027b620  FUN_18027b620
// size=305 thunk=false
// signature: undefined FUN_18027b620()
// status: ok


short * FUN_18027b620(uint param_1)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar6 = param_1 & 0xf000;
  uVar3 = param_1 & 0xffff0fff;
  if ((param_1 & 0xffff0fff) == 0) {
    if (uVar6 == 0x1000) {
      uVar3 = 0x297;
    }
    else if (uVar6 == 0x2000) {
      uVar3 = 0x298;
    }
    else if (uVar6 == 0x4000) {
      uVar3 = 0x299;
    }
    else {
      uVar3 = uVar6;
      if (uVar6 == 0x8000) {
        uVar3 = 0x29a;
      }
    }
  }
  lVar5 = (longlong)(int)uVar3;
  sVar2 = *(short *)(lVar1 + 0x1950 + lVar5 * 2);
  if (sVar2 != -1) {
    do {
      psVar4 = (short *)(*(longlong *)(lVar1 + 0x1e90) + (longlong)sVar2 * 0x10);
      if (*(ushort *)(*(longlong *)(lVar1 + 0x1e90) + 2 + (longlong)sVar2 * 0x10) == uVar6) {
        return psVar4;
      }
      sVar2 = *psVar4;
    } while (sVar2 != -1);
  }
  local_38 = 0xffff;
  sVar2 = *(short *)(lVar1 + 0x1e88);
  local_30 = 0xffffffffffffffff;
  FUN_18028a580((short *)(lVar1 + 0x1e88),&local_38);
  psVar4 = (short *)(*(longlong *)(lVar1 + 0x1e90) + (longlong)sVar2 * 0x10);
  psVar4[1] = (short)uVar6;
  *psVar4 = *(short *)(lVar1 + 0x1950 + lVar5 * 2);
  *(short *)(lVar1 + 0x1950 + lVar5 * 2) = sVar2;
  return psVar4;
}


