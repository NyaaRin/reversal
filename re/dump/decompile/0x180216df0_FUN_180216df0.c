// 0x180216df0  FUN_180216df0
// size=746 thunk=false
// signature: undefined FUN_180216df0()
// status: ok


undefined8 * FUN_180216df0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  puVar7 = (undefined8 *)(uVar8 & DAT_180458280);
  puVar4 = *(undefined8 **)(DAT_180458268 + 8 + (longlong)puVar7 * 0x10);
  puVar9 = DAT_180458258;
  if (puVar4 != DAT_180458258) {
    puVar7 = *(undefined8 **)(DAT_180458268 + (longlong)puVar7 * 0x10);
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
  if (DAT_180458260 == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar2)();
    return puVar4;
  }
  puVar4 = (undefined8 *)FUN_1802d8350(0x20,puVar7,DAT_180458268,param_4,&DAT_180458258,0);
  puVar4[2] = *(undefined8 *)param_3;
  puVar4[3] = 0;
  uVar3 = DAT_180458288;
  if (DAT_180458250 < (float)(DAT_180458260 + 1) / (float)DAT_180458288) {
    fVar11 = ceilf((float)(DAT_180458260 + 1) / DAT_180458250);
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
    FUN_1802374f0(uVar6,uVar10);
    puVar7 = *(undefined8 **)(DAT_180458268 + 8 + (uVar8 & DAT_180458280) * 0x10);
    puVar9 = DAT_180458258;
    if (puVar7 != DAT_180458258) {
      lVar5 = puVar7[2];
      puVar9 = puVar7;
      while (puVar4[2] != lVar5) {
        if (puVar9 == *(undefined8 **)(DAT_180458268 + (uVar8 & DAT_180458280) * 0x10))
        goto LAB_180217069;
        puVar9 = (undefined8 *)puVar9[1];
        lVar5 = puVar9[2];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_180217069:
  puVar7 = (undefined8 *)puVar9[1];
  DAT_180458260 = DAT_180458260 + 1;
  *puVar4 = puVar9;
  puVar4[1] = puVar7;
  *puVar7 = puVar4;
  puVar9[1] = puVar4;
  lVar5 = DAT_180458268;
  uVar8 = DAT_180458280 & uVar8;
  puVar1 = *(undefined8 **)(DAT_180458268 + uVar8 * 0x10);
  if (puVar1 == DAT_180458258) {
    *(undefined8 **)(DAT_180458268 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == puVar9) {
      *(undefined8 **)(DAT_180458268 + uVar8 * 0x10) = puVar4;
      goto LAB_1802170cd;
    }
    if (*(undefined8 **)(DAT_180458268 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1802170cd;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
LAB_1802170cd:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


