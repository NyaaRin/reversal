// 0x1800a1990  Features_Weapons_Backends_ORPWeaponBackend_vfunc27
// size=5 thunk=true
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc27()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Weapons_Backends_ORPWeaponBackend_vfunc27(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 **ppuVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_128 [32];
  undefined8 *puStack_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  undefined8 *puStack_f8;
  uint uStack_f0;
  undefined8 *puStack_e8;
  int iStack_e0;
  float fStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 *puStack_98;
  longlong *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong uStack_68;
  
  uStack_68 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  uStack_f0 = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  puStack_e8 = param_1;
  uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar9 = (*pcVar1)(DAT_1803fa360,uVar6);
  if (DAT_1803fa678 == 0) {
    puStack_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    puStack_f8 = (undefined8 *)0x0;
    ppuVar10 = &puStack_108;
    uVar13 = 2;
    uStack_f0 = 2;
  }
  else {
    ppuVar10 = (undefined8 **)FUN_18001bcd0(extraout_XMM0_Da,&fStack_a8);
    uVar13 = 1;
    uStack_f0 = 1;
  }
  puVar3 = puStack_f8;
  plVar2 = *ppuVar10;
  plStack_90 = plVar2;
  puStack_88 = ppuVar10[1];
  puVar12 = ppuVar10[2];
  puStack_80 = puVar12;
  if (((uVar13 & 2) != 0) &&
     (uVar13 = uVar13 & 0xfffffffd, uStack_f0 = uVar13, puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
    DAT_1803fa330 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      DAT_1803fa330 = puStack_e8;
    }
    DAT_1803fa338 = puVar3 != (undefined8 *)0x0;
    DAT_1803fa339 = CONCAT13(uStack_fc,uStack_100._1_3_);
    DAT_1803fa33d = uStack_fb;
    DAT_1803fa33f = uStack_f9;
  }
  if ((uVar13 & 1) != 0) {
    uStack_f0 = uVar13 & 0xfffffffe;
    if ((undefined8 *)CONCAT44(fStack_a4,fStack_a8) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(fStack_a4,fStack_a8))();
      DAT_1803fa338 = puStack_98 != (undefined8 *)0x0;
      DAT_1803fa330 = puStack_e8;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = puStack_98;
      }
      DAT_1803fa339 = CONCAT13(uStack_fc,uStack_100._1_3_);
      DAT_1803fa33d = uStack_fb;
      DAT_1803fa33f = uStack_f9;
    }
  }
  plVar14 = plStack_90;
  if ((((lVar9 == 0) || (param_2 == 0)) || (plVar14 = plVar2, plVar2 == (longlong *)0x0)) ||
     (((plVar2[1] == 0 || (DAT_1803fa608 == (float *)0x0)) ||
      ((DAT_1803fa668 == (longlong *)0x0 || (DAT_1803faee8 == 0)))))) {
    if (plVar14 == (longlong *)0x0) {
      return;
    }
    (**(code **)*plVar14)(plVar14);
    goto LAB_1800a11e7;
  }
  iVar7 = (**(code **)*plVar2)(plVar2);
  iStack_e0 = iVar7;
  FUN_180023e60(plVar2,0);
  uVar6 = (**(code **)*plVar2)(plVar2);
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  cVar4 = FUN_180095a10(plVar2,uVar6,"TPIK_CamPos",param_1 + 5);
  if ((cVar4 != '\0') &&
     (cVar4 = FUN_180095b20(plVar2,uVar6,"TPIK_CamAng",&uStack_78), cVar4 != '\0')) {
    puVar11 = (undefined4 *)FUN_18001c430(lVar9,&puStack_108);
    *(undefined4 *)((longlong)param_1 + 0x34) = *puVar11;
    *(undefined4 *)(param_1 + 7) = puVar11[1];
    *(undefined4 *)((longlong)param_1 + 0x3c) = puVar11[2];
    (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,(longlong)param_1 + 0x4c);
    FUN_1802d4050(&uStack_78,param_1 + 8);
    fStack_d8 = *(float *)((longlong)param_1 + 0x34);
    if ((((uint)fStack_d8 & 0x7f800000) == 0x7f800000) ||
       ((((uStack_d0 = *(uint *)(param_1 + 7), (uStack_d0 & 0x7f800000) == 0x7f800000 ||
          (uStack_c8 = *(uint *)((longlong)param_1 + 0x3c), (uStack_c8 & 0x7f800000) == 0x7f800000))
         || (uStack_c0 = *(uint *)((longlong)param_1 + 0x4c), (uStack_c0 & 0x7f800000) == 0x7f800000
            )) || ((uStack_b8 = *(uint *)(param_1 + 10), (uStack_b8 & 0x7f800000) == 0x7f800000 ||
                   (uStack_b0 = *(uint *)((longlong)param_1 + 0x54),
                   (uStack_b0 & 0x7f800000) == 0x7f800000)))))) {
LAB_1800a118f:
      uVar5 = 0;
    }
    else {
      fStack_a8 = *(float *)(param_1 + 5) - fStack_d8;
      fStack_a4 = *(float *)((longlong)param_1 + 0x2c) - *(float *)(param_1 + 7);
      fStack_a0 = *(float *)(param_1 + 6) - *(float *)((longlong)param_1 + 0x3c);
      if (DAT_1803812c4 < fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fStack_a0 * fStack_a0)
      goto LAB_1800a118f;
      uVar5 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x13) = uVar5;
    param_1[4] = (double)*DAT_1803fa608;
  }
  iVar8 = (**(code **)*plVar2)(plVar2);
  if (iVar7 < iVar8) {
    puVar12 = (undefined8 *)*plVar2;
    iVar8 = (*(code *)*puVar12)(plVar2);
    (*(code *)puVar12[2])(plVar2,iVar8 - iVar7);
  }
  (**(code **)*plVar2)(plVar2);
  puVar12 = puStack_80;
LAB_1800a11e7:
  if (puVar12 != (undefined8 *)0x0) {
    puStack_e8 = puVar12;
  }
  DAT_1803fa33f = uStack_f9;
  DAT_1803fa33d = uStack_fb;
  DAT_1803fa339 = CONCAT13(uStack_fc,uStack_100._1_3_);
  DAT_1803fa338 = puVar12 != (undefined8 *)0x0;
  DAT_1803fa330 = puStack_e8;
  return;
}


