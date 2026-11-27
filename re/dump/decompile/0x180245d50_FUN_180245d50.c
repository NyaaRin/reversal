// 0x180245d50  FUN_180245d50
// size=827 thunk=false
// signature: undefined FUN_180245d50()
// status: ok


void FUN_180245d50(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  ulonglong local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  if (*(char *)(param_1 + 0x21) != '\0') {
    uVar5 = *(ulonglong *)(param_1 + 0x188);
    uVar11 = *(ulonglong *)(param_1 + 400);
    if (uVar11 != uVar5) {
      uVar8 = *(ulonglong *)(param_1 + 0x108);
      lVar1 = *(longlong *)(param_1 + 0xf0);
      uVar6 = (*(longlong *)(param_1 + 0xf8) - lVar1 >> 4) * -0x5555555555555555;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      uVar6 = *(ulonglong *)(lVar1 + 0x10 + uVar8 * 0x30);
      uVar8 = *(ulonglong *)(lVar1 + 0x18 + uVar8 * 0x30);
      uVar9 = uVar11;
      for (; uVar5 < uVar11; uVar5 = uVar5 + 0x40) {
        uVar2 = *(ulonglong *)(uVar5 + 8);
        bVar12 = uVar2 < uVar6;
        bVar13 = false;
        if (uVar2 == uVar6) {
          bVar12 = *(ulonglong *)(uVar5 + 0x10) < uVar8;
          bVar13 = *(ulonglong *)(uVar5 + 0x10) == uVar8;
        }
        if (!bVar12 && !bVar13) break;
        bVar13 = uVar2 < uVar6;
        if (uVar2 == uVar6) {
          bVar13 = *(ulonglong *)(uVar5 + 0x10) < uVar8;
        }
        if (bVar13) {
          bVar13 = uVar6 <= *(ulonglong *)(uVar5 + 0x20);
          if (*(ulonglong *)(uVar5 + 0x20) == uVar6) {
            bVar13 = uVar8 <= *(ulonglong *)(uVar5 + 0x28);
          }
          if (bVar13) {
            uVar9 = uVar5;
          }
        }
      }
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar4 = DAT_180380bb0;
      lVar1 = *(longlong *)(lVar1 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x1520) + 0x2c8);
      for (uVar5 = *(ulonglong *)(param_1 + 0x188); uVar5 < *(ulonglong *)(param_1 + 400);
          uVar5 = uVar5 + 0x40) {
        if ((*(char *)(uVar5 + 0x38) != '\0') &&
           (1 < (ulonglong)(*(longlong *)(uVar5 + 0x20) - *(longlong *)(uVar5 + 8)))) {
          local_68 = *(undefined4 *)(uVar5 + 0x20);
          uStack_64 = *(undefined4 *)(uVar5 + 0x24);
          uStack_60 = *(undefined4 *)(uVar5 + 0x28);
          uStack_5c = *(undefined4 *)(uVar5 + 0x2c);
          FUN_18025dda0(param_1 + 0x1d8,local_48,param_1 + 0x50,&local_68);
          local_68 = *(undefined4 *)(uVar5 + 8);
          uStack_64 = *(undefined4 *)(uVar5 + 0xc);
          uStack_60 = *(undefined4 *)(uVar5 + 0x10);
          uStack_5c = *(undefined4 *)(uVar5 + 0x14);
          FUN_18025dda0(param_1 + 0x1d8,local_58,param_1 + 0x50,&local_68);
          uVar11 = local_50;
          if (local_40 < local_50) {
            uVar11 = local_40;
          }
          uVar8 = *(longlong *)(uVar5 + 8) + 1;
          if (uVar8 < *(ulonglong *)(uVar5 + 0x20)) {
            do {
              lVar1 = *(longlong *)(param_1 + 0x50);
              lVar7 = uVar8 * 0x60;
              if (*(char *)(lVar7 + 0x22 + lVar1) != '\x03') {
                local_78 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8) +
                           (float)uVar11 * *(float *)(param_1 + 0x4d8);
                local_6c = (float)*(ulonglong *)(lVar7 + 0x28 + lVar1) * *(float *)(param_1 + 0x4dc)
                           + *(float *)(param_1 + 0x4bc);
                lVar10 = 0x94c;
                if (uVar5 == uVar9) {
                  lVar10 = 0x954;
                }
                local_74 = (float)*(ulonglong *)(lVar7 + 0x30 + lVar1) * *(float *)(param_1 + 0x4dc)
                           + local_6c;
                local_70 = local_78;
                FUN_180294c90(uVar3,&local_70,&local_78,*(undefined4 *)(lVar10 + param_1),uVar4);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ulonglong *)(uVar5 + 0x20));
          }
        }
      }
    }
  }
  return;
}


