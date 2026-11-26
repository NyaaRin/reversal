// 0x180245020  FUN_180245020
// size=952 thunk=false
// signature: undefined FUN_180245020()
// status: ok


void FUN_180245020(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  float local_38;
  float fStack_34;
  ulonglong local_30;
  float local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(char *)(param_1 + 0x21) != '\0') &&
     (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188))) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    lVar2 = *(longlong *)(param_1 + 0xf0);
    uVar3 = *(ulonglong *)(param_1 + 0x108);
    uVar7 = (*(longlong *)(param_1 + 0xf8) - lVar2 >> 4) * -0x5555555555555555;
    if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar7 = *(ulonglong *)(param_1 + 400);
    uVar4 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x30);
    uVar3 = *(ulonglong *)(lVar2 + 0x18 + uVar3 * 0x30);
    uVar9 = uVar7;
    for (uVar8 = *(ulonglong *)(param_1 + 0x188); uVar8 < uVar7; uVar8 = uVar8 + 0x40) {
      uVar5 = *(ulonglong *)(uVar8 + 8);
      bVar10 = uVar5 < uVar4;
      bVar11 = false;
      if (uVar5 == uVar4) {
        bVar10 = *(ulonglong *)(uVar8 + 0x10) < uVar3;
        bVar11 = *(ulonglong *)(uVar8 + 0x10) == uVar3;
      }
      if (!bVar10 && !bVar11) break;
      bVar11 = uVar5 < uVar4;
      if (uVar5 == uVar4) {
        bVar11 = *(ulonglong *)(uVar8 + 0x10) < uVar3;
      }
      if (bVar11) {
        bVar11 = uVar4 <= *(ulonglong *)(uVar8 + 0x20);
        if (*(ulonglong *)(uVar8 + 0x20) == uVar4) {
          bVar11 = uVar3 <= *(ulonglong *)(uVar8 + 0x28);
        }
        if (bVar11) {
          uVar9 = uVar8;
        }
      }
    }
    if ((uVar9 != uVar7) && (*(char *)(uVar9 + 0x38) != '\0')) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar1 + 0x1520) + 0x2c8);
      if (*(char *)(*(longlong *)(uVar9 + 8) * 0x60 + 0x22 + *(longlong *)(param_1 + 0x50)) !=
          '\x03') {
        local_28 = *(float *)(uVar9 + 8);
        fStack_24 = *(float *)(uVar9 + 0xc);
        uStack_20 = *(undefined4 *)(uVar9 + 0x10);
        uStack_1c = *(undefined4 *)(uVar9 + 0x14);
        FUN_18025dda0(param_1 + 0x1d8,&local_38,param_1 + 0x50,&local_28);
        uVar3 = CONCAT44(fStack_34,local_38);
        if ((*(ulonglong *)(param_1 + 0x510) <= uVar3) && (uVar3 <= *(ulonglong *)(param_1 + 0x518))
           ) {
          local_38 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8) +
                     (float)local_30 * *(float *)(param_1 + 0x4d8);
          local_28 = *(float *)(param_1 + 0x4d8) + local_38;
          fStack_34 = (float)uVar3 * *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4bc);
          fStack_24 = fStack_34 + *(float *)(param_1 + 0x4dc);
          FUN_180295000(uVar6,&local_38,&local_28,*(undefined4 *)(param_1 + 0x950),0,0);
        }
      }
      if (*(char *)(*(longlong *)(uVar9 + 0x20) * 0x60 + 0x22 + *(longlong *)(param_1 + 0x50)) !=
          '\x03') {
        local_28 = *(float *)(uVar9 + 0x20);
        fStack_24 = *(float *)(uVar9 + 0x24);
        uStack_20 = *(undefined4 *)(uVar9 + 0x28);
        uStack_1c = *(undefined4 *)(uVar9 + 0x2c);
        FUN_18025dda0(param_1 + 0x1d8,&local_38,param_1 + 0x50,&local_28);
        uVar3 = CONCAT44(fStack_34,local_38);
        if ((*(ulonglong *)(param_1 + 0x510) <= uVar3) && (uVar3 <= *(ulonglong *)(param_1 + 0x518))
           ) {
          local_28 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8) +
                     (float)local_30 * *(float *)(param_1 + 0x4d8);
          local_38 = *(float *)(param_1 + 0x4d8) + local_28;
          fStack_24 = (float)uVar3 * *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4bc);
          fStack_34 = fStack_24 + *(float *)(param_1 + 0x4dc);
          FUN_180295000(uVar6,&local_28,&local_38,*(undefined4 *)(param_1 + 0x950),0,0);
        }
      }
    }
  }
  return;
}


