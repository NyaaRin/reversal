// 0x1802c4220  FUN_1802c4220
// size=198 thunk=false
// signature: undefined FUN_1802c4220()
// status: ok


ulonglong FUN_1802c4220(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  uVar5 = (ulonglong)*(int *)(lVar2 + 0x2038);
  if ((*(int *)(lVar2 + 0x2038) < *(int *)(lVar2 + 0x2028)) &&
     (uVar3 = *(ulonglong *)(lVar2 + 0x1520), (*(uint *)(uVar3 + 0x14) & 0x10000000) == 0)) {
    lVar6 = uVar5 * 0x38;
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x2030) + 0x18 + lVar6);
    uVar5 = (ulonglong)uVar1;
    if ((*(uint *)(uVar3 + 0x170) == uVar1) &&
       ((uVar5 = *(ulonglong *)(*(longlong *)(lVar2 + 0x2030) + 8 + lVar6), uVar5 != 0 &&
        (uVar7 = uVar5, (*(uint *)(uVar5 + 0x14) & 0x10000000) != 0)))) {
      do {
        uVar4 = *(ulonglong *)(*(longlong *)(uVar7 + 0x3c0) + 0x3c8);
        bVar8 = uVar7 != uVar4;
        uVar7 = uVar4;
      } while (bVar8);
      if (uVar4 == uVar3) {
LAB_1802c42de:
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      do {
        if (uVar5 == uVar3) goto LAB_1802c42de;
      } while ((uVar5 != uVar4) && (uVar5 = *(ulonglong *)(uVar5 + 0x3b0), uVar5 != 0));
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


