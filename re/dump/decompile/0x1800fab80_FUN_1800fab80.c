// 0x1800fab80  FUN_1800fab80
// size=3139 thunk=false
// signature: undefined FUN_1800fab80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800fb28b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800fab80(void)

{
  double dVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 ******ppppppuVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  char *_Str;
  size_t sVar14;
  undefined8 *puVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *******pppppppuVar23;
  int *piVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  undefined8 ******ppppppuVar29;
  int iVar30;
  undefined1 auStack_448 [32];
  uint local_428;
  undefined8 ******local_420;
  int local_418;
  int local_414;
  int local_410;
  undefined1 local_40c;
  int local_408;
  int local_404;
  undefined8 ******local_400;
  undefined8 ******local_3f8;
  undefined8 local_3f0;
  int local_3e8;
  undefined8 ******local_3e0;
  undefined8 uStack_3d8;
  undefined8 ******local_3d0;
  undefined8 local_3c8;
  undefined8 ******local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 ******local_3b0;
  undefined8 local_3a8;
  char *local_3a0;
  undefined8 ******local_398;
  undefined8 ******local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 ******local_378;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_350;
  int *local_348;
  longlong local_340;
  undefined *local_330;
  undefined8 ******local_328;
  undefined1 local_320;
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  int local_2c8 [132];
  int *local_b8;
  int *piStack_b0;
  int *local_a8;
  undefined8 ******local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_448;
  uVar25 = 0;
  local_428 = 0;
  if (DAT_18040a3d1 == '\0') {
    FUN_1800fab20();
    DAT_18040a3d1 = '\x01';
  }
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar20 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  dVar1 = *(double *)(*(longlong *)(lVar20 + 0xec0) + 0x10);
  if (dVar1 - _DAT_1803e88b8 < DAT_180380d08) {
    return;
  }
  _DAT_1803e88b8 = dVar1;
  FUN_1800fab20();
  if ((((DAT_1803fa668 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) ||
      (DAT_1803fa360 == (longlong *)0x0)) || (DAT_1803fa608 == 0)) {
    local_330 = &DAT_1803e88c0;
    iVar8 = _Mtx_lock(&DAT_1803e88c0);
    if (iVar8 == 0) {
      if (DAT_1803e890c == 0x7fffffff) {
        DAT_1803e890c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      piVar13 = DAT_1803edc58;
      piVar24 = DAT_1803edc50;
      if (DAT_1803edc50 != DAT_1803edc58) {
        do {
          local_420 = (undefined8 ******)piVar24;
          FUN_18020e450(piVar24 + 2);
          local_420 = (undefined8 ******)(piVar24 + 0xc);
          piVar24 = (int *)local_420;
        } while (local_420 != (undefined8 ******)piVar13);
        DAT_1803edc58 = DAT_1803edc50;
      }
      _Mtx_unlock(&DAT_1803e88c0);
      return;
    }
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_404 = 0;
  local_420 = &local_3c0;
  local_3c0 = (undefined8 *******)0x0;
  uStack_3b8 = 0;
  uStack_3b4 = 0;
  local_3b0 = (undefined8 *******)0x0;
  local_3a8 = 0;
  FUN_18001d080(&local_3c0,"DT_BaseEntity",0xd);
  local_420 = &local_3c0;
  local_400 = (undefined8 ******)&local_368;
  uVar11 = FUN_18016d4c0(&local_368,&local_3c0);
  uVar11 = FUN_180018ef0(&DAT_1803fac80,uVar11);
  FUN_18020e450(&local_3c0);
  local_420 = &local_3e0;
  local_3e0 = (undefined8 *******)0x0;
  uStack_3d8 = 0;
  local_3d0 = (undefined8 *******)0x0;
  local_3c8 = 0;
  FUN_18001d080(&local_3e0,"m_iTeamNum",10);
  local_400 = &local_3e0;
  local_420 = &local_328;
  uVar12 = FUN_18016d4c0(&local_328,&local_3e0);
  iVar8 = FUN_180018c10(uVar11,uVar12);
  FUN_18020e450(&local_3e0);
  if (iVar8 < 1) {
    return;
  }
  local_404 = iVar8;
  local_3e8 = (**(code **)(*DAT_1803fa668 + 0x60))();
  local_b8 = (int *)0x0;
  piStack_b0 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_a0 = (undefined8 ******)0x0;
  lStack_98 = 0;
  local_a0 = (undefined8 ******)FUN_1802d8350(0x28);
  *local_a0 = local_a0;
  local_a0[1] = local_a0;
  local_a0[2] = local_a0;
  *(undefined2 *)(local_a0 + 3) = 0x101;
  piVar13 = local_2c8;
  lVar20 = 4;
  do {
    *(undefined8 *)piVar13 = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 2) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 4) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 6) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 8) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 10) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 0xc) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 0xe) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 0x10) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 0x12) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 0x14) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 0x16) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 0x18) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 0x1a) = _UNK_1803817f8;
    *(undefined8 *)(piVar13 + 0x1c) = _DAT_1803817f0;
    *(undefined8 *)(piVar13 + 0x1e) = _UNK_1803817f8;
    piVar13 = piVar13 + 0x20;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *piVar13 = (int)_DAT_1803817f0;
  ppppppuVar29 = (undefined8 ******)0x80;
  if (*(int *)(DAT_1803fa608 + 0x1c) < 0x80) {
    ppppppuVar29 = (undefined8 ******)(ulonglong)*(uint *)(DAT_1803fa608 + 0x1c);
  }
  local_414 = (int)ppppppuVar29;
  local_410 = 1;
  local_408 = 1;
  uVar21 = uVar25;
  local_400 = ppppppuVar29;
  while( true ) {
    iVar8 = local_408;
    iVar30 = 1;
    if ((int)ppppppuVar29 < local_408) break;
    lVar20 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_408);
    if (lVar20 == 0) {
      local_408 = iVar8 + 1;
    }
    else {
      local_418 = *(int *)(local_404 + lVar20);
      local_2c8[iVar8] = local_418;
      uStack_3b8 = 0;
      local_3b0 = local_a0;
      pppppppuVar18 = (undefined8 *******)local_a0[1];
      pppppppuVar17 = (undefined8 *******)local_a0;
      local_3c0 = (undefined8 ******)local_a0[1];
      while (pppppppuVar23 = pppppppuVar18, *(char *)((longlong)pppppppuVar23 + 0x19) == '\0') {
        local_3c0 = pppppppuVar23;
        if (*(int *)((longlong)pppppppuVar23 + 0x1c) < local_418) {
          uStack_3b8 = 0;
          pppppppuVar18 = (undefined8 *******)pppppppuVar23[2];
        }
        else {
          uStack_3b8 = 1;
          pppppppuVar18 = (undefined8 *******)*pppppppuVar23;
          pppppppuVar17 = pppppppuVar23;
          local_3b0 = pppppppuVar23;
        }
      }
      if ((*(char *)((longlong)pppppppuVar17 + 0x19) == '\0') &&
         (*(int *)((longlong)pppppppuVar17 + 0x1c) <= local_418)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      pppppppuVar18 = (undefined8 *******)local_a0;
      if (bVar2) {
        pppppppuVar18 = pppppppuVar17;
      }
      local_420 = local_a0;
      if (pppppppuVar18 == (undefined8 *******)local_a0) {
        uStack_68 = 0;
        local_60 = 0;
        local_58 = 0xf;
        local_70 = 0;
        local_50 = 0;
        local_3a0 = (char *)0x0;
        local_78[0] = local_418;
        _Str = (char *)FUN_180030f20(local_418);
        uVar26 = (uint)uVar21;
        local_3a0 = _Str;
        if ((_Str != (char *)0x0) && (uVar21 = uVar25, *_Str != '\0')) {
          do {
            uVar22 = uVar21 + 1;
            if (_Str[uVar21] != "unknown"[uVar21]) {
              local_368 = 0;
              uStack_360 = 0;
              local_358 = 0;
              local_350 = 0;
              sVar14 = strlen(_Str);
              FUN_18001d080(&local_368,_Str,sVar14);
              puVar15 = &local_368;
              uVar26 = uVar26 | 1;
              goto LAB_1800fb069;
            }
            uVar21 = uVar22;
          } while (uVar22 != 8);
        }
        uVar11 = FUN_180013ba0(local_2e8,local_418);
        local_428 = uVar26 | 2;
        puVar15 = (undefined8 *)FUN_1801fd1b0(local_308,"Team ",uVar11);
        uVar26 = uVar26 | 6;
LAB_1800fb069:
        local_428 = uVar26;
        FUN_18020e8a0(&local_70,puVar15);
        if ((uVar26 & 4) != 0) {
          uVar26 = uVar26 & 0xfffffffb;
          local_428 = uVar26;
          FUN_18020e450(local_308);
        }
        if ((uVar26 & 2) != 0) {
          uVar26 = uVar26 & 0xfffffffd;
          local_428 = uVar26;
          FUN_18020e450(local_2e8);
        }
        if ((uVar26 & 1) != 0) {
          uVar26 = uVar26 & 0xfffffffe;
          local_428 = uVar26;
          FUN_18020e450(&local_368);
        }
        piVar13 = piStack_b0;
        uVar21 = (ulonglong)uVar26;
        if (piStack_b0 == local_a8) {
          FUN_180226370(&local_b8,piStack_b0,local_78);
        }
        else {
          local_348 = piStack_b0;
          *piStack_b0 = local_78[0];
          FUN_18016d4c0(piStack_b0 + 2,&local_70);
          piVar13[10] = local_50;
          piStack_b0 = piStack_b0 + 0xc;
        }
        ppppppuVar29 = local_a0;
        local_340 = ((longlong)piStack_b0 - (longlong)local_b8 >> 4) * -0x5555555555555555;
        uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
        local_3d0 = local_a0;
        pppppppuVar17 = (undefined8 *******)local_a0[1];
        pppppppuVar18 = (undefined8 *******)local_a0;
        uVar22 = uVar25;
        pppppppuVar23 = (undefined8 *******)local_a0[1];
        while (pppppppuVar16 = pppppppuVar17, *(char *)((longlong)pppppppuVar16 + 0x19) == '\0') {
          bVar2 = local_418 <= *(int *)((longlong)pppppppuVar16 + 0x1c);
          if (bVar2) {
            uStack_3d8 = CONCAT44(uStack_3d8._4_4_,1);
            pppppppuVar17 = (undefined8 *******)*pppppppuVar16;
            pppppppuVar18 = pppppppuVar16;
            local_3d0 = pppppppuVar16;
          }
          else {
            uStack_3d8 = (ulonglong)uStack_3d8._4_4_ << 0x20;
            pppppppuVar17 = (undefined8 *******)pppppppuVar16[2];
          }
          uVar22 = (ulonglong)bVar2;
          pppppppuVar23 = pppppppuVar16;
        }
        if ((*(char *)((longlong)pppppppuVar18 + 0x19) == '\0') &&
           (*(int *)((longlong)pppppppuVar18 + 0x1c) <= local_418)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        local_3e0 = pppppppuVar23;
        if (bVar2) {
          local_320 = 0;
          local_370 = 0;
        }
        else {
          if (lStack_98 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
            FUN_180013b80();
          }
          iVar30 = (int)local_340;
          local_3f8 = &local_a0;
          local_3f0 = 0;
          puVar15 = (undefined8 *)FUN_1802d8350(0x28);
          *(int *)((longlong)puVar15 + 0x1c) = local_418;
          *(int *)(puVar15 + 4) = iVar30 + -1;
          *puVar15 = ppppppuVar29;
          puVar15[1] = ppppppuVar29;
          puVar15[2] = ppppppuVar29;
          *(undefined1 *)(puVar15 + 3) = 0;
          *(undefined1 *)((longlong)puVar15 + 0x19) = 0;
          local_3f0 = 0;
          local_380 = (undefined4)uVar22;
          local_37c = uStack_3d8._4_4_;
          local_388 = pppppppuVar23;
          pppppppuVar18 = (undefined8 *******)FUN_18022bb90(&local_a0,&local_388,puVar15);
          local_320 = 1;
          local_370 = 1;
        }
        local_420 = pppppppuVar18;
        local_398 = pppppppuVar18;
        local_378 = pppppppuVar18;
        local_328 = pppppppuVar18;
        FUN_18020e450(&local_70);
        ppppppuVar29 = local_400;
      }
      local_b8[(longlong)*(int *)(pppppppuVar18 + 4) * 0xc + 10] =
           local_b8[(longlong)*(int *)(pppppppuVar18 + 4) * 0xc + 10] + 1;
      local_408 = iVar8 + 1;
    }
  }
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  local_398 = (undefined8 ******)&DAT_1803e88c0;
  iVar9 = _Mtx_lock(&DAT_1803e88c0);
  iVar8 = local_3e8;
  if (iVar9 == 0) {
    if (DAT_1803e890c == 0x7fffffff) {
LAB_1800fb693:
      DAT_1803e890c = DAT_1803e890c + -1;
      std::_Throw_Cpp_error(6);
    }
    else {
      lVar20 = (longlong)local_3e8;
      FUN_1802179b0(&local_90,DAT_1803e9c20,
                    (DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x3333333333333333);
      _Mtx_unlock(&DAT_1803e88c0);
      ppppppuVar5 = local_a0;
      if (iVar8 - 1U < 0x80) {
        local_414 = local_2c8[lVar20];
      }
      else {
        local_414 = -0x80000000;
      }
      lVar20 = lStack_88;
      if (0 < (int)ppppppuVar29) {
        do {
          piVar13 = local_b8;
          local_420 = (undefined8 ******)(longlong)iVar30;
          iVar8 = local_2c8[(longlong)local_420];
          if (iVar8 != -0x80000000) {
            cVar6 = *(char *)((longlong)ppppppuVar5[1] + 0x19);
            pppppppuVar18 = (undefined8 *******)ppppppuVar5[1];
            pppppppuVar17 = (undefined8 *******)ppppppuVar5;
            while (pppppppuVar23 = pppppppuVar18, cVar6 == '\0') {
              if (*(int *)((longlong)pppppppuVar23 + 0x1c) < iVar8) {
                pppppppuVar18 = (undefined8 *******)pppppppuVar23[2];
                pppppppuVar23 = pppppppuVar17;
              }
              else {
                pppppppuVar18 = (undefined8 *******)*pppppppuVar23;
              }
              cVar6 = *(char *)((longlong)pppppppuVar18 + 0x19);
              pppppppuVar17 = pppppppuVar23;
            }
            if (((*(char *)((longlong)pppppppuVar17 + 0x19) == '\0') &&
                (*(int *)((longlong)pppppppuVar17 + 0x1c) <= iVar8)) &&
               (pppppppuVar17 != (undefined8 *******)ppppppuVar5)) {
              iVar30 = (int)(lVar20 - local_90 >> 4) * -0x33333333;
              if (0 < iVar30) {
                iVar9 = *(int *)(pppppppuVar17 + 4);
                uVar21 = *(ulonglong *)(local_b8 + (longlong)iVar9 * 0xc + 8);
                uVar22 = uVar25;
                lVar28 = local_90;
                do {
                  iVar27 = (int)uVar22;
                  puVar15 = (undefined8 *)((longlong)iVar27 * 0x50 + lVar28);
                  if (uVar21 < 0x10) {
                    piVar24 = piVar13 + (longlong)iVar9 * 0xc + 2;
                  }
                  else {
                    piVar24 = *(int **)(piVar13 + (longlong)iVar9 * 0xc + 2);
                  }
                  sVar14 = puVar15[2];
                  if (0xf < (ulonglong)puVar15[3]) {
                    puVar15 = (undefined8 *)*puVar15;
                  }
                  if ((sVar14 == *(size_t *)(piVar13 + (longlong)iVar9 * 0xc + 6)) &&
                     ((sVar14 == 0 ||
                      (iVar10 = memcmp(puVar15,piVar24,sVar14), lVar28 = local_90, iVar10 == 0)))) {
                    (&DAT_1804586e0)[(longlong)local_420] = iVar27;
                    lVar20 = lStack_88;
                    if ((-1 < iVar27) && (iVar27 < (int)(lStack_88 - lVar28 >> 4) * -0x33333333)) {
                      lVar19 = (longlong)iVar27;
                      *(undefined1 *)(local_420 + 0x3008b11e) =
                           *(undefined1 *)(lVar28 + 0x20 + lVar19 * 0x50);
                      *(undefined1 *)(local_420 + 0x3008b0ca) =
                           *(undefined1 *)(lVar28 + 0x21 + lVar19 * 0x50);
                      *(undefined1 *)(local_420 + 0x3008b130) =
                           *(undefined1 *)(lVar28 + 0x22 + lVar19 * 0x50);
                    }
                    goto LAB_1800fb57f;
                  }
                  uVar22 = (ulonglong)(iVar27 + 1U);
                  lVar20 = lStack_88;
                } while ((int)(iVar27 + 1U) < iVar30);
              }
              (&DAT_1804586e0)[(longlong)local_420] = 0xffffffff;
LAB_1800fb57f:
              if ((local_414 == -0x80000000) || (iVar8 != local_414)) {
                uVar7 = 0;
              }
              else {
                uVar7 = 1;
              }
              *(undefined1 *)(local_420 + 0x3008b142) = uVar7;
              ppppppuVar29 = local_400;
              iVar30 = local_410;
            }
          }
          iVar30 = iVar30 + 1;
          local_410 = iVar30;
        } while (iVar30 <= (int)ppppppuVar29);
      }
      FUN_180212860(local_b8,piStack_b0,
                    ((longlong)piStack_b0 - (longlong)local_b8 >> 4) * -0x5555555555555555,local_40c
                   );
      local_398 = (undefined8 ******)&DAT_1803e88c0;
      iVar8 = _Mtx_lock(&DAT_1803e88c0);
      if (iVar8 != 0) goto LAB_1800fb739;
      if (DAT_1803e890c == 0x7fffffff) goto LAB_1800fb693;
    }
    piVar4 = DAT_1803edc60;
    piVar24 = DAT_1803edc58;
    piVar13 = DAT_1803edc50;
    DAT_1803edc50 = local_b8;
    local_b8 = piVar13;
    DAT_1803edc58 = piStack_b0;
    piStack_b0 = piVar24;
    DAT_1803edc60 = local_a8;
    local_a8 = piVar4;
    _Mtx_unlock(&DAT_1803e88c0);
    FUN_18020b810(&local_90);
    FUN_18020b8d0(&local_a0);
    FUN_18020baa0(&local_b8);
  }
  else {
LAB_1800fb739:
    std::_Throw_Cpp_error(5);
  }
  return;
}


