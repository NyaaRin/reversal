// 0x18024b760  FUN_18024b760
// size=7885 thunk=false
// signature: undefined FUN_18024b760()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024b760(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  void *pvVar8;
  byte bVar9;
  char cVar10;
  undefined1 uVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float *pfVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  undefined4 uVar43;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Da_30;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_d08 [32];
  undefined8 *local_ce8;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  ulonglong local_cb8;
  ulonglong local_cb0;
  ulonglong local_ca8 [2];
  undefined1 local_c98 [96];
  float local_c38;
  undefined1 local_bf0;
  longlong local_e8;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_d08;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_18024d630(local_c98,*(longlong *)(lVar5 + 0xec0) + 0x28);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar57 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x104) - *(float *)(param_1 + 0x4bc);
  fVar54 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x100) - *(float *)(param_1 + 0x4b8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  fVar56 = *(float *)(lVar33 + 0x28);
  fVar55 = *(float *)(lVar33 + 0x2c);
  cVar10 = *(char *)(lVar5 + 0x10);
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar5 + 0x10);
  }
  fVar56 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x100) - fVar56;
  fVar55 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x104) - fVar55;
  if (((*(char *)(param_1 + 0x16) == '\0') ||
      (fVar56 < *(float *)(param_1 + 0x4e0) || fVar56 == *(float *)(param_1 + 0x4e0))) ||
     (*(float *)(param_1 + 0x4e4) <= fVar56)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar40 = fVar54 - *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x98);
  fVar53 = 0.0;
  if (fVar40 < *(float *)(param_1 + 0x4f0) || fVar40 == *(float *)(param_1 + 0x4f0)) {
LAB_18024b953:
    bVar37 = false;
  }
  else {
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(float *)(param_1 + 0x4f4) <=
        fVar54 - *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x98))
    goto LAB_18024b953;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (fVar57 - *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x9c) < 0.0)
    goto LAB_18024b953;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(float *)(param_1 + 0x500) <=
        fVar57 - *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x9c))
    goto LAB_18024b953;
    bVar37 = true;
  }
  if ((*(char *)(param_1 + 0x17) == '\0') ||
     (fVar56 < *(float *)(param_1 + 0x4f8) || fVar56 == *(float *)(param_1 + 0x4f8))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_cd8 = 0;
  uStack_cd0 = 0;
  local_cc8 = 0;
  uStack_cc0 = 0;
  local_ce8 = &local_cc8;
  FUN_18025df30(param_1 + 0x1d8,param_1 + 0x50,
                CONCAT44(fVar57 / *(float *)(param_1 + 0x4dc),
                         (fVar54 - *(float *)(param_1 + 0x4f0)) / *(float *)(param_1 + 0x4d8)),
                &local_cd8);
  bVar2 = *(byte *)(param_1 + 0x818);
  if (*(char *)(param_1 + 0x25) == '\0') {
LAB_18024ba1a:
    bVar9 = 0;
  }
  else {
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(lVar5 + 0xec0) + 0x10a) == '\0') goto LAB_18024ba1a;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(lVar5 + 0xec0) + 0x1cec) != '\0') goto LAB_18024ba1a;
    bVar9 = 1;
  }
  fVar54 = DAT_180381384;
  bVar9 = bVar9 & bVar2;
  *(byte *)(param_1 + 0x818) = bVar9;
  if ((bVar9 == 0) || (cVar10 = FUN_18027bec0(2,fVar54), cVar10 == '\0')) {
    if (*(char *)(param_1 + 0x819) != '\0') {
      fVar54 = *(float *)(param_1 + 0x4d8);
      fVar55 = *(float *)(param_1 + 0x820) - fVar55;
      fVar56 = *(float *)(param_1 + 0x81c) - fVar56;
      fVar57 = 0.0;
      if (0.0 <= fVar56) {
        if (0.0 <= fVar56 - fVar54) {
          fVar57 = fVar56 - fVar54;
        }
      }
      else if (fVar54 + fVar56 <= 0.0) {
        fVar57 = fVar54 + fVar56;
      }
      if (0.0 <= fVar55) {
        if (0.0 <= fVar55 - fVar54) {
          fVar53 = fVar55 - fVar54;
        }
      }
      else if (fVar54 + fVar55 <= 0.0) {
        fVar53 = fVar54 + fVar55;
      }
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar54 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x40) * DAT_180380f00;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      FUN_1802808e0(*(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x98) -
                    fVar54 * fVar57);
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      FUN_180280950(*(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x9c) -
                    fVar54 * fVar53);
      cVar10 = FUN_18027bce0(0,0,0);
      if (((cVar10 != '\0') || (cVar10 = FUN_18027bce0(2,0,0), cVar10 != '\0')) ||
         (cVar10 = FUN_18027bce0(1,0,0), cVar10 != '\0')) {
        *(undefined1 *)(param_1 + 0x819) = 0;
      }
      goto LAB_18024d5cd;
    }
    cVar10 = FUN_18027bec0(0,fVar54);
    if (cVar10 != '\0') {
      local_bf0 = 1;
      if (*(char *)(param_1 + 0x548) == '\0') {
        if (*(char *)(param_1 + 0x824) == '\0') goto LAB_18024d5cd;
        uVar29 = local_cd8;
        uVar16 = uStack_cd0;
        if (!bVar36) {
          if (bVar37) {
            uVar27 = *(ulonglong *)(param_1 + 0x110);
            lVar5 = *(longlong *)(param_1 + 0xf0);
            uVar15 = (*(longlong *)(param_1 + 0xf8) - lVar5 >> 4) * -0x5555555555555555;
            if (uVar15 < uVar27 || uVar15 - uVar27 == 0) goto LAB_18024d629;
            puVar1 = (undefined4 *)(lVar5 + 0x10 + uVar27 * 0x30);
            *puVar1 = (undefined4)local_cc8;
            puVar1[1] = local_cc8._4_4_;
            puVar1[2] = (undefined4)uStack_cc0;
            puVar1[3] = uStack_cc0._4_4_;
            *(undefined1 *)(lVar5 + 0x22 + uVar27 * 0x30) = 1;
            FUN_18024f370(param_1);
          }
          goto LAB_18024d5cd;
        }
        uVar27 = *(ulonglong *)(param_1 + 0x110);
        lVar5 = *(longlong *)(param_1 + 0xf0);
        uVar15 = (*(longlong *)(param_1 + 0xf8) - lVar5 >> 4) * -0x5555555555555555;
        if (uVar27 <= uVar15 && uVar15 - uVar27 != 0) {
          uVar29 = local_cc8 + 1;
          lVar33 = *(longlong *)(param_1 + 0x50);
          uVar16 = (*(longlong *)(param_1 + 0x58) - lVar33 >> 5) * -0x5555555555555555;
          if (uVar29 < uVar16) {
            lVar33 = 0;
          }
          else {
            uVar29 = uVar16 - 1;
            if (uVar16 < uVar29 || uVar16 - uVar29 == 0) goto LAB_18024d623;
            lVar33 = *(longlong *)(uVar29 * 0x60 + 8 + lVar33) -
                     *(longlong *)(uVar29 * 0x60 + lVar33) >> 4;
          }
          uVar16 = *(ulonglong *)(lVar5 + 0x10 + uVar27 * 0x30);
          uVar15 = *(ulonglong *)(lVar5 + uVar27 * 0x30);
          bVar36 = uVar16 < uVar15;
          if (uVar16 == uVar15) {
            bVar36 = *(ulonglong *)(lVar5 + 0x18 + uVar27 * 0x30) <
                     *(ulonglong *)(lVar5 + 8 + uVar27 * 0x30);
          }
          if (bVar36) {
            lVar33 = 0;
            uVar29 = local_cc8;
          }
          *(ulonglong *)(lVar5 + 0x10 + uVar27 * 0x30) = uVar29;
          *(longlong *)(lVar5 + 0x18 + uVar27 * 0x30) = lVar33;
          *(undefined1 *)(lVar5 + 0x22 + uVar27 * 0x30) = 1;
          FUN_18024f370(param_1);
          goto LAB_18024d5cd;
        }
        goto LAB_18024d629;
      }
      fVar57 = ((fVar55 - *(float *)(param_1 + 0x54c)) * *(float *)(param_1 + 0x508)) /
               *(float *)(param_1 + 0x500) + *(float *)(param_1 + 0x550);
      local_cb8 = CONCAT44(local_cb8._4_4_,fVar57);
      fVar54 = *(float *)(param_1 + 0x508) - *(float *)(param_1 + 0x500);
      local_cc8 = CONCAT44(local_cc8._4_4_,fVar54);
      local_ca8[0] = local_ca8[0] & 0xffffffff00000000;
      puVar21 = local_ca8;
      if (0.0 <= fVar57) {
        puVar21 = &local_cb8;
      }
      puVar14 = &local_cc8;
      if (fVar57 <= fVar54) {
        puVar14 = puVar21;
      }
      FUN_180280950((int)*puVar14);
      goto LAB_18024d5cd;
    }
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)(lVar5 + 0xec0) + 0xb4e) != '\0') {
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)(lVar5 + 0xec0) + 0x1cd4) == '\0') {
        *(undefined1 *)(param_1 + 0x548) = 0;
        *(undefined1 *)(param_1 + 0x824) = 0;
        goto LAB_18024d5cd;
      }
    }
    cVar10 = FUN_180279410(0);
    if (cVar10 == '\0') goto LAB_18024d5cd;
    cVar10 = FUN_1802822b0(0);
    if ((cVar10 != '\0') && (bVar37)) {
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x2508) = 1;
    }
    cVar10 = FUN_18027bce0(2,0,0);
    if (cVar10 == '\0') {
      cVar10 = FUN_18027bce0(1,0,0);
      if (cVar10 == '\0') {
        cVar10 = FUN_18027bce0(0,0,0);
        if (cVar10 == '\0') {
          uVar27 = local_cd8;
          uVar25 = uStack_cd0;
          if (*(longlong *)(param_1 + 0x710) != 0) {
            if (*(char *)(lVar5 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            local_cc8 = *(ulonglong *)(*(longlong *)(lVar5 + 0xec0) + 0x100);
            cVar10 = FUN_180243790(param_1,&local_cc8);
            uVar16 = uStack_cd0;
            uVar29 = local_cd8;
            uVar27 = local_cd8;
            uVar25 = uStack_cd0;
            if (cVar10 != '\0') {
              lVar5 = *(longlong *)(param_1 + 0x50);
              uVar27 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
              if (uVar27 < local_cd8 || uVar27 - local_cd8 == 0) goto LAB_18024d623;
              if ((uStack_cd0 != 0) &&
                 (lVar33 = *(longlong *)(local_cd8 * 0x60 + lVar5),
                 *(longlong *)(local_cd8 * 0x60 + 8 + lVar5) != lVar33)) {
                uVar4 = *(ushort *)(lVar33 + -0x10 + uStack_cd0 * 0x10);
                if (uVar4 < 0x7f) {
                  uVar43 = extraout_XMM0_Da_26;
                  if (((uVar4 | 0x20) - 0x61 < 0x1a) || ((uVar4 - 0x30 < 10 || (uVar4 == 0x5f)))) {
LAB_18024d490:
                    do {
                      uVar4 = *(ushort *)(lVar33 + -0x10 + uVar16 * 0x10);
                      if (uVar4 < 0x7f) {
                        if ((0x19 < (uVar4 | 0x20) - 0x61) &&
                           ((9 < uVar4 - 0x30 && (uVar4 != 0x5f)))) break;
                      }
                      else {
                        cVar10 = FUN_180260600(uVar43,uVar4);
                        uVar43 = extraout_XMM0_Da_29;
                        if ((cVar10 == '\0') &&
                           (cVar10 = FUN_180260690(extraout_XMM0_Da_29,uVar4),
                           uVar43 = extraout_XMM0_Da_30, cVar10 == '\0')) break;
                      }
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                }
                else {
                  cVar10 = FUN_180260600(lVar5,uVar4);
                  uVar43 = extraout_XMM0_Da_27;
                  if ((cVar10 != '\0') ||
                     (cVar10 = FUN_180260690(extraout_XMM0_Da_27,uVar4),
                     uVar43 = extraout_XMM0_Da_28, cVar10 != '\0')) goto LAB_18024d490;
                }
              }
              local_cd8._0_4_ = (undefined4)uVar29;
              local_cd8._4_4_ = SUB84(uVar29,4);
              uStack_cd0._0_4_ = (undefined4)uVar16;
              uStack_cd0._4_4_ = (undefined4)(uVar16 >> 0x20);
              *(undefined4 *)(param_1 + 0x720) = (undefined4)local_cd8;
              *(undefined4 *)(param_1 + 0x724) = local_cd8._4_4_;
              *(undefined4 *)(param_1 + 0x728) = (undefined4)uStack_cd0;
              *(undefined4 *)(param_1 + 0x72c) = uStack_cd0._4_4_;
              local_cc8 = uVar29;
              local_cd8 = uVar29;
              uStack_cd0 = uVar16;
              uStack_cc0 = uVar16;
              FUN_18025dda0(param_1 + 0x1d8,&local_cd8,(longlong *)(param_1 + 0x50),&local_cc8);
              *(float *)(param_1 + 0x718) =
                   (float)uStack_cd0 * *(float *)(param_1 + 0x4d8) + *(float *)(param_1 + 0x4f0) +
                   *(float *)(param_1 + 0x4b8);
              *(float *)(param_1 + 0x71c) =
                   (float)local_cd8 * *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4bc);
              cVar10 = FUN_180280eb0();
              uVar27 = local_cd8;
              uVar25 = uStack_cd0;
              if (cVar10 == '\0') {
                FUN_180280fd0("TextHoverPopup");
                uVar27 = local_cd8;
                uVar25 = uStack_cd0;
              }
            }
          }
        }
        else {
          if ((bVar37) || (bVar36)) {
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
          *(undefined1 *)(param_1 + 0x824) = uVar11;
          cVar10 = *(char *)(lVar5 + 0x10);
          if (cVar10 == '\0') {
            __dyn_tls_on_demand_init();
            cVar10 = *(char *)(lVar5 + 0x10);
          }
          if (*(short *)(*(longlong *)(lVar5 + 0xec0) + 0xb3a) == 2) {
            if (cVar10 == '\0') {
              __dyn_tls_on_demand_init();
              cVar10 = *(char *)(lVar5 + 0x10);
            }
            if (*(char *)(*(longlong *)(lVar5 + 0xec0) + 0x1cd4) != '\0') goto LAB_18024c178;
            bVar38 = true;
          }
          else {
LAB_18024c178:
            bVar38 = false;
          }
          if (cVar10 == '\0') {
            __dyn_tls_on_demand_init();
          }
          uVar29 = uStack_cd0;
          uVar15 = local_cd8;
          fVar57 = (float)*(double *)(*(longlong *)(lVar5 + 0xec0) + 0x10);
          uVar27 = uVar15;
          uVar25 = uStack_cd0;
          if (((bVar38) || (*(float *)(param_1 + 0x7fc) == fVar54)) ||
             (local_c38 <= fVar57 - *(float *)(param_1 + 0x7fc))) {
            *(float *)(param_1 + 0x7fc) = fVar57;
            if (bVar38) {
              if (bVar37) {
                lVar5 = *(longlong *)(param_1 + 0x50);
                uVar16 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
                if (uVar16 < local_cd8 || uVar16 - local_cd8 == 0) goto LAB_18024d623;
                uVar35 = local_cd8 * 0x60;
                uVar17 = *(longlong *)(uVar35 + 8 + lVar5) - *(longlong *)(uVar35 + lVar5) >> 4;
                local_cc8 = uVar35;
                if (uStack_cd0 < uVar17) {
                  sVar3 = *(short *)(*(longlong *)(uVar35 + lVar5) + uStack_cd0 * 0x10);
                  if (((sVar3 == 0x7b) || (sVar3 == 0x5b)) || (sVar3 == 0x28)) {
                    uVar18 = uStack_cd0 + 1;
                    uVar23 = *(ulonglong *)(param_1 + 400);
                    uVar30 = uVar23;
                    for (uVar19 = *(ulonglong *)(param_1 + 0x188); uVar19 < uVar23;
                        uVar19 = uVar19 + 0x40) {
                      uVar6 = *(ulonglong *)(uVar19 + 8);
                      bVar37 = uVar6 < local_cd8;
                      bVar36 = false;
                      if (uVar6 == local_cd8) {
                        bVar37 = *(ulonglong *)(uVar19 + 0x10) < uVar18;
                        bVar36 = *(ulonglong *)(uVar19 + 0x10) == uVar18;
                      }
                      if (!bVar37 && !bVar36) break;
                      bVar36 = uVar6 < local_cd8;
                      if (uVar6 == local_cd8) {
                        bVar36 = *(ulonglong *)(uVar19 + 0x10) < uVar18;
                      }
                      if (bVar36) {
                        bVar36 = local_cd8 <= *(ulonglong *)(uVar19 + 0x20);
                        if (*(ulonglong *)(uVar19 + 0x20) == local_cd8) {
                          bVar36 = uVar18 <= *(ulonglong *)(uVar19 + 0x28);
                        }
                        if (bVar36) {
                          uVar30 = uVar19;
                        }
                      }
                    }
                    if (uVar30 != uVar23) {
                      pcVar22 = (char *)FUN_180267330(0x2000);
                      if ((*pcVar22 == '\0') || (cVar10 = FUN_18027deb0(0x2000,0), cVar10 == '\0'))
                      {
                        uVar29 = *(ulonglong *)(uVar30 + 8);
                        uVar16 = *(ulonglong *)(uVar30 + 0x10);
                        lVar5 = *(longlong *)(param_1 + 0x50);
                        uVar27 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
                        if (uVar27 < uVar29 || uVar27 - uVar29 == 0) goto LAB_18024d623;
                        if (uVar16 == *(longlong *)(uVar29 * 0x60 + 8 + lVar5) -
                                      *(longlong *)(uVar29 * 0x60 + lVar5) >> 4) {
                          if (uVar29 != uVar27 - 1) {
                            do {
                              uVar29 = uVar29 + 1;
                              if (uVar27 - 1 <= uVar29) break;
                              if (uVar27 < uVar29 || uVar27 - uVar29 == 0) goto LAB_18024d623;
                            } while (*(char *)(uVar29 * 0x60 + 0x22 + lVar5) == '\x03');
                            uStack_cd0 = 0;
                            uVar16 = uStack_cd0;
                          }
                        }
                        else {
                          uVar16 = uVar16 + 1;
                        }
                        uStack_cd0 = uVar16;
                        local_cd8 = uVar29;
                        uVar43 = *(undefined4 *)(uVar30 + 0x20);
                        uVar48 = *(undefined4 *)(uVar30 + 0x24);
                        local_cc8 = *(ulonglong *)(uVar30 + 0x20);
                        uVar49 = *(undefined4 *)(uVar30 + 0x28);
                        uVar50 = *(undefined4 *)(uVar30 + 0x2c);
                        uStack_cc0 = *(ulonglong *)(uVar30 + 0x28);
                        puVar1 = *(undefined4 **)(param_1 + 0xf0);
                        puVar26 = *(undefined4 **)(param_1 + 0xf8);
                        if (puVar1 != puVar26) {
                          *(undefined4 **)(param_1 + 0xf8) = puVar1;
                          puVar26 = puVar1;
                        }
                        *(undefined8 *)(param_1 + 0x108) = 0;
                        *(undefined8 *)(param_1 + 0x110) = 0;
                        uVar42 = (undefined4)local_cd8;
                        uVar44 = local_cd8._4_4_;
                        uVar45 = (undefined4)uStack_cd0;
                        uVar46 = uStack_cd0._4_4_;
                        if (puVar26 == *(undefined4 **)(param_1 + 0x100)) {
                          puVar20 = &local_cc8;
                          puVar34 = &local_cd8;
                          goto LAB_18024c679;
                        }
                      }
                      else {
                        uVar29 = *(ulonglong *)(uVar30 + 0x20);
                        uVar16 = *(ulonglong *)(uVar30 + 0x28);
                        lVar5 = *(longlong *)(param_1 + 0x50);
                        uVar27 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
                        if (uVar27 < uVar29 || uVar27 - uVar29 == 0) goto LAB_18024d623;
                        if (uVar16 == *(longlong *)(uVar29 * 0x60 + 8 + lVar5) -
                                      *(longlong *)(uVar29 * 0x60 + lVar5) >> 4) {
                          if (uVar29 != uVar27 - 1) {
                            do {
                              uVar29 = uVar29 + 1;
                              if (uVar27 - 1 <= uVar29) break;
                              if (uVar27 < uVar29 || uVar27 - uVar29 == 0) goto LAB_18024d623;
                            } while (*(char *)(uVar29 * 0x60 + 0x22 + lVar5) == '\x03');
                            uStack_cd0 = 0;
                            uVar16 = uStack_cd0;
                          }
                        }
                        else {
                          uVar16 = uVar16 + 1;
                        }
                        uStack_cd0 = uVar16;
                        local_cd8 = uVar29;
                        uVar42 = *(undefined4 *)(uVar30 + 8);
                        uVar44 = *(undefined4 *)(uVar30 + 0xc);
                        local_cc8 = *(ulonglong *)(uVar30 + 8);
                        uVar45 = *(undefined4 *)(uVar30 + 0x10);
                        uVar46 = *(undefined4 *)(uVar30 + 0x14);
                        uStack_cc0 = *(ulonglong *)(uVar30 + 0x10);
                        puVar1 = *(undefined4 **)(param_1 + 0xf0);
                        puVar26 = *(undefined4 **)(param_1 + 0xf8);
                        if (puVar1 != puVar26) {
                          *(undefined4 **)(param_1 + 0xf8) = puVar1;
                          puVar26 = puVar1;
                        }
                        *(undefined8 *)(param_1 + 0x108) = 0;
                        *(undefined8 *)(param_1 + 0x110) = 0;
                        uVar43 = (undefined4)local_cd8;
                        uVar48 = local_cd8._4_4_;
                        uVar49 = (undefined4)uStack_cd0;
                        uVar50 = uStack_cd0._4_4_;
                        if (puVar26 == *(undefined4 **)(param_1 + 0x100)) {
                          puVar20 = &local_cd8;
                          puVar34 = &local_cc8;
LAB_18024c679:
                          plVar32 = (longlong *)(param_1 + 0xf0);
                          FUN_180262ec0(plVar32,puVar26,puVar34,puVar20);
                          *(undefined1 *)(*plVar32 + 0x20) = 1;
                          *(undefined1 *)(*plVar32 + 0x21) = 1;
                          uVar27 = local_cd8;
                          uVar25 = uStack_cd0;
                          goto LAB_18024c07f;
                        }
                      }
                      *puVar26 = uVar42;
                      puVar26[1] = uVar44;
                      puVar26[2] = uVar45;
                      puVar26[3] = uVar46;
                      puVar26[4] = uVar43;
                      puVar26[5] = uVar48;
                      puVar26[6] = uVar49;
                      puVar26[7] = uVar50;
                      *(undefined2 *)(puVar26 + 8) = 0x100;
                      *(undefined1 *)((longlong)puVar26 + 0x22) = 1;
                      *(undefined8 *)(puVar26 + 10) = 0;
                      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
                      *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x20) = 1;
                      *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                      uVar27 = local_cd8;
                      uVar25 = uStack_cd0;
                      goto LAB_18024c07f;
                    }
                  }
                  else if (((sVar3 == 0x7d) || (sVar3 == 0x5d)) || (sVar3 == 0x29)) {
                    uVar23 = *(ulonglong *)(param_1 + 400);
                    for (uVar18 = *(ulonglong *)(param_1 + 0x188);
                        uVar18 < *(ulonglong *)(param_1 + 400); uVar18 = uVar18 + 0x40) {
                      uVar19 = *(ulonglong *)(uVar18 + 8);
                      bVar37 = uVar19 < local_cd8;
                      bVar36 = false;
                      if (uVar19 == local_cd8) {
                        bVar37 = *(ulonglong *)(uVar18 + 0x10) < uStack_cd0;
                        bVar36 = *(ulonglong *)(uVar18 + 0x10) == uStack_cd0;
                      }
                      if (!bVar37 && !bVar36) break;
                      bVar36 = uVar19 < local_cd8;
                      if (uVar19 == local_cd8) {
                        bVar36 = *(ulonglong *)(uVar18 + 0x10) < uStack_cd0;
                      }
                      if (bVar36) {
                        bVar36 = local_cd8 <= *(ulonglong *)(uVar18 + 0x20);
                        if (*(ulonglong *)(uVar18 + 0x20) == local_cd8) {
                          bVar36 = uStack_cd0 <= *(ulonglong *)(uVar18 + 0x28);
                        }
                        if (bVar36) {
                          uVar23 = uVar18;
                        }
                      }
                    }
                    if (uVar23 != *(ulonglong *)(param_1 + 400)) {
                      uVar29 = *(ulonglong *)(uVar23 + 0x20);
                      uVar27 = *(ulonglong *)(uVar23 + 0x28);
                      if (uVar16 < uVar29 || uVar16 - uVar29 == 0) goto LAB_18024d623;
                      if (uVar27 == *(longlong *)(uVar29 * 0x60 + 8 + lVar5) -
                                    *(longlong *)(uVar29 * 0x60 + lVar5) >> 4) {
                        if (uVar29 != uVar16 - 1) {
                          do {
                            uVar29 = uVar29 + 1;
                            if (uVar16 - 1 <= uVar29) break;
                            if (uVar16 < uVar29 || uVar16 - uVar29 == 0) goto LAB_18024d623;
                          } while (*(char *)(uVar29 * 0x60 + 0x22 + lVar5) == '\x03');
                          uStack_cd0 = 0;
                          uVar27 = uStack_cd0;
                        }
                      }
                      else {
                        uVar27 = uVar27 + 1;
                      }
                      uStack_cd0 = uVar27;
                      local_cd8 = uVar29;
                      plVar32 = (longlong *)(param_1 + 0xf0);
                      uVar43 = *(undefined4 *)(uVar23 + 8);
                      uVar48 = *(undefined4 *)(uVar23 + 0xc);
                      local_cc8 = *(ulonglong *)(uVar23 + 8);
                      uVar49 = *(undefined4 *)(uVar23 + 0x10);
                      uVar50 = *(undefined4 *)(uVar23 + 0x14);
                      uStack_cc0 = *(ulonglong *)(uVar23 + 0x10);
                      puVar1 = (undefined4 *)*plVar32;
                      puVar26 = *(undefined4 **)(param_1 + 0xf8);
                      if (puVar1 != puVar26) {
                        *(undefined4 **)(param_1 + 0xf8) = puVar1;
                        puVar26 = puVar1;
                      }
                      *(undefined8 *)(param_1 + 0x108) = 0;
                      *(undefined8 *)(param_1 + 0x110) = 0;
                      if (puVar26 == *(undefined4 **)(param_1 + 0x100)) {
                        FUN_180262ec0(plVar32,(undefined4)local_cd8,&local_cc8,&local_cd8);
                        *(undefined1 *)(*plVar32 + 0x20) = 1;
                        *(undefined1 *)(*plVar32 + 0x21) = 1;
                        uVar27 = local_cd8;
                        uVar25 = uStack_cd0;
                      }
                      else {
                        *puVar26 = uVar43;
                        puVar26[1] = uVar48;
                        puVar26[2] = uVar49;
                        puVar26[3] = uVar50;
                        puVar26[4] = (undefined4)local_cd8;
                        puVar26[5] = local_cd8._4_4_;
                        puVar26[6] = (undefined4)uStack_cd0;
                        puVar26[7] = uStack_cd0._4_4_;
                        *(undefined2 *)(puVar26 + 8) = 0x100;
                        *(undefined1 *)((longlong)puVar26 + 0x22) = 1;
                        *(undefined8 *)(puVar26 + 10) = 0;
                        *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
                        *(undefined1 *)(*plVar32 + 0x20) = 1;
                        *(undefined1 *)(*plVar32 + 0x21) = 1;
                        uVar27 = local_cd8;
                        uVar25 = uStack_cd0;
                      }
                      goto LAB_18024c07f;
                    }
                  }
                }
                if (uVar16 < local_cd8 || uVar16 - local_cd8 == 0) goto LAB_18024d623;
                if (uStack_cd0 != uVar17) {
                  local_cb8 = local_cd8;
                  local_cb0 = uStack_cd0;
                  cVar10 = FUN_180255f60(param_1 + 0x50,&local_cb8,0);
                  uVar17 = uVar29;
                  if (cVar10 == '\0') {
                    local_cb8 = uVar15;
                    local_cb0 = uVar29;
                    cVar10 = FUN_180256230(param_1 + 0x50,&local_cb8,0);
                    uVar18 = uStack_cd0;
                    lVar5 = *(longlong *)(param_1 + 0x50);
                    if ((ulonglong)((*(longlong *)(param_1 + 0x58) - lVar5) / 0x60) <= uVar15)
                    goto LAB_18024d623;
                    if (cVar10 == '\0') {
                      lVar33 = *(longlong *)(uVar35 + lVar5);
                      local_ca8[0] = *(longlong *)(uVar35 + 8 + lVar5) - lVar33;
                      uVar16 = (longlong)local_ca8[0] >> 4;
                      if (uVar29 < uVar16) {
                        local_cb8 = uVar29 * 0x10;
                        uVar4 = *(ushort *)(lVar33 + local_cb8);
                        cVar10 = FUN_18025f490(uVar4);
                        if (cVar10 == '\0') {
                          uVar28 = (uint)uVar4;
                          if (uVar28 < 0x7f) {
                            uVar43 = extraout_XMM0_Da_13;
                            if ((0x19 < (uVar28 | 0x20) - 0x61) &&
                               ((9 < uVar4 - 0x30 && (uVar28 != 0x5f)))) {
LAB_18024cc27:
                              for (; uVar17 = uStack_cd0, uVar27 = local_cb8, uVar29 < uVar16;
                                  uVar29 = uVar29 + 1) {
                                uVar4 = *(ushort *)(lVar33 + uVar29 * 0x10);
                                if (uVar4 < 0x7f) {
                                  if (((uVar4 | 0x20) - 0x61 < 0x1a) ||
                                     ((uVar4 - 0x30 < 10 || (uVar4 == 0x5f)))) break;
                                }
                                else {
                                  cVar10 = FUN_180260600(uVar43,uVar4);
                                  uVar17 = uStack_cd0;
                                  uVar27 = local_cb8;
                                  if ((cVar10 != '\0') ||
                                     (cVar10 = FUN_180260690(extraout_XMM0_Da_16,uVar4),
                                     uVar17 = uStack_cd0, uVar27 = local_cb8, cVar10 != '\0'))
                                  break;
                                }
                                cVar10 = FUN_18025f490(uVar4);
                                uVar17 = uStack_cd0;
                                uVar27 = local_cb8;
                                if (cVar10 != '\0') break;
                                uVar43 = extraout_XMM0_Da_17;
                              }
                              goto LAB_18024ccb4;
                            }
                          }
                          else {
                            cVar10 = FUN_180260600(extraout_XMM0_Da_13,uVar4);
                            uVar43 = extraout_XMM0_Da_14;
                            if ((cVar10 == '\0') &&
                               (cVar10 = FUN_180260690(extraout_XMM0_Da_14,uVar4),
                               uVar43 = extraout_XMM0_Da_15, cVar10 == '\0')) goto LAB_18024cc27;
                          }
                          do {
                            uVar4 = *(ushort *)(lVar33 + uVar29 * 0x10);
                            if (uVar4 < 0x7f) {
                              if ((0x19 < (uVar4 | 0x20) - 0x61) &&
                                 ((9 < uVar4 - 0x30 &&
                                  (uVar17 = uStack_cd0, uVar27 = local_cb8, uVar4 != 0x5f)))) break;
                            }
                            else {
                              cVar10 = FUN_180260600(uVar43,uVar4);
                              uVar43 = extraout_XMM0_Da_18;
                              if ((cVar10 == '\0') &&
                                 (cVar10 = FUN_180260690(extraout_XMM0_Da_18,uVar4),
                                 uVar17 = uStack_cd0, uVar27 = local_cb8,
                                 uVar43 = extraout_XMM0_Da_19, cVar10 == '\0')) break;
                            }
                            uVar29 = uVar29 + 1;
                            uVar17 = uStack_cd0;
                            uVar27 = local_cb8;
                          } while (uVar29 < uVar16);
                        }
                        else {
                          do {
                            cVar10 = FUN_18025f490(*(undefined2 *)(lVar33 + uVar29 * 0x10));
                            uVar17 = uStack_cd0;
                            uVar27 = local_cb8;
                            if (cVar10 == '\0') break;
                            uVar29 = uVar29 + 1;
                          } while (uVar29 < uVar16);
                        }
                      }
                      else {
                        uVar27 = uVar29 << 4;
                      }
LAB_18024ccb4:
                      uVar16 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
                      if (uVar16 < uVar15 || uVar16 - uVar15 == 0) goto LAB_18024d623;
                      uVar18 = uVar29;
                      if ((uVar17 != 0) && (local_ca8[0] != 0)) {
                        uVar4 = *(ushort *)((uVar27 - 0x10) + lVar33);
                        cVar10 = FUN_18025f490(uVar4);
                        if (cVar10 == '\0') {
                          uVar28 = (uint)uVar4;
                          if (uVar28 < 0x7f) {
                            uVar43 = extraout_XMM0_Da_20;
                            if ((0x19 < (uVar28 | 0x20) - 0x61) &&
                               ((9 < uVar4 - 0x30 && (uVar28 != 0x5f)))) {
LAB_18024cdb0:
                              for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                                uVar4 = *(ushort *)
                                         (*(longlong *)(local_cc8 + lVar5) + -0x10 + uVar17 * 0x10);
                                if (uVar4 < 0x7f) {
                                  if (((uVar4 | 0x20) - 0x61 < 0x1a) ||
                                     ((uVar4 - 0x30 < 10 || (uVar4 == 0x5f)))) break;
                                }
                                else {
                                  cVar10 = FUN_180260600(uVar17 * 2,uVar4);
                                  if ((cVar10 != '\0') ||
                                     (cVar10 = FUN_180260690(extraout_XMM0_Da_23,uVar4),
                                     cVar10 != '\0')) break;
                                }
                                cVar10 = FUN_18025f490(uVar4);
                                if (cVar10 != '\0') break;
                              }
                              goto LAB_18024ce4d;
                            }
                          }
                          else {
                            cVar10 = FUN_180260600(extraout_XMM0_Da_20,uVar4);
                            uVar43 = extraout_XMM0_Da_21;
                            if ((cVar10 == '\0') &&
                               (cVar10 = FUN_180260690(extraout_XMM0_Da_21,uVar4),
                               uVar43 = extraout_XMM0_Da_22, cVar10 == '\0')) goto LAB_18024cdb0;
                          }
                          lVar5 = *(longlong *)(local_cc8 + lVar5);
                          do {
                            uVar4 = *(ushort *)(lVar5 + -0x10 + uVar17 * 0x10);
                            if (uVar4 < 0x7f) {
                              if ((0x19 < (uVar4 | 0x20) - 0x61) &&
                                 ((9 < uVar4 - 0x30 && (uVar4 != 0x5f)))) break;
                            }
                            else {
                              cVar10 = FUN_180260600(uVar43,uVar4);
                              uVar43 = extraout_XMM0_Da_24;
                              if ((cVar10 == '\0') &&
                                 (cVar10 = FUN_180260690(extraout_XMM0_Da_24,uVar4),
                                 uVar43 = extraout_XMM0_Da_25, cVar10 == '\0')) break;
                            }
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                        }
                        else {
                          do {
                            cVar10 = FUN_18025f490(*(undefined2 *)(lVar33 + -0x10 + uVar17 * 0x10));
                            if (cVar10 == '\0') break;
                            uVar17 = uVar17 - 1;
                          } while (uVar17 != 0);
                        }
                      }
                    }
                    else if ((uVar29 != 0) &&
                            (lVar33 = *(longlong *)(uVar35 + lVar5),
                            *(longlong *)(uVar35 + 8 + lVar5) != lVar33)) {
                      uVar4 = *(ushort *)(lVar33 + -0x10 + uStack_cd0 * 0x10);
                      cVar10 = FUN_18025f490(uVar4);
                      if (cVar10 == '\0') {
                        uVar28 = (uint)uVar4;
                        if (uVar28 < 0x7f) {
                          uVar43 = extraout_XMM0_Da_06;
                          if ((0x19 < (uVar28 | 0x20) - 0x61) &&
                             ((9 < uVar4 - 0x30 && (uVar28 != 0x5f)))) {
LAB_18024caa0:
                            for (; uVar17 = uVar29, uVar29 != 0; uVar29 = uVar29 - 1) {
                              uVar4 = *(ushort *)(lVar33 + -0x10 + uVar29 * 0x10);
                              if (uVar4 < 0x7f) {
                                if (((uVar4 | 0x20) - 0x61 < 0x1a) ||
                                   ((uVar4 - 0x30 < 10 || (uVar4 == 0x5f)))) break;
                              }
                              else {
                                cVar10 = FUN_180260600(uVar43,uVar4);
                                if ((cVar10 != '\0') ||
                                   (cVar10 = FUN_180260690(extraout_XMM0_Da_09,uVar4),
                                   cVar10 != '\0')) break;
                              }
                              cVar10 = FUN_18025f490(uVar4);
                              if (cVar10 != '\0') break;
                              uVar43 = extraout_XMM0_Da_10;
                            }
                            goto LAB_18024ce4d;
                          }
                        }
                        else {
                          cVar10 = FUN_180260600(extraout_XMM0_Da_06,uVar4);
                          uVar43 = extraout_XMM0_Da_07;
                          if ((cVar10 == '\0') &&
                             (cVar10 = FUN_180260690(extraout_XMM0_Da_07,uVar4),
                             uVar43 = extraout_XMM0_Da_08, cVar10 == '\0')) goto LAB_18024caa0;
                        }
                        do {
                          uVar4 = *(ushort *)(lVar33 + -0x10 + uVar29 * 0x10);
                          uVar17 = uVar29;
                          if (uVar4 < 0x7f) {
                            if ((0x19 < (uVar4 | 0x20) - 0x61) &&
                               ((9 < uVar4 - 0x30 && (uVar4 != 0x5f)))) break;
                          }
                          else {
                            cVar10 = FUN_180260600(uVar43,uVar4);
                            uVar43 = extraout_XMM0_Da_11;
                            if ((cVar10 == '\0') &&
                               (cVar10 = FUN_180260690(extraout_XMM0_Da_11,uVar4),
                               uVar43 = extraout_XMM0_Da_12, cVar10 == '\0')) break;
                          }
                          uVar29 = uVar29 - 1;
                          uVar17 = uVar29;
                        } while (uVar29 != 0);
                      }
                      else {
                        do {
                          cVar10 = FUN_18025f490(*(undefined2 *)(lVar33 + -0x10 + uVar29 * 0x10));
                          uVar17 = uVar29;
                          if (cVar10 == '\0') break;
                          uVar29 = uVar29 - 1;
                          uVar17 = uVar29;
                        } while (uVar29 != 0);
                      }
                    }
                  }
                  else {
                    lVar5 = *(longlong *)(param_1 + 0x50);
                    uVar16 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
                    if (uVar16 < uVar15 || uVar16 - uVar15 == 0) goto LAB_18024d623;
                    lVar33 = *(longlong *)(lVar5 + uVar35);
                    uVar16 = *(longlong *)(lVar5 + 8 + local_cc8) - lVar33 >> 4;
                    uVar18 = uVar29;
                    if (uVar29 < uVar16) {
                      uVar4 = *(ushort *)(lVar33 + uVar29 * 0x10);
                      cVar10 = FUN_18025f490(uVar4);
                      if (cVar10 == '\0') {
                        uVar28 = (uint)uVar4;
                        if (uVar28 < 0x7f) {
                          uVar43 = extraout_XMM0_Da;
                          if ((0x19 < (uVar28 | 0x20) - 0x61) &&
                             ((9 < uVar4 - 0x30 && (uVar28 != 0x5f)))) {
LAB_18024c8d7:
                            for (; uVar17 = uStack_cd0, uVar18 = uVar29, uVar29 < uVar16;
                                uVar29 = uVar29 + 1) {
                              uVar4 = *(ushort *)(lVar33 + uVar29 * 0x10);
                              if (uVar4 < 0x7f) {
                                if (((uVar4 | 0x20) - 0x61 < 0x1a) ||
                                   ((uVar4 - 0x30 < 10 || (uVar4 == 0x5f)))) break;
                              }
                              else {
                                cVar10 = FUN_180260600(uVar43,uVar4);
                                uVar17 = uStack_cd0;
                                if ((cVar10 != '\0') ||
                                   (cVar10 = FUN_180260690(extraout_XMM0_Da_02,uVar4),
                                   uVar17 = uStack_cd0, cVar10 != '\0')) break;
                              }
                              cVar10 = FUN_18025f490(uVar4);
                              uVar17 = uStack_cd0;
                              if (cVar10 != '\0') break;
                              uVar43 = extraout_XMM0_Da_03;
                            }
                            goto LAB_18024ce4d;
                          }
                        }
                        else {
                          cVar10 = FUN_180260600(extraout_XMM0_Da,uVar4);
                          uVar43 = extraout_XMM0_Da_00;
                          if ((cVar10 == '\0') &&
                             (cVar10 = FUN_180260690(extraout_XMM0_Da_00,uVar4),
                             uVar43 = extraout_XMM0_Da_01, cVar10 == '\0')) goto LAB_18024c8d7;
                        }
                        do {
                          uVar4 = *(ushort *)(lVar33 + uVar29 * 0x10);
                          uVar18 = uVar29;
                          if (uVar4 < 0x7f) {
                            if ((0x19 < (uVar4 | 0x20) - 0x61) &&
                               ((9 < uVar4 - 0x30 && (uVar17 = uStack_cd0, uVar4 != 0x5f)))) break;
                          }
                          else {
                            cVar10 = FUN_180260600(uVar43,uVar4);
                            uVar43 = extraout_XMM0_Da_04;
                            if ((cVar10 == '\0') &&
                               (cVar10 = FUN_180260690(extraout_XMM0_Da_04,uVar4),
                               uVar17 = uStack_cd0, uVar43 = extraout_XMM0_Da_05, cVar10 == '\0'))
                            break;
                          }
                          uVar29 = uVar29 + 1;
                          uVar17 = uStack_cd0;
                          uVar18 = uVar29;
                        } while (uVar29 < uVar16);
                      }
                      else {
                        do {
                          cVar10 = FUN_18025f490(*(undefined2 *)(lVar33 + uVar29 * 0x10));
                          uVar17 = uStack_cd0;
                          uVar18 = uVar29;
                          if (cVar10 == '\0') break;
                          uVar29 = uVar29 + 1;
                          uVar18 = uVar29;
                        } while (uVar29 < uVar16);
                      }
                    }
                  }
LAB_18024ce4d:
                  uVar27 = local_cd8;
                  uVar25 = uStack_cd0;
                  if (uVar17 != uVar18) {
                    uVar27 = *(ulonglong *)(param_1 + 0x110);
                    lVar5 = *(longlong *)(param_1 + 0xf0);
                    uVar25 = (*(longlong *)(param_1 + 0xf8) - lVar5 >> 4) * -0x5555555555555555;
                    uVar29 = local_cd8;
                    uVar16 = uStack_cd0;
                    if (uVar25 < uVar27 || uVar25 - uVar27 == 0) goto LAB_18024d629;
                    *(ulonglong *)(lVar5 + uVar27 * 0x30) = uVar15;
                    *(ulonglong *)(lVar5 + 8 + uVar27 * 0x30) = uVar17;
                    local_cd8._0_4_ = (undefined4)uVar15;
                    local_cd8._4_4_ = SUB84(uVar15,4);
                    uStack_cd0._0_4_ = (undefined4)uVar18;
                    uStack_cd0._4_4_ = (undefined4)(uVar18 >> 0x20);
                    puVar1 = (undefined4 *)(lVar5 + 0x10 + uVar27 * 0x30);
                    *puVar1 = (undefined4)local_cd8;
                    puVar1[1] = local_cd8._4_4_;
                    puVar1[2] = (undefined4)uStack_cd0;
                    puVar1[3] = uStack_cd0._4_4_;
                    *(undefined1 *)(lVar5 + 0x22 + uVar27 * 0x30) = 1;
                    uVar27 = uVar15;
                    uVar25 = uVar18;
                  }
                }
              }
            }
            else {
              pcVar22 = (char *)FUN_180267330(0x2000);
              if (*pcVar22 == '\0') {
                bVar38 = false;
              }
              else {
                cVar10 = FUN_18027deb0(0x2000,0);
                bVar38 = cVar10 != '\0';
              }
              if (*(char *)(lVar5 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              if (*(char *)(*(longlong *)(lVar5 + 0xec0) + 0x79) == '\0') {
                pcVar22 = (char *)FUN_180267330();
                if (*pcVar22 != '\0') {
                  uVar24 = 0x1000;
                  goto LAB_18024cf20;
                }
                bVar39 = false;
              }
              else {
                pcVar22 = (char *)FUN_180267330();
                if (*pcVar22 == '\0') {
                  bVar39 = false;
                }
                else {
                  uVar24 = 0x4000;
LAB_18024cf20:
                  cVar10 = FUN_18027deb0(uVar24,0);
                  bVar39 = cVar10 != '\0';
                }
              }
              uVar29 = local_cd8;
              uVar16 = uStack_cd0;
              if (bVar36) {
                uVar27 = local_cc8 + 1;
                lVar5 = *(longlong *)(param_1 + 0x50);
                uVar15 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
                if (uVar27 < uVar15) {
                  uVar15 = 0;
                }
                else {
                  uVar27 = uVar15 - 1;
                  if (uVar15 < uVar27 || uVar15 - uVar27 == 0) {
LAB_18024d623:
                    /* WARNING: Subroutine does not return */
                    FUN_180262180();
                  }
                  uVar15 = *(longlong *)(uVar27 * 0x60 + 8 + lVar5) -
                           *(longlong *)(uVar27 * 0x60 + lVar5) >> 4;
                }
                plVar32 = (longlong *)(param_1 + 0xf0);
                puVar21 = *(ulonglong **)(param_1 + 0xf8);
                if (bVar38) {
                  uVar25 = *(ulonglong *)(param_1 + 0x110);
                  lVar5 = *plVar32;
                  uVar17 = ((longlong)puVar21 - lVar5 >> 4) * -0x5555555555555555;
                  if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
LAB_18024d629:
                    uStack_cd0 = uVar16;
                    local_cd8 = uVar29;
                    /* WARNING: Subroutine does not return */
                    FUN_180262180();
                  }
                  uVar29 = *(ulonglong *)(lVar5 + 0x10 + uVar25 * 0x30);
                  uVar16 = *(ulonglong *)(lVar5 + uVar25 * 0x30);
                  bVar36 = uVar29 < uVar16;
                  if (uVar29 == uVar16) {
                    bVar36 = *(ulonglong *)(lVar5 + 0x18 + uVar25 * 0x30) <
                             *(ulonglong *)(lVar5 + 8 + uVar25 * 0x30);
                  }
                  if (bVar36) {
                    uVar15 = 0;
                    uVar27 = local_cc8;
                  }
                  *(ulonglong *)(lVar5 + 0x10 + uVar25 * 0x30) = uVar27;
                  *(ulonglong *)(lVar5 + 0x18 + uVar25 * 0x30) = uVar15;
                  *(undefined1 *)(lVar5 + 0x22 + uVar25 * 0x30) = 1;
LAB_18024d208:
                  if (*(char *)(param_1 + 0x371) != '\0') {
                    *(undefined1 *)(param_1 + 0x373) = 1;
                    FUN_18024f370(param_1);
                    uVar27 = local_cd8;
                    uVar25 = uStack_cd0;
                    goto LAB_18024c07f;
                  }
                }
                else {
                  uStack_cc0 = 0;
                  puVar14 = (ulonglong *)*plVar32;
                  local_cd8._0_4_ = (undefined4)uVar27;
                  local_cd8._4_4_ = (undefined4)(uVar27 >> 0x20);
                  uStack_cd0._0_4_ = (undefined4)uVar15;
                  uStack_cd0._4_4_ = (undefined4)(uVar15 >> 0x20);
                  local_cd8 = uVar27;
                  uStack_cd0 = uVar15;
                  if (bVar39) {
                    uVar25 = *(ulonglong *)(param_1 + 0x110);
                    uVar17 = ((longlong)puVar21 - (longlong)puVar14 >> 4) * -0x5555555555555555;
                    uVar29 = uVar27;
                    uVar16 = uVar15;
                    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) goto LAB_18024d629;
                    *(undefined1 *)((longlong)puVar14 + uVar25 * 0x30 + 0x21) = 0;
                    puVar21 = *(ulonglong **)(param_1 + 0xf8);
                    if (puVar21 == *(ulonglong **)(param_1 + 0x100)) {
                      FUN_180262ec0(plVar32,puVar21,&local_cc8,&local_cd8);
                    }
                    else {
                      *puVar21 = local_cc8;
                      puVar21[1] = 0;
                      *(undefined4 *)(puVar21 + 2) = (undefined4)local_cd8;
                      *(undefined4 *)((longlong)puVar21 + 0x14) = local_cd8._4_4_;
                      *(undefined4 *)(puVar21 + 3) = (undefined4)uStack_cd0;
                      *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_cd0._4_4_;
                      *(undefined2 *)(puVar21 + 4) = 0x100;
                      *(undefined1 *)((longlong)puVar21 + 0x22) = 1;
                      puVar21[5] = 0;
                      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
                    }
                    *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + -0xf) = 1;
                    *(longlong *)(param_1 + 0x110) =
                         (*(longlong *)(param_1 + 0xf8) - *plVar32 >> 4) * -0x5555555555555555 + -1;
                    goto LAB_18024d208;
                  }
                  if (puVar14 != puVar21) {
                    *(ulonglong **)(param_1 + 0xf8) = puVar14;
                    puVar21 = puVar14;
                  }
                  *(undefined8 *)(param_1 + 0x108) = 0;
                  *(undefined8 *)(param_1 + 0x110) = 0;
                  if (puVar21 == *(ulonglong **)(param_1 + 0x100)) {
                    FUN_180262ec0(plVar32,puVar21,&local_cc8,&local_cd8);
                  }
                  else {
                    *puVar21 = local_cc8;
                    puVar21[1] = 0;
                    *(undefined4 *)(puVar21 + 2) = (undefined4)local_cd8;
                    *(undefined4 *)((longlong)puVar21 + 0x14) = local_cd8._4_4_;
                    *(undefined4 *)(puVar21 + 3) = (undefined4)uStack_cd0;
                    *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_cd0._4_4_;
                    *(undefined2 *)(puVar21 + 4) = 0x100;
                    *(undefined1 *)((longlong)puVar21 + 0x22) = 1;
                    puVar21[5] = 0;
                    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
                  }
LAB_18024d27f:
                  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x20) = 1;
                  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x21) = 1;
                }
                FUN_18024f370(param_1);
                uVar27 = local_cd8;
                uVar25 = uStack_cd0;
              }
              else {
                if (bVar37) {
                  plVar32 = (longlong *)(param_1 + 0xf0);
                  puVar1 = (undefined4 *)*plVar32;
                  puVar26 = *(undefined4 **)(param_1 + 0xf8);
                  if (bVar38) {
                    uVar27 = *(ulonglong *)(param_1 + 0x110);
                    uVar15 = ((longlong)puVar26 - (longlong)puVar1 >> 4) * -0x5555555555555555;
                    if (uVar15 < uVar27 || uVar15 - uVar27 == 0) goto LAB_18024d629;
                    local_cd8 = local_cc8;
                    uStack_cd0 = uStack_cc0;
                    FUN_180254150(puVar1 + uVar27 * 0xc,&local_cd8);
                  }
                  else {
                    local_cd8 = local_cc8;
                    uStack_cd0 = uStack_cc0;
                    if (!bVar39) {
                      if (puVar1 != puVar26) {
                        *(undefined4 **)(param_1 + 0xf8) = puVar1;
                        puVar26 = puVar1;
                      }
                      *(undefined8 *)(param_1 + 0x108) = 0;
                      *(undefined8 *)(param_1 + 0x110) = 0;
                      if (puVar26 == *(undefined4 **)(param_1 + 0x100)) {
                        FUN_180262ec0(plVar32,puVar26,&local_cc8,&local_cd8);
                      }
                      else {
                        *puVar26 = (undefined4)local_cc8;
                        puVar26[1] = local_cc8._4_4_;
                        puVar26[2] = (undefined4)uStack_cc0;
                        puVar26[3] = uStack_cc0._4_4_;
                        puVar26[4] = (undefined4)local_cc8;
                        puVar26[5] = local_cc8._4_4_;
                        puVar26[6] = (undefined4)uStack_cc0;
                        puVar26[7] = uStack_cc0._4_4_;
                        *(undefined2 *)(puVar26 + 8) = 0x100;
                        *(undefined1 *)((longlong)puVar26 + 0x22) = 1;
                        *(undefined8 *)(puVar26 + 10) = 0;
                        *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
                      }
                      goto LAB_18024d27f;
                    }
                    uVar27 = *(ulonglong *)(param_1 + 0x110);
                    uVar15 = ((longlong)puVar26 - (longlong)puVar1 >> 4) * -0x5555555555555555;
                    uVar29 = local_cd8;
                    uVar16 = uStack_cd0;
                    if (uVar15 < uVar27 || uVar15 - uVar27 == 0) goto LAB_18024d629;
                    *(undefined1 *)((longlong)puVar1 + uVar27 * 0x30 + 0x21) = 0;
                    puVar1 = *(undefined4 **)(param_1 + 0xf8);
                    if (puVar1 == *(undefined4 **)(param_1 + 0x100)) {
                      FUN_180262ec0(plVar32,puVar1,&local_cc8,&local_cd8);
                    }
                    else {
                      *puVar1 = (undefined4)local_cc8;
                      puVar1[1] = local_cc8._4_4_;
                      puVar1[2] = (undefined4)uStack_cc0;
                      puVar1[3] = uStack_cc0._4_4_;
                      puVar1[4] = (undefined4)local_cc8;
                      puVar1[5] = local_cc8._4_4_;
                      puVar1[6] = (undefined4)uStack_cc0;
                      puVar1[7] = uStack_cc0._4_4_;
                      *(undefined2 *)(puVar1 + 8) = 0x100;
                      *(undefined1 *)((longlong)puVar1 + 0x22) = 1;
                      *(undefined8 *)(puVar1 + 10) = 0;
                      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
                    }
                    *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + -0xf) = 1;
                    *(longlong *)(param_1 + 0x110) =
                         (*(longlong *)(param_1 + 0xf8) - *plVar32 >> 4) * -0x5555555555555555 + -1;
                  }
                  goto LAB_18024d208;
                }
                uVar27 = local_cd8;
                uVar25 = uStack_cd0;
                if (bVar7) {
                  if (*(char *)(lVar5 + 0x10) == '\0') {
                    __dyn_tls_on_demand_init();
                  }
                  lVar33 = *(longlong *)(lVar5 + 0xec0);
                  *(undefined1 *)(*(longlong *)(lVar33 + 0x1520) + 0xce) = 1;
                  uVar27 = local_cd8;
                  uVar25 = uStack_cd0;
                  if (*(char *)(*(longlong *)(lVar33 + 0x1520) + 0xc9) != '\0') {
                    fVar54 = fVar55 / *(float *)(param_1 + 0x554);
                    lVar33 = 0;
                    if ((DAT_180381300 <= fVar54) &&
                       (fVar54 = fVar54 - DAT_180381300, fVar54 < DAT_180381300)) {
                      lVar33 = -0x8000000000000000;
                    }
                    uVar29 = (longlong)fVar54 + lVar33 + *(longlong *)(param_1 + 0x538);
                    if ((uVar29 < *(ulonglong *)(param_1 + 0x510)) ||
                       (*(ulonglong *)(param_1 + 0x518) < uVar29)) {
                      uStack_cd0 = 0;
                      local_cd8 = uVar29;
                      puVar20 = (undefined8 *)FUN_180243970(param_1,&local_cc8,&local_cd8);
                      FUN_18024ef10(param_1,*puVar20,1,0);
                      uVar27 = local_cd8;
                      uVar25 = uStack_cd0;
                    }
                    else {
                      *(undefined1 *)(param_1 + 0x548) = 1;
                      *(float *)(param_1 + 0x54c) = fVar55;
                      if (*(char *)(lVar5 + 0x10) == '\0') {
                        __dyn_tls_on_demand_init();
                      }
                      *(undefined4 *)(param_1 + 0x550) =
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x9c);
                      uVar27 = local_cd8;
                      uVar25 = uStack_cd0;
                    }
                  }
                }
              }
            }
          }
          else {
            *(float *)(param_1 + 0x7fc) = fVar54;
            if (bVar37) {
              uVar27 = local_cc8 + 1;
              lVar5 = *(longlong *)(param_1 + 0x50);
              uVar29 = (*(longlong *)(param_1 + 0x58) - lVar5 >> 5) * -0x5555555555555555;
              if (uVar27 < uVar29) {
                uVar25 = 0;
              }
              else {
                uVar27 = uVar29 - 1;
                if (uVar29 < uVar27 || uVar29 - uVar27 == 0) goto LAB_18024d623;
                uVar25 = *(longlong *)(uVar27 * 0x60 + 8 + lVar5) -
                         *(longlong *)(uVar27 * 0x60 + lVar5) >> 4;
              }
              uVar15 = *(ulonglong *)(param_1 + 0x110);
              lVar5 = *(longlong *)(param_1 + 0xf0);
              uVar17 = (*(longlong *)(param_1 + 0xf8) - lVar5 >> 4) * -0x5555555555555555;
              uVar29 = local_cd8;
              uVar16 = uStack_cd0;
              if (uVar17 < uVar15 || uVar17 - uVar15 == 0) goto LAB_18024d629;
              *(ulonglong *)(lVar5 + uVar15 * 0x30) = local_cc8;
              *(undefined8 *)(lVar5 + 8 + uVar15 * 0x30) = 0;
              local_cd8._0_4_ = (undefined4)uVar27;
              local_cd8._4_4_ = (undefined4)(uVar27 >> 0x20);
              uStack_cd0._0_4_ = (undefined4)uVar25;
              uStack_cd0._4_4_ = (undefined4)(uVar25 >> 0x20);
              puVar1 = (undefined4 *)(lVar5 + 0x10 + uVar15 * 0x30);
              *puVar1 = (undefined4)local_cd8;
              puVar1[1] = local_cd8._4_4_;
              puVar1[2] = (undefined4)uStack_cd0;
              puVar1[3] = uStack_cd0._4_4_;
              *(undefined1 *)(lVar5 + 0x22 + uVar15 * 0x30) = 1;
            }
          }
        }
      }
      else {
        if ((bVar36) && (*(longlong *)(param_1 + 0x690) != 0)) {
          *(undefined4 *)(param_1 + 0x720) = (undefined4)local_cd8;
          *(undefined4 *)(param_1 + 0x724) = local_cd8._4_4_;
          *(undefined4 *)(param_1 + 0x728) = (undefined4)uStack_cd0;
          *(undefined4 *)(param_1 + 0x72c) = uStack_cd0._4_4_;
          pcVar22 = "LineNumberContextMenu";
        }
        else {
          uVar27 = local_cd8;
          uVar25 = uStack_cd0;
          if ((!bVar37) || (*(longlong *)(param_1 + 0x6d0) == 0)) goto LAB_18024c07f;
          *(undefined4 *)(param_1 + 0x720) = (undefined4)local_cd8;
          *(undefined4 *)(param_1 + 0x724) = local_cd8._4_4_;
          *(undefined4 *)(param_1 + 0x728) = (undefined4)uStack_cd0;
          *(undefined4 *)(param_1 + 0x72c) = uStack_cd0._4_4_;
          pcVar22 = "TextContextMenu";
        }
        FUN_180280fd0(pcVar22);
        uVar27 = local_cd8;
        uVar25 = uStack_cd0;
      }
    }
    else {
      uVar27 = local_cd8;
      uVar25 = uStack_cd0;
      if (*(char *)(param_1 + 0x25) == '\0') {
        *(undefined1 *)(param_1 + 0x819) = 1;
        *(float *)(param_1 + 0x81c) = fVar56;
        *(float *)(param_1 + 0x820) = fVar55;
      }
      else {
        *(undefined1 *)(param_1 + 0x818) = 1;
      }
    }
