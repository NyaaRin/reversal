// 0x180288070  FUN_180288070
// size=218 thunk=false
// signature: undefined FUN_180288070()
// status: ok


longlong FUN_180288070(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = 0xffffffff;
  uVar5 = 0xffffffff;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar3 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar3 == 0x23)) && (param_1[2] == 0x23)) {
      uVar6 = 0xffffffff;
      pbVar3 = param_1 + 3;
    }
    else {
      uVar6 = (ulonglong)
              ((uint)(uVar6 >> 8) ^
              *(uint *)(&DAT_180331380 + (uVar6 & 0xff ^ (ulonglong)bVar1) * 4));
    }
    uVar5 = (uint)uVar6;
    param_1 = pbVar3;
    bVar1 = *pbVar3;
  }
  lVar4 = *(longlong *)(lVar2 + 0x27c0);
  lVar2 = lVar4 + (longlong)*(int *)(lVar2 + 0x27b8) * 0x48;
  while( true ) {
    if (lVar4 == lVar2) {
      return 0;
    }
    if (*(uint *)(lVar4 + 8) == ~uVar5) break;
    lVar4 = lVar4 + 0x48;
  }
  return lVar4;
}


