// 0x1801eb260  FUN_1801eb260
// size=854 thunk=false
// signature: undefined FUN_1801eb260()
// status: ok


void FUN_1801eb260(void)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ULONGLONG UVar6;
  ulonglong uVar7;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
  DAT_1803ff284 = 1;
  DAT_1803e7420 = DAT_1803e7420 + 1;
  DAT_1803fa455 = 0;
  DAT_1803fa453 = 0;
  DAT_1803da6a0 = 0xffffffff;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
  UVar6 = GetTickCount64();
  uVar7 = UVar6 + 1000;
  while ((((AcquireSRWLockShared((PSRWLOCK)&DAT_1803ff290), DAT_1803ff278 != 0 ||
           (DAT_1803ff27c != 0)) || (DAT_1803ff274 != 0)) ||
         ((DAT_1803ff268 != '\0' || (DAT_1803ff269 != '\0'))))) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
    SwitchToThread();
    UVar6 = GetTickCount64();
    if (uVar7 <= UVar6) {
      FUN_180014410("[SP] waiting for capture backup readers before device release\n");
      uVar7 = UVar6 + 1000;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0xed8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar2 + 0xdb8);
    *(undefined8 *)(lVar2 + 0xed8) = 0;
    *(undefined8 *)(lVar2 + 0xdb8) = 0;
    if (lVar4 != 0) {
      FUN_1801e95c0(lVar4,lVar3);
    }
    FUN_180114540(lVar3);
  }
  if (DAT_1803fa580 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa580 + 0x10))();
    DAT_1803fa580 = (longlong *)0x0;
  }
  if (DAT_1803fa4c8 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa4c8 + 0x10))();
    DAT_1803fa4c8 = (longlong *)0x0;
  }
  if (DAT_1803fa500 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa500 + 0x10))();
    DAT_1803fa500 = (longlong *)0x0;
  }
  if (DAT_1803fa578 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa578 + 0x10))();
    DAT_1803fa578 = (longlong *)0x0;
  }
  if (DAT_1803fa510 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa510 + 0x10))();
    DAT_1803fa510 = (longlong *)0x0;
  }
  if (DAT_1803fa4c0 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa4c0 + 0x10))();
    DAT_1803fa4c0 = (longlong *)0x0;
  }
  if (DAT_1803fa4b0 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa4b0 + 0x10))();
    DAT_1803fa4b0 = (longlong *)0x0;
  }
  lVar3 = DAT_1803fa4d0;
  pcVar1 = (char *)(lVar2 + 0x10);
  if (DAT_1803fa4d0 != 0) {
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar5 = *(undefined8 *)(lVar2 + 0xec0);
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(longlong *)(lVar2 + 0xec0) = lVar3;
    FUN_1802d0630();
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(lVar2 + 0xec0) = uVar5;
  }
  lVar3 = DAT_1803fa590;
  if (DAT_1803fa590 != 0) {
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar5 = *(undefined8 *)(lVar2 + 0xec0);
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(longlong *)(lVar2 + 0xec0) = lVar3;
    FUN_1802d0630();
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(lVar2 + 0xec0) = uVar5;
  }
  lVar3 = DAT_1803fa588;
  if (DAT_1803fa588 != 0) {
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar5 = *(undefined8 *)(lVar2 + 0xec0);
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(longlong *)(lVar2 + 0xec0) = lVar3;
    FUN_1802d0630();
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(lVar2 + 0xec0) = uVar5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
  uVar5 = DAT_18040a258;
  DAT_18040a258 = 0;
  DAT_1803e8844 = DAT_1803e8844 + 1;
  DAT_18040a26c = 0;
  DAT_18040a378 = 0;
  DAT_18040a370 = 0;
  DAT_18040a388 = 0;
  LOCK();
  DAT_18040a389 = 0;
  UNLOCK();
  DAT_18040a268 = 0;
  DAT_18040a380 = 0;
  DAT_18040a368 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
  DAT_18040a38a = 0;
  FUN_180114540(uVar5);
  FUN_18010cf20();
  FUN_180165b30();
  DAT_1803fa566 = 0;
  DAT_1803fa456 = 0;
  DAT_1803fa565 = 1;
  return;
}