LAB_18024c07f:
    uStack_cd0 = uVar25;
    local_cd8 = uVar27;
    pvVar8 = ThreadLocalStoragePointer;
    uVar16 = (ulonglong)_tls_index;
    for (uVar29 = 0; uVar29 < 2; uVar29 = uVar29 + 1) {
      lVar5 = *(longlong *)((longlong)pvVar8 + uVar16 * 8);
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(char *)(*(longlong *)(lVar5 + 0xec0) + 0x108 + (longlong)(int)uVar29) != '\0') &&
         (cVar10 = FUN_18027deb0((int)uVar29 + 0x290,0), cVar10 != '\0')) {
        FUN_180254360(param_1 + 0xf0,param_1 + 0x50);
        *(undefined1 *)(param_1 + 0x7fa) = 0;
        break;
      }
    }
    goto LAB_18024d5cd;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar33 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  fVar54 = *(float *)(lVar33 + 0x30);
  fVar57 = *(float *)(lVar33 + 0x34);
  cVar10 = *(char *)(lVar5 + 0x10);
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar5 + 0x10);
  }
  lVar33 = *(longlong *)(lVar5 + 0xec0);
  if (((*(char *)(lVar33 + 0x10a) == '\0') && (*(char *)(lVar33 + 0xb50) == '\0')) ||
     (*(float *)(lVar33 + 0xbbc) < *(float *)(lVar33 + 0x90) * *(float *)(lVar33 + 0x90))) {
LAB_18024bb55:
    fVar40 = 0.0;
  }
  else {
    lVar12 = lVar33;
    if ((float *)(lVar33 + 0x100) == (float *)0x0) {
      if (cVar10 == '\0') {
        __dyn_tls_on_demand_init();
        cVar10 = *(char *)(lVar5 + 0x10);
      }
      lVar12 = *(longlong *)(lVar5 + 0xec0);
    }
    fVar40 = DAT_180381444;
    if ((*(float *)(lVar12 + 0x100) < DAT_180381444) || (*(float *)(lVar12 + 0x104) < DAT_180381444)
       ) goto LAB_18024bb55;
    pfVar31 = (float *)(lVar33 + 0xaf0);
    pfVar13 = pfVar31;
    if (pfVar31 == (float *)0x0) {
      if (cVar10 == '\0') {
        __dyn_tls_on_demand_init();
        cVar10 = *(char *)(lVar5 + 0x10);
      }
      pfVar13 = (float *)(*(longlong *)(lVar5 + 0xec0) + 0x100);
    }
    if ((*pfVar13 < fVar40) || (pfVar13[1] < fVar40)) goto LAB_18024bb55;
    fVar53 = *(float *)(lVar33 + 0x100) - *pfVar31;
    fVar40 = *(float *)(lVar33 + 0x104) - *(float *)(lVar33 + 0xaf4);
  }
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar5 + 0x10);
  }
  fVar41 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x40) * DAT_180380fe4;
  fVar47 = *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4dc);
  fVar52 = *(float *)(param_1 + 0x4d8) * DAT_180380e9c;
  fVar51 = fVar52 + *(float *)(param_1 + 0x4f0);
  if ((fVar56 < fVar51) || (fVar51 = fVar54 - fVar52, fVar51 < fVar56)) {
    fVar53 = (fVar56 - fVar51) * fVar41;
  }
  if ((fVar55 < fVar47) || (fVar47 = fVar57 - fVar47, fVar47 < fVar55)) {
    fVar40 = (fVar55 - fVar47) * fVar41;
  }
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_1802808e0(*(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x98) - fVar53);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_180280950(*(float *)(*(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520) + 0x9c) - fVar40);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0xaf0) =
       *(undefined8 *)(*(longlong *)(lVar5 + 0xec0) + 0x100);
LAB_18024d5cd:
  if (local_e8 != 0) {
    FUN_18026f680();
  }
  return;
}


