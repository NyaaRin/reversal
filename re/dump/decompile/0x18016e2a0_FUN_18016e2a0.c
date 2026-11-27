// 0x18016e2a0  FUN_18016e2a0
// size=5335 thunk=false
// signature: undefined FUN_18016e2a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18016e2a0(longlong param_1)

{
  void *_Src;
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *_Str;
  size_t sVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  void *_Dst;
  undefined1 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined8 *******pppppppuVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  ulonglong uVar25;
  void *pvVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [24];
  longlong local_388;
  undefined1 *local_380;
  undefined8 local_378;
  uint local_368;
  char local_363;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340 [32];
  longlong *local_320;
  int *local_318;
  undefined1 *local_310;
  longlong local_300;
  longlong local_2f0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_280 [4];
  longlong local_260 [5];
  undefined8 *******local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  ulonglong local_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined8 *******local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_148 [32];
  undefined1 local_128 [33];
  char local_107;
  char local_f8 [192];
  ulonglong local_38;
  
  puVar19 = auStack_3a8;
  puVar15 = auStack_3a8;
  puVar20 = auStack_3a8;
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_3a8;
  _Dst = (void *)0x0;
  uVar22 = 0;
  uVar21 = 0;
  local_368 = 0;
  if (*(longlong *)(param_1 + 0x168) != *(longlong *)(param_1 + 0x170)) {
    *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x168);
  }
  *(undefined1 *)(param_1 + 0xe4) = 0;
  local_300 = param_1;
  if (DAT_1803fcb80 != '\0') {
    uVar7 = FUN_18016de30(param_1,&local_360);
    FUN_18020e8a0(param_1 + 0x60,uVar7);
    puVar16 = &local_360;
    puVar20 = auStack_3a8;
    goto LAB_18016f770;
  }
  if ((((DAT_1803fcb60 == (longlong *)0x0) || (BVar3 = IsBadReadPtr(DAT_1803fcb60,8), BVar3 != 0))
      || (BVar3 = IsBadReadPtr((void *)*DAT_1803fcb60,8), BVar3 != 0)) ||
     (local_2f0 = param_1, cVar2 = (**(code **)(*DAT_1803fcb60 + 0x420))(), plVar9 = DAT_1803fcb60,
     cVar2 == '\0')) {
    local_388 = *(longlong *)(param_1 + 0x98);
    if (local_388 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_378 = 1;
    local_380 = &DAT_18033e9cc;
    FUN_18020e930(local_280);
    local_368 = 0x100;
    plVar9 = (longlong *)(param_1 + 0xa8);
    if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
      plVar9 = (longlong *)*plVar9;
    }
    puVar16 = (undefined8 *)FUN_18021aef0(local_280,plVar9,*(undefined8 *)(param_1 + 0xb8));
    local_2c8 = *puVar16;
    uStack_2c0 = puVar16[1];
    local_2b8 = puVar16[2];
    uStack_2b0 = puVar16[3];
    puVar16[2] = 0;
    puVar16[3] = 0xf;
    *(undefined1 *)puVar16 = 0;
    local_368 = 0x300;
    FUN_18020e8a0(param_1 + 0x60,&local_2c8);
    local_368 = 0x100;
    FUN_18020e450(&local_2c8);
    local_368 = 0;
    puVar16 = local_280;
    goto LAB_18016f770;
  }
  local_260[2] = 0;
  local_260[3] = 0;
  local_260[4] = 0xf;
  local_260[1] = 0;
  piVar24 = (int *)(param_1 + 200);
  local_318 = piVar24;
  switch(*piVar24) {
  case 0:
switchD_18016e3f6_caseD_0:
    _Str = (char *)FUN_18001f750(plVar9);
    goto LAB_18016e400;
  case 1:
    uVar5 = FUN_18001c680(DAT_1803fcb60);
    uVar7 = FUN_180013ba0(&local_360,uVar5);
    FUN_18020e8a0(local_260 + 1,uVar7);
    FUN_18020e450(&local_360);
    uVar22 = uVar21;
    break;
  case 2:
    uVar5 = FUN_18001c770(DAT_1803fcb60);
    uVar7 = FUN_180013ba0(&local_360,uVar5);
    FUN_18020e8a0(local_260 + 1,uVar7);
    FUN_18020e450(&local_360);
    uVar22 = uVar21;
    break;
  case 3:
    _Str = (char *)FUN_18001f960(DAT_1803fcb60);
LAB_18016e400:
    sVar11 = strlen(_Str);
    goto LAB_18016f474;
  case 4:
    FUN_18016e030(param_1,&local_1f8,DAT_1803fcb60);
    if (local_1e8 == 0) {
      puVar17 = &local_1d8;
      if (0xf < local_1c0) {
        puVar17 = (uint *)CONCAT44(uStack_1d4,local_1d8);
      }
      FUN_180212700(local_260 + 1,puVar17,CONCAT44(uStack_1c4,uStack_1c8));
      FUN_18020e450(&local_1d8);
      FUN_18020e450(&local_1f8);
      uVar22 = uVar21;
    }
    else if ((local_1b8._1_1_ == '\0') || (*(int *)(param_1 + 0xf8) == 2)) {
      pppppppuVar18 = &local_1f8;
      if (0xf < local_1e0) {
        pppppppuVar18 = local_1f8;
      }
      FUN_180212700(local_260 + 1,pppppppuVar18);
      FUN_18020e450(&local_1d8);
      FUN_18020e450(&local_1f8);
      uVar22 = uVar21;
    }
    else {
      if (*(int *)(param_1 + 0xf8) == 1) {
        uVar7 = FUN_18002cfb0(local_340,&local_1f8,&DAT_18034fefc);
        local_368 = 1;
        uVar7 = FUN_1801fc800(&local_238,uVar7,&local_1d8);
        uVar22 = 3;
      }
      else {
        uVar7 = FUN_18016d4c0(&local_360,&local_1d8);
        uVar22 = 4;
      }
      local_368 = uVar22;
      FUN_18020e8a0(local_260 + 1,uVar7);
      if ((uVar22 & 4) != 0) {
        uVar22 = uVar22 & 0xfffffffb;
        local_368 = uVar22;
        FUN_18020e450(&local_360);
      }
      if ((uVar22 & 2) != 0) {
        uVar22 = uVar22 & 0xfffffffd;
        local_368 = uVar22;
        FUN_18020e450(&local_238);
      }
      if ((uVar22 & 1) != 0) {
        uVar22 = uVar22 & 0xfffffffe;
        local_368 = uVar22;
        FUN_18020e450(local_340);
      }
      FUN_18020e450(&local_1d8);
      FUN_18020e450(&local_1f8);
    }
    break;
  case 5:
    local_260[0] = FUN_18001dbf0(DAT_1803fcb60);
    if (local_260[0] == 0) {
      sVar11 = 4;
      _Str = "None";
      goto LAB_18016f474;
    }
    local_320 = local_260;
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_18016f800(&local_320,&local_238);
      pppppppuVar18 = &local_238;
      if (0xf < local_220) {
        pppppppuVar18 = local_238;
      }
      cVar2 = FUN_18001ef10(local_260[0],pppppppuVar18,local_f8);
      if (cVar2 == '\0') {
        local_310 = local_340;
        uVar7 = FUN_18016d4c0(local_340,&local_238);
        uVar7 = FUN_18016f960(extraout_XMM0_Qa,&local_360,uVar7);
        FUN_18020e8a0(local_260 + 1,uVar7);
        FUN_18020e450(&local_360);
      }
      else {
        sVar11 = strlen(local_f8);
        FUN_180212700(local_260 + 1,local_f8,sVar11);
      }
      FUN_18020e450(&local_238);
      uVar22 = uVar21;
    }
    else {
      local_310 = local_340;
      uVar7 = FUN_18016f800(&local_320,local_340);
      uVar7 = FUN_18016f960(extraout_XMM0_Qa_00,&local_360,uVar7);
      FUN_18020e8a0(local_260 + 1,uVar7);
      FUN_18020e450(&local_360);
      uVar22 = uVar21;
    }
    break;
  case 6:
    iVar4 = FUN_18001c680(DAT_1803fcb60);
    iVar23 = FUN_18001c770(plVar9);
    if (iVar23 < 1) {
      sVar11 = 2;
      _Str = "?%";
      goto LAB_18016f474;
    }
    uVar7 = FUN_180013ba0(&local_360,(int)(((float)iVar4 * DAT_180381120) / (float)iVar23));
    uVar7 = FUN_1801fc680(local_340,uVar7,&DAT_180361698);
    FUN_18020e8a0(local_260 + 1,uVar7);
    FUN_18020e450(local_340);
    FUN_18020e450(&local_360);
    uVar22 = uVar21;
    break;
  case 7:
    if (DAT_180381278 <= DAT_1803fcb68) {
      uVar7 = FUN_180013ba0(&local_360,(int)(DAT_1803fcb68 / DAT_180381278));
      uVar7 = FUN_1801fc680(local_340,uVar7,&DAT_1803616a4);
      FUN_18020e8a0(local_260 + 1,uVar7);
      FUN_18020e450(local_340);
      FUN_18020e450(&local_360);
      uVar22 = uVar21;
    }
    else {
      uVar7 = FUN_180013ba0(&local_360,(int)DAT_1803fcb68);
      uVar7 = FUN_1801fc680(local_340,uVar7,&DAT_1803616a0);
      FUN_18020e8a0(local_260 + 1,uVar7);
      FUN_18020e450(local_340);
      FUN_18020e450(&local_360);
      uVar22 = uVar21;
    }
    break;
  case 8:
    local_363 = '\0';
    if ((DAT_1803fcb60 != (longlong *)0x0) &&
       (plVar9 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))(), plVar9 != (longlong *)0x0)) {
      uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
      local_363 = FUN_1800c4740(uVar5);
      if (local_363 != '\0') {
        FUN_180212700(local_260 + 1,"PROTECTED",9);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0xcc);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xd4);
        uVar22 = uVar21;
        break;
      }
    }
