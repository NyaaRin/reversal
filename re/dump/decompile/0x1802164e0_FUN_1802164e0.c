// 0x1802164e0  FUN_1802164e0
// size=737 thunk=false
// signature: undefined FUN_1802164e0()
// status: ok


undefined8 * FUN_1802164e0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  float fVar12;
  
  uVar10 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar8 = (undefined8 *)(uVar10 & DAT_1803fad30);
  puVar5 = *(undefined8 **)(DAT_1803fad18 + 8 + (longlong)puVar8 * 0x10);
  puVar11 = DAT_1803fad08;
  if (puVar5 != DAT_1803fad08) {
    puVar8 = *(undefined8 **)(DAT_1803fad18 + (longlong)puVar8 * 0x10);
    iVar1 = *(int *)(puVar5 + 2);
    puVar11 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar11;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar11 == puVar8) break;
      puVar11 = (undefined8 *)puVar11[1];
      iVar1 = *(int *)(puVar11 + 2);
    }
  }
  if (DAT_1803fad10 == 0x492492492492492) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_1802d8350(0x38,puVar8,DAT_1803fad18,param_4,&DAT_1803fad08,0);
  *(int *)(puVar5 + 2) = *(int *)param_3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
  *(undefined4 *)(puVar5 + 3) = 0x80000000;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  uVar4 = DAT_1803fad38;
  if (DAT_1803fad00 < (float)(DAT_1803fad10 + 1) / (float)DAT_1803fad38) {
    fVar12 = ceilf((float)(DAT_1803fad10 + 1) / DAT_1803fad00);
    lVar6 = 0;
    if ((DAT_180381300 <= fVar12) && (fVar12 = fVar12 - DAT_180381300, fVar12 < DAT_180381300)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar9 = uVar4;
    if ((uVar4 < uVar7) && ((0x1ff < uVar4 || (uVar9 = uVar4 * 8, uVar4 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    FUN_180236c10(uVar7,uVar9);
    puVar8 = *(undefined8 **)(DAT_1803fad18 + 8 + (DAT_1803fad30 & uVar10) * 0x10);
    puVar11 = DAT_1803fad08;
    if (puVar8 != DAT_1803fad08) {
      iVar1 = *(int *)(puVar8 + 2);
      puVar11 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar11 == *(undefined8 **)(DAT_1803fad18 + (DAT_1803fad30 & uVar10) * 0x10))
        goto LAB_180216750;
        puVar11 = (undefined8 *)puVar11[1];
        iVar1 = *(int *)(puVar11 + 2);
      }
      puVar11 = (undefined8 *)*puVar11;
    }
  }
LAB_180216750:
  puVar8 = (undefined8 *)puVar11[1];
  DAT_1803fad10 = DAT_1803fad10 + 1;
  *puVar5 = puVar11;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar11[1] = puVar5;
  lVar6 = DAT_1803fad18;
  uVar10 = DAT_1803fad30 & uVar10;
  puVar2 = *(undefined8 **)(DAT_1803fad18 + uVar10 * 0x10);
  if (puVar2 == DAT_1803fad08) {
    *(undefined8 **)(DAT_1803fad18 + uVar10 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar11) {
      *(undefined8 **)(DAT_1803fad18 + uVar10 * 0x10) = puVar5;
      goto LAB_1802167b4;
    }
    if (*(undefined8 **)(DAT_1803fad18 + 8 + uVar10 * 0x10) != puVar8) goto LAB_1802167b4;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar5;
LAB_1802167b4:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


