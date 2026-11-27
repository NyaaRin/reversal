// 0x180134f10  FUN_180134f10
// size=496 thunk=false
// signature: undefined FUN_180134f10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180134f10(undefined8 param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *puVar12;
  size_t sVar13;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0 [4];
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 *****local_78 [2];
  size_t local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = local_b0;
  uVar4 = FUN_18016d4c0(local_b0,param_1);
  FUN_180133a10(local_78,uVar4);
  local_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1801342d0(&local_90);
  uVar10 = local_60;
  sVar13 = local_68;
  ppppppuVar11 = (undefined8 ******)local_78[0];
  puVar9 = puStack_88;
  for (puVar8 = local_90; puVar8 != puVar9; puVar8 = puVar8 + 9) {
    ppppppuVar7 = local_78;
    if (0xf < uVar10) {
      ppppppuVar7 = ppppppuVar11;
    }
    sVar1 = puVar8[2];
    puVar5 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar5 = (undefined8 *)*puVar8;
    }
    if ((sVar1 == sVar13) &&
       ((sVar1 == 0 || (iVar3 = memcmp(puVar5,ppppppuVar7,sVar1), iVar3 == 0)))) break;
  }
  puVar5 = puStack_88;
  if (puVar8 != puVar9) {
    puVar5 = puVar8 + 9;
    puVar6 = puVar9;
    puVar12 = puVar9;
    if (puVar5 != puVar9) {
      do {
        ppppppuVar7 = local_78;
        if (0xf < uVar10) {
          ppppppuVar7 = ppppppuVar11;
        }
        sVar1 = puVar5[2];
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (undefined8 *)*puVar5;
        }
        if ((sVar1 != sVar13) ||
           ((sVar1 != 0 && (iVar3 = memcmp(puVar6,ppppppuVar7,sVar1), iVar3 != 0)))) {
          FUN_18020e8a0(puVar8,puVar5);
          puVar8[4] = puVar5[4];
          FUN_18020e8a0(puVar8 + 5,puVar5 + 5);
          puVar8 = puVar8 + 9;
          uVar10 = local_60;
          ppppppuVar11 = (undefined8 ******)local_78[0];
          sVar13 = local_68;
        }
        puVar5 = puVar5 + 9;
      } while (puVar5 != puVar9);
      puVar5 = puStack_88;
      puVar6 = puStack_88;
      puVar12 = puStack_88;
      if (puVar8 == puVar9) goto LAB_1801350c3;
    }
    for (; puVar2 = puVar8, puVar9 != puVar12; puVar9 = puVar9 + 9) {
      FUN_18020e8a0(puVar8,puVar9);
      puVar8[4] = puVar9[4];
      FUN_18020e8a0(puVar8 + 5,puVar9 + 5);
      puVar8 = puVar8 + 9;
      puVar6 = puStack_88;
    }
    for (; local_b8 = puVar2, puVar5 = puVar8, puVar2 != puVar6; puVar2 = puVar2 + 9) {
      FUN_18020e450(puVar2 + 5);
      FUN_18020e450(puVar2);
    }
  }
LAB_1801350c3:
  puStack_88 = puVar5;
  FUN_180134830(&local_90);
  FUN_18020ad50(&local_90);
  FUN_18020e450(local_78);
  return;
}