LAB_18016e961:
    sVar11 = 0;
    _Str = "";
    goto LAB_18016f474;
  default:
    if (*piVar24 == 9) {
      plVar10 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))(DAT_1803fcb60);
      if (plVar10 != (longlong *)0x0) {
        uVar5 = FUN_18001f7d0(plVar9);
        uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
        _Str = (char *)FUN_180039180(uVar6,uVar5);
        if ((_Str != (char *)0x0) && (*_Str != '\0')) {
          sVar11 = strlen(_Str);
          goto LAB_18016f474;
        }
      }
      goto switchD_18016e3f6_caseD_0;
    }
    sVar11 = 7;
    _Str = "Invalid";
    goto LAB_18016f474;
  case 10:
    iVar4 = FUN_18001cdd0(DAT_1803fcb60);
    if (iVar4 < 1) goto LAB_18016e961;
    iVar23 = FUN_18001d180(plVar9);
    if (iVar23 < 1) {
      uVar7 = FUN_180013ba0(local_340,iVar4);
      FUN_18020e8a0(local_260 + 1,uVar7);
      FUN_18020e450(local_340);
      uVar22 = uVar21;
    }
    else {
      uVar7 = FUN_180013ba0(&local_360,(int)(((float)iVar4 * DAT_180381120) / (float)iVar23));
      uVar7 = FUN_1801fc680(local_340,uVar7,&DAT_180361698);
      FUN_18020e8a0(local_260 + 1,uVar7);
      FUN_18020e450(local_340);
      FUN_18020e450(&local_360);
      uVar22 = uVar21;
    }
    break;
  case 0xb:
    lVar14 = FUN_18016d630(param_1);
    if (*(char *)(lVar14 + 0x18) == '\0') {
      sVar11 = 0;
      _Str = "";
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
      if (plVar9 != (longlong *)0x0) {
        uStack_230 = 0;
        local_228 = 0;
        local_220 = 0xf;
        local_238 = (undefined8 *******)0x0;
        uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
        cVar2 = FUN_180038080(uVar5,lVar14,&local_238);
        if (cVar2 == '\0') {
          pppppppuVar18 = (undefined8 *******)&DAT_18033e5ea;
          uVar7 = 0;
        }
        else {
          pppppppuVar18 = &local_238;
          uVar7 = local_228;
          if (0xf < local_220) {
            pppppppuVar18 = local_238;
          }
        }
        FUN_180212700(local_260 + 1,pppppppuVar18,uVar7);
        FUN_18020e450(&local_238);
        uVar22 = uVar21;
        break;
      }
      sVar11 = 0;
      _Str = "";
    }
