// 0x1801c2240  FUN_1801c2240
// size=369 thunk=false
// signature: undefined FUN_1801c2240()
// status: ok


void FUN_1801c2240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float local_48;
  float local_44 [11];
  
  FUN_1802af4c0();
  FUN_1802aa3c0(param_2,0,1);
  FUN_18027f5b0(0,DAT_180381384);
  fVar2 = DAT_180380b20;
  pfVar4 = &local_48;
  local_44[0] = 1.5;
  local_48 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar4 = &DAT_1803da6a4;
  }
  pfVar3 = local_44;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar3 = pfVar4;
  }
  fVar5 = *pfVar3;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = fVar5 * DAT_1803810ec;
  pfVar4 = local_44;
  local_44[0] = 0.75;
  local_48 = 1.5;
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1520);
  *(undefined1 *)(lVar1 + 0x159) = 1;
  *(float *)(lVar1 + 0x118) = (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + fVar5;
  if (fVar2 <= DAT_1803da6a4) {
    pfVar4 = &DAT_1803da6a4;
  }
  pfVar3 = &local_48;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar3 = pfVar4;
  }
  local_44[0] = *pfVar3 * DAT_18038112c;
  local_44[1] = 0.0;
  FUN_1802d31a0(param_3,param_4,local_44,1);
  return;
}


