// 0x180161a50  FUN_180161a50
// size=6150 thunk=false
// signature: undefined FUN_180161a50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180161a50(char *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int *piVar11;
  void *_Memory;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  ulonglong uVar29;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da_02;
  float fVar32;
  float _X;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined1 auStack_3b0 [48];
  int *local_380;
  int *local_368 [3];
  char *local_350;
  int *local_348;
  longlong local_338;
  int *local_330;
  int *local_328;
  int *local_320;
  undefined8 **local_318;
  undefined8 *local_310;
  ulonglong local_308;
  undefined8 *local_300;
  undefined8 *puStack_2f8;
  undefined8 *local_2f0;
  int *local_2e8;
  int *piStack_2e0;
  longlong local_2d8;
  int *local_2d0;
  int *piStack_2c8;
  longlong local_2c0;
  int *local_2b8;
  int *piStack_2b0;
  longlong local_2a8;
  void *local_2a0;
  longlong lStack_298;
  longlong local_290;
  char local_288 [256];
  char local_188 [256];
  ulonglong local_88;
  
  puVar22 = auStack_3b8;
  puVar24 = auStack_3b8;
  puVar25 = auStack_3b8;
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_3b8;
  local_2e8 = (int *)0x0;
  piStack_2e0 = (int *)0x0;
  local_2d8 = 0;
  local_2b8 = (int *)0x0;
  piStack_2b0 = (int *)0x0;
  local_2a8 = 0;
  local_2d0 = (int *)0x0;
  piStack_2c8 = (int *)0x0;
  local_2c0 = 0;
  local_350 = param_1;
  if ((((DAT_1803f9248 == (longlong *)0x0) || (param_1 == (char *)0x0)) || (*param_1 == '\0')) ||
     (lVar8 = (**(code **)(*DAT_1803f9248 + 0x10))
                        (DAT_1803f9248,param_1,&DAT_1803589f0,&DAT_1803589e8), lVar8 == 0)) {
LAB_180163113:
    pcVar9 = "[MP] no mdl \'%s\'\n";
LAB_18016311a:
    FUN_180014410(pcVar9,param_1);
    puVar23 = auStack_3b8;
LAB_180163122:
    puVar24 = puVar23;
    uVar21 = 0;
  }
  else {
    if (local_2e8 != piStack_2e0) {
      piStack_2e0 = local_2e8;
    }
    (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar8,0,0);
    uVar17 = 0;
    do {
      FUN_180218360(&local_2e8,uVar17 + 0x40000);
      iVar6 = (**(code **)*DAT_1803f9248)(DAT_1803f9248,(longlong)local_2e8 + uVar17,0x40000,lVar8);
      if (0 < iVar6) {
        uVar17 = uVar17 + (longlong)iVar6;
      }
      if (iVar6 < 0x40000) goto LAB_180161b89;
    } while (uVar17 < 0x10000001);
    uVar17 = 0;
LAB_180161b89:
    (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar8);
    FUN_180218360(&local_2e8,uVar17);
    if (uVar17 == 0) goto LAB_180163113;
    strncpy_s(local_188,0x100,param_1,0xffffffffffffffff);
    pcVar9 = strrchr(local_188,0x2e);
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
    }
    FUN_180207490(local_288,"%s.vvd",local_188);
    if (((DAT_1803f9248 == (longlong *)0x0) || (local_288[0] == '\0')) ||
       (lVar8 = (**(code **)(*DAT_1803f9248 + 0x10))
                          (DAT_1803f9248,local_288,&DAT_1803589f0,&DAT_1803589e8), lVar8 == 0)) {
LAB_180163106:
      pcVar9 = "[MP] no vvd \'%s\'\n";
      param_1 = local_288;
      goto LAB_18016311a;
    }
    if (local_2b8 != piStack_2b0) {
      piStack_2b0 = local_2b8;
    }
    (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar8,0,0);
    uVar17 = 0;
    do {
      FUN_180218360(&local_2b8,uVar17 + 0x40000);
      iVar6 = (**(code **)*DAT_1803f9248)(DAT_1803f9248,(longlong)local_2b8 + uVar17,0x40000,lVar8);
      if (0 < iVar6) {
        uVar17 = uVar17 + (longlong)iVar6;
      }
      if (iVar6 < 0x40000) goto LAB_180161ca9;
    } while (uVar17 < 0x10000001);
    uVar17 = 0;
LAB_180161ca9:
    (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar8);
    FUN_180218360(&local_2b8,uVar17);
    if (uVar17 == 0) goto LAB_180163106;
    FUN_180207490(local_288,"%s.dx90.vtx",local_188);
    if (((DAT_1803f9248 == (longlong *)0x0) || (local_288[0] == '\0')) ||
       (lVar8 = (**(code **)(*DAT_1803f9248 + 0x10))
                          (DAT_1803f9248,local_288,&DAT_1803589f0,&DAT_1803589e8), lVar8 == 0)) {
LAB_1801630f9:
      pcVar9 = "[MP] no vtx \'%s\'\n";
      param_1 = local_288;
      goto LAB_18016311a;
    }
    if (local_2d0 != piStack_2c8) {
      piStack_2c8 = local_2d0;
    }
    (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar8,0,0);
    uVar17 = 0;
    do {
      FUN_180218360(&local_2d0,uVar17 + 0x40000);
      iVar6 = (**(code **)*DAT_1803f9248)(DAT_1803f9248,(longlong)local_2d0 + uVar17,0x40000,lVar8);
      if (0 < iVar6) {
        uVar17 = uVar17 + (longlong)iVar6;
      }
      if (iVar6 < 0x40000) goto LAB_180161d99;
    } while (uVar17 < 0x10000001);
    uVar17 = 0;
