// 0x180184940  FUN_180184940
// size=5605 thunk=false
// signature: undefined FUN_180184940()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180184940(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  char *pcVar18;
  float *pfVar19;
  int *piVar20;
  int *piVar21;
  float *pfVar22;
  float *pfVar23;
  undefined4 *puVar24;
  int *piVar25;
  uint *puVar26;
  longlong lVar27;
  undefined8 uVar28;
  char **ppcVar29;
  int iVar30;
  char *pcVar31;
  longlong lVar32;
  longlong *plVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_638 [32];
  undefined8 local_618;
  float local_610;
  undefined4 local_608;
  char local_5f8;
  char local_5f7;
  char local_5f6;
  char local_5f5;
  char local_5f4;
  char local_5f3;
  char local_5f2;
  char local_5f1;
  char local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  float local_5d8;
  int local_5d4;
  float local_5d0;
  float local_5cc;
  int local_5c8;
  float local_5c4;
  longlong local_5c0;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  char local_5a8;
  char local_5a7;
  int local_5a4;
  float local_5a0;
  char *local_598;
  longlong *local_590;
  char *local_588;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  int local_570;
  float local_56c;
  float local_568;
  int local_564;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  float local_550;
  undefined4 local_54c;
  undefined8 local_548;
  undefined4 local_540;
  int local_538 [2];
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0 [3];
  float local_4b4;
  longlong local_4b0;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_488;
  float local_484;
  float local_480;
  float local_478;
  float local_474;
  float local_470;
  longlong *local_468;
  undefined1 local_458 [24];
  int local_440;
  int local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  undefined8 local_428;
  char *local_420;
  char local_418 [168];
  uint local_370;
  char local_2ec;
  undefined1 local_2c8 [160];
  undefined1 local_228 [160];
  undefined1 local_188 [160];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_638;
  if ((((DAT_1803fa668 != (longlong *)0x0) &&
       (cVar10 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar10 != '\0')) &&
      (DAT_1803fa360 != (longlong *)0x0)) && (DAT_1803fa608 != 0)) {
    lVar32 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar31 = (char *)(lVar32 + 0x10);
    local_420 = pcVar31;
    if (*pcVar31 == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar15 = DAT_1803fa360;
    plVar33 = (longlong *)(lVar32 + 0xec0);
    lVar32 = *plVar33;
    *(undefined1 *)(*(longlong *)(lVar32 + 0x1520) + 0xce) = 1;
    local_5c0 = *(longlong *)(*(longlong *)(lVar32 + 0x1520) + 0x2c8);
    if (local_5c0 != 0) {
      pcVar4 = *(code **)(*plVar15 + 0x18);
      local_428 = plVar33;
      uVar12 = (**(code **)(*DAT_1803fa668 + 0x60))();
      plVar15 = (longlong *)(*pcVar4)(DAT_1803fa360,uVar12);
      if (plVar15 != (longlong *)0x0) {
        local_590 = plVar15;
        puVar16 = (undefined8 *)FUN_18001c430(plVar15,&local_478);
        local_548 = *puVar16;
        local_540 = *(undefined4 *)(puVar16 + 1);
        local_43c = 0;
        local_440 = 0;
        (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_43c,&local_440);
        local_420 = (char *)0x93fd561a96ab0c67;
        plVar17 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_478,&local_420);
        lVar32 = *plVar17 + 0x28;
        local_428 = (longlong *)0x39a166e326dd1eac;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        cVar10 = *pcVar18;
        local_428 = (longlong *)0x6b1f1e9713c5a183;
        local_5f7 = cVar10;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        local_5f8 = *pcVar18;
        local_428 = (longlong *)0x43dc26eb12dd2e34;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        local_5f0 = *pcVar18;
        local_428 = (longlong *)0x3de1d4a1ddc4912e;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pfVar19 = (float *)FUN_180202dc0(*plVar17 + 0x28);
        local_56c = *pfVar19;
        local_428 = (longlong *)0x7aad0bc54d55fc8a;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        cVar3 = *pcVar18;
        local_428 = (longlong *)0xcd347fc1a3829be9;
        local_5f3 = cVar3;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        local_5f2 = *pcVar18;
        local_428 = (longlong *)0xa0267eea20a40d9a;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pcVar18 = (char *)FUN_1801fcfc0(*plVar17 + 0x28);
        local_5f1 = *pcVar18;
        if (cVar3 == '\0') {
          local_5a4 = 0;
        }
        else {
          local_5a4 = FUN_18001c560(plVar15);
        }
        local_428 = (longlong *)0xdaefe600c147795;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pfVar19 = (float *)FUN_180202dc0(*plVar17 + 0x28);
        local_568 = *pfVar19;
        local_570 = 2;
        local_538[0] = 0;
        local_428 = (longlong *)0x9c2c141ec1380adb;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        piVar20 = (int *)FUN_1802029c0(*plVar17 + 0x28);
        fVar14 = DAT_180380f40;
        piVar25 = local_538;
        if (-1 < *piVar20) {
          piVar25 = piVar20;
        }
        piVar21 = &local_570;
        if (*piVar20 < 3) {
          piVar21 = piVar25;
        }
        local_5d4 = *piVar21;
        local_5c4 = 6.0;
        local_5d8 = 0.5;
        local_428 = (longlong *)0xff0dfb3785b0a4d9;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pfVar22 = (float *)FUN_180202dc0(*plVar17 + 0x28);
        fVar39 = DAT_180380ac0;
        pfVar19 = &local_5d8;
        if (DAT_180380ac0 <= *pfVar22) {
          pfVar19 = pfVar22;
        }
        pfVar23 = &local_5c4;
        if (*pfVar22 <= fVar14) {
          pfVar23 = pfVar19;
        }
        local_5c4 = *pfVar23;
        local_5cc = 40.0;
        local_5d8 = 6.0;
        local_428 = (longlong *)0x5dc2df42372b2b0d;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        pfVar22 = (float *)FUN_180202dc0(*plVar17 + 0x28);
        pfVar19 = &local_5d8;
        if (fVar14 <= *pfVar22) {
          pfVar19 = pfVar22;
        }
        pfVar23 = &local_5cc;
        if (*pfVar22 <= DAT_180381088) {
          pfVar23 = pfVar19;
        }
        local_550 = *pfVar23;
        if (*pcVar31 == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar12 = *(undefined4 *)(*plVar33 + 0xc84);
        local_428 = (longlong *)0x9e08a79189c0ce31;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        puVar24 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        uVar1 = *puVar24;
        local_428 = (longlong *)0x9e08aa9189c0d34a;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        puVar24 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        uVar2 = *puVar24;
        local_428 = (longlong *)0x9e08b79189c0e961;
        plVar17 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        puVar24 = (undefined4 *)FUN_180202dc0(*plVar17 + 0x28);
        local_5e8 = *puVar24;
        local_5e4 = uVar2;
        local_5e0 = uVar1;
        local_5dc = uVar12;
        local_5d8 = (float)FUN_180268ed0(&local_5e8);
        if (*pcVar31 == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar12 = *(undefined4 *)(*plVar33 + 0xc84);
        local_428 = (longlong *)0xa15b8e45ace4cd42;
        plVar33 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        puVar24 = (undefined4 *)FUN_180202dc0(*plVar33 + 0x28);
        uVar1 = *puVar24;
        local_428 = (longlong *)0xa15b8b45ace4c829;
        plVar33 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        puVar24 = (undefined4 *)FUN_180202dc0(*plVar33 + 0x28);
        uVar2 = *puVar24;
        local_428 = (longlong *)0xa15b7e45ace4b212;
        plVar33 = (longlong *)FUN_180241a30(lVar32,&local_5e8,&local_428);
        puVar24 = (undefined4 *)FUN_180202dc0(*plVar33 + 0x28);
        local_5e8 = *puVar24;
        local_5e4 = uVar2;
        local_5e0 = uVar1;
        local_5dc = uVar12;
        local_54c = FUN_180268ed0(&local_5e8);
        piVar25 = (int *)FUN_180184780(local_458,cVar10,local_43c,local_440);
        local_564 = *piVar25;
        local_5cc = (float)piVar25[1];
        local_560 = (float)piVar25[2];
        local_55c = (float)piVar25[3];
        local_558 = (float)piVar25[4];
        local_554 = (float)piVar25[5];
        for (iVar30 = 1; iVar30 <= *(int *)(DAT_1803fa608 + 0x1c); iVar30 = iVar30 + 1) {
          local_5c8 = iVar30;
          plVar33 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar30);
          local_468 = plVar33;
          if ((plVar33 != (longlong *)0x0) && (plVar33 != plVar15)) {
            cVar10 = FUN_18001c330(plVar33);
            local_5a7 = cVar10;
            plVar15 = (longlong *)(**(code **)(*plVar33 + 0x20))(plVar33);
            if (plVar15 == (longlong *)0x0) {
              local_5f4 = '\x01';
            }
            else {
              local_5f4 = (**(code **)(*plVar15 + 0x40))(plVar15);
            }
            iVar8 = local_5a4;
            cVar3 = local_5f4;
            local_5a8 = local_5f4;
            if (((cVar10 != '\0') &&
                (((((local_5f3 == '\0' || (local_5a4 < 1)) ||
                   (iVar13 = FUN_18001c560(plVar33), iVar13 != iVar8)) &&
                  ((local_5f2 == '\0' || (cVar10 = FUN_18001e0a0(plVar33), cVar10 != '\b')))) &&
                 ((local_5f1 == '\0' ||
                  (puVar26 = (uint *)FUN_18001d710(plVar33), (*puVar26 >> 6 & 1) == 0)))))) &&
               ((0x7f < iVar30 - 1U ||
                (((DAT_180425fd0 == (code *)0x0 ||
                  (cVar10 = (*DAT_180425fd0)(iVar30), cVar10 == '\0')) &&
                 (((DAT_180426170 == (code *)0x0 ||
                   (cVar10 = (*DAT_180426170)(iVar30), cVar10 == '\0')) &&
                  ((DAT_1804009f0 == (code *)0x0 ||
                   (cVar10 = (*DAT_1804009f0)(iVar30), cVar10 == '\0')))))))))) {
              memset(local_418,0,0x144);
              cVar10 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,iVar30,local_418);
              if (cVar10 != '\0') {
                if ((local_2ec == '\0') && (local_370 != 0)) {
                  lVar32 = (ulonglong)local_370 + 0x110000100000000;
                }
                else {
                  lVar32 = 0;
                }
                if ((DAT_1803e89f8 == '\0') ||
                   (((lVar32 == 0 || (lVar32 != DAT_18040a3f0)) &&
                    ((DAT_18040a3f8 < 1 || (iVar30 != DAT_18040a3f8)))))) {
                  cVar10 = '\0';
                }
                else {
                  cVar10 = '\x01';
                }
                local_5f6 = cVar10;
                if (DAT_1803e89e2 == '\0') {
                  lVar27 = 0;
                  local_4b0 = 0;
LAB_1801852e8:
                  cVar11 = '\0';
                }
                else {
                  lVar27 = FUN_180182f40(lVar32,iVar30,0);
                  local_4b0 = lVar27;
                  if ((((lVar27 != 0) || (DAT_1803e89e2 == '\0')) || (DAT_18040a3d4 == '\0')) ||
                     ((lVar32 == 0 || (cVar11 = FUN_180182bd0(lVar32), cVar11 == '\0'))))
                  goto LAB_1801852e8;
                  cVar11 = '\x01';
                }
                local_5f5 = cVar11;
                if (cVar10 == '\0') {
                  if (lVar27 == 0) {
                    if (((cVar11 == '\0') && (local_5f7 == '\0')) && (local_5f8 == '\0'))
                    goto LAB_180185ac8;
                    puVar24 = &DAT_1803e89e8;
                  }
                  else {
                    puVar24 = (undefined4 *)(lVar27 + 8);
                  }
                }
                else {
                  puVar24 = (undefined4 *)&DAT_1803e8a00;
                }
                fVar14 = (float)FUN_180268ed0(puVar24);
                local_598 = local_418;
                if (local_418[0] == '\0') {
                  local_598 = "player";
                }
                local_5a0 = 0.0;
                local_5d0 = fVar14;
                local_588 = local_598;
                pfVar19 = (float *)(**(code **)(*local_590 + 0x48))();
                pfVar22 = (float *)(**(code **)(*plVar33 + 0x48))(plVar33);
                local_478 = *pfVar19 - *pfVar22;
                local_474 = pfVar19[1] - pfVar22[1];
                local_470 = pfVar19[2] - pfVar22[2];
                fVar35 = (float)(*(code *)PTR_FUN_1803da018)
                                          (local_474 * local_474 + local_478 * local_478 +
                                           local_470 * local_470);
                local_5a0 = fVar35;
                if ((cVar3 == '\0') && (((local_5f6 != '\0' || (lVar27 != 0)) || (cVar11 != '\0'))))
                {
                  bVar6 = true;
                  cVar10 = FUN_180184190(plVar33);
LAB_180185455:
                  bVar5 = true;
                }
                else {
                  cVar10 = FUN_180184190(plVar33);
                  bVar6 = false;
                  if (((cVar3 == '\0') || (local_56c <= 0.0)) || (fVar35 <= local_56c))
                  goto LAB_180185455;
                  bVar5 = false;
                }
                cVar3 = local_5f7;
                if (((local_5f7 == '\0') && (local_5f8 == '\0')) ||
                   (((cVar10 != '\0' && ((local_5f0 == '\0' || (!bVar5)))) ||
                    ((0.0 < local_568 && (local_568 < fVar35)))))) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if ((bVar6) || (bVar5)) {
                  pfVar19 = (float *)(**(code **)(*plVar33 + 0x48))(plVar33);
                  fVar36 = *pfVar19;
                  fVar42 = pfVar19[1];
                  fVar40 = pfVar19[2];
                  if ((fVar36 == 0.0) && ((fVar42 == 0.0 && (fVar40 == 0.0)))) {
                    pfVar19 = (float *)FUN_18001daf0(plVar33,&local_5e8);
                    fVar36 = *pfVar19;
                    fVar42 = pfVar19[1];
                    fVar40 = pfVar19[2];
                  }
                  local_498 = fVar36;
                  local_494 = fVar42;
                  local_490 = fVar40;
                  cVar10 = FUN_180021ac0();
                  if (cVar10 == '\0') {
LAB_180185653:
                    local_5d0 = 0.0;
                    fVar42 = 0.0;
                    fVar41 = 0.0;
                    fVar36 = 0.0;
                    fVar40 = 0.0;
                    bVar9 = false;
LAB_180185676:
                    bVar34 = bVar9;
                    bVar9 = false;
                  }
                  else {
                    local_488 = fVar36 + 0.0;
                    local_484 = fVar42 + 0.0;
                    local_480 = fVar40 + DAT_1803810e0;
                    cVar10 = FUN_180021ac0();
                    if ((cVar10 == '\0') || (local_52c - local_49c < DAT_180380e9c))
                    goto LAB_180185653;
                    fVar36 = (local_4a0 + local_530) * fVar39;
                    fVar41 = (local_52c - local_49c) * _DAT_180380a98 * fVar39;
                    local_5d0 = fVar36 - fVar41;
                    fVar41 = fVar41 + fVar36;
                    bVar9 = true;
                    bVar34 = true;
                    fVar40 = (fVar41 + local_5d0) * fVar39;
                    fVar36 = local_52c;
                    fVar42 = local_49c;
                    if ((((fVar40 < 0.0) || ((float)local_43c < fVar40)) || (local_52c < 0.0)) ||
                       ((float)local_440 < local_49c)) goto LAB_180185676;
                    bVar9 = true;
                  }
                  lVar32 = local_5c0;
                  fVar7 = local_5d0;
                  if (cVar3 == '\0') {
LAB_1801856ee:
                    bVar34 = false;
                  }
                  else {
                    if (bVar34) {
                      fVar37 = (fVar36 + fVar42) * fVar39;
                    }
                    else {
                      fVar37 = 0.0;
                    }
                    if (local_564 != 0) {
                      if (local_564 == 1) {
                        if (local_5cc == 1.4013e-45) {
                          bVar34 = iVar30 == DAT_1803fea00;
                        }
                        else {
                          if (local_5cc != 2.8026e-45) {
                            if ((iVar30 != DAT_1803fea00) && (iVar30 != DAT_1803ff220))
                            goto LAB_1801856ee;
                            goto LAB_180185b39;
                          }
                          bVar34 = iVar30 == DAT_1803ff220;
                        }
                      }
                      else if ((local_560 <= 0.0) || (local_55c <= 0.0)) {
                        bVar34 = false;
                      }
                      else {
                        fVar38 = (fVar40 - local_558) / local_560;
                        fVar37 = (fVar37 - local_554) / local_55c;
                        bVar34 = fVar37 * fVar37 + fVar38 * fVar38 <= DAT_180380bb0;
                      }
                      if (!bVar34) goto LAB_1801856ee;
                    }
LAB_180185b39:
                    bVar34 = true;
                  }
                  if ((local_5f6 == '\0') || (!bVar6)) {
                    if (bVar9) {
                      if (((bVar6) && (lVar27 != 0)) && (*(char *)(lVar27 + 0x34) != '\0')) {
                        local_4c0[2] = fVar40;
                        local_4b4 = fVar36;
                        if ((0 < local_43c) && (0 < local_440)) {
                          local_428 = (longlong *)
                                      CONCAT44((float)local_440,(float)local_43c * fVar39);
                          local_618 = (undefined1 *)CONCAT44(local_618._4_4_,DAT_180380c88);
                          pfVar19 = local_4c0 + 2;
                          ppcVar29 = (char **)&local_428;
                          goto LAB_180185ab9;
                        }
                      }
                      else if ((bVar5) && (bVar34)) {
                        if (local_5d4 == 1) {
LAB_180185dd9:
                          local_5ac = fVar42;
                        }
                        else if ((local_5d4 != 2) || (fVar36 < (float)local_440 * fVar39)) {
                          local_5ac = fVar36;
                        }
                        else {
                          if ((float)local_440 * fVar39 < fVar42) goto LAB_180185dd9;
                          local_5ac = (fVar36 + fVar42) * fVar39;
                        }
                        local_5b0 = fVar40;
                        if ((0 < local_43c) && (0 < local_440)) {
                          if (local_5d4 == 1) {
                            local_420 = (char *)(ulonglong)(uint)((float)local_43c * fVar39);
                            ppcVar29 = &local_420;
                          }
                          else {
                            local_57c = (float)local_440;
                            local_580 = (float)local_43c * fVar39;
                            if (local_5d4 == 2) {
                              local_57c = local_57c * fVar39;
                            }
                            ppcVar29 = (char **)&local_580;
                          }
                          local_598 = *ppcVar29;
                          local_618 = (undefined1 *)CONCAT44(local_618._4_4_,local_5c4);
                          pfVar19 = &local_5b0;
                          ppcVar29 = &local_598;
                          fVar14 = local_5d8;
                          goto LAB_180185ab9;
                        }
                      }
                    }
                    else if ((bVar5) && (local_5f8 != '\0')) {
                      FUN_180207b50(local_188,"%s  [%.0fm]",local_588,
                                    (double)(fVar35 / DAT_1803810ac));
                      uVar28 = (**(code **)(*plVar33 + 0x48))(plVar33);
                      local_610 = local_550;
                      local_618 = local_188;
                      FUN_180184280(local_5c0,uVar28,&local_548,local_54c);
                    }
                  }
                  else if (bVar9) {
                    fVar39 = fVar41 - local_5d0;
                    if (fVar36 - fVar42 <= fVar41 - local_5d0) {
                      fVar39 = fVar36 - fVar42;
                    }
                    fVar37 = DAT_180380e9c;
                    if (DAT_180380e9c <= fVar39 * DAT_180380a68) {
                      fVar37 = fVar39 * DAT_180380a68;
                    }
                    local_608 = 0;
                    local_610 = DAT_180380ed8;
                    local_618 = (undefined1 *)((ulonglong)local_618._4_4_ << 0x20);
                    local_438 = fVar41;
                    local_434 = fVar36;
                    local_430 = local_5d0;
                    local_42c = fVar42;
                    FUN_180294f00(local_5c0,&local_430,&local_438,0xa0000000);
                    uVar12 = DAT_180380de8;
                    fVar38 = fVar7 + fVar37;
                    local_618._0_4_ = DAT_180380de8;
                    local_528 = fVar38;
                    local_524 = fVar42;
                    FUN_180294c90(lVar32,&local_430,&local_528,fVar14);
                    local_618._0_4_ = uVar12;
                    local_4d8 = fVar7;
                    local_4d4 = fVar37 + fVar42;
                    FUN_180294c90(lVar32,&local_430,&local_4d8,fVar14);
                    local_618._0_4_ = DAT_180380de8;
                    local_520 = fVar41 - fVar37;
                    local_51c = fVar42;
                    local_518 = fVar41;
                    local_514 = fVar42;
                    FUN_180294c90(lVar32,&local_518,&local_520,fVar14);
                    uVar12 = DAT_180380de8;
                    local_618._0_4_ = DAT_180380de8;
                    local_510 = fVar41;
                    local_50c = fVar37 + fVar42;
                    local_508 = fVar41;
                    local_504 = fVar42;
                    FUN_180294c90(lVar32,&local_508,&local_510,fVar14);
                    fVar39 = local_5d0;
                    local_4f8 = local_5d0;
                    local_618._0_4_ = uVar12;
                    local_500 = fVar38;
                    local_4fc = fVar36;
                    local_4f4 = fVar36;
                    FUN_180294c90(lVar32,&local_4f8,&local_500,fVar14);
                    uVar12 = DAT_180380de8;
                    local_4f0 = fVar39;
                    local_4e8 = fVar39;
                    local_618._0_4_ = DAT_180380de8;
                    local_4ec = fVar36 - fVar37;
                    local_4e4 = fVar36;
                    FUN_180294c90(lVar32,&local_4e8,&local_4f0,fVar14);
                    local_618._0_4_ = uVar12;
                    local_4e0 = fVar41 - fVar37;
                    local_4dc = fVar36;
                    FUN_180294c90(lVar32,&local_438,&local_4e0,fVar14);
                    local_618 = (undefined1 *)CONCAT44(local_618._4_4_,uVar12);
                    local_4a8 = fVar41;
                    local_4a4 = fVar36 - fVar37;
                    FUN_180294c90(lVar32,&local_438,&local_4a8,fVar14);
                    FUN_180207b50(local_2c8,"> %s  [%.0fm]",local_588,
                                  (double)(fVar35 / DAT_1803810ac));
                    FUN_180183f10(lVar32,CONCAT44(fVar42 - DAT_180380fe8,fVar40),local_2c8,fVar14);
                    fVar39 = DAT_180380ac0;
                    if (DAT_1803e89e1 == '\0') {
                      if ((bVar5) && (bVar34)) {
                        if (local_5d4 == 1) {
LAB_180185ba9:
                          local_5b4 = fVar42;
                        }
                        else if ((local_5d4 != 2) || (fVar36 < (float)local_440 * DAT_180380ac0)) {
                          local_5b4 = fVar36;
                        }
                        else {
                          if ((float)local_440 * DAT_180380ac0 < fVar42) goto LAB_180185ba9;
                          local_5b4 = (fVar36 + fVar42) * DAT_180380ac0;
                        }
                        local_5b8 = fVar40;
                        if ((0 < local_43c) && (0 < local_440)) {
                          if (local_5d4 == 1) {
                            local_4c0[0] = (float)local_43c * DAT_180380ac0;
                            local_4c0[1] = 0.0;
                            pfVar19 = local_4c0;
                          }
                          else {
                            local_574 = (float)local_440;
                            local_578 = (float)local_43c * DAT_180380ac0;
                            if (local_5d4 == 2) {
                              local_574 = local_574 * DAT_180380ac0;
                            }
                            pfVar19 = &local_578;
                          }
                          local_598 = *(char **)pfVar19;
                          pfVar19 = &local_5b8;
                          ppcVar29 = &local_598;
                          fVar14 = local_5d8;
                          fVar35 = local_5c4;
                          goto LAB_180185ab6;
                        }
                      }
                    }
                    else {
                      local_4d0 = fVar40;
                      local_4cc = fVar36;
                      if ((0 < local_43c) && (0 < local_440)) {
                        local_4c8 = (float)local_43c * DAT_180380ac0;
                        local_4c4 = (float)local_440;
                        pfVar19 = &local_4d0;
                        ppcVar29 = (char **)&local_4c8;
                        fVar35 = DAT_180380cd0;
LAB_180185ab6:
                        local_618 = (undefined1 *)CONCAT44(local_618._4_4_,fVar35);
LAB_180185ab9:
                        FUN_180294c90(lVar32,ppcVar29,pfVar19,fVar14);
                      }
                    }
                  }
                  else {
                    FUN_180207b50(local_228,"%s  [%.0fm]",local_588,(double)(fVar35 / DAT_1803810ac)
                                 );
                    uVar28 = (**(code **)(*plVar33 + 0x48))(plVar33);
                    local_610 = DAT_180381004;
                    local_618 = local_228;
                    FUN_180184280(local_5c0,uVar28,&local_548,fVar14);
                  }
                }
              }
            }
          }
LAB_180185ac8:
          plVar15 = local_590;
        }
      }
    }
  }
  return;
}


