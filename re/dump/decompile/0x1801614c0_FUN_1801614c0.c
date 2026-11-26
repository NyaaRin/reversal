// 0x1801614c0  FUN_1801614c0
// size=1418 thunk=false
// signature: undefined FUN_1801614c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1801614c0(longlong param_1,ulonglong *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  size_t sVar9;
  void *_Memory;
  byte bVar10;
  ulonglong uVar11;
  char *_Str1;
  char *******_Str1_00;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [24];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  void *local_588;
  void *pvStack_580;
  longlong local_578;
  char *******local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  ulonglong local_558;
  char local_548 [512];
  byte local_348 [768];
  ulonglong local_48;
  
  puVar13 = auStack_5c8;
  puVar12 = auStack_5c8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_5c8;
  if (-1 < param_3) {
    iVar6 = *(int *)(param_1 + 0xdc);
    if ((0 < iVar6) && (0 < *(int *)(param_1 + 0xcc))) {
      if (param_3 < iVar6) {
        uVar15 = *param_2;
        uVar16 = uVar15 + (longlong)*(int *)(param_1 + 0xe4);
        if ((((uVar15 <= uVar16) && ((ulonglong)((longlong)iVar6 * 2) <= param_2[1] - uVar15)) &&
            ((ulonglong)(longlong)*(int *)(param_1 + 0xe4) <=
             (param_2[1] - uVar15) + (longlong)iVar6 * -2)) &&
           (sVar2 = *(short *)(uVar16 + (longlong)param_3 * 2), param_3 = (int)sVar2, sVar2 < 0))
        goto LAB_180161a1f;
      }
      if (param_3 < *(int *)(param_1 + 0xcc)) {
        uVar16 = (longlong)*(int *)(param_1 + 0xd0) + (longlong)param_3 * 0x40;
        piVar3 = (int *)*param_2;
        piVar18 = (int *)(uVar16 + (longlong)piVar3);
        if ((((piVar3 <= piVar18) && (uVar15 = param_2[1] - (longlong)piVar3, 0x3f < uVar15)) &&
            ((uVar16 <= uVar15 - 0x40 &&
             ((piVar18 = (int *)((longlong)*piVar18 + (longlong)piVar18), piVar3 <= piVar18 &&
              ((ulonglong)((longlong)piVar18 - (longlong)piVar3) <= uVar15 - 1)))))) &&
           ((char)*piVar18 != '\0')) {
          memset(local_548,0,0x200);
          local_588 = (void *)0x0;
          pvStack_580 = (void *)0x0;
          uVar15 = 0;
          local_578 = 0;
          uVar16 = uVar15;
          if (0 < *(int *)(param_1 + 0xd4)) {
LAB_180161620:
            if (local_548[0] == '\0') {
              uVar17 = (longlong)*(int *)(param_1 + 0xd8) + (longlong)(int)uVar16 * 4;
              piVar4 = (int *)*param_2;
              piVar3 = (int *)(uVar17 + (longlong)piVar4);
              if (((piVar4 <= piVar3) && (uVar11 = param_2[1] - (longlong)piVar4, 3 < uVar11)) &&
                 (uVar17 <= uVar11 - 4)) {
                uVar17 = (ulonglong)*piVar3;
                piVar3 = (int *)((longlong)piVar4 + uVar17);
                if ((piVar4 <= piVar3) && (uVar17 <= uVar11 - 1)) {
                  FUN_180207430(local_348 + 0x100,"materials/%s%s.vmt",piVar3,piVar18);
                  pbVar7 = local_348 + 0x100;
                  bVar10 = local_348[0x100];
                  while (bVar10 != 0) {
                    if (bVar10 == 0x5c) {
                      *pbVar7 = 0x2f;
                    }
                    pbVar7 = pbVar7 + 1;
                    bVar10 = *pbVar7;
                  }
                  if (((DAT_1803f9248 != (longlong *)0x0) && (local_348[0x100] != 0)) &&
                     (lVar8 = (**(code **)(*DAT_1803f9248 + 0x10))
                                        (DAT_1803f9248,local_348 + 0x100,&DAT_1803589f0,
                                         &DAT_1803589e8), lVar8 != 0)) {
                    if (local_588 != pvStack_580) {
                      pvStack_580 = local_588;
                    }
                    (**(code **)(*DAT_1803f9248 + 0x20))(DAT_1803f9248,lVar8,0,0);
                    uVar17 = uVar15;
                    do {
                      FUN_180218360(&local_588,uVar17 + 0x40000);
                      iVar6 = (**(code **)*DAT_1803f9248)
                                        (DAT_1803f9248,(longlong)local_588 + uVar17,0x40000,lVar8);
                      if (0 < iVar6) {
                        uVar17 = uVar17 + (longlong)iVar6;
                      }
                      uVar11 = uVar17;
                    } while ((0x3ffff < iVar6) && (uVar11 = uVar15, uVar17 < 0x10000001));
                    (**(code **)(*DAT_1803f9248 + 0x18))(DAT_1803f9248,lVar8);
                    FUN_180218360(&local_588,uVar11);
                    if (uVar11 != 0) {
                      local_570 = (char *******)0x0;
                      uStack_568 = 0;
                      local_560 = 0;
                      local_558 = 0;
                      FUN_18001d080(&local_570,local_588,(longlong)pvStack_580 - (longlong)local_588
                                   );
                      _Str1_00 = (char *******)&local_570;
                      if (0xf < local_558) {
                        _Str1_00 = local_570;
                      }
                      cVar1 = *(char *)_Str1_00;
                      while (cVar1 != '\0') {
                        iVar6 = _strnicmp((char *)_Str1_00,"$basetexture",0xc);
                        if (iVar6 == 0) {
                          pbVar7 = (byte *)((longlong)_Str1_00 + 0xc);
                          uVar17 = (ulonglong)(char)*pbVar7;
                          if ((*pbVar7 < 0x23) && ((0x500000200U >> (uVar17 & 0x3f) & 1) != 0))
                          goto LAB_180161870;
                        }
                        _Str1_00 = (char *******)((longlong)_Str1_00 + 1);
                        cVar1 = *(char *)_Str1_00;
                      }
                      FUN_18020e450(&local_570);
                    }
                  }
                }
                goto LAB_180161849;
              }
              goto LAB_180161862;
            }
            goto LAB_18016190b;
          }
LAB_180161858:
          if (local_548[0] == '\0') {
LAB_180161862:
            uVar15 = 0xffffffff;
          }
          else {
LAB_18016190b:
            if (DAT_1803ea2c8 - DAT_1803ea2c0 >> 5 != 0) {
              do {
                _Str1 = (char *)(DAT_1803ea2c0 + uVar15 * 0x20);
                if (0xf < *(ulonglong *)(_Str1 + 0x18)) {
                  _Str1 = *(char **)_Str1;
                }
                iVar6 = _stricmp(_Str1,local_548);
                if (iVar6 == 0) goto LAB_1801619cc;
                uVar15 = uVar15 + 1;
              } while (uVar15 < (ulonglong)(DAT_1803ea2c8 - DAT_1803ea2c0 >> 5));
            }
            local_5a8 = 0;
            uStack_5a0 = 0;
            local_598 = 0;
            local_590 = 0;
            sVar9 = strlen(local_548);
            FUN_18001d080(&local_5a8,local_548,sVar9);
            FUN_180214300(&DAT_1803ea2c0,&local_5a8);
            FUN_18020e450(&local_5a8);
            uVar15 = (ulonglong)((int)(DAT_1803ea2c8 - DAT_1803ea2c0 >> 5) - 1);
          }
LAB_1801619cc:
          if (local_588 != (void *)0x0) {
            _Memory = local_588;
            puVar12 = auStack_5c8;
            if ((0xfff < (ulonglong)(local_578 - (longlong)local_588)) &&
               (_Memory = *(void **)((longlong)local_588 + -8), puVar12 = auStack_5c8,
               0x1f < (ulonglong)((longlong)local_588 + (-8 - (longlong)_Memory)))) {
              pcVar5 = (code *)swi(0x29);
              _Memory = (void *)(*pcVar5)(5);
              puVar12 = auStack_5c0;
            }
            *(undefined8 *)(puVar12 + -8) = 0x180161a0d;
            free(_Memory);
            *(undefined8 *)(puVar12 + 0x40) = 0;
            *(undefined8 *)(puVar12 + 0x48) = 0;
            *(undefined8 *)(puVar12 + 0x50) = 0;
          }
          uVar15 = uVar15 & 0xffffffff;
          puVar13 = puVar12;
          goto LAB_180161a24;
        }
      }
    }
  }
