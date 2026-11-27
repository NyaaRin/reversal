// 1801a16e0  FUN_1801a16e0
// signature: undefined FUN_1801a16e0()
// status: ok


undefined1
FUN_1801a16e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60 [12];
  
  uVar4 = FUN_1801a0b60();
  pfVar6 = &local_68;
  local_64 = 1.5;
  local_68 = 0.75;
  if (0.75 <= DAT_1803da6a4) {
    pfVar6 = &DAT_1803da6a4;
  }
  pfVar5 = &local_64;
  if (DAT_1803da6a4 <= 1.5) {
    pfVar5 = pfVar6;
  }
  fVar1 = *pfVar5;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  fVar7 = (*(float *)(lVar3 + 0x280) - *(float *)(lVar3 + 0x28)) - fVar1 * 122.0;
  FUN_18027f5b0(0,0xbf800000);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  if ((*(float *)(lVar3 + 0x118) - *(float *)(lVar3 + 0x28)) + *(float *)(lVar3 + 0x98) < fVar7) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
    lVar2 = *(longlong *)(lVar2 + 0x1520);
    *(undefined1 *)(lVar2 + 0x159) = 1;
    *(float *)(lVar2 + 0x118) = (*(float *)(lVar2 + 0x28) - *(float *)(lVar2 + 0x98)) + fVar7;
  }
  local_60[1] = 0.0;
  local_60[0] = fVar1 * 122.0;
  FUN_1802d31a0(param_3,param_4,local_60,0);
  return uVar4;
}