LAB_18016f474:
    FUN_180212700(local_260 + 1,_Str,sVar11);
    uVar22 = 0;
    break;
  case 0xc:
    FUN_18016e030(param_1,local_148,DAT_1803fcb60);
    if (local_107 == '\0') {
      local_360 = 0;
      uStack_358 = 0;
      local_350 = 0;
      local_348 = 0;
      FUN_18001d080(&local_360,&DAT_18033e5ea,0);
      puVar16 = &local_360;
      uVar22 = 0x10;
    }
    else {
      puVar16 = (undefined8 *)FUN_18016d4c0(local_340,local_148);
      uVar22 = 8;
    }
    local_368 = uVar22;
    FUN_18020e8a0(local_260 + 1,puVar16);
    if ((uVar22 & 0x10) != 0) {
      uVar22 = uVar22 & 0xffffffef;
      local_368 = uVar22;
      FUN_18020e450(&local_360);
    }
    if ((uVar22 & 8) != 0) {
      uVar22 = uVar22 & 0xfffffff7;
      local_368 = uVar22;
      FUN_18020e450(local_340);
    }
    FUN_18020e450(local_128);
    FUN_18020e450(local_148);
    break;
  case 0xd:
    plVar9 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))(DAT_1803fcb60);
    if (plVar9 == (longlong *)0x0) {
      sVar11 = 0;
      _Str = "";
      goto LAB_18016f474;
    }
    uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
    plVar9 = (longlong *)FUN_18015e580(uVar5);
    if (*plVar9 == plVar9[1]) {
      FUN_180212700(local_260 + 1,&DAT_18033e5ea,0);
      piVar24 = local_318;
      uVar22 = uVar21;
      break;
    }
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_218 = 0;
    lStack_210 = 0;
    local_208 = 0;
    FUN_18020d650(&local_1a8,(plVar9[1] - *plVar9 >> 4) * -0x3333333333333333);
    uVar25 = (plVar9[1] - *plVar9 >> 4) * -0x3333333333333333;
    puVar20 = auStack_3a8;
    if ((ulonglong)(local_208 - local_218) <= uVar25 && uVar25 - (local_208 - local_218) != 0) {
      if (0x7fffffffffffffff < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      local_260[0] = lStack_210 - local_218;
      pvVar26 = _Dst;
      if (uVar25 != 0) {
        if (uVar25 < 0x1000) {
          pvVar26 = (void *)FUN_1802d8350(uVar25);
          puVar15 = auStack_3a8;
        }
        else {
          if (uVar25 + 0x27 <= uVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_180012fe0();
          }
          lVar14 = FUN_1802d8350();
          if (lVar14 == 0) {
            pcVar1 = (code *)swi(0x29);
            lVar14 = (*pcVar1)(5);
            puVar19 = auStack_3a0;
          }
          pvVar26 = (void *)(lVar14 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)pvVar26 - 8) = lVar14;
          puVar15 = puVar19;
        }
      }
      *(undefined1 **)(puVar15 + 0x100) = puVar15 + 400;
      *(void **)(puVar15 + 0x108) = pvVar26;
      *(ulonglong *)(puVar15 + 0x110) = uVar25;
      _Src = *(void **)(puVar15 + 400);
      *(void **)(puVar15 + 0x118) = _Src;
      *(undefined8 *)(puVar15 + -8) = 0x18016ed6f;
      memmove(pvVar26,_Src,*(longlong *)(puVar15 + 0x198) - (longlong)_Src);
      *(undefined8 *)(puVar15 + 0x108) = 0;
      *(undefined8 *)(puVar15 + -8) = 0x18016ed92;
      FUN_18022c3f0(puVar15 + 400,pvVar26,*(undefined8 *)(puVar15 + 0x148),uVar25);
      puVar20 = puVar15;
    }
    lVar14 = *plVar9;
    *(longlong *)(puVar20 + 0xb0) = lVar14;
    lVar8 = plVar9[1];
    *(longlong *)(puVar20 + 0x148) = lVar8;
    while (lVar14 != lVar8) {
      if ((*(char *)(param_1 + 0x10d) == '\0') || (*(char *)(lVar14 + 0x4c) == '\0')) {
        lVar8 = lVar14 + 8;
        *(undefined8 *)(puVar20 + -8) = 0x18016edf1;
        cVar2 = FUN_18016d980(param_1 + 0x110,lVar8);
        if (cVar2 == '\0') {
          *(undefined8 *)(puVar20 + -8) = 0x18016ee1d;
          cVar2 = FUN_18016d980(param_1 + 0x130,lVar8);
          puVar20[0x44] = cVar2;
          if (((*(char *)(param_1 + 0x150) == '\0') || (*(longlong *)(param_1 + 0x140) == 0)) ||
             (cVar2 != '\0')) {
            if (*(int *)(param_1 + 0x104) == 1) {
              lVar8 = lVar14 + 0x28;
            }
            *(undefined8 *)(puVar20 + -8) = 0x18016ee6c;
            FUN_18016d4c0(puVar20 + 0x238,lVar8);
            if (*(longlong *)(puVar20 + 0x248) == 0) {
              *(undefined8 *)(puVar20 + -8) = 0x18016ee85;
              FUN_18020e450(puVar20 + 0x238);
              lVar8 = *(longlong *)(puVar20 + 0x148);
              lVar14 = lVar14 + 0x50;
              *(longlong *)(puVar20 + 0xb0) = lVar14;
            }
            else {
              if ((*(char *)(param_1 + 0x10c) != '\0') && (-1 < *(int *)(lVar14 + 0x48))) {
                *(undefined8 *)(puVar20 + -8) = 0x18016eec0;
                uVar7 = FUN_180013ba0(puVar20 + 0x170);
                *(undefined8 *)(puVar20 + -8) = 0x18016eed5;
                uVar7 = FUN_1801fd1b0(puVar20 + 0x48,&DAT_1803616b4,uVar7);
                *(undefined8 *)(puVar20 + -8) = 0x18016eeea;
                puVar16 = (undefined8 *)FUN_1801fc680(puVar20 + 0x68,uVar7,&DAT_18035e784);
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar16 = (undefined8 *)*puVar16;
                }
                *(undefined8 *)(puVar20 + -8) = 0x18016ef09;
                FUN_18021aef0(puVar20 + 0x238,puVar16);
                *(undefined8 *)(puVar20 + -8) = 0x18016ef14;
                FUN_18020e450(puVar20 + 0x68);
                *(undefined8 *)(puVar20 + -8) = 0x18016ef1f;
                FUN_18020e450(puVar20 + 0x48);
                *(undefined8 *)(puVar20 + -8) = 0x18016ef2d;
                FUN_18020e450(puVar20 + 0x170);
              }
              if ((*(char *)(param_1 + 0x10e) != '\0') && (*(char *)(lVar14 + 0x4c) != '\0')) {
                *(undefined8 *)(puVar20 + -8) = 0x18016ef59;
                uVar7 = FUN_1801fd120(puVar20 + 0xc0,&DAT_1803616b8);
                *(undefined8 *)(puVar20 + -8) = 0x18016ef6a;
                FUN_18020e8a0(puVar20 + 0x238,uVar7);
                *(undefined8 *)(puVar20 + -8) = 0x18016ef78;
                FUN_18020e450(puVar20 + 0xc0);
              }
              *(undefined8 *)(puVar20 + -8) = 0x18016ef8d;
              FUN_18020d6f0(puVar20 + 0x200,puVar20 + 0x238);
              puVar20[0x46] = puVar20[0x44];
              if (*(undefined1 **)(puVar20 + 0x198) == *(undefined1 **)(puVar20 + 0x1a0)) {
                *(undefined8 *)(puVar20 + -8) = 0x18016efc6;
                FUN_180222ae0(puVar20 + 400);
              }
              else {
                **(undefined1 **)(puVar20 + 0x198) = puVar20[0x44];
                *(longlong *)(puVar20 + 0x198) = *(longlong *)(puVar20 + 0x198) + 1;
              }
              *(undefined8 *)(puVar20 + -8) = 0x18016efd4;
              FUN_18020e450(puVar20 + 0x238);
              lVar8 = *(longlong *)(puVar20 + 0x148);
              lVar14 = lVar14 + 0x50;
              *(longlong *)(puVar20 + 0xb0) = lVar14;
            }
          }
          else {
            lVar8 = *(longlong *)(puVar20 + 0x148);
            lVar14 = lVar14 + 0x50;
            *(longlong *)(puVar20 + 0xb0) = lVar14;
          }
        }
        else {
          lVar8 = *(longlong *)(puVar20 + 0x148);
          lVar14 = lVar14 + 0x50;
          *(longlong *)(puVar20 + 0xb0) = lVar14;
        }
      }
      else {
        lVar14 = lVar14 + 0x50;
        *(longlong *)(puVar20 + 0xb0) = lVar14;
      }
    }
    if (*(longlong *)(puVar20 + 0x200) == *(longlong *)(puVar20 + 0x208)) {
      *(undefined8 *)(puVar20 + -8) = 0x18016f019;
      FUN_180212700(puVar20 + 0x150,&DAT_18033e5ea,0);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x100);
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      else if (0x18 < iVar4) {
        iVar4 = 0x18;
      }
      *(int *)(puVar20 + 0x148) = iVar4;
      lVar14 = *(longlong *)(puVar20 + 0x208) - *(longlong *)(puVar20 + 0x200) >> 5;
      *(longlong *)(puVar20 + 0x98) = lVar14;
      iVar23 = (int)lVar14;
      if (iVar4 < iVar23) {
        iVar23 = iVar4 + -1;
        *(int *)(puVar20 + 0x88) = iVar23;
      }
      else {
        *(longlong *)(puVar20 + 0x120) = lVar14;
        *(int *)(puVar20 + 0x88) = iVar23;
      }
      *(undefined8 *)(puVar20 + 0x218) = 0;
      *(undefined8 *)(puVar20 + 0x220) = 0;
      *(undefined8 *)(puVar20 + 0x228) = 0;
      *(undefined8 *)(puVar20 + 0x230) = 0;
      *(undefined8 *)(puVar20 + 0x228) = 0;
      *(undefined8 *)(puVar20 + 0x230) = 0xf;
      puVar20[0x218] = 0;
      *(undefined4 *)(puVar20 + 0xa0) = 0;
      pvVar26 = _Dst;
      while (iVar4 = (int)pvVar26, iVar4 < iVar23) {
        if (iVar4 != 0) {
          *(undefined8 *)(puVar20 + -8) = 0x18016f10c;
          FUN_18021aef0(puVar20 + 0x218,&DAT_18033e92c,1);
        }
        *(undefined8 *)(puVar20 + -8) = 0x18016f12f;
        uVar7 = FUN_1801fc700(puVar20 + 0x68,param_1 + 0x88,
                              (longlong)iVar4 * 0x20 + *(longlong *)(puVar20 + 0x200));
        *(undefined8 *)(puVar20 + -8) = 0x18016f147;
        puVar16 = (undefined8 *)FUN_1801fc800(puVar20 + 0xc0,uVar7,param_1 + 0xa8);
        uVar7 = puVar16[2];
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        *(undefined8 *)(puVar20 + -8) = 0x18016f166;
        FUN_18021aef0(puVar20 + 0x218,puVar16,uVar7);
        *(undefined8 *)(puVar20 + -8) = 0x18016f174;
        FUN_18020e450(puVar20 + 0xc0);
        *(undefined8 *)(puVar20 + -8) = 0x18016f17f;
        FUN_18020e450(puVar20 + 0x68);
        if (*(undefined1 **)(param_1 + 0x170) == *(undefined1 **)(param_1 + 0x178)) {
          *(undefined8 *)(puVar20 + -8) = 0x18016f1a8;
          FUN_180222ae0(param_1 + 0x168);
        }
        else {
          **(undefined1 **)(param_1 + 0x170) =
               *(undefined1 *)(*(longlong *)(puVar20 + 400) + (longlong)iVar4);
          *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x170) + 1;
        }
        *(uint *)(puVar20 + 0xa0) = iVar4 + 1U;
        iVar23 = *(int *)(puVar20 + 0x88);
        pvVar26 = (void *)(ulonglong)(iVar4 + 1U);
      }
      if (*(int *)(puVar20 + 0x148) < *(int *)(puVar20 + 0x98)) {
        if (0 < iVar23) {
          *(undefined8 *)(puVar20 + -8) = 0x18016f1f3;
          FUN_18021aef0(puVar20 + 0x218,&DAT_18033e92c,1);
        }
        *(longlong *)(puVar20 + 0x98) =
             *(longlong *)(puVar20 + 0x208) - *(longlong *)(puVar20 + 0x200) >> 5;
        *(undefined8 *)(puVar20 + -8) = 0x18016f21c;
        uVar7 = FUN_180013ba0(puVar20 + 0x68,
                              (int)(*(longlong *)(puVar20 + 0x208) - *(longlong *)(puVar20 + 0x200)
                                   >> 5) - iVar23);
        *(undefined8 *)(puVar20 + -8) = 0x18016f234;
        puVar16 = (undefined8 *)FUN_1801fd1b0(puVar20 + 0xc0,&DAT_1803616bc,uVar7);
        uVar7 = puVar16[2];
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        *(undefined8 *)(puVar20 + -8) = 0x18016f253;
        FUN_18021aef0(puVar20 + 0x218,puVar16,uVar7);
        *(undefined8 *)(puVar20 + -8) = 0x18016f261;
        FUN_18020e450(puVar20 + 0xc0);
        *(undefined8 *)(puVar20 + -8) = 0x18016f26c;
        FUN_18020e450(puVar20 + 0x68);
        puVar20[0x44] = 0;
        puVar15 = *(undefined1 **)(param_1 + 0x170);
        if (puVar15 == *(undefined1 **)(param_1 + 0x178)) {
          *(undefined8 *)(puVar20 + -8) = 0x18016f291;
          FUN_180222ae0(param_1 + 0x168,puVar15,puVar20 + 0x44);
        }
        else {
          *puVar15 = 0;
          *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x170) + 1;
        }
      }
      puVar15 = puVar20 + 0x218;
      if (0xf < *(ulonglong *)(puVar20 + 0x230)) {
        puVar15 = *(undefined1 **)(puVar20 + 0x218);
      }
      *(undefined8 *)(puVar20 + -8) = 0x18016f2c0;
      FUN_180212700(puVar20 + 0x150,puVar15,*(undefined8 *)(puVar20 + 0x228));
      *(undefined8 *)(puVar20 + -8) = 0x18016f2ce;
      FUN_18020e450(puVar20 + 0x218);
    }
    *(undefined8 *)(puVar20 + -8) = 0x18016f027;
    FUN_180209db0(puVar20 + 400);
    *(undefined8 *)(puVar20 + -8) = 0x18016f035;
    FUN_18020d5c0(puVar20 + 0x200);
    piVar24 = *(int **)(puVar20 + 0x90);
    goto LAB_18016f48b;
  case 0xe:
    plVar9 = (longlong *)(**(code **)(*DAT_1803fcb60 + 0x20))(DAT_1803fcb60);
    if (plVar9 == (longlong *)0x0) {
      sVar11 = 0;
      _Str = "";
      goto LAB_18016f474;
    }
    uStack_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0xf;
    local_1f8 = (undefined8 *******)0x0;
    local_1d8 = local_1d8 & 0xffffff00;
    uStack_1d4 = 0x3f800000;
    uStack_1d0 = 0x3f800000;
    uStack_1cc = 0x3f800000;
    uStack_1c8 = 0x3f800000;
    local_1c0 = 0;
    local_1b8 = 0;
    uVar5 = *(undefined4 *)(param_1 + 0xe0);
    uVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
    cVar2 = FUN_1800213a0(uVar6,uVar5,&local_1f8);
    if (cVar2 == '\0') {
      FUN_180212700(local_260 + 1,&DAT_18033e5ea,0);
      FUN_18020e450(&local_1f8);
      uVar22 = uVar21;
    }
    else {
      pppppppuVar18 = &local_1f8;
      if (0xf < local_1e0) {
        pppppppuVar18 = local_1f8;
      }
      FUN_180212700(local_260 + 1,pppppppuVar18,local_1e8);
      *(undefined1 *)(param_1 + 0xe4) = (undefined1)local_1d8;
      *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_1d0,uStack_1d4);
      *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_1c8,uStack_1cc);
      FUN_18020e450(&local_1f8);
      uVar22 = uVar21;
    }
  }
  puVar20 = auStack_3a8;