LAB_180161a1f:
  uVar15 = 0xffffffff;
LAB_180161a24:
  *(undefined8 *)(puVar13 + -8) = 0x180161a33;
  return uVar15;
LAB_180161870:
  while (((char)uVar17 == '\"' ||
         ((bVar10 = *pbVar7, bVar10 == 0x20 || (uVar17 = uVar15, bVar10 == 9))))) {
    pbVar7 = pbVar7 + 1;
    uVar17 = (ulonglong)*pbVar7;
  }
  while ((((bVar10 != 0 && (bVar10 != 0x22)) &&
          ((bVar10 = *pbVar7, (bVar10 - 9 & 0xfa) != 0 || (bVar10 == 0xe)))) && (uVar17 + 1 < 0x100)
         )) {
    if (bVar10 == 0x5c) {
      bVar10 = 0x2f;
    }
    local_348[uVar17] = bVar10;
    pbVar7 = pbVar7 + 1;
    bVar10 = *pbVar7;
    uVar17 = uVar17 + 1;
  }
  local_348[uVar17] = 0;
  FUN_18020e450(&local_570);
  if (uVar17 != 0) {
    FUN_180207430(local_548,"materials/%s.vtf",local_348);
  }
LAB_180161849:
  uVar14 = (int)uVar16 + 1;
  uVar16 = (ulonglong)uVar14;
  if (*(int *)(param_1 + 0xd4) <= (int)uVar14) goto LAB_180161858;
  goto LAB_180161620;
}


