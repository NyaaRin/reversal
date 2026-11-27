// 0x1801a16e0  FUN_1801a16e0
// size=381 thunk=false
// signature: undefined FUN_1801a16e0()
// status: ok


undefined1
FUN_1801a16e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60 [12];
  
  uVar3 = FUN_1801a0b60();
  pfVar5 = &local_68;
  local_64 = 1.5;
  local_68 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar5 = &DAT_1803da6a4;
  }
  pfVar4 = &local_64;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar4 = pfVar5;
  }
  fVar7 = *pfVar4 * DAT_18038113c;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  fVar6 = (*(float *)(lVar2 + 0x280) - *(float *)(lVar2 + 0x28)) - fVar7;
  FUN_18027f5b0(0,DAT_180381384);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  if ((*(float *)(lVar2 + 0x118) - *(float *)(lVar2 + 0x28)) + *(float *)(lVar2 + 0x98) < fVar6) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x1520);
    *(undefined1 *)(lVar1 + 0x159) = 1;
    *(float *)(lVar1 + 0x118) = (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + fVar6;
  }
  local_60[1] = 0.0;
  local_60[0] = fVar7;
  FUN_1802d31a0(param_3,param_4,local_60,0);
  return uVar3;
}


