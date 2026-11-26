// 0x180076b50  FUN_180076b50
// size=3172 thunk=false
// signature: undefined FUN_180076b50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180076b50(void)

{
  code *pcVar1;
  size_t _Size;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  size_t sVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *_Dst;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  void *pvVar23;
  undefined4 uVar24;
  undefined8 uStack_190;
  undefined1 auStack_188 [48];
  longlong *local_158;
  undefined8 local_150;
  undefined1 local_148 [24];
  char local_130 [8];
  longlong *local_128;
  char *local_120;
  longlong *local_110;
  undefined1 local_108 [24];
  char local_f0 [8];
  longlong *local_e8;
  int local_e0;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  size_t local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined8 **ppuStack_70;
  ulonglong local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  puVar22 = auStack_188;
  puVar21 = auStack_188;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar6 = (*pcVar1)(DAT_1803fa360,uVar3);
  if ((lVar6 == 0) ||
     (plVar7 = (longlong *)FUN_18001dbf0(lVar6), local_158 = plVar7, plVar7 == (longlong *)0x0)) {
    if (DAT_180409790 != (longlong *)0x0) {
      (**(code **)(*DAT_180409790 + 0xd0))();
    }
    DAT_180409790 = (longlong *)0x0;
    DAT_180409780 = (longlong *)0x0;
    goto LAB_18007783e;
  }
  local_110 = DAT_180409780;
  if (DAT_1803fa608 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(DAT_1803fa608 + 4);
    if (((-1 < iVar4) && (iVar4 == DAT_1803da620)) &&
       (puVar22 = auStack_188, plVar7 == DAT_180409780)) goto LAB_18007783e;
  }
  local_128 = DAT_180409790;
  DAT_1803da620 = iVar4;
  if (DAT_1803fa678 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
LAB_180076c66:
    iVar4 = 0;
    plVar8 = local_e8;
  }
  else {
    plVar8 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    local_e8 = plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_180076c66;
    iVar4 = (**(code **)*plVar8)(plVar8);
  }
  pvVar23 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = (undefined8 ****)0x0;
  if (DAT_1803fa608 == 0) {
    uVar3 = 0;
    uVar24 = 0;
  }
  else {
    uVar3 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  local_150 = CONCAT44(uVar24,uVar3);
  local_e0 = iVar4;
  if (((DAT_180409788 != plVar7) || (DAT_1803e7c78 < 0.0)) ||
     (((double)CONCAT44(uVar24,uVar3) <= DAT_1803e7c78 &&
       DAT_1803e7c78 != (double)CONCAT44(uVar24,uVar3) ||
      (DAT_180380d38 < (double)CONCAT44(uVar24,uVar3) - DAT_1803e7c78)))) {
    uVar9 = FUN_18001f260(plVar7,local_148);
    FUN_18020e8a0(&local_d8,uVar9);
    FUN_18020e450(local_148);
    if (plVar8 != (longlong *)0x0) {
      iVar5 = (**(code **)*plVar8)(plVar8);
      while (iVar4 < iVar5) {
        (**(code **)(*plVar8 + 0x10))(plVar8,1);
        iVar5 = (**(code **)*plVar8)(plVar8);
      }
    }
    if (local_c8 == 0) {
      if ((DAT_180409788 == plVar7) && (cVar2 = FUN_180076340(plVar7), cVar2 != '\0'))
      goto LAB_180076dc4;
    }
    else {
      ppppuVar18 = &local_d8;
      if (0xf < local_c0) {
        ppppuVar18 = (undefined8 ****)local_d8;
      }
      DAT_180409788 = plVar7;
      FUN_180212700(&DAT_1803e9f98,ppppuVar18);
      DAT_1803e7c78 = (double)CONCAT44(uVar24,uVar3);
    }
  }
  else {
LAB_180076dc4:
    puVar15 = &DAT_1803e9f98;
    if (0xf < DAT_1803e9fb0) {
      puVar15 = DAT_1803e9f98;
    }
    FUN_180212700(&local_d8,puVar15,DAT_1803e9fa8);
  }
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_98 = 0;
  pcVar10 = (char *)FUN_18001e410(plVar7);
  local_120 = pcVar10;
  if (((char *)0x10000 < pcVar10) && (cVar2 = *pcVar10, cVar2 != '\0')) {
    iVar5 = strncmp(pcVar10,"class ",6);
    if (iVar5 == 0) {
      pcVar10 = pcVar10 + 6;
      local_120 = pcVar10;
      cVar2 = *pcVar10;
    }
    if (((cVar2 != '\0') && (iVar5 = strcmp(pcVar10,"CWeaponSWEP"), iVar5 != 0)) &&
       (iVar5 = strcmp(pcVar10,"CBaseEntity"), iVar5 != 0)) {
      sVar11 = strlen(pcVar10);
      FUN_180212700(&local_98,pcVar10,sVar11);
    }
  }
  if (local_88 == 0) {
    plVar12 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
    if (((plVar12 != (longlong *)0x0) && (DAT_1803fa807 != '\0')) &&
       ((iVar5 = (**(code **)(*plVar12 + 0x48))(plVar12), 0 < iVar5 &&
        ((pcVar10 = (char *)FUN_18002fa60(iVar5), pcVar10 != (char *)0x0 && (*pcVar10 != '\0'))))))
    {
      sVar11 = strlen(pcVar10);
      FUN_180212700(&local_98,pcVar10,sVar11);
    }
    if (plVar8 != (longlong *)0x0) {
      iVar5 = (**(code **)*plVar8)(plVar8);
      while (iVar4 < iVar5) {
        (**(code **)(*plVar8 + 0x10))(plVar8,1);
        iVar5 = (**(code **)*plVar8)(plVar8);
      }
    }
  }
  if ((DAT_180409778 == '\0') || (DAT_180409770 != plVar7)) {
LAB_180076fe5:
    puVar15 = DAT_1803edd00;
    puVar19 = DAT_1803edcf8;
    if (DAT_1803edcf8 != DAT_1803edd00) {
      do {
        FUN_18020e450(puVar19);
        puVar19 = puVar19 + 4;
      } while (puVar19 != puVar15);
      DAT_1803edd00 = DAT_1803edcf8;
    }
    puVar22 = auStack_188;
    if ((local_c8 != 0) &&
       (FUN_18020d6f0(&DAT_1803edcf8,&local_d8), puVar22 = auStack_188, plVar8 != (longlong *)0x0))
    {
      FUN_18002dc30(local_108,plVar8[1]);
      sVar11 = local_c8;
      local_78 = (undefined8 ***)0x0;
      ppuStack_70 = (undefined8 ***)0x0;
      local_68 = 0;
      local_60 = 0;
      ppppuVar18 = &local_d8;
      if (0xf < local_c0) {
        ppppuVar18 = (undefined8 ****)local_d8;
      }
      if (0x7fffffffffffffff < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (local_c8 < 0x10) {
        local_68 = local_c8;
        local_60 = 0xf;
        local_78 = *ppppuVar18;
        ppuStack_70 = ppppuVar18[1];
        puVar22 = auStack_188;
      }
      else {
        uVar13 = local_c8 | 0xf;
        if (uVar13 < 0x8000000000000000) goto LAB_1800770fe;
        uVar14 = 0x8000000000000027;
        uVar13 = 0x7fffffffffffffff;
        puVar21 = auStack_188;
        while( true ) {
          *(undefined8 *)(puVar21 + -8) = 0x1800770ef;
          lVar6 = FUN_1802d8350(uVar14);
          if (lVar6 != 0) break;
          pcVar1 = (code *)swi(0x29);
          uVar13 = (*pcVar1)(5);
          puVar21 = puVar21 + 8;
LAB_1800770fe:
          if (uVar13 < 0x16) {
            uVar13 = 0x16;
          }
          _Dst = pvVar23;
          if (uVar13 == 0xffffffffffffffff) goto LAB_180077146;
          if (uVar13 + 1 < 0x1000) {
            *(undefined8 *)(puVar21 + -8) = 0x180077146;
            _Dst = (void *)FUN_1802d8350();
            goto LAB_180077146;
          }
          uVar14 = uVar13 + 0x28;
          if (uVar14 <= uVar13 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar21 + -8) = &UNK_180077874;
            FUN_180012fe0();
          }
        }
        _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar6;
LAB_180077146:
        *(void **)(puVar21 + 0x110) = _Dst;
        *(size_t *)(puVar21 + 0x120) = sVar11;
        *(ulonglong *)(puVar21 + 0x128) = uVar13;
        *(undefined8 *)(puVar21 + -8) = 0x18007716d;
        memcpy(_Dst,ppppuVar18,sVar11 + 1);
        puVar22 = puVar21;
      }
      iVar5 = 0;
      *(undefined4 *)(puVar22 + 0x38) = 0;
      do {
        *(undefined8 *)(puVar22 + 0xd0) = 0;
        *(undefined8 *)(puVar22 + 0xd8) = 0;
        *(undefined8 *)(puVar22 + 0xe0) = 0;
        *(undefined8 *)(puVar22 + 0xe8) = 0;
        *(undefined8 *)(puVar22 + 0xe0) = 0;
        *(undefined8 *)(puVar22 + 0xe8) = 0xf;
        puVar22[0xd0] = 0;
        *(undefined8 *)(puVar22 + -8) = 0x1800771cf;
        cVar2 = FUN_1800764c0(plVar8,puVar22 + 0x110,puVar22 + 0xd0);
        puVar15 = DAT_1803edd00;
        if (cVar2 == '\0') {
LAB_1800772aa:
          *(undefined8 *)(puVar22 + -8) = 0x1800772b7;
          FUN_18020e450(puVar22 + 0xd0);
          break;
        }
        if (DAT_1803edcf8 != DAT_1803edd00) {
          sVar11 = *(size_t *)(puVar22 + 0xe0);
          puVar19 = DAT_1803edcf8;
          do {
            puVar21 = puVar22 + 0xd0;
            if (0xf < *(ulonglong *)(puVar22 + 0xe8)) {
              puVar21 = *(undefined1 **)(puVar22 + 0xd0);
            }
            _Size = puVar19[2];
            puVar17 = puVar19;
            if (0xf < (ulonglong)puVar19[3]) {
              puVar17 = (undefined8 *)*puVar19;
            }
            if (_Size == sVar11) {
              if (_Size == 0) break;
              *(undefined8 *)(puVar22 + -8) = 0x18007722e;
              iVar5 = memcmp(puVar17,puVar21,_Size);
              if (iVar5 == 0) break;
            }
            puVar19 = puVar19 + 4;
          } while (puVar19 != puVar15);
          iVar5 = *(int *)(puVar22 + 0x38);
          if (puVar19 != puVar15) goto LAB_1800772aa;
        }
        *(undefined8 *)(puVar22 + -8) = 0x180077259;
        FUN_18020d6f0(&DAT_1803edcf8,puVar22 + 0xd0);
        puVar21 = puVar22 + 0xd0;
        if (0xf < *(ulonglong *)(puVar22 + 0xe8)) {
          puVar21 = *(undefined1 **)(puVar22 + 0xd0);
        }
        *(undefined8 *)(puVar22 + -8) = 0x180077288;
        FUN_180212700(puVar22 + 0x110,puVar21,*(undefined8 *)(puVar22 + 0xe0));
        *(undefined8 *)(puVar22 + -8) = 0x180077296;
        FUN_18020e450(puVar22 + 0xd0);
        iVar5 = iVar5 + 1;
        *(int *)(puVar22 + 0x38) = iVar5;
      } while (iVar5 < 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x1800772c5;
      FUN_18020e450(puVar22 + 0x110);
      if ((puVar22[0x98] != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        *(undefined8 *)(puVar22 + -8) = 0x1800772fe;
        (*DAT_1803faf78)(*(undefined8 *)(puVar22 + 0x80),*(undefined8 *)(puVar22 + 0x88),
                         *(undefined4 *)(puVar22 + 0x90),*(undefined4 *)(puVar22 + 0x94));
      }
    }
    puVar21 = puVar22 + 0xb0;
    if (0xf < *(ulonglong *)(puVar22 + 200)) {
      puVar21 = *(undefined1 **)(puVar22 + 0xb0);
    }
    *(undefined8 *)(puVar22 + -8) = 0x180077333;
    DAT_180409770 = plVar7;
    FUN_180212700(&DAT_1803eb7e8,puVar21,*(undefined8 *)(puVar22 + 0xc0));
    DAT_180409778 = '\x01';
    if (plVar8 != (longlong *)0x0) {
      pcVar1 = *(code **)*plVar8;
      *(undefined8 *)(puVar22 + -8) = 0x180077347;
      iVar5 = (*pcVar1)(plVar8);
      while (iVar4 < iVar5) {
        pcVar1 = *(code **)(*plVar8 + 0x10);
        *(undefined8 *)(puVar22 + -8) = 0x18007735e;
        (*pcVar1)(plVar8,1);
        pcVar1 = *(code **)*plVar8;
        *(undefined8 *)(puVar22 + -8) = 0x180077366;
        iVar5 = (*pcVar1)(plVar8);
      }
    }
  }
  else {
    ppppuVar18 = &local_d8;
    if (0xf < local_c0) {
      ppppuVar18 = (undefined8 ****)local_d8;
    }
    puVar15 = &DAT_1803eb7e8;
    if (0xf < DAT_1803eb800) {
      puVar15 = DAT_1803eb7e8;
    }
    if ((DAT_1803eb7f8 != local_c8) ||
       ((puVar22 = auStack_188, DAT_1803eb7f8 != 0 &&
        (iVar5 = memcmp(puVar15,ppppuVar18,DAT_1803eb7f8), puVar22 = auStack_188, iVar5 != 0))))
    goto LAB_180076fe5;
  }
  puVar21 = puVar22 + 0xb0;
  if (0xf < *(ulonglong *)(puVar22 + 200)) {
    puVar21 = *(undefined1 **)(puVar22 + 0xb0);
  }
  *(undefined8 *)(puVar22 + -8) = 0x1800773a3;
  DAT_180409780 = plVar7;
  FUN_180212700(&DAT_1803e9f78,puVar21,*(undefined8 *)(puVar22 + 0xc0));
  puVar21 = puVar22 + 0xf0;
  if (0xf < *(ulonglong *)(puVar22 + 0x108)) {
    puVar21 = *(undefined1 **)(puVar22 + 0xf0);
  }
  *(undefined8 *)(puVar22 + -8) = 0x1800773d4;
  FUN_180212700(&DAT_1803eb458,puVar21,*(undefined8 *)(puVar22 + 0x100));
  lVar6 = *(longlong *)(puVar22 + 0x30);
  *(undefined8 *)(puVar22 + -8) = 0x1800773e1;
  DAT_180409768 = FUN_180076340(lVar6);
  if (*(longlong *)(puVar22 + 0x100) == 0) {
    if (DAT_1803fa798 != lVar6) {
      DAT_1803de128 = 0;
      puVar15 = &DAT_1803de118;
      if (0xf < DAT_1803de130) {
        puVar15 = DAT_1803de118;
      }
      *(undefined1 *)puVar15 = 0;
      DAT_1803fa798 = 0;
    }
  }
  else {
    puVar21 = puVar22 + 0xf0;
    if (0xf < *(ulonglong *)(puVar22 + 0x108)) {
      puVar21 = *(undefined1 **)(puVar22 + 0xf0);
    }
    *(undefined8 *)(puVar22 + -8) = 0x18007741a;
    FUN_180212700(&DAT_1803de118,puVar21);
    DAT_1803fa798 = lVar6;
  }
  puVar15 = DAT_1803eb448;
  DAT_180409790 = (longlong *)0x0;
  *(undefined8 **)(puVar22 + 0x70) = DAT_1803eb448;
  for (puVar19 = DAT_1803eb440; *(undefined8 **)(puVar22 + 0x38) = puVar19, puVar19 != puVar15;
      puVar19 = puVar19 + 1) {
    plVar7 = (longlong *)*puVar19;
    pcVar1 = *(code **)(*plVar7 + 0x18);
    *(undefined8 *)(puVar22 + -8) = 0x18007748e;
    cVar2 = (*pcVar1)(plVar7,&DAT_1803e9f78,&DAT_1803edcf8,&DAT_1803eb458);
    if (cVar2 != '\0') {
      DAT_180409790 = (longlong *)*puVar19;
      break;
    }
  }
  if ((DAT_180427638 & 1) == 0) {
    DAT_180427638 = DAT_180427638 | 1;
    *(undefined8 *)(puVar22 + -8) = 0x1800774f4;
    atexit((_func_5014 *)&LAB_180309850);
  }
  if ((DAT_180427638 & 2) == 0) {
    DAT_180427638 = DAT_180427638 | 2;
    *(undefined8 *)(puVar22 + -8) = 0x180077514;
    atexit((_func_5014 *)&LAB_180309840);
  }
  uVar13 = DAT_1803e9f90;
  puVar15 = DAT_1803e9f78;
  puVar19 = &DAT_1803da5c8;
  if (0xf < DAT_1803da5e0) {
    puVar19 = DAT_1803da5c8;
  }
  puVar17 = &DAT_1803e9f78;
  if (0xf < DAT_1803e9f90) {
    puVar17 = DAT_1803e9f78;
  }
  if (DAT_1803e9f88 == DAT_1803da5d8) {
    if (DAT_1803e9f88 != 0) {
      *(undefined8 *)(puVar22 + -8) = 0x18007755f;
      iVar5 = memcmp(puVar17,puVar19,DAT_1803e9f88);
      if (iVar5 != 0) goto LAB_1800775b3;
    }
    puVar19 = &DAT_1803e6fa8;
    if (0xf < DAT_1803e6fc0) {
      puVar19 = DAT_1803e6fa8;
    }
    puVar17 = &DAT_1803eb458;
    if (0xf < DAT_1803eb470) {
      puVar17 = DAT_1803eb458;
    }
    if (DAT_1803eb468 != DAT_1803e6fb8) goto LAB_1800775b3;
    if (DAT_1803eb468 != 0) {
      *(undefined8 *)(puVar22 + -8) = 0x1800775ab;
      iVar5 = memcmp(puVar17,puVar19,DAT_1803eb468);
      if (iVar5 != 0) goto LAB_1800775b3;
    }
  }
  else {
LAB_1800775b3:
    if (DAT_180409790 == (longlong *)0x0) {
      puVar16 = &DAT_180346cec;
    }
    else {
      pcVar1 = *(code **)*DAT_180409790;
      *(undefined8 *)(puVar22 + -8) = 0x1800775c4;
      puVar16 = (undefined *)(*pcVar1)();
      uVar13 = DAT_1803e9f90;
      puVar15 = DAT_1803e9f78;
    }
    puVar19 = &DAT_1803eb458;
    if (0xf < DAT_1803eb470) {
      puVar19 = DAT_1803eb458;
    }
    puVar17 = &DAT_1803e9f78;
    if (0xf < uVar13) {
      puVar17 = puVar15;
    }
    *(undefined **)(puVar22 + 0x20) = puVar16;
    *(undefined8 *)(puVar22 + -8) = 0x18007761c;
    FUN_180014410("[UpdateCache] Backends: %d, Base: \'%s\', Class: \'%s\', Matched: %s\n",
                  (longlong)DAT_1803eb448 - (longlong)DAT_1803eb440 >> 3,puVar17,puVar19);
    puVar15 = &DAT_1803e9f78;
    if (0xf < DAT_1803e9f90) {
      puVar15 = DAT_1803e9f78;
    }
    *(undefined8 *)(puVar22 + -8) = 0x180077647;
    FUN_180212700(&DAT_1803da5c8,puVar15,DAT_1803e9f88);
    puVar15 = &DAT_1803eb458;
    if (0xf < DAT_1803eb470) {
      puVar15 = DAT_1803eb458;
    }
    *(undefined8 *)(puVar22 + -8) = 0x18007766d;
    FUN_180212700(&DAT_1803e6fa8,puVar15,DAT_1803eb468);
  }
  lVar6 = *(longlong *)(puVar22 + 0x30);
  if ((*(longlong **)(puVar22 + 0x60) != (longlong *)0x0) &&
     ((*(longlong **)(puVar22 + 0x60) != DAT_180409790 || (*(longlong *)(puVar22 + 0x78) != lVar6)))
     ) {
    pcVar1 = *(code **)(**(longlong **)(puVar22 + 0x60) + 0xd0);
    *(undefined8 *)(puVar22 + -8) = 0x18007769a;
    (*pcVar1)();
  }
  if (DAT_180409790 == (longlong *)0x0) {
LAB_18007776b:
    if (plVar8 != (longlong *)0x0) {
      pvVar23 = (void *)plVar8[1];
    }
  }
  else {
    if (plVar8 == (longlong *)0x0) {
      lVar20 = 0;
    }
    else {
      lVar20 = plVar8[1];
    }
    *(undefined8 *)(puVar22 + -8) = 0x1800776db;
    FUN_18002dc30(puVar22 + 0x40,lVar20);
    pcVar1 = *(code **)(*DAT_180409790 + 200);
    *(undefined8 *)(puVar22 + -8) = 0x1800776ef;
    (*pcVar1)(DAT_180409790,lVar6);
    if ((puVar22[0x58] != '\0') && (DAT_1803faf78 != (code *)0x0)) {
      *(undefined8 *)(puVar22 + -8) = 0x180077733;
      (*DAT_1803faf78)(*(undefined8 *)(puVar22 + 0x40),*(undefined8 *)(puVar22 + 0x48),
                       *(undefined4 *)(puVar22 + 0x50),*(undefined4 *)(puVar22 + 0x54));
    }
    if (plVar8 != (longlong *)0x0) {
      pcVar1 = *(code **)*plVar8;
      *(undefined8 *)(puVar22 + -8) = 0x180077740;
      iVar5 = (*pcVar1)(plVar8);
      while (iVar4 < iVar5) {
        pcVar1 = *(code **)(*plVar8 + 0x10);
        *(undefined8 *)(puVar22 + -8) = 0x18007775e;
        (*pcVar1)(plVar8,1);
        pcVar1 = *(code **)*plVar8;
        *(undefined8 *)(puVar22 + -8) = 0x180077766;
        iVar5 = (*pcVar1)(plVar8);
      }
      goto LAB_18007776b;
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x180077781;
  FUN_18002dc30(puVar22 + 0x40,pvVar23);
  *(undefined8 *)(puVar22 + -8) = 0x18007778a;
  FUN_1800ad090(lVar6);
  if ((puVar22[0x58] != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    *(undefined8 *)(puVar22 + -8) = 0x1800777c6;
    (*DAT_1803faf78)(*(undefined8 *)(puVar22 + 0x40),*(undefined8 *)(puVar22 + 0x48),
                     *(undefined4 *)(puVar22 + 0x50),*(undefined4 *)(puVar22 + 0x54));
  }
  if (plVar8 != (longlong *)0x0) {
    pcVar1 = *(code **)*plVar8;
    *(undefined8 *)(puVar22 + -8) = 0x1800777d3;
    iVar5 = (*pcVar1)(plVar8);
    while (iVar4 < iVar5) {
      pcVar1 = *(code **)(*plVar8 + 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x1800777ee;
      (*pcVar1)(plVar8,1);
      pcVar1 = *(code **)*plVar8;
      *(undefined8 *)(puVar22 + -8) = 0x1800777f6;
      iVar5 = (*pcVar1)(plVar8);
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x180077808;
  FUN_18020e450(puVar22 + 0xf0);
  *(undefined8 *)(puVar22 + -8) = 0x180077816;
  FUN_18020e450(puVar22 + 0xb0);
LAB_18007783e:
  *(undefined8 *)(puVar22 + -8) = 0x18007784e;
  return;
}