LAB_180161d99:
    (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar8);
    FUN_180218360(&local_2d0,uVar17);
    piVar12 = local_2b8;
    if (uVar17 == 0) goto LAB_1801630f9;
    local_380 = local_2e8;
    puVar23 = auStack_3b8;
    if ((((ulonglong)((longlong)piStack_2e0 - (longlong)local_2e8) < 0x198) ||
        (puVar23 = auStack_3b8, (ulonglong)((longlong)piStack_2b0 - (longlong)local_2b8) < 0x40)) ||
       (local_348 = local_2d0, puVar23 = auStack_3b8,
       (ulonglong)((longlong)piStack_2c8 - (longlong)local_2d0) < 0x24)) goto LAB_180163122;
    if (((*local_2e8 != 0x54534449) || (0x1ff < local_2e8[0x27] - 1U)) || (local_2e8[0x3a] < 1)) {
      FUN_180014410("[MP] bad mdl hdr\n");
      puVar23 = auStack_3b8;
      goto LAB_180163122;
    }
    if (((*local_2b8 != 0x56534449) || (local_2b8[1] != 4)) || (local_2b8[2] != local_2e8[2])) {
      FUN_180014410("[MP] bad/mismatched vvd\n");
      puVar23 = auStack_3b8;
      goto LAB_180163122;
    }
    puVar23 = auStack_3b8;
    if (((*local_2d0 != 7) || (puVar23 = auStack_3b8, local_2d0[4] != local_2e8[2])) ||
       (puVar23 = auStack_3b8, local_2d0[7] != local_2e8[0x3a])) {
LAB_1801630cf:
      *(undefined8 *)(puVar23 + -8) = 0x1801630db;
      FUN_180014410("[MP] bad/mismatched vtx\n");
      goto LAB_180163122;
    }
    piVar28 = (int *)((longlong)local_2b8 + (longlong)local_2b8[0xe]);
    puVar23 = auStack_3b8;
    if ((piVar28 < local_2b8) ||
       (puVar23 = auStack_3b8,
       ((longlong)piStack_2b0 - (longlong)local_2b8) - 0x30U <
       (ulonglong)((longlong)piVar28 - (longlong)local_2b8))) goto LAB_180163122;
    local_300 = (undefined8 *)0x0;
    puStack_2f8 = (undefined8 *)0x0;
    local_2f0 = (undefined8 *)0x0;
    iVar6 = local_2b8[0xc];
    iVar7 = (int)((ulonglong)
                  ((longlong)piStack_2b0 + (-(longlong)local_2b8[0xe] - (longlong)local_2b8)) / 0x30
                 );
    if (iVar6 < 1) {
      iVar6 = local_2b8[4];
      if (iVar7 <= local_2b8[4]) {
        iVar6 = iVar7;
      }
      puVar23 = auStack_3b8;
      if (iVar6 < 1) goto LAB_18016306e;
      uVar17 = (ulonglong)iVar6;
      if (0x1fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      uVar29 = uVar17 * 8;
      if (uVar29 == 0) {
        puVar18 = (undefined8 *)0x0;
LAB_180162047:
        local_318 = &local_300;
        local_310 = puVar18;
        local_308 = uVar17;
        memmove(puVar18,local_300,(longlong)puStack_2f8 - (longlong)local_300);
        local_310 = (undefined8 *)0x0;
        if (local_300 != (undefined8 *)0x0) {
          puVar10 = local_300;
          if ((0xfff < (ulonglong)(((longlong)local_2f0 - (longlong)local_300 >> 3) * 8)) &&
             (puVar10 = (undefined8 *)local_300[-1],
             0x1f < (ulonglong)((longlong)local_300 + (-8 - (longlong)puVar10)))) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar22 = auStack_3b0;
            goto LAB_180162101;
          }
          free(puVar10);
        }
        local_2f0 = puVar18 + uVar17;
        puVar10 = (undefined8 *)0x0;
        local_300 = puVar18;
        puStack_2f8 = puVar18;
        do {
          iVar7 = (int)puVar10;
          *(int **)(puVar22 + 0x50) = piVar28 + (longlong)iVar7 * 0xc;
          puVar18 = puVar10;
          if (puStack_2f8 == local_2f0) {
LAB_180162101:
            iVar7 = (int)puVar18;
            *(undefined8 *)(puVar22 + -8) = 0x18016210f;
            FUN_180221c00(&local_300);
          }
          else {
            *puStack_2f8 = piVar28 + (longlong)iVar7 * 0xc;
            puStack_2f8 = puStack_2f8 + 1;
          }
          puVar10 = (undefined8 *)(ulonglong)(iVar7 + 1U);
          puVar18 = puStack_2f8;
          puVar24 = puVar22;
        } while ((int)(iVar7 + 1U) < iVar6);
        goto LAB_180162119;
      }
      if (uVar29 < 0x1000) {
        puVar18 = (undefined8 *)FUN_1802d8350(uVar29);
        goto LAB_180162047;
      }
      if (uVar29 + 0x27 <= uVar29) goto LAB_18016324c;
      lVar8 = FUN_1802d8350();
      if (lVar8 != 0) {
        puVar18 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
        puVar18[-1] = lVar8;
        goto LAB_180162047;
      }
LAB_180163067:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar23 = puVar24 + 8;
LAB_18016306e:
      puVar24 = puVar23;
      uVar21 = 0;
    }
    else {
      piVar26 = (int *)((longlong)local_2b8[0xd] + (longlong)local_2b8);
      puVar23 = auStack_3b8;
      if (((piVar26 < local_2b8) ||
          (puVar23 = auStack_3b8,
          (ulonglong)((longlong)piStack_2b0 - (longlong)local_2b8) <
          (ulonglong)((longlong)iVar6 * 0xc))) ||
         (puVar23 = auStack_3b8,
         (ulonglong)(((longlong)piStack_2b0 - (longlong)local_2b8) + (longlong)iVar6 * -0xc) <
         (ulonglong)((longlong)piVar26 - (longlong)local_2b8))) goto LAB_18016306e;
      iVar6 = 0;
      puVar18 = (undefined8 *)0x0;
      do {
        lVar8 = (longlong)iVar6;
        if (-1 < piVar26[lVar8 * 3]) {
          puVar23 = auStack_3b8;
          if (((piVar26[lVar8 * 3 + 1] < 0) ||
              (iVar13 = piVar26[lVar8 * 3 + 2], puVar23 = auStack_3b8, iVar13 < 0)) ||
             (puVar23 = auStack_3b8, iVar7 < piVar26[lVar8 * 3 + 1] + iVar13)) goto LAB_18016306e;
          iVar16 = 0;
          if (0 < iVar13) {
            do {
              local_368[0] = piVar28 + ((longlong)iVar16 + (longlong)piVar26[lVar8 * 3 + 1]) * 0xc;
              if (puVar18 == local_2f0) {
                FUN_180221c00(&local_300,puVar18,local_368);
              }
              else {
                *puVar18 = local_368[0];
                puStack_2f8 = puStack_2f8 + 1;
              }
              iVar16 = iVar16 + 1;
              puVar18 = puStack_2f8;
            } while (iVar16 < piVar26[lVar8 * 3 + 2]);
          }
        }
        iVar6 = iVar6 + 1;
        puVar24 = auStack_3b8;
      } while (iVar6 < piVar12[0xc]);
LAB_180162119:
      lVar8 = DAT_1803ea2c8;
      puVar23 = puVar24;
      if (local_300 == puVar18) goto LAB_18016306e;
      if (DAT_1803eb360 != DAT_1803eb368) {
        DAT_1803eb368 = DAT_1803eb360;
      }
      if (DAT_1803e9a68 != DAT_1803e9a70) {
        DAT_1803e9a70 = DAT_1803e9a68;
      }
      if (DAT_1803e9a80 != DAT_1803e9a88) {
        DAT_1803e9a88 = DAT_1803e9a80;
      }
      lVar19 = DAT_1803ea2c0;
      if (DAT_1803ea2c0 != DAT_1803ea2c8) {
        do {
          *(undefined8 *)(puVar24 + -8) = 0x180162188;
          FUN_18020e450(lVar19);
          lVar19 = lVar19 + 0x20;
        } while (lVar19 != lVar8);
        DAT_1803ea2c8 = DAT_1803ea2c0;
      }
      if (DAT_1803e9a50 != DAT_1803e9a58) {
        DAT_1803e9a58 = DAT_1803e9a50;
      }
      if (DAT_1803eb808 != DAT_1803eb810) {
        DAT_1803eb810 = DAT_1803eb808;
      }
      if (DAT_1803edd30 != DAT_1803edd38) {
        DAT_1803edd38 = DAT_1803edd30;
      }
      DAT_180423a6c = 0;
      DAT_180423a98 = 0;
      DAT_180423aa8 = 0;
      DAT_1803e9330 = -1;
      DAT_1803e932c = -1;
      *(undefined8 *)(puVar24 + -8) = 0x18016222b;
      cVar5 = FUN_18015f290(&local_2e8,&DAT_1803e9a50);
      if (cVar5 == '\0') goto LAB_18016306e;
      iVar6 = 0;
      uVar31 = extraout_XMM0_Da;
      if (0 < (int)(DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x1642c859) {
LAB_180162260:
        pcVar9 = (char *)(DAT_1803e9a50 + 0x78 + (longlong)iVar6 * 0xb8);
        if (pcVar9 != (char *)0x0) {
          cVar5 = *pcVar9;
          while (cVar5 != '\0') {
            *(undefined8 *)(puVar24 + -8) = 0x180162296;
            iVar7 = _strnicmp(pcVar9,"upperarm",8);
            uVar31 = extraout_XMM0_Da_00;
            if (iVar7 == 0) {
              pcVar9 = (char *)(DAT_1803e9a50 + 0x78 + (longlong)iVar6 * 0xb8);
              if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) goto LAB_1801622e6;
              goto LAB_1801622c0;
            }
            pcVar9 = pcVar9 + 1;
            cVar5 = *pcVar9;
          }
        }
        goto LAB_1801622f5;
      }
LAB_180162315:
      uVar17 = (longlong)puStack_2f8 - (longlong)local_300 >> 3;
      lVar8 = (longlong)DAT_1803eb810 - (longlong)DAT_1803eb808 >> 2;
      uVar29 = lVar8 * -0x1111111111111111;
      if (uVar17 < uVar29) {
        DAT_1803eb810 = (undefined8 *)(uVar17 * 0x3c + (longlong)DAT_1803eb808);
      }
      else if (uVar29 < uVar17) {
        if ((ulonglong)((DAT_1803eb818 - (longlong)DAT_1803eb808 >> 2) * -0x1111111111111111) <
            uVar17) {
          *(undefined8 *)(puVar24 + -8) = 0x18016238e;
          uVar31 = FUN_180223420();
        }
        else {
          for (lVar8 = uVar17 + lVar8 * 0x1111111111111111; lVar8 != 0; lVar8 = lVar8 + -1) {
            uVar31 = 0;
            *DAT_1803eb810 = 0;
            DAT_1803eb810[1] = 0;
            DAT_1803eb810[2] = 0;
            DAT_1803eb810[3] = 0;
            DAT_1803eb810[4] = 0;
            DAT_1803eb810[5] = 0;
            *(undefined8 *)((longlong)DAT_1803eb810 + 0x2c) = 0;
            *(undefined8 *)((longlong)DAT_1803eb810 + 0x34) = 0;
            DAT_1803eb810 = (undefined8 *)((longlong)DAT_1803eb810 + 0x3c);
          }
        }
      }
      uVar17 = 0;
      if ((longlong)puStack_2f8 - (longlong)local_300 >> 3 != 0) {
        do {
          lVar8 = local_300[uVar17];
          puVar14 = (undefined4 *)(uVar17 * 0x3c + (longlong)DAT_1803eb808);
          *puVar14 = *(undefined4 *)(lVar8 + 0x10);
          puVar14[1] = *(undefined4 *)(lVar8 + 0x14);
          puVar14[2] = *(undefined4 *)(lVar8 + 0x18);
          puVar14[3] = *(undefined4 *)(lVar8 + 0x1c);
          puVar14[4] = *(undefined4 *)(lVar8 + 0x20);
          puVar14[5] = *(undefined4 *)(lVar8 + 0x24);
          puVar14[0xd] = *(undefined4 *)(lVar8 + 0x28);
          puVar14[0xe] = *(undefined4 *)(lVar8 + 0x2c);
          bVar1 = *(byte *)(lVar8 + 0xf);
          if ((bVar1 == 0) || (3 < bVar1)) {
            puVar14[0xc] = 1;
            iVar6 = 0;
LAB_180162481:
            do {
              lVar19 = (longlong)iVar6;
              puVar14[lVar19 + 9] = (int)*(char *)(lVar19 + 0xc + lVar8);
              puVar14[lVar19 + 6] = 0x3f800000;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 1);
          }
          else {
            uVar27 = (uint)bVar1;
            puVar14[0xc] = uVar27;
            iVar6 = 0;
            if (uVar27 == 1) goto LAB_180162481;
            if (uVar27 != 0) {
              lVar19 = 0;
              do {
                puVar14[lVar19 + 9] = (int)*(char *)(lVar8 + 0xc + lVar19);
                puVar14[lVar19 + 6] = *(undefined4 *)(lVar8 + lVar19 * 4);
                iVar6 = iVar6 + 1;
                lVar19 = lVar19 + 1;
              } while (iVar6 < (int)(uint)bVar1);
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < (ulonglong)((longlong)puStack_2f8 - (longlong)local_300 >> 3));
      }
      *(undefined8 *)(puVar24 + -8) = 0x1801624cb;
      cVar5 = FUN_1801600e0(uVar31,&local_2e8);
      local_2a0 = (void *)0x0;
      lStack_298 = 0;
      local_290 = 0;
      if (cVar5 == '\0') {
        lVar8 = *(longlong *)(puVar24 + 0x38);
        *(undefined8 *)(puVar24 + -8) = 0x180162a23;
        FUN_18015ead0(lVar8,&local_2a0);
      }
      else {
        *(undefined8 *)(puVar24 + -8) = 0x1801624fc;
        FUN_180160ce0(DAT_1803edd30);
        DAT_180423aa0 = 0.0;
        lVar8 = (longlong)DAT_1803e932c;
        if (DAT_1803e932c < 0) {
          lVar8 = *(longlong *)(puVar24 + 0x38);
        }
        else {
          lVar19 = (longlong)DAT_1803e9330;
          if (((-1 < DAT_1803e9330) &&
              (iVar6 = (int)(lStack_298 - (longlong)local_2a0 >> 4) * -0x55555555,
              DAT_1803e932c < iVar6)) && (DAT_1803e9330 < iVar6)) {
            fVar32 = (*(float *)((longlong)local_2a0 + lVar8 * 0x30 + 0x2c) -
                     *(float *)((longlong)local_2a0 + lVar19 * 0x30 + 0x2c)) * 0.0;
            _X = (*(float *)((longlong)local_2a0 + lVar8 * 0x30 + 0x1c) -
                 *(float *)((longlong)local_2a0 + lVar19 * 0x30 + 0x1c)) - fVar32;
            fVar32 = fVar32 - (*(float *)((longlong)local_2a0 + lVar8 * 0x30 + 0xc) -
                              *(float *)((longlong)local_2a0 + lVar19 * 0x30 + 0xc));
            *(undefined8 *)(puVar24 + -8) = 0x1801625b1;
            fVar30 = (float)(*(code *)PTR_FUN_1803da018)(fVar32 * fVar32 + _X * _X);
            if (DAT_1803809ec < fVar30) {
              *(undefined8 *)(puVar24 + -8) = 0x1801625c5;
              fVar30 = atan2f(fVar32,_X);
              DAT_180423aa0 = 0.0 - (fVar30 * DAT_180381188) / DAT_180380e48;
            }
          }
          lVar8 = *(longlong *)(puVar24 + 0x38);
        }
      }
      *(undefined8 *)(puVar24 + -8) = 0x1801625f3;
      uVar31 = FUN_180160e70(&local_2a0,1);
      *(undefined8 *)(puVar24 + -8) = 0x18016260b;
      FUN_180215fd0(uVar31,local_2a0,(lStack_298 - (longlong)local_2a0 >> 4) * -0x5555555555555555);
      iVar6 = 0;
      *(undefined4 *)(puVar24 + 0x4c) = 0;
      piVar28 = local_2d0;
      piVar12 = DAT_1803e9a70;
      piVar26 = local_2e8;
      if (0 < *(int *)(lVar8 + 0xe8)) {
        do {
          piVar20 = (int *)((longlong)*(int *)(lVar8 + 0xec) + (longlong)iVar6 * 0x10 + lVar8);
          if (((((piVar26 <= piVar20) &&
                (uVar17 = (longlong)piStack_2e0 - (longlong)piVar26, 0xf < uVar17)) &&
               (((ulonglong)((longlong)piVar20 - (longlong)piVar26) <= uVar17 - 0x10 &&
                ((0 < piVar20[1] &&
                 (piVar11 = (int *)(*(longlong *)(puVar24 + 0x70) +
                                    (longlong)*(int *)(*(longlong *)(puVar24 + 0x70) + 0x20) +
                                   (longlong)iVar6 * 8), piVar28 <= piVar11)))))) &&
              (uVar29 = (longlong)piStack_2c8 - (longlong)piVar28, 7 < uVar29)) &&
             ((((((((ulonglong)((longlong)piVar11 - (longlong)piVar28) <= uVar29 - 8 &&
                   (0 < *piVar11)) &&
                  (piVar20 = (int *)((longlong)piVar20[3] + (longlong)piVar20), local_328 = piVar20,
                  piVar26 <= piVar20)) &&
                 ((0x93 < uVar17 &&
                  ((ulonglong)((longlong)piVar20 - (longlong)piVar26) <= uVar17 - 0x94)))) &&
                (0 < piVar20[0x14])) &&
               ((piVar11 = (int *)((longlong)piVar11[1] + (longlong)piVar11), piVar28 <= piVar11 &&
                ((ulonglong)((longlong)piVar11 - (longlong)piVar28) <= uVar29 - 8)))) &&
              ((0 < *piVar11 &&
               (((piVar11 = (int *)((longlong)piVar11[1] + (longlong)piVar11), local_320 = piVar11,
                 piVar28 <= piVar11 && (0xb < uVar29)) &&
                ((ulonglong)((longlong)piVar11 - (longlong)piVar28) <= uVar29 - 0xc)))))))) {
            iVar7 = piVar20[0x15] / 0x30;
            *(int *)(puVar24 + 0x40) = iVar7;
            iVar6 = piVar20[0x12];
            if (*piVar11 <= piVar20[0x12]) {
              iVar6 = *piVar11;
            }
            *(int *)(puVar24 + 0x50) = iVar6;
            uVar17 = 0;
            *(undefined4 *)(puVar24 + 0x48) = 0;
            if (0 < iVar6) {
              do {
                local_330 = (int *)((longlong)piVar20 + (longlong)piVar20[0x13] + uVar17 * 0x74);
                if (((piVar26 <= local_330) &&
                    (0x73 < (ulonglong)((longlong)piStack_2e0 - (longlong)piVar26))) &&
                   ((ulonglong)((longlong)local_330 - (longlong)piVar26) <=
                    ((longlong)piStack_2e0 - (longlong)piVar26) - 0x74U)) {
                  piVar15 = (int *)((longlong)piVar11 + uVar17 * 9 + (longlong)piVar11[1]);
                  *(int **)(puVar24 + 0x78) = piVar15;
                  if (((piVar28 <= piVar15) &&
                      (8 < (ulonglong)((longlong)piStack_2c8 - (longlong)piVar28))) &&
                     ((ulonglong)((longlong)piVar15 - (longlong)piVar28) <=
                      ((longlong)piStack_2c8 - (longlong)piVar28) - 9U)) {
                    iVar7 = local_330[3] + iVar7;
                    local_338 = (longlong)piVar12 - (longlong)DAT_1803e9a68 >> 2;
                    iVar13 = 0;
                    *(undefined4 *)(puVar24 + 0x44) = 0;
                    if (0 < *piVar15) {
                      do {
                        piVar15 = (int *)((longlong)piVar15 +
                                         (longlong)piVar15[1] + (longlong)iVar13 * 0x19);
                        if (((piVar15 < piVar28) ||
                            (uVar17 = (longlong)piStack_2c8 - (longlong)piVar28, uVar17 < 0x19)) ||
                           (uVar17 - 0x19 < (ulonglong)((longlong)piVar15 - (longlong)piVar28)))
                        break;
                        iVar6 = *piVar15;
                        if (((0 < iVar6) && (iVar16 = piVar15[2], 0 < iVar16)) &&
                           (iVar3 = piVar15[4], 0 < iVar3)) {
                          if (((((int *)((longlong)piVar15[1] + (longlong)piVar15) < piVar28) ||
                               (uVar17 < (ulonglong)((longlong)iVar6 * 9))) ||
                              ((uVar17 + (longlong)iVar6 * -9 <
                                (ulonglong)
                                (((longlong)piVar15[1] + (longlong)piVar15) - (longlong)piVar28) ||
                               (((((int *)((longlong)piVar15[3] + (longlong)piVar15) < piVar28 ||
                                  (uVar17 < (ulonglong)((longlong)iVar16 * 2))) ||
                                 (uVar17 + (longlong)iVar16 * -2 <
                                  (ulonglong)
                                  (((longlong)piVar15[3] + (longlong)piVar15) - (longlong)piVar28)))
                                || (((int *)((longlong)piVar15[5] + (longlong)piVar15) < piVar28 ||
                                    (uVar29 = (longlong)iVar3 * 0x1b,
                                    uVar17 <= uVar29 && uVar29 - uVar17 != 0)))))))) ||
                             (uVar17 + (longlong)iVar3 * -0x1b <
                              (ulonglong)
                              (((longlong)piVar15[5] + (longlong)piVar15) - (longlong)piVar28)))
                          break;
                          iVar6 = 0;
                          do {
                            lVar8 = (longlong)iVar6 * 0x1b + (longlong)piVar15[5];
                            if (((-1 < *(int *)(lVar8 + 4 + (longlong)piVar15)) &&
                                (iVar13 = *(int *)(lVar8 + (longlong)piVar15), -1 < iVar13)) &&
                               (*(int *)(lVar8 + 4 + (longlong)piVar15) + iVar13 <= piVar15[2])) {
                              bVar1 = *(byte *)(lVar8 + 0x12 + (longlong)piVar15);
                              if ((bVar1 & 1) == 0) {
                                if (((bVar1 & 2) != 0) && (uVar27 = 0, 2 < iVar13)) {
                                  do {
                                    iVar13 = *(int *)(lVar8 + 4 + (longlong)piVar15);
                                    uVar2 = *(ushort *)
                                             ((longlong)piVar15 +
                                             (longlong)(int)((uVar27 & 1) + iVar13 + uVar27) * 2 +
                                             (longlong)piVar15[3]);
                                    if (((int)(uint)uVar2 < *piVar15) &&
                                       ((iVar16 = (uint)*(ushort *)
                                                         ((longlong)piVar15 +
                                                         (longlong)piVar15[1] + 4 +
                                                         (ulonglong)uVar2 * 8 + (ulonglong)uVar2) +
                                                  iVar7, -1 < iVar16 &&
                                        (iVar16 < (int)(DAT_1803eb368 - DAT_1803eb360 >> 5))))) {
                                      *(int *)(puVar24 + 0x30) = iVar16;
                                      if (piVar12 == DAT_1803e9a78) {
                                        *(undefined8 *)(puVar24 + -8) = 0x180162c6c;
                                        FUN_180229d20(&DAT_1803e9a68,piVar12,puVar24 + 0x30);
                                      }
                                      else {
                                        *piVar12 = iVar16;
                                        DAT_1803e9a70 = DAT_1803e9a70 + 1;
                                      }
                                      uVar2 = *(ushort *)
                                               ((longlong)piVar15 +
                                               (longlong)(int)((iVar13 - (uVar27 & 1)) + uVar27) * 2
                                               + (longlong)piVar15[3] + 2);
                                      piVar12 = DAT_1803e9a70;
                                      if (((*piVar15 <= (int)(uint)uVar2) ||
                                          (iVar13 = (uint)*(ushort *)
                                                           ((longlong)piVar15 +
                                                           (longlong)piVar15[1] + 4 +
                                                           (ulonglong)uVar2 * 8 + (ulonglong)uVar2)
                                                    + iVar7, iVar13 < 0)) ||
                                         ((int)(DAT_1803eb368 - DAT_1803eb360 >> 5) <= iVar13))
                                      goto LAB_180162d7f;
                                      *(int *)(puVar24 + 0x30) = iVar13;
                                      if (DAT_1803e9a70 == DAT_1803e9a78) {
                                        *(undefined8 *)(puVar24 + -8) = 0x180162cf7;
                                        FUN_180229d20(&DAT_1803e9a68,DAT_1803e9a70,puVar24 + 0x30);
                                      }
                                      else {
                                        *DAT_1803e9a70 = iVar13;
                                        DAT_1803e9a70 = DAT_1803e9a70 + 1;
                                      }
                                      uVar2 = *(ushort *)
                                               ((longlong)piVar15 +
                                               (longlong)
                                               (int)(*(int *)(lVar8 + 4 + (longlong)piVar15) +
                                                    uVar27) * 2 + (longlong)piVar15[3] + 4);
                                      piVar12 = DAT_1803e9a70;
                                      if (((*piVar15 <= (int)(uint)uVar2) ||
                                          (iVar13 = (uint)*(ushort *)
                                                           ((longlong)piVar15 +
                                                           (longlong)piVar15[1] + 4 +
                                                           (ulonglong)uVar2 * 8 + (ulonglong)uVar2)
                                                    + iVar7, iVar13 < 0)) ||
                                         ((int)(DAT_1803eb368 - DAT_1803eb360 >> 5) <= iVar13))
                                      goto LAB_180162d7f;
                                      *(int *)(puVar24 + 0x30) = iVar13;
                                      if (DAT_1803e9a70 == DAT_1803e9a78) {
                                        *(undefined8 *)(puVar24 + -8) = 0x180162d76;
                                        FUN_180229d20(&DAT_1803e9a68,DAT_1803e9a70,puVar24 + 0x30);
                                        piVar12 = DAT_1803e9a70;
                                      }
                                      else {
                                        *DAT_1803e9a70 = iVar13;
                                        piVar12 = DAT_1803e9a70 + 1;
                                        DAT_1803e9a70 = piVar12;
                                      }
                                    }
                                    else {
LAB_180162d7f:
                                      for (uVar17 = (ulonglong)
                                                    ((longlong)piVar12 - (longlong)DAT_1803e9a68 >>
                                                    2) % 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                                        piVar12 = piVar12 + -1;
                                        DAT_1803e9a70 = piVar12;
                                      }
                                    }
                                    iVar13 = uVar27 + 3;
                                    uVar27 = uVar27 + 1;
                                  } while (iVar13 < *(int *)(lVar8 + (longlong)piVar15));
                                }
                              }
                              else {
                                iVar16 = 0;
                                if (2 < iVar13) {
                                  do {
                                    uVar2 = *(ushort *)
                                             ((longlong)piVar15 +
                                             (longlong)
                                             (*(int *)(lVar8 + 4 + (longlong)piVar15) + iVar16) * 2
                                             + (longlong)piVar15[3]);
                                    if ((((int)(uint)uVar2 < *piVar15) &&
                                        (iVar13 = (uint)*(ushort *)
                                                         ((longlong)piVar15 +
                                                         (longlong)piVar15[1] + 4 +
                                                         (ulonglong)uVar2 * 8 + (ulonglong)uVar2) +
                                                  iVar7, -1 < iVar13)) &&
                                       (iVar13 < (int)(DAT_1803eb368 - DAT_1803eb360 >> 5))) {
                                      *(int *)(puVar24 + 0x30) = iVar13;
                                      if (piVar12 == DAT_1803e9a78) {
                                        *(undefined8 *)(puVar24 + -8) = 0x180162a5a;
                                        FUN_180229d20(&DAT_1803e9a68,piVar12,puVar24 + 0x30);
                                      }
                                      else {
                                        *piVar12 = iVar13;
                                        DAT_1803e9a70 = DAT_1803e9a70 + 1;
                                      }
                                      uVar2 = *(ushort *)
                                               ((longlong)piVar15 +
                                               (longlong)
                                               (*(int *)(lVar8 + 4 + (longlong)piVar15) + iVar16) *
                                               2 + (longlong)piVar15[3] + 2);
                                      piVar12 = DAT_1803e9a70;
                                      if (((*piVar15 <= (int)(uint)uVar2) ||
                                          (iVar13 = (uint)*(ushort *)
                                                           ((longlong)piVar15 +
                                                           (longlong)piVar15[1] + 4 +
                                                           (ulonglong)uVar2 * 8 + (ulonglong)uVar2)
                                                    + iVar7, iVar13 < 0)) ||
                                         ((int)(DAT_1803eb368 - DAT_1803eb360 >> 5) <= iVar13))
                                      goto LAB_180162b74;
                                      *(int *)(puVar24 + 0x30) = iVar13;
                                      if (DAT_1803e9a70 == DAT_1803e9a78) {
                                        *(undefined8 *)(puVar24 + -8) = 0x180162aec;
                                        FUN_180229d20(&DAT_1803e9a68,DAT_1803e9a70,puVar24 + 0x30);
                                      }
                                      else {
                                        *DAT_1803e9a70 = iVar13;
                                        DAT_1803e9a70 = DAT_1803e9a70 + 1;
                                      }
                                      uVar2 = *(ushort *)
                                               ((longlong)piVar15 +
                                               (longlong)
                                               (*(int *)(lVar8 + 4 + (longlong)piVar15) + iVar16) *
                                               2 + (longlong)piVar15[3] + 4);
                                      piVar12 = DAT_1803e9a70;
                                      if (((*piVar15 <= (int)(uint)uVar2) ||
                                          (iVar13 = (uint)*(ushort *)
                                                           ((longlong)piVar15 +
                                                           (longlong)piVar15[1] + 4 +
                                                           (ulonglong)uVar2 * 8 + (ulonglong)uVar2)
                                                    + iVar7, iVar13 < 0)) ||
                                         ((int)(DAT_1803eb368 - DAT_1803eb360 >> 5) <= iVar13))
                                      goto LAB_180162b74;
                                      *(int *)(puVar24 + 0x30) = iVar13;
                                      if (DAT_1803e9a70 == DAT_1803e9a78) {
                                        *(undefined8 *)(puVar24 + -8) = 0x180162b6b;
                                        FUN_180229d20(&DAT_1803e9a68,DAT_1803e9a70,puVar24 + 0x30);
                                        piVar12 = DAT_1803e9a70;
                                      }
                                      else {
                                        *DAT_1803e9a70 = iVar13;
                                        piVar12 = DAT_1803e9a70 + 1;
                                        DAT_1803e9a70 = piVar12;
                                      }
                                    }
                                    else {
LAB_180162b74:
                                      for (uVar17 = (ulonglong)
                                                    ((longlong)piVar12 - (longlong)DAT_1803e9a68 >>
                                                    2) % 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                                        piVar12 = piVar12 + -1;
                                        DAT_1803e9a70 = piVar12;
                                      }
                                    }
                                    iVar13 = iVar16 + 5;
                                    iVar16 = iVar16 + 3;
                                  } while (iVar13 < *(int *)(lVar8 + (longlong)piVar15));
                                }
                              }
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < piVar15[4]);
                          iVar13 = *(int *)(puVar24 + 0x44);
                          piVar28 = local_2d0;
                        }
                        iVar13 = iVar13 + 1;
                        *(int *)(puVar24 + 0x44) = iVar13;
                        piVar15 = *(int **)(puVar24 + 0x78);
                      } while (iVar13 < *piVar15);
                      uVar17 = (ulonglong)*(uint *)(puVar24 + 0x48);
                      iVar6 = *(int *)(puVar24 + 0x50);
                      piVar11 = local_320;
                      piVar26 = local_2e8;
                      piVar20 = local_328;
                    }
                    iVar7 = (int)((longlong)piVar12 - (longlong)DAT_1803e9a68 >> 2) - (int)local_338
                    ;
                    iVar7 = iVar7 / 3 + (iVar7 >> 0x1f) +
                            (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >>
                                 0x1f);
                    lVar8 = *(longlong *)(puVar24 + 0x38);
                    if (0 < iVar7) {
                      *(int *)(puVar24 + 0x58) = (int)local_338;
                      *(int *)(puVar24 + 0x5c) = iVar7;
                      iVar7 = *local_330;
                      *(undefined8 *)(puVar24 + -8) = 0x180162e49;
                      uVar31 = FUN_1801614c0(lVar8,&local_2e8,iVar7);
                      puVar18 = DAT_1803e9a88;
                      *(undefined4 *)(puVar24 + 0x60) = uVar31;
                      if (DAT_1803e9a88 == DAT_1803e9a90) {
                        *(undefined8 *)(puVar24 + -8) = 0x180162e7e;
                        FUN_180223610(extraout_XMM0_Da_02,DAT_1803e9a88,puVar24 + 0x58);
                        piVar28 = local_2d0;
                        piVar12 = DAT_1803e9a70;
                        piVar26 = local_2e8;
                      }
                      else {
                        *DAT_1803e9a88 = *(undefined8 *)(puVar24 + 0x58);
                        *(undefined4 *)(puVar18 + 1) = uVar31;
                        DAT_1803e9a88 = (undefined8 *)((longlong)DAT_1803e9a88 + 0xc);
                        piVar28 = local_2d0;
                        piVar12 = DAT_1803e9a70;
                        piVar26 = local_2e8;
                      }
                    }
                    iVar7 = *(int *)(puVar24 + 0x40);
                  }
                }
                uVar27 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar27;
                *(uint *)(puVar24 + 0x48) = uVar27;
              } while ((int)uVar27 < iVar6);
            }
          }
          iVar6 = *(int *)(puVar24 + 0x4c) + 1;
          *(int *)(puVar24 + 0x4c) = iVar6;
        } while (iVar6 < *(int *)(lVar8 + 0xe8));
      }
      uVar17 = (longlong)piVar12 - (longlong)DAT_1803e9a68 >> 2;
      if (uVar17 < 3) {
        *(undefined8 *)(puVar24 + -8) = 0x180162ede;
        FUN_180014410("[MP] \'%s\': no triangles\n",*(undefined8 *)(puVar24 + 0x68));
        lVar8 = DAT_1803ea2c8;
        if (DAT_1803eb360 != DAT_1803eb368) {
          DAT_1803eb368 = DAT_1803eb360;
        }
        if (DAT_1803e9a68 != DAT_1803e9a70) {
          DAT_1803e9a70 = DAT_1803e9a68;
        }
        if (DAT_1803e9a80 != DAT_1803e9a88) {
          DAT_1803e9a88 = DAT_1803e9a80;
        }
        lVar19 = DAT_1803ea2c0;
        if (DAT_1803ea2c0 != DAT_1803ea2c8) {
          do {
            *(undefined8 *)(puVar24 + -8) = 0x180162f3e;
            FUN_18020e450(lVar19);
            lVar19 = lVar19 + 0x20;
          } while (lVar19 != lVar8);
          DAT_1803ea2c8 = DAT_1803ea2c0;
        }
        if (DAT_1803eb808 != DAT_1803eb810) {
          DAT_1803eb810 = DAT_1803eb808;
        }
        if (DAT_1803e9a50 != DAT_1803e9a58) {
          DAT_1803e9a58 = DAT_1803e9a50;
        }
        if (DAT_1803edd30 != DAT_1803edd38) {
          DAT_1803edd38 = DAT_1803edd30;
        }
        DAT_180423a6c = 0;
        uVar21 = 0;
      }
      else {
        *(double *)(puVar24 + 0x28) = (double)DAT_1805c5a08;
        *(double *)(puVar24 + 0x20) = (double)DAT_1805c3938;
        *(undefined8 *)(puVar24 + -8) = 0x18016300d;
        FUN_180014410("[MP] \'%s\': %zu verts, %zu tris, bbox z %.0f..%.0f\n",
                      *(undefined8 *)(puVar24 + 0x68),DAT_1803eb368 - DAT_1803eb360 >> 5,uVar17 / 3)
        ;
        uVar21 = 1;
      }
      if (local_2a0 != (void *)0x0) {
        _Memory = local_2a0;
        if ((0xfff < (ulonglong)((local_290 - (longlong)local_2a0 >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)local_2a0 + -8),
           0x1f < (ulonglong)((longlong)local_2a0 + (-8 - (longlong)_Memory)))) goto LAB_180163067;
        *(undefined8 *)(puVar24 + -8) = 0x180163055;
        free(_Memory);
        local_2a0 = (void *)0x0;
        lStack_298 = 0;
        local_290 = 0;
      }
    }
    if (local_300 != (undefined8 *)0x0) {
      puVar18 = local_300;
      if ((0xfff < (ulonglong)(((longlong)local_2f0 - (longlong)local_300 >> 3) * 8)) &&
         (puVar18 = (undefined8 *)local_300[-1],
         0x1f < (ulonglong)((longlong)local_300 + (-8 - (longlong)puVar18)))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar23 = puVar24 + 8;
        goto LAB_1801630cf;
      }
      *(undefined8 *)(puVar24 + -8) = 0x1801630b6;
      free(puVar18);
      local_300 = (undefined8 *)0x0;
      puStack_2f8 = (undefined8 *)0x0;
      local_2f0 = (undefined8 *)0x0;
    }
  }
  if (local_2d0 == (int *)0x0) {
LAB_18016316e:
    if (local_2b8 != (int *)0x0) {
      piVar12 = local_2b8;
      if ((0xfff < (ulonglong)(local_2a8 - (longlong)local_2b8)) &&
         (piVar12 = *(int **)(local_2b8 + -2),
         0x1f < (ulonglong)((longlong)local_2b8 + (-8 - (longlong)piVar12)))) goto LAB_18016323e;
      *(undefined8 *)(puVar24 + -8) = 0x1801631a8;
      free(piVar12);
      local_2b8 = (int *)0x0;
      piStack_2b0 = (int *)0x0;
      local_2a8 = 0;
    }
    if (local_2e8 == (int *)0x0) {
LAB_1801631fe:
      *(undefined8 *)(puVar24 + -8) = 0x180163210;
      return uVar21;
    }
    piVar12 = local_2e8;
    if (((ulonglong)(local_2d8 - (longlong)local_2e8) < 0x1000) ||
       (piVar12 = *(int **)(local_2e8 + -2),
       (ulonglong)((longlong)local_2e8 + (-8 - (longlong)piVar12)) < 0x20)) {
      *(undefined8 *)(puVar24 + -8) = 0x1801631ee;
      free(piVar12);
      goto LAB_1801631fe;
    }
  }
  else {
    piVar12 = local_2d0;
    if (((ulonglong)(local_2c0 - (longlong)local_2d0) < 0x1000) ||
       (piVar12 = *(int **)(local_2d0 + -2),
       (ulonglong)((longlong)local_2d0 + (-8 - (longlong)piVar12)) < 0x20)) {
      *(undefined8 *)(puVar24 + -8) = 0x18016315e;
      free(piVar12);
      local_2d0 = (int *)0x0;
      piStack_2c8 = (int *)0x0;
      local_2c0 = 0;
      goto LAB_18016316e;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar24 = puVar24 + 8;
LAB_18016323e:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar24 = puVar24 + 8;
  }
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar25 = puVar24 + 8;
LAB_18016324c:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar25 + -8) = &UNK_180163251;
  FUN_180012fe0();
  while (pcVar9 = pcVar9 + 1, *pcVar9 != '\0') {
LAB_1801622c0:
    *(undefined8 *)(puVar24 + -8) = 0x1801622d6;
    iVar7 = _strnicmp(pcVar9,"r_upperarm",10);
    uVar31 = extraout_XMM0_Da_01;
    if (iVar7 == 0) {
      if (DAT_1803e9330 < 0) {
        DAT_1803e9330 = iVar6;
      }
      goto LAB_1801622f5;
    }
  }
LAB_1801622e6:
  if (DAT_1803e932c < 0) {
    DAT_1803e932c = iVar6;
  }
LAB_1801622f5:
  iVar6 = iVar6 + 1;
  if ((int)(DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x1642c859 <= iVar6) goto LAB_180162315;
  goto LAB_180162260;
}


