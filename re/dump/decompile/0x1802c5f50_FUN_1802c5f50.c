// 0x1802c5f50  FUN_1802c5f50
// size=258 thunk=false
// signature: undefined FUN_1802c5f50()
// status: ok


uint FUN_1802c5f50(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x18) & 0x100000) != 0) {
    uVar6 = 0xffffffff;
    uVar4 = 0xffffffff;
    bVar1 = *param_2;
    while (bVar1 != 0) {
      pbVar5 = param_2 + 1;
      if (((bVar1 == 0x23) && (*pbVar5 == 0x23)) && (param_2[2] == 0x23)) {
        uVar6 = 0xffffffff;
        pbVar5 = param_2 + 3;
      }
      else {
        uVar6 = (ulonglong)
                ((uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_180331380 + (uVar6 & 0xff ^ (ulonglong)bVar1) * 4));
      }
      uVar4 = (uint)uVar6;
      param_2 = pbVar5;
      bVar1 = *pbVar5;
    }
    FUN_18027f100(~uVar4);
    return ~uVar4;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  uVar4 = FUN_180268980(param_2,0,
                        *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
  if (*(uint *)(*plVar3 + 0x1578) == uVar4) {
    FUN_1802899e0(uVar4,0xb,param_2);
  }
  return uVar4;
}


