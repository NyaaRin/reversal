// 0x180204a10  FUN_180204a10
// size=745 thunk=false
// signature: undefined FUN_180204a10()
// status: ok


undefined8 * FUN_180204a10(undefined8 param_1,undefined8 *param_2,byte *param_3,char *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  
  uVar11 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar9 = (undefined8 *)(uVar11 & DAT_18056e770);
  puVar5 = *(undefined8 **)(DAT_18056e758 + 8 + (longlong)puVar9 * 0x10);
  puVar12 = DAT_18056e748;
  if (puVar5 != DAT_18056e748) {
    puVar9 = *(undefined8 **)(DAT_18056e758 + (longlong)puVar9 * 0x10);
    iVar1 = *(int *)(puVar5 + 2);
    puVar12 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar12;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar12 == puVar9) break;
      puVar12 = (undefined8 *)puVar12[1];
      iVar1 = *(int *)(puVar12 + 2);
    }
  }
  if (DAT_18056e750 == 0x492492492492492) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_1802d8350(0x38,puVar9,DAT_18056e758,param_4,&DAT_18056e748,0);
  *(int *)(puVar5 + 2) = *(int *)param_3;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  sVar6 = strlen(param_4);
  FUN_18001d080(puVar5 + 3,param_4,sVar6);
  uVar4 = DAT_18056e778;
  if (DAT_18056e740 < (float)(DAT_18056e750 + 1) / (float)DAT_18056e778) {
    fVar13 = ceilf((float)(DAT_18056e750 + 1) / DAT_18056e740);
    lVar7 = 0;
    if ((DAT_180381300 <= fVar13) && (fVar13 = fVar13 - DAT_180381300, fVar13 < DAT_180381300)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar7)) {
      uVar8 = (longlong)fVar13 + lVar7;
    }
    uVar10 = uVar4;
    if ((uVar4 < uVar8) && ((0x1ff < uVar4 || (uVar10 = uVar4 * 8, uVar4 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    FUN_18022c6a0(uVar8,uVar10);
    puVar9 = *(undefined8 **)(DAT_18056e758 + 8 + (uVar11 & DAT_18056e770) * 0x10);
    puVar12 = DAT_18056e748;
    if (puVar9 != DAT_18056e748) {
      iVar1 = *(int *)(puVar9 + 2);
      puVar12 = puVar9;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar12 == *(undefined8 **)(DAT_18056e758 + (uVar11 & DAT_18056e770) * 0x10))
        goto LAB_180204c88;
        puVar12 = (undefined8 *)puVar12[1];
        iVar1 = *(int *)(puVar12 + 2);
      }
      puVar12 = (undefined8 *)*puVar12;
    }
  }
LAB_180204c88:
  puVar9 = (undefined8 *)puVar12[1];
  DAT_18056e750 = DAT_18056e750 + 1;
  *puVar5 = puVar12;
  puVar5[1] = puVar9;
  *puVar9 = puVar5;
  puVar12[1] = puVar5;
  lVar7 = DAT_18056e758;
  uVar11 = DAT_18056e770 & uVar11;
  puVar2 = *(undefined8 **)(DAT_18056e758 + uVar11 * 0x10);
  if (puVar2 == DAT_18056e748) {
    *(undefined8 **)(DAT_18056e758 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar12) {
      *(undefined8 **)(DAT_18056e758 + uVar11 * 0x10) = puVar5;
      goto LAB_180204cec;
    }
    if (*(undefined8 **)(DAT_18056e758 + 8 + uVar11 * 0x10) != puVar9) goto LAB_180204cec;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar5;
LAB_180204cec:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


