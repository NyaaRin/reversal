// 0x180142670  FUN_180142670
// size=1821 thunk=false
// signature: undefined FUN_180142670()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180142670(undefined8 param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined8 ****ppppuVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 ***_Memory;
  void *_Memory_00;
  undefined8 ****ppppuVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 ***pppuVar24;
  float fVar25;
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [112];
  undefined8 **local_288;
  undefined8 **ppuStack_280;
  ulonglong local_278;
  undefined8 uStack_270;
  undefined8 ***local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  ulonglong local_250;
  undefined *local_248;
  undefined8 local_240 [63];
  ulonglong local_48;
  
  puVar21 = auStack_338;
  puVar20 = auStack_338;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_338;
  local_240[0] = 0x93fd561a96ab0c67;
  local_318 = param_3;
  local_310 = param_1;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_308,local_240);
  local_248 = (undefined *)0x6507776eb2e9032e;
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_2f8,&local_248);
  pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
  puVar15 = auStack_338;
  if (*pcVar12 == '\0') goto LAB_1801428b1;
  if (param_4 == '\0') {
    cVar8 = FUN_180142570();
    if ((cVar8 != '\0') || (cVar8 = FUN_1801425f0(), iVar10 = DAT_1803ff708, cVar8 != '\0')) {
      DAT_180409848 = DAT_180409848 + 1;
      puVar15 = auStack_338;
      goto LAB_1801428b1;
    }
    iVar19 = 0;
    if (0 < DAT_1803ff708) {
      do {
        lVar23 = (longlong)iVar19 * 0x58;
        if (((char *)(&DAT_1803eb898)[(longlong)iVar19 * 0xb] != (char *)0x0) &&
           (iVar9 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar19 * 0xb],"player_death"),
           iVar9 == 0)) {
          if ((lVar23 != -0x1803eb890) &&
             ((((&DAT_1803eb8e4)[lVar23] != '\0' && (DAT_180409841 == '\0')) &&
              (DAT_180409851 == '\0')))) {
            DAT_180409851 = '\x01';
            FUN_180014410(
                         "[KILLSAY] player_death subscribed but never delivered -- this server does not fire it; kills come from the health poll\n"
                         );
          }
          break;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar10);
    }
  }
  else {
    DAT_18040984c = DAT_18040984c + 1;
  }
  pppuVar24 = (undefined8 ***)0x0;
  uStack_260 = 0;
  local_258 = 0;
  local_250 = 0xf;
  local_268 = (undefined8 ****)0x0;
  local_248 = &DAT_1803e7c90;
  iVar10 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar10 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1803e9f60 == DAT_1803e9f68) {
LAB_18014289a:
    _Mtx_unlock(&DAT_1803e7c90);
  }
  else {
    if (DAT_1803fa608 == (float *)0x0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = *DAT_1803fa608;
      if (((0.0 < fVar25) && (fVar25 - _DAT_1803e7ce4 < DAT_180380b20)) &&
         ((param_2 < 0 || ((DAT_1803e7ce0 < 0 || (param_2 == DAT_1803e7ce0)))))) goto LAB_18014289a;
    }
    DAT_1803e7ce0 = param_2;
    _DAT_1803e7ce4 = fVar25;
    iVar10 = FUN_180022680(0,DAT_1803e9f68 - DAT_1803e9f60 >> 5);
    ppppuVar18 = (undefined8 ****)((longlong)iVar10 * 0x20 + DAT_1803e9f60);
    if (&local_268 != ppppuVar18) {
      ppppuVar1 = ppppuVar18 + 2;
      if ((undefined8 ***)0xf < ppppuVar18[3]) {
        ppppuVar18 = (undefined8 ****)*ppppuVar18;
      }
      FUN_180212700(&local_268,ppppuVar18,*ppppuVar1);
    }
    _Mtx_unlock(&DAT_1803e7c90);
    uVar2 = local_258;
    DAT_180409844 = DAT_180409844 + 1;
    local_288 = (undefined8 ***)0x0;
    ppuStack_280 = (undefined8 ***)0x0;
    local_278 = 0;
    uStack_270 = 0;
    ppppuVar18 = &local_268;
    if (0xf < local_250) {
      ppppuVar18 = (undefined8 ****)local_268;
    }
    if (0x7fffffffffffffff < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (local_258 < 0x10) {
      local_278 = local_258;
      uVar22 = 0xf;
      uStack_270 = 0xf;
      pppuVar24 = *ppppuVar18;
      local_288 = pppuVar24;
      ppuStack_280 = ppppuVar18[1];
      puVar21 = auStack_338;
    }
    else {
      uVar22 = local_258 | 0xf;
      if (uVar22 < 0x8000000000000000) goto LAB_1801429e6;
      uVar13 = 0x8000000000000027;
      puVar20 = auStack_338;
      uVar22 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar20 + -8) = 0x1801429da;
        ppuVar14 = (undefined8 **)FUN_1802d8350(uVar13);
        if (ppuVar14 != (undefined8 **)0x0) break;
        pcVar4 = (code *)swi(0x29);
        uVar22 = (*pcVar4)(5);
        puVar20 = puVar20 + 8;
LAB_1801429e6:
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
        if (uVar22 == 0xffffffffffffffff) goto LAB_180142a31;
        if (uVar22 + 1 < 0x1000) {
          *(undefined8 *)(puVar20 + -8) = 0x180142a2e;
          pppuVar24 = (undefined8 ***)FUN_1802d8350();
          goto LAB_180142a31;
        }
        uVar13 = uVar22 + 0x28;
        if (uVar13 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar20 + -8) = &UNK_180142da8;
          FUN_180012fe0();
        }
      }
      pppuVar24 = (undefined8 ***)((longlong)ppuVar14 + 0x27U & 0xffffffffffffffe0);
      pppuVar24[-1] = ppuVar14;
