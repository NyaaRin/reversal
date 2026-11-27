// 0x1801cb050  FUN_1801cb050
// size=10626 thunk=false
// signature: undefined FUN_1801cb050()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cb050(void)

{
  ulonglong *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int *piVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  longlong **pplVar23;
  float *pfVar24;
  size_t sVar25;
  int *piVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong lVar29;
  undefined4 *puVar30;
  longlong *plVar31;
  undefined1 *puVar32;
  undefined8 *puVar33;
  longlong *plVar34;
  undefined8 uVar35;
  longlong **pplVar36;
  float *pfVar37;
  int *piVar38;
  char *pcVar39;
  float *pfVar40;
  int *piVar41;
  undefined8 *****pppppuVar42;
  int *piVar43;
  ulonglong uVar44;
  char *pcVar45;
  undefined1 uVar46;
  longlong lVar47;
  longlong *plVar48;
  ulonglong uVar49;
  undefined8 *****pppppuVar50;
  uint uVar51;
  longlong lVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_5b8 [8];
  undefined1 auStack_5b0 [24];
  char *local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  uint local_578;
  undefined8 local_570;
  undefined8 local_568;
  longlong *local_560;
  longlong *local_558;
  longlong *local_550;
  longlong local_548;
  int *local_540;
  longlong *local_538;
  longlong *local_530;
  undefined8 uStack_528;
  undefined8 ****local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  ulonglong local_508;
  undefined4 local_500;
  undefined8 local_4fc;
  undefined8 uStack_4f4;
  undefined8 ****local_4e8;
  undefined8 uStack_4e0;
  ulonglong local_4d8;
  ulonglong local_4d0;
  longlong *local_4c8;
  longlong *plStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [32];
  undefined1 local_478 [32];
  undefined1 local_458 [32];
  undefined1 local_438 [32];
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [32];
  undefined8 local_3b8;
  char *local_3b0;
  int *local_3a8;
  undefined8 ****local_3a0 [2];
  ulonglong local_390;
  ulonglong local_388;
  int *local_380;
  int *piStack_378;
  longlong local_370;
  int *local_368;
  int *piStack_360;
  undefined8 local_358;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  char local_328 [32];
  char local_308 [48];
  char local_2d8 [96];
  undefined1 local_278 [224];
  undefined1 local_198 [160];
  ulonglong local_f8;
  
  uVar5 = DAT_180381384;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_5b8;
  uVar44 = 0;
  uVar21 = 0;
  local_578 = 0;
  local_560 = (longlong *)CONCAT44(local_560._4_4_,4);
  local_558 = (longlong *)((ulonglong)local_558 & 0xffffffff00000000);
  pplVar36 = &local_558;
  if (-1 < DAT_1803fb24c) {
    pplVar36 = (longlong **)&DAT_1803fb24c;
  }
  pplVar23 = &local_560;
  if (DAT_1803fb24c < 5) {
    pplVar23 = pplVar36;
  }
  DAT_1803fb24c = *(int *)pplVar23;
  lVar47 = (longlong)DAT_1803fb24c;
  cVar19 = FUN_18019fbc0("Players",0xe,CONCAT44(DAT_180381384,DAT_180381384),0);
  puVar32 = auStack_5b8;
  if (cVar19 == '\0') goto LAB_1801cd957;
  lVar47 = lVar47 * 200;
  local_380 = (int *)0x0;
  piStack_378 = (int *)0x0;
  local_370 = 0;
  local_548 = lVar47;
  FUN_180183470(&local_380);
  local_540 = (int *)0x0;
  for (piVar43 = local_380; piVar41 = local_540, piVar43 != piStack_378; piVar43 = piVar43 + 0x2c) {
    if (*(char *)((longlong)piVar43 + 7) == '\0') {
      if (DAT_1803fe9f0 == 0) {
        if (DAT_180423a58 == 0) goto LAB_1801cb1a9;
        bVar53 = *piVar43 == DAT_180423a58;
      }
      else {
        bVar53 = *(longlong *)(piVar43 + 4) == DAT_1803fe9f0;
      }
      piVar41 = piVar43;
      if (bVar53) break;
    }
LAB_1801cb1a9:
  }
  local_540 = piVar41;
  plVar34 = (longlong *)0x10;
  local_538 = (longlong *)0x10;
  pcVar45 = *(char **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_3b0 = pcVar45;
  if (pcVar45[0x10] == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar31 = (longlong *)0xec0;
  local_550 = (longlong *)0xec0;
  lVar28 = *(longlong *)(*(longlong *)(pcVar45 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar28 + 0x1c8) != 0) ||
     (pfVar40 = (float *)(lVar28 + 0x280),
     *(longlong *)(*(longlong *)(pcVar45 + 0xec0) + 0x2368) != 0)) {
    pfVar40 = (float *)(lVar28 + 0x250);
  }
  fVar56 = (*pfVar40 - *(float *)(lVar28 + 0x118)) * DAT_180380ab4;
  FUN_18027fc30();
  if (pcVar45[0x10] == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar28 = *(longlong *)(pcVar45 + 0xec0);
  puVar3 = (uint *)(lVar28 + 0x1ec0);
  *puVar3 = *puVar3 | 1;
  *(float *)(lVar28 + 0x1ed8) = fVar56;
  local_3b8 = (int *)0x0;
  local_580 = 0;
  local_588 = 0;
  local_590 = (longlong **)((ulonglong)local_590._4_4_ << 0x20);
  local_598 = (char *)&local_3b8;
  FUN_1802b74e0("##pl_search","Search: nick / RP name / group / team / SteamID...",&DAT_1803fe430,
                0x60);
  cVar19 = pcVar45[0x10];
  if (cVar19 == '\0') {
    __dyn_tls_on_demand_init();
    cVar19 = pcVar45[0x10];
  }
  fVar15 = DAT_180380c50;
  fVar13 = DAT_180380b20;
  lVar28 = *(longlong *)(*(longlong *)(pcVar45 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar28 + 0x1c8) != 0) ||
     (pfVar40 = (float *)(lVar28 + 0x284),
     *(longlong *)(*(longlong *)(pcVar45 + 0xec0) + 0x2368) != 0)) {
    pfVar40 = (float *)(lVar28 + 0x254);
  }
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3fc00000);
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3f400000);
  local_560 = (longlong *)CONCAT44(local_560._4_4_,0x3fc00000);
  local_558 = (longlong *)CONCAT44(local_558._4_4_,0x3f400000);
  pplVar36 = &local_558;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pplVar36 = (longlong **)&DAT_1803da6a4;
  }
  pplVar23 = &local_560;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pplVar23 = pplVar36;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar37 = &DAT_1803da6a4;
  }
  pfVar24 = (float *)&local_570;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar24 = pfVar37;
  }
  fVar54 = (*pfVar40 - *(float *)(lVar28 + 0x11c)) - *pfVar24 * DAT_180381118;
  fVar55 = *(float *)pplVar23 * DAT_1803810ec;
  if (*(float *)pplVar23 * DAT_1803810ec <= fVar54) {
    fVar55 = fVar54;
  }
  if (cVar19 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar28 = *(longlong *)(pcVar45 + 0xec0);
  local_348._0_4_ = 3;
  local_348._4_4_ = (undefined4)*(undefined8 *)(lVar28 + 0xde0);
  uStack_340 = (undefined4)((ulonglong)*(undefined8 *)(lVar28 + 0xde0) >> 0x20);
  uStack_33c = (undefined4)*(undefined8 *)(lVar28 + 0xde8);
  uStack_338 = (undefined4)((ulonglong)*(undefined8 *)(lVar28 + 0xde8) >> 0x20);
  FUN_18028a220(lVar28 + 0x1fc8,&local_348);
  if (*(int *)(lVar28 + 0x1fc4) != 3) {
    uVar35 = *(undefined8 *)(&DAT_1803dc9b0 + lVar47);
    *(undefined8 *)(lVar28 + 0xde0) = *(undefined8 *)(&DAT_1803dc9a8 + lVar47);
    *(undefined8 *)(lVar28 + 0xde8) = uVar35;
  }
  if (pcVar45[0x10] == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar28 = *(longlong *)(pcVar45 + 0xec0);
  local_348._0_4_ = 5;
  local_348._4_4_ = (undefined4)*(undefined8 *)(lVar28 + 0xe00);
  uStack_340 = (undefined4)((ulonglong)*(undefined8 *)(lVar28 + 0xe00) >> 0x20);
  uStack_33c = (undefined4)*(undefined8 *)(lVar28 + 0xe08);
  uStack_338 = (undefined4)((ulonglong)*(undefined8 *)(lVar28 + 0xe08) >> 0x20);
  FUN_18028a220(lVar28 + 0x1fc8,&local_348);
  if (*(int *)(lVar28 + 0x1fc4) != 5) {
    uVar35 = *(undefined8 *)(&DAT_1803dc9c0 + lVar47);
    *(undefined8 *)(lVar28 + 0xe00) = *(undefined8 *)(&DAT_1803dc9b8 + lVar47);
    *(undefined8 *)(lVar28 + 0xe08) = uVar35;
  }
  local_3b8 = (int *)CONCAT44(fVar55,fVar56);
  FUN_180272fa0("##pl_list",&local_3b8,1,0);
  local_520 = (undefined8 *****)0x0;
  uStack_518 = 0;
  local_510 = 0;
  local_508 = 0;
  sVar25 = strlen(&DAT_1803fe430);
  FUN_18001d080(&local_520,&DAT_1803fe430,sVar25);
  FUN_18019a270(local_3a0);
  FUN_18020e450(&local_520);
  local_558 = (longlong *)((ulonglong)local_558 & 0xffffffff00000000);
  local_560 = (longlong *)((ulonglong)local_560 & 0xffffffff00000000);
  local_368 = (int *)0x0;
  piStack_360 = (int *)0x0;
  local_358 = 0;
  FUN_1800fa9a0(&local_368);
  if (pcVar45[0x10] == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_18027a8a0(0,*(float *)(*(longlong *)(pcVar45 + 0xec0) + 0x1238) * _DAT_180380b50);
  fVar55 = DAT_1803810ac;
  uVar14 = DAT_180380bb0;
  uVar12 = DAT_180380b10;
  uVar4 = DAT_180380a94;
  local_3a8 = local_380;
  local_568 = piStack_378;
  if (local_380 != piStack_378) {
    piVar43 = local_380 + 0x10;
    local_570 = (longlong *)(local_380 + 0x18);
    piVar38 = piStack_378;
    uVar49 = uVar44;
    piVar41 = local_380;
    do {
      piVar18 = piStack_360;
      if (*(char *)((longlong)piVar41 + 7) == '\0') {
        local_560 = (longlong *)CONCAT44(local_560._4_4_,(int)uVar44 + 1);
        iVar22 = piVar41[0x28];
        local_3b8 = piVar43;
        local_3a8 = piVar41;
        for (piVar43 = local_368; piVar43 != piVar18; piVar43 = piVar43 + 0xc) {
          if ((*piVar43 == iVar22) && (*(longlong *)(piVar43 + 6) != 0)) {
            piVar41 = piVar43 + 2;
            piVar38 = piVar41;
            if (0xf < *(ulonglong *)(piVar43 + 8)) {
              piVar38 = *(int **)piVar41;
            }
            if (((*(ulonglong *)(piVar43 + 6) < 5) ||
                (piVar26 = (int *)thunk_FUN_1802d5870(piVar38,(int *)((longlong)piVar38 + 5),"Team "
                                                      ,5), piVar26 == (int *)((longlong)piVar38 + 5)
                )) || (piVar26 != piVar38)) {
              if (0xf < *(ulonglong *)(piVar43 + 8)) {
                piVar41 = *(int **)piVar41;
              }
              if (piVar41 != (int *)0x0) {
                FUN_180012ac0(local_2d8,0x60,&DAT_1803431ac,piVar41);
                piVar41 = local_3a8;
                goto LAB_1801cb615;
              }
              break;
            }
          }
        }
        piVar41 = local_3a8;
        FUN_180012ac0(local_2d8,0x60,"team %d",local_3a8[0x28]);
LAB_1801cb615:
        FUN_180012ac0(local_328,0x20,"team %d",piVar41[0x28]);
        piVar43 = local_3b8;
        if (local_390 == 0) {
LAB_1801cbb6a:
          local_558 = (longlong *)CONCAT44(local_558._4_4_,(int)local_558 + 1);
          if (*(char *)((longlong)piVar41 + 6) == '\0') {
            local_598 = "  (dead)";
            if (*(char *)((longlong)piVar41 + 5) != '\0') {
              local_598 = "";
            }
          }
          else {
            local_598 = "  [BOT]";
          }
          piVar38 = piVar43;
          if (0xf < *(ulonglong *)(piVar43 + 6)) {
            piVar38 = *(int **)piVar43;
          }
          FUN_180012ac0(local_198,0xa0,&DAT_18036f764,piVar38);
          uVar21 = FUN_180012ac0(local_278,0xdc,&DAT_1803431ac,local_2d8);
          plVar34 = (longlong *)(piVar41 + 0x20);
          if ((*(longlong *)(piVar41 + 0x24) != 0) && (uVar21 < 0xdc)) {
            if (0xf < *(ulonglong *)(piVar41 + 0x26)) {
              plVar34 = (longlong *)*plVar34;
            }
            iVar22 = FUN_180012ac0(local_278 + (int)uVar21,0xdc - (longlong)(int)uVar21,"  |  %s",
                                   plVar34);
            uVar21 = uVar21 + iVar22;
          }
          piVar38 = piVar43;
          if (0xf < *(ulonglong *)(piVar43 + 6)) {
            piVar38 = *(int **)piVar43;
          }
          sVar25 = local_570[2];
          uVar44 = local_570[3];
          plVar34 = local_570;
          if (0xf < uVar44) {
            plVar34 = (longlong *)*local_570;
          }
          if ((((sVar25 != *(size_t *)(piVar43 + 4)) ||
               ((sVar25 != 0 && (iVar22 = memcmp(plVar34,piVar38,sVar25), iVar22 != 0)))) &&
              (sVar25 != 0)) && (uVar21 < 0xdc)) {
            plVar34 = local_570;
            if (0xf < uVar44) {
              plVar34 = (longlong *)*local_570;
            }
            iVar22 = FUN_180012ac0(local_278 + (int)uVar21,0xdc - (longlong)(int)uVar21,"  |  %s",
                                   plVar34);
            uVar21 = uVar21 + iVar22;
          }
          if (uVar21 - 1 < 0xdb) {
            FUN_180012ac0(local_278 + (int)uVar21,0xdc - (longlong)(int)uVar21,"  |  %.0fm",
                          (double)((float)piVar41[0x29] / fVar55));
          }
          if ((local_540 == (int *)0x0) || (*local_540 != *piVar41)) {
            uVar35 = 0;
          }
          else {
            uVar35 = 1;
          }
          if ((char)piVar41[0x2a] == '\0') {
            if (*(char *)((longlong)piVar41 + 0xa9) != '\0') goto LAB_1801cbe15;
            if (*(char *)((longlong)piVar41 + 0xaa) != '\0') goto LAB_1801cbe0b;
            uVar46 = 0;
            local_348._4_4_ = uVar12;
            uStack_340 = uVar14;
            uStack_33c = uVar14;
            local_348._0_4_ = uVar4;
LAB_1801cbd3b:
            pplVar36 = (longlong **)&local_348;
          }
          else {
LAB_1801cbe0b:
            if (*(char *)((longlong)piVar41 + 0xa9) == '\0') {
              uVar46 = 1;
              local_348._4_4_ = uVar12;
              uStack_340 = uVar14;
              uStack_33c = uVar14;
              local_348._0_4_ = uVar4;
              if ((char)piVar41[0x2a] != '\0') {
                uVar44 = 0;
                iVar22 = (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249;
                if (0 < iVar22) {
                  do {
                    if (*(longlong *)(uVar44 * 0x38 + DAT_1803edce0) == *(longlong *)(piVar41 + 4))
                    {
                      puVar30 = (undefined4 *)((longlong)(int)uVar44 * 0x38 + 8 + DAT_1803edce0);
                      goto LAB_1801cbe7d;
                    }
                    uVar21 = (int)uVar44 + 1;
                    uVar44 = (ulonglong)uVar21;
                  } while ((int)uVar21 < iVar22);
                }
                puVar30 = &DAT_1803e89e8;
LAB_1801cbe7d:
                local_348._4_4_ = puVar30[1];
                uStack_340 = puVar30[2];
                uStack_33c = puVar30[3];
                local_348._0_4_ = *puVar30;
              }
              goto LAB_1801cbd3b;
            }
LAB_1801cbe15:
            local_530 = _DAT_1803e8a00;
            uStack_528 = uRam00000001803e8a08;
            pplVar36 = &local_530;
            uVar46 = 1;
          }
          FUN_18027ae00(*piVar41);
          local_4c8 = *pplVar36;
          plStack_4c0 = pplVar36[1];
          local_588 = CONCAT71(local_588._1_7_,1);
          local_590 = &local_4c8;
          local_598 = (char *)CONCAT71(local_598._1_7_,uVar46);
          cVar19 = FUN_1801c81a0(&DAT_18036f77c,local_198,local_278,uVar35);
          plVar34 = local_538;
          if (cVar19 != '\0') {
            DAT_1803fe9f0 = *(longlong *)(piVar41 + 4);
            DAT_180423a58 = *piVar41;
          }
          lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)((longlong)local_538 + lVar47) == '\0') {
            __dyn_tls_on_demand_init();
          }
          plVar31 = local_550;
          lVar47 = *(longlong *)(*(longlong *)((longlong)local_550 + lVar47) + 0x1520);
          iVar22 = *(int *)(lVar47 + 0x108);
          if (iVar22 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar47 + 0x108) = iVar22 + -1;
          }
        }
        else {
          puVar27 = (undefined8 *)FUN_18019a270(local_3d8);
          uVar21 = (uint)uVar49;
          local_578 = uVar21 | 1;
          uVar49 = (ulonglong)local_578;
          pppppuVar42 = local_3a0;
          if (0xf < local_388) {
            pppppuVar42 = (undefined8 *****)local_3a0[0];
          }
          puVar1 = puVar27 + 2;
          if (0xf < (ulonglong)puVar27[3]) {
            puVar27 = (undefined8 *)*puVar27;
          }
          if ((*puVar1 < local_390) ||
             ((local_390 != 0 &&
              ((lVar47 = *puVar1 + (longlong)puVar27,
               lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 == lVar47 ||
               (lVar28 - (longlong)puVar27 == -1)))))) {
            puVar27 = (undefined8 *)FUN_18019a270(local_3f8);
            local_578 = uVar21 | 3;
            uVar49 = (ulonglong)local_578;
            pppppuVar42 = local_3a0;
            if (0xf < local_388) {
              pppppuVar42 = (undefined8 *****)local_3a0[0];
            }
            puVar1 = puVar27 + 2;
            if (0xf < (ulonglong)puVar27[3]) {
              puVar27 = (undefined8 *)*puVar27;
            }
            if ((local_390 <= *puVar1) &&
               ((local_390 == 0 ||
                ((lVar47 = *puVar1 + (longlong)puVar27,
                 lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 != lVar47 &&
                 (lVar28 - (longlong)puVar27 != -1)))))) goto LAB_1801cba47;
            puVar27 = (undefined8 *)FUN_18019a270(local_418);
            local_578 = uVar21 | 7;
            uVar49 = (ulonglong)local_578;
            pppppuVar42 = local_3a0;
            if (0xf < local_388) {
              pppppuVar42 = (undefined8 *****)local_3a0[0];
            }
            puVar1 = puVar27 + 2;
            if (0xf < (ulonglong)puVar27[3]) {
              puVar27 = (undefined8 *)*puVar27;
            }
            if ((local_390 <= *puVar1) &&
               ((local_390 == 0 ||
                ((lVar47 = *puVar1 + (longlong)puVar27,
                 lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 != lVar47 &&
                 (lVar28 - (longlong)puVar27 != -1)))))) goto LAB_1801cba47;
            local_4b8 = 0;
            uStack_4b0 = 0;
            local_4a8 = 0;
            local_4a0 = 0;
            sVar25 = strlen(local_2d8);
            FUN_18001d080(&local_4b8,local_2d8,sVar25);
            local_578 = uVar21 | 0xf;
            puVar27 = (undefined8 *)FUN_18019a270(local_438);
            local_578 = uVar21 | 0x1f;
            uVar49 = (ulonglong)local_578;
            pppppuVar42 = local_3a0;
            if (0xf < local_388) {
              pppppuVar42 = (undefined8 *****)local_3a0[0];
            }
            puVar1 = puVar27 + 2;
            if (0xf < (ulonglong)puVar27[3]) {
              puVar27 = (undefined8 *)*puVar27;
            }
            if ((local_390 <= *puVar1) &&
               ((local_390 == 0 ||
                ((lVar47 = *puVar1 + (longlong)puVar27,
                 lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 != lVar47 &&
                 (lVar28 - (longlong)puVar27 != -1)))))) goto LAB_1801cba47;
            local_4e8 = (undefined8 *****)0x0;
            uStack_4e0 = 0;
            local_4d8 = 0;
            local_4d0 = 0;
            sVar25 = strlen(local_328);
            FUN_18001d080(&local_4e8,local_328,sVar25);
            local_578 = uVar21 | 0x3f;
            uVar49 = (ulonglong)local_578;
            pppppuVar42 = local_3a0;
            if (0xf < local_388) {
              pppppuVar42 = (undefined8 *****)local_3a0[0];
            }
            pppppuVar50 = &local_4e8;
            if (0xf < local_4d0) {
              pppppuVar50 = (undefined8 *****)local_4e8;
            }
            if ((local_390 <= local_4d8) &&
               ((local_390 == 0 ||
                ((lVar47 = local_4d8 + (longlong)pppppuVar50,
                 lVar28 = thunk_FUN_1802d6b60(pppppuVar50,lVar47,pppppuVar42), lVar28 != lVar47 &&
                 (lVar28 - (longlong)pppppuVar50 != -1)))))) goto LAB_1801cba47;
            puVar27 = (undefined8 *)FUN_18019a270(local_458);
            local_578 = uVar21 | 0x7f;
            uVar49 = (ulonglong)local_578;
            pppppuVar42 = local_3a0;
            if (0xf < local_388) {
              pppppuVar42 = (undefined8 *****)local_3a0[0];
            }
            puVar1 = puVar27 + 2;
            if (0xf < (ulonglong)puVar27[3]) {
              puVar27 = (undefined8 *)*puVar27;
            }
            if ((local_390 <= *puVar1) &&
               ((local_390 == 0 ||
                ((lVar47 = *puVar1 + (longlong)puVar27,
                 lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 != lVar47 &&
                 (lVar28 - (longlong)puVar27 != -1)))))) goto LAB_1801cba47;
            if (*(longlong *)(piVar41 + 4) != 0) {
              puVar27 = (undefined8 *)FUN_180013d70(local_478);
              local_578 = uVar21 | 0xff;
              uVar49 = (ulonglong)local_578;
              pppppuVar42 = local_3a0;
              if (0xf < local_388) {
                pppppuVar42 = (undefined8 *****)local_3a0[0];
              }
              puVar1 = puVar27 + 2;
              if (0xf < (ulonglong)puVar27[3]) {
                puVar27 = (undefined8 *)*puVar27;
              }
              if ((local_390 <= *puVar1) &&
                 ((local_390 == 0 ||
                  ((lVar47 = *puVar1 + (longlong)puVar27,
                   lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 != lVar47 &&
                   (lVar28 - (longlong)puVar27 != -1)))))) goto LAB_1801cba47;
            }
            if (piVar41[6] != 0) {
              puVar27 = (undefined8 *)FUN_180013cb0(local_498);
              local_578 = (uint)uVar49 | 0x100;
              uVar49 = (ulonglong)local_578;
              pppppuVar42 = local_3a0;
              if (0xf < local_388) {
                pppppuVar42 = (undefined8 *****)local_3a0[0];
              }
              puVar1 = puVar27 + 2;
              if (0xf < (ulonglong)puVar27[3]) {
                puVar27 = (undefined8 *)*puVar27;
              }
              if ((local_390 <= *puVar1) &&
                 ((local_390 == 0 ||
                  ((lVar47 = *puVar1 + (longlong)puVar27,
                   lVar28 = thunk_FUN_1802d6b60(puVar27,lVar47,pppppuVar42), lVar28 != lVar47 &&
                   (lVar28 - (longlong)puVar27 != -1)))))) goto LAB_1801cba47;
            }
            bVar53 = false;
          }
          else {
LAB_1801cba47:
            bVar53 = true;
          }
          if ((uint)uVar49 >> 8 != 0) {
            local_578 = (uint)uVar49 & 0xfffffeff;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_498);
          }
          if ((char)uVar49 < '\0') {
            local_578 = (uint)uVar49 & 0xffffff7f;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_478);
          }
          if ((uVar49 & 0x40) != 0) {
            local_578 = (uint)uVar49 & 0xffffffbf;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_458);
          }
          if ((uVar49 & 0x20) != 0) {
            local_578 = (uint)uVar49 & 0xffffffdf;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(&local_4e8);
          }
          if ((uVar49 & 0x10) != 0) {
            local_578 = (uint)uVar49 & 0xffffffef;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_438);
          }
          if ((uVar49 & 8) != 0) {
            local_578 = (uint)uVar49 & 0xfffffff7;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(&local_4b8);
          }
          if ((uVar49 & 4) != 0) {
            local_578 = (uint)uVar49 & 0xfffffffb;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_418);
          }
          if ((uVar49 & 2) != 0) {
            local_578 = (uint)uVar49 & 0xfffffffd;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_3f8);
          }
          if ((uVar49 & 1) != 0) {
            local_578 = (uint)uVar49 & 0xfffffffe;
            uVar49 = (ulonglong)local_578;
            FUN_18020e450(local_3d8);
          }
          plVar34 = local_538;
          plVar31 = local_550;
          if (bVar53) goto LAB_1801cbb6a;
        }
        uVar44 = (ulonglong)local_560 & 0xffffffff;
        piVar38 = local_568;
      }
      uVar21 = (uint)uVar49;
      piVar41 = piVar41 + 0x2c;
      piVar43 = piVar43 + 0x2c;
      local_570 = local_570 + 0x16;
      lVar47 = local_548;
      pcVar45 = local_3b0;
      local_3b8 = piVar43;
      local_3a8 = piVar41;
    } while (piVar41 != piVar38);
  }
  if (*(char *)((longlong)plVar34 + (longlong)pcVar45) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar28 = *(longlong *)((longlong)plVar31 + (longlong)pcVar45);
  lVar29 = (longlong)*(int *)(lVar28 + 0x1fe8);
  if (*(int *)(lVar28 + 0x1fe8) < 1) {
    FUN_18027e9c0("Calling PopFont() too many times!");
  }
  else {
    lVar52 = *(longlong *)(lVar28 + 0x1ff0);
    FUN_18027a5f0(*(undefined8 *)(lVar52 + -0x10 + lVar29 * 0x10),
                  *(undefined4 *)(lVar52 + -8 + lVar29 * 0x10),
                  *(undefined4 *)(lVar52 + -4 + lVar29 * 0x10));
    *(int *)(lVar28 + 0x1fe8) = *(int *)(lVar28 + 0x1fe8) + -1;
  }
  if (((int)local_560 == 0) || ((int)local_558 == 0)) {
    FUN_1802aabb0(&DAT_1803dca28 + lVar47);
  }
  FUN_180273410();
  FUN_18026a890(2);
  piVar43 = local_540;
  fVar55 = DAT_180380f40;
  fVar54 = (fVar56 - DAT_180380f40) * DAT_180380ac0;
  if ((local_540 == (int *)0x0) || (*(longlong *)(local_540 + 4) == 0)) {
    uVar35 = 1;
  }
  else {
    iVar22 = 0;
    if (0 < (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249) {
      do {
        if (*(longlong *)((longlong)iVar22 * 0x38 + DAT_1803edce0) == *(longlong *)(local_540 + 4))
        {
          if (-1 < iVar22) {
            FUN_180279170(0);
            puVar2 = &DAT_1803dca08;
            bVar53 = true;
            uVar35 = 0;
            goto LAB_1801cc05b;
          }
          break;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249);
    }
    uVar35 = 0;
  }
  FUN_180279170(uVar35);
  puVar2 = &DAT_1803dc9e8;
  bVar53 = false;
LAB_1801cc05b:
  plVar34 = (longlong *)(piVar43 + 4);
  puVar30 = (undefined4 *)(puVar2 + lVar47);
  local_3b8 = (int *)CONCAT44(0x41d00000,fVar54);
  local_348._0_4_ = *puVar30;
  local_348._4_4_ = puVar30[1];
  uStack_340 = puVar30[2];
  uStack_33c = puVar30[3];
  pcVar39 = "Add friend##pl";
  if (bVar53) {
    pcVar39 = "Remove friend##pl";
  }
  local_590 = (longlong **)CONCAT71(local_590._1_7_,1);
  local_598._0_1_ = 1;
  cVar19 = FUN_18019cb40(pcVar39,0xe,&local_3b8,&local_348);
  if (cVar19 != '\0') {
    if (bVar53) {
      FUN_180182ea0(*plVar34);
    }
    else {
      local_3b0 = (char *)0x93fd561a96ab0c67;
      plVar31 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
      local_3b8 = (int *)0x377571a4549d5240;
      plVar31 = (longlong *)FUN_180241a30(*plVar31 + 0x28,&local_530,&local_3b8);
      puVar32 = (undefined1 *)FUN_1801fcfc0(*plVar31 + 0x28);
      uVar46 = *puVar32;
      local_3b0 = (char *)0x93fd561a96ab0c67;
      plVar31 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
      local_3b8 = (int *)0x9fd9050fb35e0f88;
      plVar31 = (longlong *)FUN_180241a30(*plVar31 + 0x28,&local_530,&local_3b8);
      puVar32 = (undefined1 *)FUN_1801fcfc0(*plVar31 + 0x28);
      uVar6 = *puVar32;
      local_3b0 = (char *)0x93fd561a96ab0c67;
      plVar31 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
      local_3b8 = (int *)0xb384791d0b14dec1;
      plVar31 = (longlong *)FUN_180241a30(*plVar31 + 0x28,&local_530,&local_3b8);
      puVar32 = (undefined1 *)FUN_1801fcfc0(*plVar31 + 0x28);
      local_348._0_4_ = (undefined4)_DAT_1803e89e8;
      local_348._4_4_ = (undefined4)((ulonglong)_DAT_1803e89e8 >> 0x20);
      uStack_340 = (undefined4)_DAT_1803e89f0;
      uStack_33c = (undefined4)((ulonglong)_DAT_1803e89f0 >> 0x20);
      local_598._0_1_ = uVar46;
      FUN_180182d70(*plVar34,&local_348,*puVar32,uVar6);
      piVar43 = local_540;
    }
  }
  FUN_180279200();
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
  if ((piVar43 == (int *)0x0) || (*(char *)((longlong)piVar43 + 0xa9) == '\0')) {
    FUN_180279170(piVar43 == (int *)0x0);
    puVar2 = &DAT_1803dc9c8;
    cVar19 = '\0';
  }
  else {
    FUN_180279170(0);
    puVar2 = &DAT_1803dca08;
    cVar19 = '\x01';
  }
  puVar27 = (undefined8 *)(&DAT_1803dc9c8 + lVar47);
  local_3b8 = (int *)CONCAT44(0x41d00000,fVar54);
  uVar10 = *(undefined8 *)(puVar2 + lVar47);
  uVar11 = *(undefined8 *)((longlong)(puVar2 + lVar47) + 8);
  local_348._0_4_ = (undefined4)uVar10;
  local_348._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_340 = (undefined4)uVar11;
  uStack_33c = (undefined4)((ulonglong)uVar11 >> 0x20);
  pcVar39 = "Focus##pl";
  if (cVar19 != '\0') {
    pcVar39 = "Unfocus##pl";
  }
  local_590._0_1_ = 1;
  local_598._0_1_ = cVar19;
  cVar20 = FUN_18019cb40(pcVar39,1,&local_3b8,&local_348);
  if (cVar20 != '\0') {
    if (cVar19 == '\0') {
      DAT_18040a3f0 = *plVar34;
      if (DAT_18040a3f0 != 0) {
        DAT_18040a3f8 = 0;
        goto LAB_1801cc348;
      }
      DAT_18040a3f8 = *piVar43;
    }
    else {
      DAT_18040a3f8 = 0;
    }
    DAT_18040a3f0 = 0;
  }
LAB_1801cc348:
  FUN_180279200();
  fVar54 = (fVar56 - DAT_180380fd8) / DAT_180380e28;
  FUN_180279170(uVar35);
  local_3b8 = (int *)CONCAT44(0x41d00000,fVar54);
  local_348._0_4_ = (undefined4)*puVar27;
  local_348._4_4_ = (undefined4)((ulonglong)*puVar27 >> 0x20);
  uStack_340 = (undefined4)*(undefined8 *)(&DAT_1803dc9d0 + lVar47);
  uStack_33c = (undefined4)((ulonglong)*(undefined8 *)(&DAT_1803dc9d0 + lVar47) >> 0x20);
  local_590 = (longlong **)CONCAT71(local_590._1_7_,1);
  local_598 = (char *)CONCAT71(local_598._1_7_,1);
  cVar19 = FUN_18019cb40("ID##pl",7,&local_3b8,&local_348);
  plVar31 = local_538;
  if (cVar19 != '\0') {
    plVar48 = (longlong *)(piVar43 + 8);
    if (0xf < *(ulonglong *)(piVar43 + 0xe)) {
      plVar48 = (longlong *)*plVar48;
    }
    if (*(char *)((longlong)local_538 + (longlong)pcVar45) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pcVar8 = *(code **)(*(longlong *)((longlong)local_550 + (longlong)pcVar45) + 0xc08);
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(*(longlong *)((longlong)local_550 + (longlong)pcVar45),plVar48);
    }
  }
  FUN_180279200();
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
  FUN_180279170(uVar35);
  local_3b8 = (int *)CONCAT44(0x41d00000,fVar54);
  local_348._0_4_ = (undefined4)*puVar27;
  local_348._4_4_ = (undefined4)((ulonglong)*puVar27 >> 0x20);
  uStack_340 = (undefined4)*(undefined8 *)(&DAT_1803dc9d0 + lVar47);
  uStack_33c = (undefined4)((ulonglong)*(undefined8 *)(&DAT_1803dc9d0 + lVar47) >> 0x20);
  local_590 = (longlong **)CONCAT71(local_590._1_7_,1);
  local_598 = (char *)CONCAT71(local_598._1_7_,1);
  cVar19 = FUN_18019cb40("ID64##pl",7,&local_3b8,&local_348);
  if (cVar19 != '\0') {
    puVar33 = (undefined8 *)FUN_180013d70(&local_520,*plVar34);
    if (0xf < (ulonglong)puVar33[3]) {
      puVar33 = (undefined8 *)*puVar33;
    }
    if (*(char *)((longlong)plVar31 + (longlong)pcVar45) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pcVar8 = *(code **)(*(longlong *)((longlong)local_550 + (longlong)pcVar45) + 0xc08);
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(*(longlong *)((longlong)local_550 + (longlong)pcVar45),puVar33);
    }
    FUN_18020e450(&local_520);
  }
  FUN_180279200();
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
  FUN_180279170(uVar35);
  local_3b8 = (int *)CONCAT44(0x41d00000,fVar54);
  local_348._0_4_ = (undefined4)*puVar27;
  local_348._4_4_ = (undefined4)((ulonglong)*puVar27 >> 0x20);
  uStack_340 = (undefined4)*(undefined8 *)(&DAT_1803dc9d0 + lVar47);
  uStack_33c = (undefined4)((ulonglong)*(undefined8 *)(&DAT_1803dc9d0 + lVar47) >> 0x20);
  local_590 = (longlong **)CONCAT71(local_590._1_7_,1);
  local_598 = (char *)CONCAT71(local_598._1_7_,1);
  cVar19 = FUN_18019cb40("Steam##pl",0xd,&local_3b8,&local_348);
  if (cVar19 != '\0') {
    FUN_180183380(*plVar34);
  }
  FUN_180279200();
  lVar47 = local_548;
  FUN_1802aabb0(&DAT_1803dca28 + local_548,"Aim friend");
  FUN_18027f5b0();
  cVar19 = FUN_18019dc00("##pl_friend_opts",4,0);
  if (cVar19 != '\0') {
    FUN_180280fd0("pl_friend_opts");
  }
  cVar19 = FUN_18026ee60(0);
  if (cVar19 != '\0') {
    FUN_180280d00("Friend add options");
  }
  FUN_18027f5b0();
  fVar54 = DAT_1803810e0;
  if (DAT_1803810e0 <= fVar56 - _DAT_180381134) {
    fVar54 = fVar56 - _DAT_180381134;
  }
  local_3b8 = (int *)(ulonglong)(uint)fVar54;
  local_3b0 = (char *)0x93fd561a96ab0c67;
  plVar34 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
  local_3a8 = (int *)0x42e98a6fcf3a4937;
  plVar34 = (longlong *)FUN_180241a30(*plVar34 + 0x28,&local_530,&local_3a8);
  uVar35 = FUN_1802029c0(*plVar34 + 0x28);
  FUN_1802d31a0("##pl_friendbind",uVar35,&local_3b8,0);
  cVar19 = FUN_18026ee60(0);
  if (cVar19 != '\0') {
    FUN_180280d00(
                 "In-game: aim at a player and press this key to add/remove\nthem as a manual friend. Bots are ignored. Works with the menu closed.\nYou can assign the same key as Entity List aim-add."
                 );
  }
  cVar19 = FUN_18019a680("pl_friend_opts");
  fVar56 = DAT_180380fcc;
  if (cVar19 != '\0') {
    FUN_1802aac00("When adding a manual friend");
    local_3b0 = (char *)0x93fd561a96ab0c67;
    plVar34 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
    local_3b8 = (int *)0xb384791d0b14dec1;
    plVar34 = (longlong *)FUN_180241a30(*plVar34 + 0x28,&local_530,&local_3b8);
    uVar35 = FUN_1801fcfc0(*plVar34 + 0x28);
    FUN_1801a0b60("Ignore in aimbot",uVar35);
    cVar19 = FUN_18026ee60(0);
    if (cVar19 != '\0') {
      FUN_180280d00(
                   "Applies to the Add friend button and the aim bind.\nExisting friends keep their current personal setting."
                   );
    }
    local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
    local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
    pfVar40 = (float *)&local_570;
    if (fVar13 <= DAT_1803da6a4) {
      pfVar40 = &DAT_1803da6a4;
    }
    pfVar37 = (float *)&local_568;
    if (DAT_1803da6a4 <= fVar15) {
      pfVar37 = pfVar40;
    }
    FUN_18027f5b0(pfVar40,*pfVar37 * fVar56);
    FUN_1802bac60("##pl_addclr",&DAT_1803e89e8,0x400a0);
    cVar19 = FUN_18026ee60(0);
    if (cVar19 != '\0') {
      FUN_180280d00("Box color stamped on the new friend.");
    }
    local_3b0 = (char *)0x93fd561a96ab0c67;
    plVar34 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
    local_3b8 = (int *)0x9fd9050fb35e0f88;
    plVar34 = (longlong *)FUN_180241a30(*plVar34 + 0x28,&local_530,&local_3b8);
    uVar35 = FUN_1801fcfc0(*plVar34 + 0x28);
    FUN_1801a0b60("Highlight box",uVar35);
    cVar19 = FUN_18026ee60(0);
    if (cVar19 != '\0') {
      FUN_180280d00(
                   "Recolors their ESP box with the color above.\nOff means the color is stored but never drawn."
                   );
    }
    local_3b0 = (char *)0x93fd561a96ab0c67;
    plVar34 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_348,&local_3b0);
    local_3b8 = (int *)0x377571a4549d5240;
    plVar34 = (longlong *)FUN_180241a30(*plVar34 + 0x28,&local_530,&local_3b8);
    uVar35 = FUN_1801fcfc0(*plVar34 + 0x28);
    FUN_1801a0b60("Ignore in visuals",uVar35);
    cVar19 = FUN_18026ee60(0);
    if (cVar19 != '\0') {
      FUN_180280d00(
                   "New friends start hidden from every visual\n(ESP, chams, radar, lookbeam). Existing friends\nkeep their current personal setting."
                   );
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  FUN_18027fda0();
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  FUN_18027f5b0(pfVar40,*pfVar37 * fVar56);
  FUN_18027fc30();
  piVar43 = local_540;
  if (local_540 == (int *)0x0) {
    FUN_1802aabb0(&DAT_1803dca28 + lVar47,"No player selected.");
    uVar44 = (ulonglong)_tls_index;
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
    if (*(char *)((longlong)plVar31 + lVar28) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar28 = *(longlong *)(lVar28 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar28 + 0x1520) + 0xce) = 1;
    if (*(char *)(*(longlong *)(lVar28 + 0x1520) + 0xd1) == '\0') {
      local_3b8 = (int *)0x0;
      FUN_18027f400(&local_3b8,uVar5);
    }
    pcVar45 = "Search matches nick, RP name and SteamID.";
LAB_1801ccde2:
    FUN_1802aabb0(&DAT_1803dca28 + lVar47,pcVar45);
  }
  else {
    cVar19 = *(char *)((longlong)plVar31 + (longlong)pcVar45);
    if (cVar19 == '\0') {
      __dyn_tls_on_demand_init();
      cVar19 = *(char *)((longlong)plVar31 + (longlong)pcVar45);
    }
    plVar34 = local_550;
    if (*(int *)(*(longlong *)(*(longlong *)((longlong)local_550 + (longlong)pcVar45) + 0x60) + 0x68
                ) == 0) {
      lVar28 = 0;
    }
    else {
      if (cVar19 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar28 = **(longlong **)
                 (*(longlong *)(*(longlong *)((longlong)plVar34 + (longlong)pcVar45) + 0x60) + 0x70)
      ;
      if (lVar28 != 0) {
        FUN_18027a8a0(lVar28,*(undefined4 *)(lVar28 + 0x1c));
      }
    }
    plVar34 = (longlong *)(piVar43 + 0x10);
    plVar31 = plVar34;
    if (0xf < *(ulonglong *)(piVar43 + 0x16)) {
      plVar31 = (longlong *)*plVar34;
    }
    FUN_1802aabb0(puVar27,&DAT_1803431ac,plVar31);
    if (lVar28 != 0) {
      if (*(char *)((longlong)local_538 + (longlong)pcVar45) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar28 = *(longlong *)((longlong)local_550 + (longlong)pcVar45);
      lVar29 = (longlong)*(int *)(lVar28 + 0x1fe8);
      if (*(int *)(lVar28 + 0x1fe8) < 1) {
        FUN_18027e9c0("Calling PopFont() too many times!");
      }
      else {
        lVar52 = *(longlong *)(lVar28 + 0x1ff0);
        FUN_18027a5f0(*(undefined8 *)(lVar52 + -0x10 + lVar29 * 0x10),
                      *(undefined4 *)(lVar52 + -8 + lVar29 * 0x10),
                      *(undefined4 *)(lVar52 + -4 + lVar29 * 0x10));
        *(int *)(lVar28 + 0x1fe8) = *(int *)(lVar28 + 0x1fe8) + -1;
      }
    }
    if (*(longlong *)(piVar43 + 0x1c) == 0) {
LAB_1801ccb85:
      uVar44 = (ulonglong)_tls_index;
    }
    else {
      piVar41 = piVar43 + 0x18;
      if (0xf < *(ulonglong *)(piVar43 + 0x16)) {
        plVar34 = (longlong *)*plVar34;
      }
      sVar25 = *(size_t *)(piVar43 + 0x1c);
      if (0xf < *(ulonglong *)(piVar43 + 0x1e)) {
        piVar41 = *(int **)piVar41;
      }
      if ((sVar25 == *(size_t *)(piVar43 + 0x14)) &&
         ((sVar25 == 0 || (iVar22 = memcmp(piVar41,plVar34,sVar25), iVar22 == 0))))
      goto LAB_1801ccb85;
      uVar44 = (ulonglong)_tls_index;
      lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
      if (*(char *)(lVar28 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar28 + 0xec0) + 0x60) + 0x68) == 0) {
        lVar28 = 0;
      }
      else {
        if (*(char *)(lVar28 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar28 = **(longlong **)(*(longlong *)(*(longlong *)(lVar28 + 0xec0) + 0x60) + 0x70);
        if (lVar28 != 0) {
          FUN_18027a8a0(lVar28,*(undefined4 *)(lVar28 + 0x1c));
        }
      }
      plVar34 = (longlong *)(piVar43 + 0x18);
      if (0xf < *(ulonglong *)(piVar43 + 0x1e)) {
        plVar34 = (longlong *)*plVar34;
      }
      FUN_1802aabb0(&DAT_1803dca28 + lVar47,"RP: %s",plVar34);
      if (lVar28 != 0) {
        lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
        if (*(char *)(lVar28 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar28 = *(longlong *)(lVar28 + 0xec0);
        lVar29 = (longlong)*(int *)(lVar28 + 0x1fe8);
        if (*(int *)(lVar28 + 0x1fe8) < 1) {
          FUN_18027e9c0("Calling PopFont() too many times!");
        }
        else {
          lVar52 = *(longlong *)(lVar28 + 0x1ff0);
          FUN_18027a5f0(*(undefined8 *)(lVar52 + -0x10 + lVar29 * 0x10),
                        *(undefined4 *)(lVar52 + -8 + lVar29 * 0x10),
                        *(undefined4 *)(lVar52 + -4 + lVar29 * 0x10));
          *(int *)(lVar28 + 0x1fe8) = *(int *)(lVar28 + 0x1fe8) + -1;
        }
      }
    }
    plVar34 = (longlong *)(piVar43 + 8);
    if (0xf < *(ulonglong *)(piVar43 + 0xe)) {
      plVar34 = (longlong *)*plVar34;
    }
    FUN_1802aabb0(&DAT_1803dca28 + lVar47,&DAT_1803431ac,plVar34);
    if (*(char *)((longlong)piVar43 + 0xaa) != '\0') {
      local_348._0_4_ = (undefined4)_DAT_180381740;
      local_348._4_4_ = (undefined4)((ulonglong)_DAT_180381740 >> 0x20);
      uStack_340 = (undefined4)_UNK_180381748;
      uStack_33c = (undefined4)((ulonglong)_UNK_180381748 >> 0x20);
      FUN_1802aabb0(&local_348,"Steam friend");
    }
    FUN_1802afb40();
    lVar28 = FUN_180182f40(*(longlong *)(piVar43 + 4),*piVar43,*(longlong *)(piVar43 + 4) == 0);
    if (lVar28 == 0) {
      pcVar45 = "Add to friends to edit the profile\n(color / highlight / tracer / ignore).";
      goto LAB_1801ccde2;
    }
    FUN_1802bac60("Box color##pl",lVar28 + 8,0x40020);
    FUN_1801a0b60("Highlight box (recolor ESP)",lVar28 + 0x18);
    FUN_1802bac60("Text color##pl",lVar28 + 0x1c,0x40020);
    FUN_1801a0b60("Recolor ESP text",lVar28 + 0x19);
    cVar19 = FUN_18026ee60(0);
    if (cVar19 != '\0') {
      FUN_180280d00(
                   "Paints this player\'s ESP text with the text color.\nThe gear picks which text elements; default is all of them.\nIndependent of the box color above."
                   );
    }
    local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
    local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
    pfVar40 = (float *)&local_570;
    if (fVar13 <= DAT_1803da6a4) {
      pfVar40 = &DAT_1803da6a4;
    }
    pfVar37 = (float *)&local_568;
    if (DAT_1803da6a4 <= fVar15) {
      pfVar37 = pfVar40;
    }
    FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
    FUN_1801cad50("pl_txt",lVar28 + 0x2c,lVar28 + 0x30,0x201);
    FUN_1801a0b60("Tracer line to them",lVar28 + 0x34);
    FUN_1801a0b60("Ignore in aimbot",lVar28 + 0x35);
    FUN_1801a0b60("Ignore in visuals",lVar28 + 0x36);
    cVar19 = FUN_18026ee60(0);
    if (cVar19 != '\0') {
      FUN_180280d00(
                   "Hide this player from every visual: ESP box/texts/bars,\nskeleton, chams, radar, lookbeam and the friend overlay."
                   );
    }
    if (*(longlong *)(piVar43 + 4) == 0) {
      pcVar45 = "Bot - settings for this session only.";
      goto LAB_1801ccde2;
    }
  }
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
  local_3b8 = (int *)((ulonglong)local_3b8 & 0xffffffff00000000);
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  local_3b8 = (int *)((ulonglong)(uint)(*pfVar37 * fVar55) << 0x20);
  FUN_1802af260(&local_3b8);
  FUN_1802afb40();
  FUN_1801a0b60("Auto-add Steam friends",&DAT_18040a3d4);
  cVar19 = FUN_18026ee60(0);
  if (cVar19 != '\0') {
    FUN_180280d00(
                 "Highlights your real Steam friends live.\nNOT saved to config (always re-checked)."
                 );
  }
  local_348._0_4_ = (undefined4)_DAT_1803e89e8;
  local_348._4_4_ = (undefined4)((ulonglong)_DAT_1803e89e8 >> 0x20);
  uStack_340 = (undefined4)_DAT_1803e89f0;
  uStack_33c = (undefined4)((ulonglong)_DAT_1803e89f0 >> 0x20);
  local_568._0_4_ = 1.5;
  local_570._0_4_ = 0.75;
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  fVar54 = *pfVar37 * DAT_180381138;
  lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
  if (*(char *)(lVar28 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar29 = *(longlong *)(lVar28 + 0xec0);
  puVar3 = (uint *)(lVar29 + 0x1ec0);
  *puVar3 = *puVar3 | 1;
  *(float *)(lVar29 + 0x1ed8) = fVar54;
  cVar19 = FUN_1802bac60("New friend color",&local_348,0x40020);
  if (cVar19 != '\0') {
    _DAT_1803e89e8 = CONCAT44(local_348._4_4_,(undefined4)local_348);
    _DAT_1803e89f0 = CONCAT44(uStack_33c,uStack_340);
  }
  local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
  local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
  pfVar40 = (float *)&local_570;
  if (fVar13 <= DAT_1803da6a4) {
    pfVar40 = &DAT_1803da6a4;
  }
  pfVar37 = (float *)&local_568;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar37 = pfVar40;
  }
  local_3b8 = (int *)CONCAT44(0x41c00000,*pfVar37 * _DAT_180381170);
  local_348._0_4_ = (undefined4)*(undefined8 *)(&DAT_1803dc9c8 + lVar47);
  local_348._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(&DAT_1803dc9c8 + lVar47) >> 0x20);
  uStack_340 = (undefined4)*(undefined8 *)(&DAT_1803dc9d0 + lVar47);
  uStack_33c = (undefined4)((ulonglong)*(undefined8 *)(&DAT_1803dc9d0 + lVar47) >> 0x20);
  local_590 = (longlong **)CONCAT71(local_590._1_7_,1);
  local_598 = (char *)CONCAT71(local_598._1_7_,1);
  cVar19 = FUN_18019cb40("Saved friends##pl",6,&local_3b8,&local_348);
  if (cVar19 != '\0') {
    FUN_180280fd0("friends_list_popup");
  }
  fVar54 = DAT_180380fa8;
  if ((DAT_18040a3f0 != 0) || (DAT_18040a3f8 != 0)) {
    local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
    local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
    pfVar40 = (float *)&local_570;
    if (fVar13 <= DAT_1803da6a4) {
      pfVar40 = &DAT_1803da6a4;
    }
    pfVar37 = (float *)&local_568;
    if (DAT_1803da6a4 <= fVar15) {
      pfVar37 = pfVar40;
    }
    FUN_18027f5b0(pfVar40,*pfVar37 * DAT_180380fa8);
    if (*(char *)(lVar28 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar28 = *(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8) + 0xec0);
    uVar4 = *(undefined4 *)(lVar28 + 0xcc8);
    *(undefined4 *)(lVar28 + 0xcc8) = 0;
    local_3b8 = (int *)0x0;
    cVar19 = FUN_1802abf60("Clear focus",&local_3b8,0x8000);
    *(undefined4 *)(lVar28 + 0xcc8) = uVar4;
    if (cVar19 != '\0') {
      DAT_18040a3f0 = 0;
      DAT_18040a3f8 = 0;
    }
  }
  lVar28 = 0;
  cVar19 = FUN_18019a680("friends_list_popup");
  if (cVar19 != '\0') {
    FUN_1802aaae0("Saved friends (%d)",(DAT_1803edce8 - DAT_1803edce0 >> 3) * 0x6db6db6db6db6db7);
    FUN_1802aabb0(&DAT_1803dca28 + lVar47,"Saved by SteamID; written to config when you Save.");
    FUN_1802afb40();
    if (DAT_1803edce0 == DAT_1803edce8) {
      FUN_1802aabb0(&DAT_1803dca28 + lVar47,"No friends yet. Use \'Add friend\' on a player.");
    }
    local_3b8 = (int *)CONCAT44(DAT_1803da6a4 * _DAT_1803811ac,DAT_1803da6a4 * DAT_18038120c);
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
    if (*(char *)(lVar47 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(lVar47 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar29 + 0x1520) + 0xce) = 1;
    plVar34 = *(longlong **)(lVar29 + 0x1520);
    iVar22 = FUN_180268980("##fl_scroll",0,
                           *(undefined4 *)(plVar34[0x22] + -4 + (longlong)(int)plVar34[0x21] * 4));
    if (*(int *)(*plVar34 + 0x1578) == iVar22) {
      FUN_1802899e0(iVar22,0xb,"##fl_scroll");
    }
    local_598 = (char *)((ulonglong)local_598 & 0xffffffff00000000);
    FUN_180273060("##fl_scroll",iVar22,&local_3b8,0);
    fVar17 = DAT_1803810c8;
    fVar16 = DAT_180380e9c;
    plVar34 = (longlong *)CONCAT44(local_348._4_4_,(undefined4)local_348);
    iVar22 = 0;
    if (0 < (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249) {
      plVar34 = (longlong *)(lVar47 + 0xec0);
      local_3b0 = (char *)(lVar47 + 0x10);
      local_538 = (longlong *)(lVar47 + 0xec0);
      local_540 = (int *)(lVar47 + 0x10);
      local_550 = (longlong *)(lVar47 + 0xec0);
      local_558 = (longlong *)(lVar47 + 0x10);
      local_560 = (longlong *)(lVar47 + 0xec0);
      local_4c8 = (longlong *)(lVar47 + 0x10);
      local_530 = (longlong *)(lVar47 + 0xec0);
      do {
        lVar29 = DAT_1803edce0;
        lVar52 = (longlong)iVar22 * 0x38;
        local_348 = plVar34;
        FUN_18027ae00(iVar22);
        FUN_1802bac60("##flc",lVar29 + 8 + lVar52,0x400a0);
        local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
        local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
        pfVar40 = (float *)&local_570;
        if (fVar13 <= DAT_1803da6a4) {
          pfVar40 = &DAT_1803da6a4;
        }
        pfVar37 = (float *)&local_568;
        if (DAT_1803da6a4 <= fVar15) {
          pfVar37 = pfVar40;
        }
        FUN_18027f5b0(pfVar40,*pfVar37 * fVar54);
        uVar51 = (uint)*(ulonglong *)(lVar52 + lVar29);
        if (*(ulonglong *)(lVar52 + lVar29) < 0x110000100000000) {
          uVar51 = 0;
        }
        FUN_180207af0(local_308,"STEAM_0:%u:%u",uVar51 & 1,uVar51 >> 1);
        local_520 = (undefined8 *****)0x0;
        uStack_518 = 0;
        local_510 = 0;
        local_508 = 0;
        sVar25 = strlen(local_308);
        FUN_18001d080(&local_520,local_308,sVar25);
        local_578 = uVar21 | 0x200;
        pppppuVar42 = &local_520;
        if (0xf < local_508) {
          pppppuVar42 = (undefined8 *****)local_520;
        }
        FUN_1802aa3c0(pppppuVar42,0,1);
        local_578 = uVar21;
        FUN_18020e450(&local_520);
        cVar19 = FUN_18026ee60(0);
        if (cVar19 != '\0') {
          FUN_180280d00("SteamID64: %llu",*(undefined8 *)(lVar52 + lVar29));
        }
        local_568._0_4_ = 1.5;
        local_570._0_4_ = 0.75;
        pfVar40 = (float *)&local_570;
        if (fVar13 <= DAT_1803da6a4) {
          pfVar40 = &DAT_1803da6a4;
        }
        pfVar37 = (float *)&local_568;
        if (DAT_1803da6a4 <= fVar15) {
          pfVar37 = pfVar40;
        }
        FUN_18027f5b0(pfVar40,*pfVar37 * fVar56);
        if (*(char *)(lVar52 + 0x35 + lVar29) != '\0') {
          FUN_1802aabb0(&DAT_1803dc9e8 + local_548,"ign-aim");
          local_568._0_4_ = 1.5;
          local_570._0_4_ = 0.75;
          pfVar40 = (float *)&local_570;
          if (fVar13 <= DAT_1803da6a4) {
            pfVar40 = &DAT_1803da6a4;
          }
          pfVar37 = (float *)&local_568;
          if (DAT_1803da6a4 <= fVar15) {
            pfVar37 = pfVar40;
          }
          FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
        }
        if (*(char *)(lVar52 + 0x36 + lVar29) != '\0') {
          FUN_1802aabb0(&DAT_1803dca28 + local_548,"ign-vis");
          local_568._0_4_ = 1.5;
          local_570._0_4_ = 0.75;
          pfVar40 = (float *)&local_570;
          if (fVar13 <= DAT_1803da6a4) {
            pfVar40 = &DAT_1803da6a4;
          }
          pfVar37 = (float *)&local_568;
          if (DAT_1803da6a4 <= fVar15) {
            pfVar37 = pfVar40;
          }
          FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
        }
        if (*(char *)(lVar52 + 0x34 + lVar29) != '\0') {
          FUN_1802aabb0(&DAT_1803dc9c8 + local_548,"tracer");
          local_568._0_4_ = 1.5;
          local_570._0_4_ = 0.75;
          pfVar40 = (float *)&local_570;
          if (fVar13 <= DAT_1803da6a4) {
            pfVar40 = &DAT_1803da6a4;
          }
          pfVar37 = (float *)&local_568;
          if (DAT_1803da6a4 <= fVar15) {
            pfVar37 = pfVar40;
          }
          FUN_18027f5b0(pfVar40,*pfVar37 * fVar55);
        }
        if (*(char *)(lVar47 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        FUN_18027f5b0((*(float *)(*(longlong *)(*plVar34 + 0x1520) + 0x280) -
                      *(float *)(*(longlong *)(*plVar34 + 0x1520) + 0x28)) - fVar17,uVar5);
        if (*local_3b0 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = *local_538;
        uVar4 = *(undefined4 *)(lVar9 + 0xcc8);
        *(undefined4 *)(lVar9 + 0xcc8) = 0;
        local_3b8 = (int *)0x0;
        cVar19 = FUN_1802abf60("Steam",&local_3b8,0x8000);
        *(undefined4 *)(lVar9 + 0xcc8) = uVar4;
        if (cVar19 != '\0') {
          FUN_180183380(*(undefined8 *)(lVar52 + lVar29));
        }
        local_568 = (int *)CONCAT44(local_568._4_4_,0x3fc00000);
        local_570 = (longlong *)CONCAT44(local_570._4_4_,0x3f400000);
        pfVar40 = (float *)&local_570;
        if (fVar13 <= DAT_1803da6a4) {
          pfVar40 = &DAT_1803da6a4;
        }
        pfVar37 = (float *)&local_568;
        if (DAT_1803da6a4 <= fVar15) {
          pfVar37 = pfVar40;
        }
        FUN_18027f5b0(pfVar40,*pfVar37 * fVar16);
        if ((char)*local_540 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = *local_550;
        local_500 = 0x16;
        local_4fc = *(undefined8 *)(lVar9 + 0xf10);
        uStack_4f4 = *(undefined8 *)(lVar9 + 0xf18);
        FUN_18028a220(lVar9 + 0x1fc8,&local_500);
        if (*(int *)(lVar9 + 0x1fc4) != 0x16) {
          uVar35 = *(undefined8 *)(&DAT_1803dca10 + local_548);
          *(undefined8 *)(lVar9 + 0xf10) = *(undefined8 *)(&DAT_1803dca08 + local_548);
          *(undefined8 *)(lVar9 + 0xf18) = uVar35;
        }
        if ((char)*local_558 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = *local_560;
        uVar4 = *(undefined4 *)(lVar9 + 0xcc8);
        *(undefined4 *)(lVar9 + 0xcc8) = 0;
        local_3a8 = (int *)0x0;
        cVar19 = FUN_1802abf60(&DAT_18036ff40,&local_3a8,0x8000);
        *(undefined4 *)(lVar9 + 0xcc8) = uVar4;
        if (cVar19 != '\0') {
          lVar28 = *(longlong *)(lVar52 + lVar29);
        }
        FUN_18026a890(1);
        if ((char)*local_4c8 == '\0') {
          __dyn_tls_on_demand_init();
        }
        iVar7 = *(int *)(*(longlong *)(*local_530 + 0x1520) + 0x108);
        if (iVar7 < 2) {
          FUN_18027e9c0("Calling PopID() too many times!");
          plVar34 = local_348;
        }
        else {
          *(int *)(*(longlong *)(*local_530 + 0x1520) + 0x108) = iVar7 + -1;
          plVar34 = local_348;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249);
      uVar44 = (ulonglong)_tls_index;
    }
    local_348 = plVar34;
    FUN_180273410();
    if (lVar28 != 0) {
      FUN_180182ea0(lVar28);
    }
    if (DAT_1803edce0 != DAT_1803edce8) {
      FUN_1802afb40();
      lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar44 * 8);
      if (*(char *)(lVar47 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar28 = *(longlong *)(lVar47 + 0xec0);
      local_500 = 0x16;
      local_4fc = *(undefined8 *)(lVar28 + 0xf10);
      uStack_4f4 = *(undefined8 *)(lVar28 + 0xf18);
      FUN_18028a220(lVar28 + 0x1fc8,&local_500);
      if (*(int *)(lVar28 + 0x1fc4) != 0x16) {
        uVar35 = *(undefined8 *)(&DAT_1803dca10 + local_548);
        *(undefined8 *)(lVar28 + 0xf10) = *(undefined8 *)(&DAT_1803dca08 + local_548);
        *(undefined8 *)(lVar28 + 0xf18) = uVar35;
      }
      if (*(char *)(lVar47 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar47 = *(longlong *)(lVar47 + 0xec0);
      uVar5 = *(undefined4 *)(lVar47 + 0xcc8);
      *(undefined4 *)(lVar47 + 0xcc8) = 0;
      local_3b8 = (int *)0x0;
      cVar19 = FUN_1802abf60("Clear all friends",&local_3b8,0x8000);
      *(undefined4 *)(lVar47 + 0xcc8) = uVar5;
      if ((cVar19 != '\0') && (DAT_1803edce0 != DAT_1803edce8)) {
        DAT_1803edce8 = DAT_1803edce0;
      }
      FUN_18026a890(1);
    }
    if (DAT_1803facfd == '\0') {
      FUN_180281800();
    }
    else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
      DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
    }
  }
  FUN_18027fda0();
  FUN_18020baa0(&local_368);
  FUN_18020e450(local_3a0);
  puVar32 = auStack_5b8;
  if (local_380 != (int *)0x0) {
    FUN_18022a210(local_380,piStack_378);
    piVar43 = local_380;
    puVar32 = auStack_5b8;
    if ((0xfff < (ulonglong)((local_370 - (longlong)local_380 >> 4) * 0x10)) &&
       (piVar43 = *(int **)(local_380 + -2), puVar32 = auStack_5b8,
       (char *)0x1f < (char *)((longlong)local_380 + (-8 - (longlong)piVar43)))) {
      piVar43 = (int *)0x5;
      pcVar8 = (code *)swi(0x29);
      (*pcVar8)();
      puVar32 = auStack_5b0;
    }
    *(undefined8 *)(puVar32 + -8) = 0x1801cd941;
    free(piVar43);
    local_380 = (int *)0x0;
    piStack_378 = (int *)0x0;
    local_370 = 0;
  }
LAB_1801cd957:
  *(undefined8 *)(puVar32 + -8) = 0x1801cd95c;
  FUN_180273410();
  *(undefined8 *)(puVar32 + -8) = 0x1801cd966;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar32 + -8) = 0x1801cd970;
  FUN_18026a890(2);
  *(undefined8 *)(puVar32 + -8) = 0x1801cd97f;
  return;
}


