// 0x180039dd0  FUN_180039dd0
// size=690 thunk=false
// signature: undefined FUN_180039dd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_180039dd0(undefined8 param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *******pppppppuVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  size_t sVar10;
  void *_Memory;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong _Size;
  ulonglong uVar17;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *******local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  local_60 = (undefined8 *******)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = param_1;
  sVar9 = strlen(param_2);
  FUN_18001d080(&local_60,param_2,sVar9);
  uVar17 = local_48;
  uVar13 = local_50;
  pppppppuVar6 = local_60;
  puVar5 = DAT_1805c7c10;
  cVar7 = *(char *)((longlong)DAT_1805c7c10[1] + 0x19);
  puVar11 = (undefined8 *)DAT_1805c7c10[1];
  puVar16 = DAT_1805c7c10;
  while (puVar15 = puVar11, cVar7 == '\0') {
    puVar11 = puVar15 + 4;
    pppppppuVar12 = &local_60;
    if (0xf < uVar17) {
      pppppppuVar12 = pppppppuVar6;
    }
    uVar1 = puVar15[6];
    if (0xf < (ulonglong)puVar15[7]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    _Size = uVar1;
    if (uVar13 < uVar1) {
      _Size = uVar13;
    }
    iVar8 = memcmp(puVar11,pppppppuVar12,_Size);
    if (iVar8 == 0) {
      if (uVar1 < uVar13) {
        cVar7 = -1;
        goto LAB_180039eb5;
      }
      if (uVar13 < uVar1) goto LAB_180039eb3;
LAB_180039ebf:
      puVar11 = (undefined8 *)*puVar15;
    }
    else {
      if (iVar8 < 0) {
        cVar7 = -1;
      }
      else {
LAB_180039eb3:
        cVar7 = '\x01';
      }
LAB_180039eb5:
      if (-1 < cVar7) goto LAB_180039ebf;
      puVar11 = (undefined8 *)puVar15[2];
      puVar15 = puVar16;
    }
    cVar7 = *(char *)((longlong)puVar11 + 0x19);
    puVar16 = puVar15;
  }
  if (*(char *)((longlong)puVar16 + 0x19) == '\0') {
    puVar11 = puVar16 + 4;
    uVar1 = puVar16[6];
    if (0xf < (ulonglong)puVar16[7]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    pppppppuVar12 = &local_60;
    if (0xf < uVar17) {
      pppppppuVar12 = pppppppuVar6;
    }
    uVar17 = uVar13;
    if (uVar1 < uVar13) {
      uVar17 = uVar1;
    }
    iVar8 = memcmp(pppppppuVar12,puVar11,uVar17);
    if (iVar8 == 0) {
      if (uVar1 <= uVar13) {
        if (uVar13 <= uVar1) goto LAB_180039f1d;
        goto LAB_180039f14;
      }
      cVar7 = -1;
    }
    else if (iVar8 < 0) {
      cVar7 = -1;
    }
    else {
LAB_180039f14:
      cVar7 = '\x01';
    }
    if (-1 < cVar7) goto LAB_180039f1d;
  }
  puVar16 = puVar5;
LAB_180039f1d:
  FUN_18020e450(&local_60);
  if (puVar16 != DAT_1805c7c10) {
    uVar13 = 0;
    lVar2 = puVar16[8];
    uVar17 = (puVar16[9] - lVar2 >> 4) * -0x5555555555555555;
    if (uVar17 != 0) {
      do {
        lVar14 = uVar13 * 0x30;
        puVar11 = (undefined8 *)(lVar2 + lVar14);
        sVar10 = strlen(param_3);
        sVar9 = puVar11[2];
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        if ((sVar9 == sVar10) &&
           ((sVar9 == 0 || (iVar8 = memcmp(puVar11,param_3,sVar9), iVar8 == 0)))) {
          FUN_18002d8c0(local_68,*(undefined4 *)(lVar2 + 0x20 + lVar14));
          lVar14 = puVar16[8] + lVar14;
          lVar2 = puVar16[9];
          lVar4 = lVar14;
          while (lVar3 = lVar4 + 0x30, lVar3 != lVar2) {
            FUN_18020e8a0(lVar14,lVar3);
            *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(lVar4 + 0x50);
            *(undefined4 *)(lVar14 + 0x24) = *(undefined4 *)(lVar4 + 0x54);
            *(undefined1 *)(lVar14 + 0x28) = *(undefined1 *)(lVar4 + 0x58);
            lVar14 = lVar14 + 0x30;
            lVar4 = lVar3;
          }
          local_68 = puVar16[9] + -0x30;
          FUN_18020e450();
          puVar16[9] = puVar16[9] + -0x30;
          if (puVar16[8] == puVar16[9]) {
            _Memory = (void *)FUN_18022e0e0(&DAT_1805c7c10,puVar16);
            local_68 = (longlong)_Memory + 0x20;
            FUN_18023e160((longlong)_Memory + 0x40);
            FUN_18020e450((longlong)_Memory + 0x20);
            free(_Memory);
          }
          FUN_1800397e0();
          return 1;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar17);
    }
  }
  return 0;
}


