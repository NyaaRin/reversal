// 0x18026f9b0  FUN_18026f9b0
// size=526 thunk=false
// signature: undefined FUN_18026f9b0()
// status: ok


void FUN_18026f9b0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar1 + 0xec0);
  if (*(int *)(lVar6 + 0x1594) != 0) {
    return;
  }
  if ((*(int *)(lVar6 + 0x157c) != 0) && (*(char *)(lVar6 + 0x1591) == '\0')) {
    return;
  }
  if ((*(longlong *)(lVar6 + 0x2070) != 0) &&
     (*(char *)(*(longlong *)(lVar6 + 0x2070) + 0xd3) != '\0')) {
    return;
  }
  lVar2 = *(longlong *)(lVar6 + 0x1528);
  if (*(char *)(lVar6 + 0xb30) != '\0') {
    if (lVar2 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar2 + 0x3c0);
      if (((lVar8 != 0) && ((*(uint *)(lVar8 + 0x14) & 0x4000000) != 0)) &&
         (cVar4 = FUN_180280db0(*(undefined4 *)(lVar8 + 0x94),0x800), cVar4 == '\0'))
      goto LAB_18026fb19;
    }
    if (lVar2 == 0) {
      if (*(longlong *)(lVar6 + 0x2070) != 0) {
        FUN_1802827b0(0,2);
      }
    }
    else {
      FUN_18026f8f0(lVar2);
      if (((*(byte *)(lVar2 + 0xf0) & 1) == 0) && ((*(byte *)(lVar8 + 0x14) & 1) == 0)) {
        if (((*(float *)(lVar6 + 0xae0) < *(float *)(lVar8 + 0x28)) ||
            ((*(float *)(lVar6 + 0xae4) < *(float *)(lVar8 + 0x2c) ||
             (*(float *)(lVar8 + 0x28) + *(float *)(lVar8 + 0x38) <= *(float *)(lVar6 + 0xae0)))))
           || (*(float *)(lVar8 + 0x68) + *(float *)(lVar8 + 0x2c) <= *(float *)(lVar6 + 0xae4))) {
          *(undefined8 *)(lVar6 + 0x1540) = 0;
        }
      }
      if (*(char *)(lVar6 + 0x1591) != '\0') {
        *(undefined4 *)(lVar6 + 0x15a8) = *(undefined4 *)(lVar6 + 0x157c);
        *(undefined8 *)(lVar6 + 0x1540) = 0;
      }
    }
  }
LAB_18026fb19:
  if (*(char *)(lVar6 + 0xb31) == '\0') {
    return;
  }
  if (*(int *)(lVar6 + 0x157c) != 0) {
    return;
  }
  lVar6 = FUN_180280f50();
  if (lVar2 != 0) {
    if (lVar6 == 0) {
LAB_18026fb67:
      bVar3 = true;
      goto LAB_18026fb9a;
    }
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar7 = *(uint *)(lVar6 + 0x14) >> 0x19 & 1;
    uVar5 = *(uint *)(lVar2 + 0x14) >> 0x19 & 1;
    if (uVar5 == uVar7) {
      uVar5 = *(int *)(*(longlong *)(lVar1 + 0xec0) + 0x14c0) - 1;
      if (-1 < (int)uVar5) {
        do {
          lVar8 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x14c8) + (ulonglong)uVar5 * 8);
          if (lVar8 == lVar2) goto LAB_18026fb67;
        } while ((lVar8 != lVar6) && (uVar5 = uVar5 - 1, -1 < (int)uVar5));
      }
    }
    else if (0 < (int)(uVar5 - uVar7)) goto LAB_18026fb67;
  }
  bVar3 = false;
LAB_18026fb9a:
  if (bVar3) {
    lVar6 = lVar2;
  }
  FUN_180281320(lVar6,1);
  return;
}