LAB_180142a31:
      *(undefined8 ****)(puVar20 + 0xb0) = pppuVar24;
      *(ulonglong *)(puVar20 + 0xc0) = uVar2;
      *(ulonglong *)(puVar20 + 200) = uVar22;
      *(undefined8 *)(puVar20 + -8) = 0x180142a58;
      memcpy(pppuVar24,ppppuVar18,uVar2 + 1);
      puVar21 = puVar20;
    }
    lVar23 = *(longlong *)(puVar21 + 0xe0);
    puVar20 = puVar21 + 0xd0;
    if (0xf < *(ulonglong *)(puVar21 + 0xe8)) {
      puVar20 = *(undefined1 **)(puVar21 + 0xd0);
    }
    if (lVar23 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x180142a96;
      puVar15 = (undefined1 *)thunk_FUN_1802d5c20(puVar20,puVar20 + lVar23,0x7b);
      if ((puVar15 != puVar20 + lVar23) && ((longlong)puVar15 - (longlong)puVar20 != -1)) {
        *(undefined8 *)(puVar21 + -8) = 0x180142ab9;
        FUN_180142db0(puVar21 + 0x100);
        *(undefined8 *)(puVar21 + -8) = 0x180142ad4;
        FUN_1801410a0(puVar21 + 0x100,*(undefined8 *)(puVar21 + 0x28),param_2,
                      *(undefined4 *)(puVar21 + 0x20));
        *(undefined8 *)(puVar21 + -8) = 0x180142b0b;
        puVar16 = (undefined4 *)FUN_180142220(puVar21 + 0x50,puVar21 + 0xd0,puVar21 + 0x100);
        if ((undefined4 *)(puVar21 + 0xb0) != puVar16) {
          if (0xf < uVar22) {
            _Memory = pppuVar24;
            if (0xfff < uVar22 + 1) {
              _Memory = (undefined8 ***)pppuVar24[-1];
              pppuVar24 = (undefined8 ***)((longlong)pppuVar24 + (-8 - (longlong)_Memory));
              if ((undefined8 ***)0x1f < pppuVar24) {
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar21 = puVar21 + 8;
                _Memory = pppuVar24;
              }
            }
            *(undefined8 *)(puVar21 + -8) = 0x180142b54;
            free(_Memory);
          }
          *(undefined8 *)(puVar21 + 0xc0) = 0;
          *(undefined8 *)(puVar21 + 200) = 0xf;
          puVar21[0xb0] = 0;
          uVar5 = puVar16[1];
          uVar6 = puVar16[2];
          uVar7 = puVar16[3];
          *(undefined4 *)(puVar21 + 0xb0) = *puVar16;
          *(undefined4 *)(puVar21 + 0xb4) = uVar5;
          *(undefined4 *)(puVar21 + 0xb8) = uVar6;
          *(undefined4 *)(puVar21 + 0xbc) = uVar7;
          uVar17 = *(undefined8 *)(puVar16 + 6);
          *(undefined8 *)(puVar21 + 0xc0) = *(undefined8 *)(puVar16 + 4);
          *(undefined8 *)(puVar21 + 200) = uVar17;
          *(undefined8 *)(puVar16 + 4) = 0;
          *(undefined8 *)(puVar16 + 6) = 0xf;
          *(undefined1 *)puVar16 = 0;
        }
        *(undefined8 *)(puVar21 + -8) = 0x180142ba0;
        FUN_18020e450(puVar21 + 0x50);
        *(undefined8 *)(puVar21 + -8) = 0x180142bae;
        FUN_180142f70(puVar21 + 0x100);
      }
    }
    *(undefined1 **)(puVar21 + 0x28) = puVar21 + 0x70;
    *(undefined8 *)(puVar21 + -8) = 0x180142bca;
    uVar17 = FUN_18016d4c0(puVar21 + 0x70,puVar21 + 0xb0);
    *(undefined8 *)(puVar21 + -8) = 0x180142bdb;
    puVar16 = (undefined4 *)FUN_180140b70(puVar21 + 0x90,uVar17);
    if ((undefined4 *)(puVar21 + 0xb0) != puVar16) {
      if (0xf < *(ulonglong *)(puVar21 + 200)) {
        pvVar3 = *(void **)(puVar21 + 0xb0);
        _Memory_00 = pvVar3;
        if ((0xfff < *(ulonglong *)(puVar21 + 200) + 1) &&
           (_Memory_00 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory_00)))) {
          _Memory_00 = (void *)0x5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar21 = puVar21 + 8;
        }
        *(undefined8 *)(puVar21 + -8) = 0x180142c3a;
        free(_Memory_00);
      }
      *(undefined8 *)(puVar21 + 0xc0) = 0;
      *(undefined8 *)(puVar21 + 200) = 0xf;
      puVar21[0xb0] = 0;
      uVar5 = puVar16[1];
      uVar6 = puVar16[2];
      uVar7 = puVar16[3];
      *(undefined4 *)(puVar21 + 0xb0) = *puVar16;
      *(undefined4 *)(puVar21 + 0xb4) = uVar5;
      *(undefined4 *)(puVar21 + 0xb8) = uVar6;
      *(undefined4 *)(puVar21 + 0xbc) = uVar7;
      uVar17 = *(undefined8 *)(puVar16 + 6);
      *(undefined8 *)(puVar21 + 0xc0) = *(undefined8 *)(puVar16 + 4);
      *(undefined8 *)(puVar21 + 200) = uVar17;
      *(undefined8 *)(puVar16 + 4) = 0;
      *(undefined8 *)(puVar16 + 6) = 0xf;
      *(undefined1 *)puVar16 = 0;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180142c89;
    FUN_18020e450(puVar21 + 0x90);
    if (*(longlong *)(puVar21 + 0xc0) != 0) {
      *(undefined **)(puVar21 + 0x28) = &DAT_1803e7c90;
      *(undefined8 *)(puVar21 + -8) = 0x180142ca6;
      iVar10 = _Mtx_lock(&DAT_1803e7c90);
      if (iVar10 != 0) {
        *(undefined8 *)(puVar21 + -8) = 0x180142cb5;
        std::_Throw_Cpp_error(5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (DAT_1803e7cdc == 0x7fffffff) {
        DAT_1803e7cdc = 0x7ffffffe;
        *(undefined8 *)(puVar21 + -8) = 0x180142cd6;
        std::_Throw_Cpp_error(6);
      }
      if (DAT_18056dec0 < 8) {
        if (DAT_18056deb0 <= DAT_18056dec0 + 1) {
          *(undefined8 *)(puVar21 + -8) = 0x180142d04;
          FUN_18022ddb0(&DAT_18056dea0);
        }
        DAT_18056deb8 = DAT_18056deb0 - 1 & DAT_18056deb8;
        uVar2 = DAT_18056deb8 + DAT_18056dec0;
        uVar22 = uVar2 & DAT_18056deb0 - 1;
        if (*(longlong *)(DAT_18056dea8 + uVar22 * 8) == 0) {
          *(undefined8 *)(puVar21 + -8) = 0x180142d49;
          uVar17 = FUN_1802d8350(0x20);
          *(undefined8 *)(DAT_18056dea8 + uVar22 * 8) = uVar17;
        }
        uVar17 = *(undefined8 *)(DAT_18056dea8 + (DAT_18056deb0 - 1 & uVar2) * 8);
        *(undefined8 *)(puVar21 + -8) = 0x180142d7a;
        FUN_18016d4c0(uVar17,puVar21 + 0xb0);
        DAT_18056dec0 = DAT_18056dec0 + 1;
      }
      *(undefined8 *)(puVar21 + -8) = 0x180142d8a;
      _Mtx_unlock(&DAT_1803e7c90);
    }
    *(undefined8 *)(puVar21 + -8) = 0x180142d98;
    FUN_18020e450(puVar21 + 0xb0);
  }
  *(undefined8 *)(puVar21 + -8) = 0x1801428b1;
  FUN_18020e450(puVar21 + 0xd0);
  puVar15 = puVar21;
LAB_1801428b1:
  *(undefined8 *)(puVar15 + -8) = 0x1801428c1;
  return;
}


