// 0x1802170e0  FUN_1802170e0
// size=779 thunk=false
// signature: undefined FUN_1802170e0()
// status: ok


undefined8 * FUN_1802170e0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar7 = (undefined8 *)(uVar8 & DAT_1805c7b80);
  puVar4 = *(undefined8 **)(DAT_1805c7b68 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_1805c7b58;
  if (puVar4 != DAT_1805c7b58) {
    puVar7 = *(undefined8 **)(DAT_1805c7b68 + (longlong)puVar7 * 0x10);
    lVar5 = puVar4[2];
    puVar9 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar5) {
        *param_2 = puVar9;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == puVar7) break;
      puVar9 = (undefined8 *)puVar9[1];
      lVar5 = puVar9[2];
    }
  }
  if (DAT_1805c7b60 == 0x38e38e38e38e38e) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar2)();
    return puVar4;
  }
  puVar4 = (undefined8 *)FUN_1802d8350(0x48,puVar7,DAT_1805c7b68,param_4,&DAT_1805c7b58,0);
  puVar4[2] = *(undefined8 *)param_3;
  *(undefined2 *)((longlong)puVar4 + 0x3d) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x3f) = 0;
  puVar4[3] = 0xffffffffffffffff;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x3c) = 1;
  puVar4[8] = 0;
  uVar3 = DAT_1805c7b88;
  if (DAT_1805c7b50 < (float)(DAT_1805c7b60 + 1) / (float)DAT_1805c7b88) {
    fVar11 = ceilf((float)(DAT_1805c7b60 + 1) / DAT_1805c7b50);
    lVar5 = 0;
    if ((DAT_180381300 <= fVar11) && (fVar11 = fVar11 - DAT_180381300, fVar11 < DAT_180381300)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar5)) {
      uVar6 = (longlong)fVar11 + lVar5;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar6) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar6)))) {
      uVar10 = uVar6;
    }
    FUN_1802376e0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_1805c7b68 + 8 + (uVar8 & DAT_1805c7b80) * 0x10);
    puVar9 = DAT_1805c7b58;
    if (puVar7 != DAT_1805c7b58) {
      lVar5 = puVar7[2];
      puVar9 = puVar7;
      while (puVar4[2] != lVar5) {
        if (puVar9 == *(undefined8 **)(DAT_1805c7b68 + (uVar8 & DAT_1805c7b80) * 0x10))
        goto LAB_18021737a;
        puVar9 = (undefined8 *)puVar9[1];
        lVar5 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_18021737a:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_1805c7b60 = DAT_1805c7b60 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_1805c7b68;
  uVar8 = DAT_1805c7b80 & uVar8;
  puVar1 = *(undefined8 **)(DAT_1805c7b68 + uVar8 * 0x10);
  if (puVar1 == DAT_1805c7b58) {
    *(undefined8 **)(DAT_1805c7b68 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == puVar9) {
      *(undefined8 **)(DAT_1805c7b68 + uVar8 * 0x10) = puVar4;
      goto LAB_1802173de;
    }
    if (*(undefined8 **)(DAT_1805c7b68 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1802173de;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1802173de:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