LAB_18016f48b:
  if (*piVar24 == 0xd) {
    *(undefined8 *)(puVar20 + 0x170) = 0;
    *(undefined8 *)(puVar20 + 0x178) = 0;
    *(undefined8 *)(puVar20 + 0x180) = 0;
    *(undefined8 *)(puVar20 + 0x188) = 0;
    uVar25 = *(ulonglong *)(puVar20 + 0x160);
    puVar16 = (undefined8 *)(puVar20 + 0x150);
    if (0xf < *(ulonglong *)(puVar20 + 0x168)) {
      puVar16 = *(undefined8 **)(puVar20 + 0x150);
    }
    if (0x7fffffffffffffff < uVar25) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar20 + -8) = &UNK_18016f7b3;
      FUN_1800130a0();
    }
    if (uVar25 < 0x10) {
      *(ulonglong *)(puVar20 + 0x180) = uVar25;
      *(undefined8 *)(puVar20 + 0x188) = 0xf;
      uVar7 = puVar16[1];
      *(undefined8 *)(puVar20 + 0x170) = *puVar16;
      *(undefined8 *)(puVar20 + 0x178) = uVar7;
    }
    else {
      uVar12 = uVar25 | 0xf;
      if (uVar12 < 0x8000000000000000) goto LAB_18016f55b;
      uVar13 = 0x8000000000000027;
      uVar12 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar20 + -8) = 0x18016f54f;
        lVar14 = FUN_1802d8350(uVar13);
        if (lVar14 != 0) break;
        pcVar1 = (code *)swi(0x29);
        uVar12 = (*pcVar1)(5);
        puVar20 = puVar20 + 8;
