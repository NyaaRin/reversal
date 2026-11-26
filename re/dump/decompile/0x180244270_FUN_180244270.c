// 0x180244270  FUN_180244270
// size=3498 thunk=false
// signature: undefined FUN_180244270()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180244270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined *puVar24;
  undefined4 uVar25;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  
  uVar15 = (ulonglong)_tls_index;
  local_res10 = param_2;
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    if (*(char *)(param_1 + 0x7b1) != '\0') {
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
      if (*(char *)(lVar13 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      puVar1 = (uint *)(*(longlong *)(lVar13 + 0xec0) + 0x1f48);
      *puVar1 = *puVar1 | 0x20;
      *(undefined1 *)(param_1 + 0x7b1) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4b0) = 0;
  }
  FUN_180279980(param_1 + 0x504);
  local_res10 = 0;
  FUN_18026aad0(0xe,&local_res10);
  uVar17 = *(uint *)(param_1 + 0x940);
  uVar9 = 0;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
  local_res8 = lVar13;
  if (*(char *)(lVar13 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar13 + 0xec0);
  local_e8 = 3;
  local_e4 = *(undefined8 *)(lVar6 + 0xde0);
  uStack_dc = *(undefined8 *)(lVar6 + 0xde8);
  FUN_18028a220(lVar6 + 0x1fc8,&local_e8);
  fVar23 = DAT_18038096c;
  if (*(int *)(lVar6 + 0x1fc4) != 3) {
    *(float *)(lVar6 + 0xde0) = (float)(uVar17 & 0xff) * DAT_18038096c;
    *(float *)(lVar6 + 0xde4) = (float)(uVar17 >> 8 & 0xff) * fVar23;
    *(float *)(lVar6 + 0xde8) = (float)(uVar17 >> 0x10 & 0xff) * fVar23;
    *(float *)(lVar6 + 0xdec) = (float)(uVar17 >> 0x18) * fVar23;
  }
  cVar8 = FUN_180272fa0("Lua Loader",param_3,0,0x804);
  if (cVar8 != '\0') {
    if (*(char *)(param_1 + 0x588) != '\0') {
      if (*(char *)(lVar13 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
      *(undefined4 *)(lVar6 + 0xa8) = 0;
      *(undefined4 *)(lVar6 + 0xb0) = 0;
      *(undefined4 *)(lVar6 + 0xb8) = 0;
      if (*(char *)(lVar13 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
      *(undefined4 *)(lVar6 + 0xac) = 0;
      *(undefined4 *)(lVar6 + 0xb4) = 0;
      *(undefined4 *)(lVar6 + 0xbc) = 0;
      *(undefined1 *)(param_1 + 0x588) = 0;
    }
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(*(longlong *)(lVar13 + 0xec0) + 0x1228);
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(*(longlong *)(lVar13 + 0xec0) + 0x1238);
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = *(longlong *)(lVar13 + 0xec0);
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(lVar6 + 0xc80);
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = *(float *)(*(longlong *)(lVar13 + 0xec0) + 0x1238);
    fVar19 = *(float *)(*(longlong *)(lVar13 + 0xec0) + 0xcd8);
    fVar21 = *(float *)(param_1 + 0xc);
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar24 = &DAT_18037cafc;
    FUN_18029e350(&local_res10,*(undefined8 *)(*(longlong *)(lVar13 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar13 + 0xec0) + 0x1238),DAT_180381308,
                  DAT_180381384,&DAT_18037cafc,0,0,0);
    fVar18 = (float)local_res10 + DAT_180380ba8;
    *(float *)(param_1 + 0x4dc) = (fVar23 + fVar19) * fVar21;
    *(float *)(param_1 + 0x4d8) = (float)(int)fVar18;
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
    uVar25 = *(undefined4 *)(lVar10 + 0x118);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(lVar10 + 0x11c);
    *(undefined4 *)(param_1 + 0x4b8) = uVar25;
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar3 = DAT_180381300;
    fVar18 = DAT_180380bb0;
    lVar10 = *(longlong *)(lVar13 + 0xec0);
    fVar20 = 0.0;
    *(undefined1 *)(*(longlong *)(lVar10 + 0x1520) + 0xce) = 1;
    lVar10 = *(longlong *)(lVar10 + 0x1520);
    fVar23 = *(float *)(param_1 + 0x4d8);
    fVar19 = *(float *)(lVar10 + 0x234);
    fVar22 = *(float *)(lVar10 + 0x230) - *(float *)(lVar10 + 0x228);
    fVar21 = *(float *)(lVar10 + 0x22c);
    *(float *)(param_1 + 0x4c0) = fVar22;
    *(float *)(param_1 + 0x4c4) = fVar19 - fVar21;
    if (*(char *)(param_1 + 0x16) == '\0') {
      fVar19 = 0.0;
    }
    else {
      fVar20 = (float)*(ulonglong *)(param_1 + 0x28) * fVar23;
      fVar19 = log10f((float)((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) *
                              -0x5555555555555555 + 1));
      fVar19 = fVar19 + fVar18;
      lVar10 = 0;
      if ((fVar3 <= fVar19) && (fVar19 = fVar19 - fVar3, fVar19 < fVar3)) {
        lVar10 = -0x8000000000000000;
      }
      uVar14 = (longlong)fVar19 + lVar10;
      if ((longlong)uVar14 < 0) {
        fVar19 = (float)uVar14 * fVar23 + fVar20;
      }
      else {
        fVar19 = (float)(longlong)uVar14 * fVar23 + fVar20;
      }
    }
    *(float *)(param_1 + 0x4e0) = fVar20;
    *(float *)(param_1 + 0x4e4) = fVar19;
    if (*(char *)(param_1 + 0x23) != '\0') {
      *(float *)(param_1 + 0x4ec) = fVar20;
      fVar19 = fVar19 + fVar23;
      *(float *)(param_1 + 0x4e0) = fVar23 + fVar20;
      *(float *)(param_1 + 0x4e4) = fVar19;
    }
    if (*(longlong *)(param_1 + 0x590) == 0) {
      fVar21 = (float)*(ulonglong *)(param_1 + 0x38) * fVar23 + fVar19;
    }
    else {
      uVar14 = *(ulonglong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x590);
      fVar19 = (float)*(ulonglong *)(param_1 + 0x30) * fVar23 + fVar19;
      if ((longlong)uVar14 < 0) {
        fVar21 = (float)uVar14 * fVar23 + fVar19;
      }
      else {
        fVar21 = (float)(longlong)uVar14 * fVar23 + fVar19;
      }
    }
    *(float *)(param_1 + 0x4e8) = fVar19;
    *(float *)(param_1 + 0x4f0) = fVar21;
    if (*(char *)(param_1 + 0x17) != '\0') {
      fVar19 = *(float *)(param_1 + 0x4d4);
      fVar20 = fVar19 * DAT_180380e28;
      *(float *)(param_1 + 0x55c) = fVar19;
      *(float *)(param_1 + 0x554) = fVar20;
      *(float *)(param_1 + 0x558) = fVar19 + fVar19;
      fVar20 = (float)*(ulonglong *)(param_1 + 0x18);
      if (fVar20 == 0.0) {
        fVar20 = floorf((fVar22 - fVar21) / (fVar19 + fVar23));
      }
      fVar22 = fVar22 - fVar20 * fVar19;
      *(float *)(param_1 + 0x530) = fVar20 * fVar19;
      *(float *)(param_1 + 0x4f8) = fVar22;
    }
    *(float *)(param_1 + 0x4f4) = fVar22;
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x4c4);
    *(float *)(param_1 + 0x4fc) = fVar22 - fVar21;
    fVar19 = floorf((fVar22 - fVar21) / fVar23);
    fVar23 = 0.0;
    if (0.0 <= fVar19) {
      fVar23 = fVar19;
    }
    lVar10 = 0;
    if ((fVar3 <= fVar23) && (fVar23 = fVar23 - fVar3, fVar23 < fVar3)) {
      lVar10 = -0x8000000000000000;
    }
    *(longlong *)(param_1 + 0x48) = (longlong)fVar23 + lVar10;
    FUN_1802499b0(param_1);
    FUN_18024efc0(param_1);
    FUN_180249c60(param_1);
    uVar9 = FUN_1802499b0(param_1);
    FUN_18024b760(param_1);
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = floorf(*(float *)(*(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520) + 0x9c) /
                    *(float *)(param_1 + 0x4dc));
    lVar10 = 0;
    if ((fVar3 <= fVar23) && (fVar23 = fVar23 - fVar3, fVar23 < fVar3)) {
      lVar10 = -0x8000000000000000;
    }
    uVar14 = *(longlong *)(param_1 + 0x210) - 1;
    cVar8 = *(char *)(lVar13 + 0x10);
    *(longlong *)(param_1 + 0x510) = (longlong)fVar23 + lVar10;
    if (cVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = ceilf((*(float *)(*(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520) + 0x9c) +
                   *(float *)(param_1 + 0x500)) / *(float *)(param_1 + 0x4dc));
    lVar10 = 0;
    if ((fVar3 <= fVar23) && (fVar23 = fVar23 - fVar3, fVar23 < fVar3)) {
      lVar10 = -0x8000000000000000;
    }
    uVar11 = (longlong)fVar23 + lVar10;
    if (uVar14 < (ulonglong)((longlong)fVar23 + lVar10)) {
      uVar11 = uVar14;
    }
    cVar8 = *(char *)(lVar13 + 0x10);
    *(ulonglong *)(param_1 + 0x518) = uVar11;
    if (cVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = floorf(*(float *)(*(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520) + 0x98) /
                    *(float *)(param_1 + 0x4d8));
    lVar10 = 0;
    if ((fVar3 <= fVar23) && (fVar23 = fVar23 - fVar3, fVar23 < fVar3)) {
      lVar10 = -0x8000000000000000;
    }
    cVar8 = *(char *)(lVar13 + 0x10);
    *(longlong *)(param_1 + 0x520) = (longlong)fVar23 + lVar10;
    if (cVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = ceilf((*(float *)(*(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520) + 0x98) +
                   *(float *)(param_1 + 0x4fc)) / *(float *)(param_1 + 0x4d8));
    uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
    lVar10 = 0;
    if ((fVar3 <= fVar23) && (fVar23 = fVar23 - fVar3, fVar23 < fVar3)) {
      lVar10 = -0x8000000000000000;
    }
    *(longlong *)(param_1 + 0x528) = (longlong)fVar23 + lVar10;
    fVar23 = DAT_180380ab0;
    if (*(float *)(param_1 + 0x9c8) != *(float *)(lVar6 + 0xc84)) {
      uVar14 = 0;
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
      do {
        cVar8 = *(char *)(lVar6 + 0x10);
        uVar17 = *(uint *)(param_1 + 0x8c0 + uVar14 * 4);
        uVar16 = uVar17;
        if (cVar8 == '\0') {
          __dyn_tls_on_demand_init();
          cVar8 = *(char *)(lVar6 + 0x10);
          uVar16 = *(uint *)(param_1 + 0x8c0 + uVar14 * 4);
        }
        fVar19 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0xc84);
        if (fVar19 < fVar18) {
          uVar17 = (int)(longlong)((float)(uVar17 >> 0x18) * fVar19) << 0x18 | uVar17 & 0xffffff;
        }
        *(uint *)(param_1 + 0x918 + uVar14 * 4) = uVar17;
        if (cVar8 == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
        fVar19 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0xc84) * fVar23;
        if (fVar19 < fVar18) {
          uVar16 = (int)(longlong)((float)(uVar16 >> 0x18) * fVar19) << 0x18 | uVar16 & 0xffffff;
        }
        *(uint *)(param_1 + 0x970 + uVar14 * 4) = uVar16;
        uVar14 = uVar14 + 1;
        lVar13 = local_res8;
      } while (uVar14 < 0x16);
    }
    cVar8 = *(char *)(lVar13 + 0x10);
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x4d4);
    if (cVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar8 = *(char *)(lVar13 + 0x10);
    lVar6 = *(longlong *)(lVar13 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1520) + 0x2c8);
    if (cVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar23 = *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520) + 0x28);
    local_res10 = CONCAT44(*(undefined4 *)
                            (*(longlong *)(lVar6 + 0xa8) + -4 +
                            (longlong)*(int *)(lVar6 + 0xa0) * 0x10),
                           fVar23 + *(float *)(param_1 + 0x4f4) + *(float *)(param_1 + 0x4b4));
    local_res8 = CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar6 + 0xa8) + -0xc +
                           (longlong)*(int *)(lVar6 + 0xa0) * 0x10),
                          (fVar23 + *(float *)(param_1 + 0x4f0)) - *(float *)(param_1 + 0x4b4));
    FUN_180292550(lVar6,&local_res8,&local_res10,1);
    FUN_180245020(param_1);
    FUN_1802453e0(param_1);
    FUN_180245a10(param_1);
    FUN_180245d50(param_1);
    FUN_180246420(param_1);
    FUN_180246870(param_1);
    FUN_180246f90(param_1);
    piVar2 = (int *)(lVar6 + 0xa0);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x38);
    }
    else {
      puVar12 = (undefined8 *)
                ((longlong)(*(int *)(lVar6 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar6 + 0xa8));
    }
    uVar7 = puVar12[1];
    *(undefined8 *)(lVar6 + 0x60) = *puVar12;
    *(undefined8 *)(lVar6 + 0x68) = uVar7;
    FUN_180292360(lVar6);
    FUN_180247320(param_1);
    FUN_180247630(param_1);
    FUN_180247bc0(param_1);
    FUN_180247ea0(param_1);
    FUN_1802483f0(param_1);
    FUN_180248ca0(param_1);
    FUN_180249100(param_1);
    FUN_180258a90(param_1);
    FUN_180249560(param_1);
    FUN_18024efc0(param_1);
    if (*(char *)(lVar13 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(byte *)(*(longlong *)(lVar13 + 0xec0) + 0x28) & 3) != 0) {
      if (*(char *)(lVar13 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar13 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
      lVar6 = *(longlong *)(lVar6 + 0x1520);
      cVar8 = FUN_1802822b0(0);
      if (cVar8 == '\0') {
        *(ushort *)(lVar6 + 0x176) =
             *(ushort *)(lVar6 + 0x176) | (ushort)(1 << (*(uint *)(lVar6 + 0x170) & 0x1f));
      }
      else if (*(char *)(lVar6 + 0xc9) == '\0') {
        if (*(char *)(lVar13 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar10 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
        fVar23 = *(float *)(lVar10 + 0x28);
        fVar19 = *(float *)(lVar10 + 0x2c);
        if (*(char *)(lVar13 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar10 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
        fVar21 = *(float *)(lVar10 + 0x30);
        fVar3 = *(float *)(lVar10 + 0x34);
        if (*(char *)(lVar13 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar4 = *(undefined4 *)(param_1 + 0x4d4);
        lVar10 = *(longlong *)(*(longlong *)(lVar13 + 0xec0) + 0x1520);
        fVar20 = *(float *)(lVar10 + 0x28);
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x3b0) + 0x2c8);
        fVar22 = *(float *)(lVar10 + 0x2c);
        if (*(char *)(lVar13 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar5 = *(undefined4 *)(*(longlong *)(lVar13 + 0xec0) + 0xccc);
        uVar17 = FUN_18026a6a0(0x39,fVar18);
        if ((uVar17 & 0xff000000) != 0) {
          local_res8 = CONCAT44((fVar19 - DAT_180380d30) + DAT_180380ac0,
                                (fVar23 - DAT_180380d30) + DAT_180380ac0);
          fVar23 = _DAT_180380abc;
          if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
            fVar23 = DAT_180380ac0;
          }
          local_res10 = CONCAT44((fVar22 + fVar3 + DAT_180380d30) - fVar23,
                                 (fVar20 + fVar21 + DAT_180380d30) - fVar23);
          FUN_180294990(lVar6,&local_res8,&local_res10,uVar5,0);
          FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar17,
                        uVar4,CONCAT44(uVar25,0x200));
          *(undefined4 *)(lVar6 + 0x50) = 0;
        }
      }
    }
  }
  FUN_180273410();
  FUN_18026a890(1);
  FUN_18026abb0(1);
  if ((*(longlong *)(param_1 + 0x860) != 0) && (*(char *)(param_1 + 0x878) != '\0')) {
    lVar13 = _Xtime_get_ticks();
    if ((lVar13 != *(longlong *)(param_1 + 0x870)) && (*(longlong *)(param_1 + 0x870) <= lVar13)) {
      if (*(longlong **)(param_1 + 0x860) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(**(longlong **)(param_1 + 0x860) + 0x10))();
      *(undefined1 *)(param_1 + 0x878) = 0;
    }
  }
  return uVar9;
}


