// 0x1801410a0  FUN_1801410a0
// size=2741 thunk=false
// signature: undefined FUN_1801410a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801410a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  code *pcVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  errno_t eVar8;
  BOOL BVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte ****ppppbVar13;
  undefined1 *puVar14;
  __time64_t _Var15;
  size_t sVar16;
  longlong *lp;
  longlong *plVar17;
  char *pcVar18;
  longlong *plVar19;
  float *pfVar20;
  float *pfVar21;
  byte ****ppppbVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ulonglong _Size;
  byte *pbVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [40];
  undefined4 local_438;
  undefined8 *local_428;
  undefined4 local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  byte ***local_340 [2];
  ulonglong local_330;
  ulonglong uStack_328;
  char local_2e8 [680];
  ulonglong local_40;
  
  puVar24 = auStack_468;
  puVar14 = auStack_468;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_468;
  local_410 = 0;
  *(undefined4 *)(param_1 + 0x3d) = DAT_180409844;
  local_438 = param_4;
  local_428 = param_1;
  local_418 = param_3;
  local_408 = param_2;
  if (DAT_1803fa668 != (longlong *)0x0) {
    uVar11 = (**(code **)(*DAT_1803fa668 + 0x198))();
    FUN_180140d70(local_340,uVar11);
    ppppbVar13 = local_340;
    if (0xf < uStack_328) {
      ppppbVar13 = (byte ****)local_340[0];
    }
    if (local_330 == 0) {
LAB_1801411ef:
      lVar12 = -1;
    }
    else {
      lVar12 = -1;
      if (local_330 - 1 != -1) {
        lVar12 = local_330 - 1;
      }
      if (lVar12 + 3U < 0x10) {
        memset(local_2e8,0,0x100);
        pbVar25 = &DAT_18035d1fc;
        do {
          local_2e8[*pbVar25] = '\x01';
          pbVar25 = pbVar25 + 1;
        } while (pbVar25 != &DAT_18035d1fe);
        ppppbVar22 = (byte ****)((longlong)ppppbVar13 + lVar12);
        cVar6 = local_2e8[*(byte *)ppppbVar22];
        while (cVar6 == '\0') {
          if (ppppbVar22 == ppppbVar13) goto LAB_1801411ef;
          ppppbVar22 = (byte ****)((longlong)ppppbVar22 + -1);
          cVar6 = local_2e8[*(byte *)ppppbVar22];
        }
        lVar12 = (longlong)ppppbVar22 - (longlong)ppppbVar13;
      }
      else {
        lVar12 = thunk_FUN_1802d4e90(ppppbVar13,lVar12 + 1,&DAT_18035d1fc,2);
      }
    }
    puVar24 = auStack_468;
    if (lVar12 != -1) {
      uVar23 = lVar12 + 1;
      local_400 = 0;
      uStack_3f8 = 0;
      local_3f0 = 0;
      uStack_3e8 = 0;
      if (local_330 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_18022ec00();
      }
      lVar12 = -1;
      if (local_330 - uVar23 != -1) {
        lVar12 = local_330 - uVar23;
      }
      ppppbVar13 = local_340;
      if (0xf < uStack_328) {
        ppppbVar13 = (byte ****)local_340[0];
      }
      FUN_18001d080(&local_400,(byte *)((longlong)ppppbVar13 + uVar23),lVar12);
      local_410 = 2;
      if (0xf < uStack_328) {
        ppppbVar13 = (byte ****)local_340[0];
        puVar14 = auStack_468;
        if ((0xfff < uStack_328 + 1) &&
           (ppppbVar13 = (byte ****)local_340[0][-1], puVar14 = auStack_468,
           (byte *)0x1f < (byte *)((longlong)local_340[0] + (-8 - (longlong)ppppbVar13)))) {
          pcVar3 = (code *)swi(0x29);
          ppppbVar13 = (byte ****)(*pcVar3)(5);
          puVar14 = auStack_460;
        }
        *(undefined8 *)(puVar14 + -8) = 0x1801412ab;
        free(ppppbVar13);
      }
      *(undefined8 *)(puVar14 + 0x138) = 0;
      *(undefined8 *)(puVar14 + 0x140) = 0xf;
      puVar14[0x128] = 0;
      *(undefined4 *)(puVar14 + 0x128) = *(undefined4 *)(puVar14 + 0x68);
      *(undefined4 *)(puVar14 + 300) = *(undefined4 *)(puVar14 + 0x6c);
      *(undefined4 *)(puVar14 + 0x130) = *(undefined4 *)(puVar14 + 0x70);
      *(undefined4 *)(puVar14 + 0x134) = *(undefined4 *)(puVar14 + 0x74);
      *(undefined4 *)(puVar14 + 0x138) = *(undefined4 *)(puVar14 + 0x78);
      *(undefined4 *)(puVar14 + 0x13c) = *(undefined4 *)(puVar14 + 0x7c);
      *(undefined4 *)(puVar14 + 0x140) = *(undefined4 *)(puVar14 + 0x80);
      *(undefined4 *)(puVar14 + 0x144) = *(undefined4 *)(puVar14 + 0x84);
      *(undefined8 *)(puVar14 + 0x78) = 0;
      *(undefined8 *)(puVar14 + 0x80) = 0xf;
      puVar14[0x68] = 0;
      *(undefined4 *)(puVar14 + 0x58) = 0;
      *(undefined8 *)(puVar14 + -8) = 0x180141308;
      FUN_18020e450(puVar14 + 0x68);
      puVar24 = puVar14;
    }
    if (4 < *(ulonglong *)(puVar24 + 0x138)) {
      puVar14 = puVar24 + 0x128;
      if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
        puVar14 = *(undefined1 **)(puVar24 + 0x128);
      }
      *(undefined8 *)(puVar24 + -8) = 0x180141348;
      iVar7 = _stricmp(puVar14 + (*(ulonglong *)(puVar24 + 0x138) - 4),".bsp");
      if (iVar7 == 0) {
        uVar2 = *(ulonglong *)(puVar24 + 0x138);
        uVar23 = uVar2 - 4;
        if (uVar2 < uVar23) {
          _Size = uVar23 - uVar2;
          if (*(ulonglong *)(puVar24 + 0x140) - uVar2 < _Size) {
            puVar24[0x20] = 0;
            *(undefined8 *)(puVar24 + -8) = 0x1801413f0;
            FUN_18022a720(puVar24 + 0x128,_Size);
          }
          else {
            *(ulonglong *)(puVar24 + 0x138) = uVar23;
            puVar14 = puVar24 + 0x128;
            if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
              puVar14 = *(undefined1 **)(puVar24 + 0x128);
            }
            *(undefined8 *)(puVar24 + -8) = 0x1801413cd;
            memset(puVar14 + uVar2,0,_Size);
            puVar14[uVar2 + _Size] = 0;
          }
        }
        else {
          *(ulonglong *)(puVar24 + 0x138) = uVar23;
          puVar14 = puVar24 + 0x128;
          if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
            puVar14 = *(undefined1 **)(puVar24 + 0x128);
          }
          puVar14[uVar23] = 0;
        }
      }
    }
    if (param_1 + 0x34 != (undefined8 *)(puVar24 + 0x128)) {
      puVar14 = puVar24 + 0x128;
      if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
        puVar14 = *(undefined1 **)(puVar24 + 0x128);
      }
      *(undefined8 *)(puVar24 + -8) = 0x18014142b;
      FUN_180212700(param_1 + 0x34,puVar14,*(undefined8 *)(puVar24 + 0x138));
    }
    *(undefined8 *)(puVar24 + -8) = 0x180141439;
    FUN_18020e450(puVar24 + 0x128);
  }
  uVar10 = 0xffffffff;
  *(undefined8 *)(puVar24 + -8) = 0x18014144a;
  _Var15 = _time64((__time64_t *)0x0);
  *(__time64_t *)(puVar24 + 0x148) = _Var15;
  *(undefined8 *)(puVar24 + 0x158) = 0;
  *(undefined8 *)(puVar24 + 0x160) = 0;
  *(undefined8 *)(puVar24 + 0x168) = 0;
  *(undefined8 *)(puVar24 + 0x170) = 0;
  *(undefined4 *)(puVar24 + 0x178) = 0;
  *(undefined8 *)(puVar24 + -8) = 0x180141484;
  eVar8 = _localtime64_s((tm *)(puVar24 + 0x158),(__time64_t *)(puVar24 + 0x148));
  if (eVar8 == 0) {
    *(undefined4 *)(puVar24 + 0x20) = *(undefined4 *)(puVar24 + 0x15c);
    *(undefined8 *)(puVar24 + -8) = 0x1801414b4;
    FUN_180012ac0(puVar24 + 0x420,8,"%02d:%02d",*(undefined4 *)(puVar24 + 0x160));
    *(undefined8 *)(puVar24 + -8) = 0x1801414c1;
    sVar16 = strlen(puVar24 + 0x420);
    *(undefined8 *)(puVar24 + -8) = 0x1801414d8;
    FUN_180212700(param_1 + 0x38,puVar24 + 0x420,sVar16);
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    iVar7 = -1;
  }
  else {
    pcVar3 = *(code **)(*DAT_1803fa668 + 0x60);
    *(undefined8 *)(puVar24 + -8) = 0x1801414ed;
    iVar7 = (*pcVar3)(DAT_1803fa668);
  }
  *(int *)(puVar24 + 0x5c) = iVar7;
  *(undefined8 *)(puVar24 + 0x38) = 0;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  pcVar4 = *(code **)(*DAT_1803fa668 + 0x60);
  *(undefined8 *)(puVar24 + -8) = 0x18014151d;
  (*pcVar4)(DAT_1803fa668);
  *(undefined8 *)(puVar24 + -8) = 0x180141528;
  lp = (longlong *)(*pcVar3)(DAT_1803fa360);
  plVar17 = DAT_1803fa668;
  *(longlong **)(puVar24 + 0x38) = lp;
  if (DAT_1803fa668 == (longlong *)0x0) {
    if (0 < iVar7) goto LAB_1801415d0;
  }
  else if (0 < iVar7) {
    *(undefined8 *)(puVar24 + -8) = 0x180141572;
    memset(puVar24 + 0x2d0,0,0x144);
    pcVar3 = *(code **)(*plVar17 + 0x40);
    *(undefined8 *)(puVar24 + -8) = 0x180141586;
    cVar6 = (*pcVar3)(plVar17,iVar7,puVar24 + 0x2d0);
    if (cVar6 != '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x18014159f;
      uVar11 = FUN_180140d70(puVar24 + 0xa8,puVar24 + 0x2d0);
      *(undefined8 *)(puVar24 + -8) = 0x1801415af;
      FUN_18020e8a0(param_1 + 0x1c,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x1801415bd;
      FUN_18020e450(puVar24 + 0xa8);
      uVar10 = *(undefined4 *)(puVar24 + 0x350);
    }
LAB_1801415d0:
    if (DAT_1803fcf68 != (code *)0x0) {
      *(undefined8 *)(puVar24 + -8) = 0x1801415e4;
      uVar11 = (*DAT_1803fcf68)(iVar7,uVar10);
      *(undefined8 *)(puVar24 + -8) = 0x1801415f4;
      uVar11 = FUN_180140d70(puVar24 + 200,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x180141604;
      FUN_18020e8a0(param_1 + 0x20,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x180141612;
      FUN_18020e450(puVar24 + 200);
    }
    *(undefined8 *)(puVar24 + -8) = 0x18014161d;
    uVar11 = FUN_1800395c0(iVar7,uVar10);
    *(undefined8 *)(puVar24 + -8) = 0x18014162d;
    FUN_180140d70(puVar24 + 0xe8,uVar11);
    *(undefined8 *)(puVar24 + -8) = 0x18014163d;
    FUN_18020e8a0(param_1 + 0x24);
    *(undefined8 *)(puVar24 + -8) = 0x18014164b;
    FUN_18020e450(puVar24 + 0xe8);
  }
  if (param_1[0x22] == 0) {
    plVar17 = param_1 + 0x1c;
    if (param_1 + 0x20 != plVar17) {
      uVar11 = param_1[0x1e];
      if (0xf < (ulonglong)param_1[0x1f]) {
        plVar17 = (longlong *)*plVar17;
      }
      *(undefined8 *)(puVar24 + -8) = 0x18014168f;
      FUN_180212700(param_1 + 0x20,plVar17,uVar11);
    }
  }
  if (lp != (longlong *)0x0) {
    *(undefined8 *)(puVar24 + -8) = 0x1801416ad;
    BVar9 = IsBadReadPtr(lp,8);
    if (BVar9 == 0) {
      pvVar5 = (void *)*lp;
      *(undefined8 *)(puVar24 + -8) = 0x1801416c3;
      BVar9 = IsBadReadPtr(pvVar5,8);
      if (BVar9 == 0) {
        pcVar3 = *(code **)(*lp + 0x20);
        *(undefined8 *)(puVar24 + -8) = 0x1801416d4;
        plVar17 = (longlong *)(*pcVar3)(lp);
        if (plVar17 != (longlong *)0x0) {
          pcVar3 = *(code **)(*plVar17 + 0x40);
          *(undefined8 *)(puVar24 + -8) = 0x1801416e6;
          cVar6 = (*pcVar3)(plVar17);
          if (cVar6 == '\0') {
            *(undefined8 *)(puVar24 + -8) = 0x1801416f6;
            uVar11 = FUN_18001f960(lp);
            *(undefined8 *)(puVar24 + -8) = 0x180141706;
            uVar11 = FUN_180140d70(puVar24 + 0x108,uVar11);
            *(undefined8 *)(puVar24 + -8) = 0x180141716;
            FUN_18020e8a0(param_1 + 0x28,uVar11);
            *(undefined8 *)(puVar24 + -8) = 0x180141724;
            FUN_18020e450(puVar24 + 0x108);
            pcVar3 = DAT_1803fed38;
            if (DAT_1803fed38 == (code *)0x0) {
              pcVar18 = "unknown";
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180141751;
              uVar10 = FUN_18001c560(lp);
              *(undefined8 *)(puVar24 + -8) = 0x180141755;
              pcVar18 = (char *)(*pcVar3)(uVar10);
            }
            *(undefined8 *)(puVar24 + -8) = 0x18014176c;
            uVar11 = FUN_180140d70(puVar24 + 0x88,pcVar18);
            *(undefined8 *)(puVar24 + -8) = 0x18014177c;
            FUN_18020e8a0(param_1 + 0x2c,uVar11);
            *(undefined8 *)(puVar24 + -8) = 0x18014178a;
            FUN_18020e450(puVar24 + 0x88);
            *(undefined8 *)(puVar24 + -8) = 0x1801417a6;
            uVar10 = FUN_18001c680(lp);
            *(undefined4 *)(param_1 + 0x3c) = uVar10;
            *(undefined8 *)(puVar24 + -8) = 0x1801417c7;
            uVar10 = FUN_18001cdd0(lp);
            *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar10;
            *(undefined8 *)(puVar24 + -8) = 0x1801417f0;
            FUN_180140de0(puVar24 + 0x88,lp);
            *(undefined8 *)(puVar24 + -8) = 0x180141800;
            FUN_18020e8a0(param_1 + 0x30);
            *(undefined8 *)(puVar24 + -8) = 0x18014180e;
            FUN_18020e450(puVar24 + 0x88);
          }
        }
      }
    }
  }
  pcVar18 = "unknown";
  plVar17 = *(longlong **)(puVar24 + 0x60);
  if (param_1 != plVar17) {
    plVar19 = plVar17;
    if (0xf < (ulonglong)plVar17[3]) {
      plVar19 = (longlong *)*plVar17;
    }
    lVar12 = plVar17[2];
    *(undefined8 *)(puVar24 + -8) = 0x18014184a;
    FUN_180212700(param_1,plVar19,lVar12);
  }
  if (*(int *)(puVar24 + 0x30) < 1) {
    if ((*(int *)(puVar24 + 0x50) < 1) || (DAT_1803fa668 == (longlong *)0x0)) goto LAB_180141ba6;
    pcVar3 = *(code **)(*DAT_1803fa668 + 0x48);
    *(undefined8 *)(puVar24 + -8) = 0x180141876;
    iVar7 = (*pcVar3)(DAT_1803fa668);
    *(int *)(puVar24 + 0x30) = iVar7;
    if (iVar7 < 1) goto LAB_180141ba6;
  }
  else {
    iVar7 = *(int *)(puVar24 + 0x30);
    *(int *)(puVar24 + 0x30) = iVar7;
  }
  plVar17 = DAT_1803fa668;
  if (DAT_1803fa668 != (longlong *)0x0) {
    iVar26 = *(int *)(puVar24 + 0x50);
    *(undefined8 *)(puVar24 + -8) = 0x1801418bb;
    memset(puVar24 + 0x180,0,0x144);
    pcVar3 = *(code **)(*plVar17 + 0x40);
    *(undefined8 *)(puVar24 + -8) = 0x1801418cf;
    cVar6 = (*pcVar3)(plVar17,iVar7,puVar24 + 0x180);
    if (cVar6 != '\0') {
      if (puVar24[0x180] != '\0') {
        *(undefined8 *)(puVar24 + -8) = 0x1801418ea;
        sVar16 = strlen(puVar24 + 0x180);
        *(undefined8 *)(puVar24 + -8) = 0x1801418fd;
        FUN_180212700(param_1,puVar24 + 0x180,sVar16);
      }
      if (iVar26 < 1) {
        iVar26 = *(int *)(puVar24 + 0x200);
      }
      *(undefined8 *)(puVar24 + -8) = 0x18014191f;
      uVar11 = FUN_180140d70(puVar24 + 0x88,puVar24 + 0x204);
      *(undefined8 *)(puVar24 + -8) = 0x18014192f;
      FUN_18020e8a0(param_1 + 0x14,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x18014193d;
      FUN_18020e450(puVar24 + 0x88);
    }
    if (DAT_1803fcf68 != (code *)0x0) {
      *(undefined8 *)(puVar24 + -8) = 0x180141952;
      uVar11 = (*DAT_1803fcf68)(iVar7,iVar26);
      *(undefined8 *)(puVar24 + -8) = 0x180141962;
      uVar11 = FUN_180140d70(puVar24 + 0x108,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x18014196f;
      FUN_18020e8a0(param_1 + 4,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x18014197d;
      FUN_18020e450(puVar24 + 0x108);
    }
    *(undefined8 *)(puVar24 + -8) = 0x180141988;
    uVar11 = FUN_1800395c0(iVar7,iVar26);
    *(undefined8 *)(puVar24 + -8) = 0x180141998;
    uVar11 = FUN_180140d70(puVar24 + 0xe8,uVar11);
    *(undefined8 *)(puVar24 + -8) = 0x1801419a5;
    FUN_18020e8a0(param_1 + 8,uVar11);
    *(undefined8 *)(puVar24 + -8) = 0x1801419b3;
    FUN_18020e450(puVar24 + 0xe8);
    if (DAT_1803fa360 != (longlong *)0x0) {
      pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
      *(undefined8 *)(puVar24 + -8) = 0x1801419e5;
      plVar17 = (longlong *)(*pcVar3)(DAT_1803fa360,iVar7);
      *(longlong **)(puVar24 + 0x60) = plVar17;
      if (plVar17 != (longlong *)0x0) {
        *(undefined8 *)(puVar24 + -8) = 0x180141a04;
        BVar9 = IsBadReadPtr(plVar17,8);
        if (BVar9 == 0) {
          pvVar5 = (void *)*plVar17;
          *(undefined8 *)(puVar24 + -8) = 0x180141a1a;
          BVar9 = IsBadReadPtr(pvVar5,8);
          if (BVar9 == 0) {
            pcVar3 = *(code **)(*plVar17 + 0x20);
            *(undefined8 *)(puVar24 + -8) = 0x180141a2b;
            plVar19 = (longlong *)(*pcVar3)(plVar17);
            if (plVar19 != (longlong *)0x0) {
              pcVar3 = *(code **)(*plVar19 + 0x40);
              *(undefined8 *)(puVar24 + -8) = 0x180141a3d;
              cVar6 = (*pcVar3)(plVar19);
              if (cVar6 == '\0') {
                *(undefined8 *)(puVar24 + -8) = 0x180141a4d;
                uVar11 = FUN_18001f960(plVar17);
                *(undefined8 *)(puVar24 + -8) = 0x180141a5d;
                uVar11 = FUN_180140d70(puVar24 + 200,uVar11);
                *(undefined8 *)(puVar24 + -8) = 0x180141a6a;
                FUN_18020e8a0(param_1 + 0xc,uVar11);
                *(undefined8 *)(puVar24 + -8) = 0x180141a78;
                FUN_18020e450(puVar24 + 200);
                pcVar3 = DAT_1803fed38;
                if (DAT_1803fed38 != (code *)0x0) {
                  *(undefined8 *)(puVar24 + -8) = 0x180141aa7;
                  uVar10 = FUN_18001c560(plVar17);
                  *(undefined8 *)(puVar24 + -8) = 0x180141aac;
                  pcVar18 = (char *)(*pcVar3)(uVar10);
                }
                *(undefined8 *)(puVar24 + -8) = 0x180141abf;
                uVar11 = FUN_180140d70(puVar24 + 0xa8,pcVar18);
                *(undefined8 *)(puVar24 + -8) = 0x180141acf;
                FUN_18020e8a0(param_1 + 0x10,uVar11);
                *(undefined8 *)(puVar24 + -8) = 0x180141add;
                FUN_18020e450(puVar24 + 0xa8);
                if (lp != (longlong *)0x0) {
                  *(undefined8 *)(puVar24 + -8) = 0x180141b00;
                  pfVar20 = (float *)FUN_18001d440(lp);
                  *(undefined8 *)(puVar24 + -8) = 0x180141b0b;
                  pfVar21 = (float *)FUN_18001d440(plVar17);
                  fVar28 = *pfVar20 - *pfVar21;
                  *(float *)(puVar24 + 0x148) = fVar28;
                  fVar27 = pfVar20[1] - pfVar21[1];
                  *(float *)(puVar24 + 0x14c) = fVar27;
                  fVar29 = pfVar20[2] - pfVar21[2];
                  *(float *)(puVar24 + 0x150) = fVar29;
                  *(undefined8 *)(puVar24 + -8) = 0x180141b5f;
                  fVar27 = (float)(*(code *)PTR_FUN_1803da018)
                                            (fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29);
                  *(undefined8 *)(puVar24 + -8) = 0x180141b80;
                  uVar11 = FUN_180013ba0(puVar24 + 0x88,
                                         (int)(fVar27 / DAT_1803810ac + DAT_180380ac0));
                  *(undefined8 *)(puVar24 + -8) = 0x180141b90;
                  FUN_18020e8a0(param_1 + 0x18,uVar11);
                  *(undefined8 *)(puVar24 + -8) = 0x180141b9e;
                  FUN_18020e450(puVar24 + 0x88);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_180141ba6:
  if ((param_1[6] == 0) && (puVar1 = param_1 + 4, puVar1 != param_1)) {
    uVar11 = param_1[2];
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined8 *)(puVar24 + -8) = 0x180141bcc;
    FUN_180212700(puVar1,param_1,uVar11);
  }
  *(undefined8 *)(puVar24 + -8) = 0x180141bdc;
  return;
}