LAB_18016f55b:
        if (uVar12 < 0x16) {
          uVar12 = 0x16;
        }
        if (uVar12 == 0xffffffffffffffff) goto LAB_18016f5a1;
        if (uVar12 + 1 < 0x1000) {
          *(undefined8 *)(puVar20 + -8) = 0x18016f59e;
          _Dst = (void *)FUN_1802d8350();
          goto LAB_18016f5a1;
        }
        uVar13 = uVar12 + 0x28;
        if (uVar13 <= uVar12 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar20 + -8) = 0x18016f7b9;
          FUN_180012fe0();
        }
      }
      _Dst = (void *)(lVar14 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar14;
LAB_18016f5a1:
      *(void **)(puVar20 + 0x170) = _Dst;
      *(ulonglong *)(puVar20 + 0x180) = uVar25;
      *(ulonglong *)(puVar20 + 0x188) = uVar12;
      *(undefined8 *)(puVar20 + -8) = 0x18016f5c8;
      memcpy(_Dst,puVar16,uVar25 + 1);
    }
    puVar15 = puVar20 + 0x170;
    uVar22 = uVar22 | 0x20;
  }
  else {
    *(undefined8 *)(puVar20 + -8) = 0x18016f5ee;
    uVar7 = FUN_1801fc700(puVar20 + 0x68,param_1 + 0x88,puVar20 + 0x150);
    *(uint *)(puVar20 + 0x40) = uVar22 | 0x40;
    *(undefined8 *)(puVar20 + -8) = 0x18016f60d;
    puVar15 = (undefined1 *)FUN_1801fc800(puVar20 + 0xc0,uVar7,param_1 + 0xa8);
    uVar22 = uVar22 | 0xc0;
  }
  *(uint *)(puVar20 + 0x40) = uVar22;
  *(undefined8 *)(puVar20 + -8) = 0x18016f622;
  FUN_18020e8a0(param_1 + 0x60,puVar15);
  if ((char)uVar22 < '\0') {
    uVar22 = uVar22 & 0xffffff7f;
    *(uint *)(puVar20 + 0x40) = uVar22;
    *(undefined8 *)(puVar20 + -8) = 0x18016f63d;
    FUN_18020e450(puVar20 + 0xc0);
  }
  if ((uVar22 & 0x40) != 0) {
    uVar22 = uVar22 & 0xffffffbf;
    *(uint *)(puVar20 + 0x40) = uVar22;
    *(undefined8 *)(puVar20 + -8) = 0x18016f655;
    FUN_18020e450(puVar20 + 0x68);
  }
  if ((uVar22 & 0x20) != 0) {
    *(uint *)(puVar20 + 0x40) = uVar22 & 0xffffffdf;
    *(undefined8 *)(puVar20 + -8) = 0x18016f670;
    FUN_18020e450(puVar20 + 0x170);
  }
  puVar16 = (undefined8 *)(puVar20 + 0x150);
LAB_18016f770:
  *(undefined8 *)(puVar20 + -8) = 0x18016f775;
  FUN_18020e450(puVar16);
  *(undefined8 *)(puVar20 + -8) = 0x18016f785;
  return;
}


