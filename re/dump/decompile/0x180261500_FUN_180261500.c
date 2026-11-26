// 0x180261500  FUN_180261500
// size=620 thunk=false
// signature: undefined FUN_180261500()
// status: ok


undefined8 * FUN_180261500(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar12 = (((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
           0x100000001b3;
  puVar9 = (undefined8 *)(uVar12 & *(ulonglong *)(param_1 + 0xc));
  lVar7 = *(longlong *)(param_1 + 6);
  puVar6 = *(undefined8 **)(lVar7 + 8 + (longlong)puVar9 * 0x10);
  pfVar1 = param_1 + 2;
  puVar11 = *(undefined8 **)pfVar1;
  if (puVar6 != puVar11) {
    puVar9 = *(undefined8 **)(lVar7 + (longlong)puVar9 * 0x10);
    sVar2 = *(short *)(puVar6 + 2);
    puVar11 = puVar6;
    while( true ) {
      if (*(short *)param_3 == sVar2) {
        *param_2 = puVar11;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar11 == puVar9) break;
      puVar11 = (undefined8 *)puVar11[1];
      sVar2 = *(short *)(puVar11 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar5 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar5)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_1802d8350(0x18,puVar9,lVar7,param_4,pfVar1,0);
  *(undefined2 *)(puVar6 + 2) = *(undefined2 *)param_3;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    fVar13 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar7 = 0;
    if ((DAT_180381300 <= fVar13) && (fVar13 = fVar13 - DAT_180381300, fVar13 < DAT_180381300)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar7)) {
      uVar8 = (longlong)fVar13 + lVar7;
    }
    uVar10 = uVar3;
    if ((uVar3 < uVar8) && ((0x1ff < uVar3 || (uVar10 = uVar3 * 8, uVar3 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    FUN_1802662e0(param_1,uVar10);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar11 = *(undefined8 **)pfVar1;
    if (puVar9 != puVar11) {
      sVar2 = *(short *)(puVar9 + 2);
      puVar11 = puVar9;
      while (*(short *)(puVar6 + 2) != sVar2) {
        if (puVar11 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_180261706;
        puVar11 = (undefined8 *)puVar11[1];
        sVar2 = *(short *)(puVar11 + 2);
      }
      puVar11 = (undefined8 *)*puVar11;
    }
  }
LAB_180261706:
  puVar9 = (undefined8 *)puVar11[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar11;
  puVar6[1] = puVar9;
  *puVar9 = puVar6;
  puVar11[1] = puVar6;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar4 = *(undefined8 **)(lVar7 + uVar12 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar7 + uVar12 * 0x10) = puVar6;
  }
  else {
    if (puVar4 == puVar11) {
      *(undefined8 **)(lVar7 + uVar12 * 0x10) = puVar6;
      goto LAB_18026175f;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar12 * 0x10) != puVar9) goto LAB_18026175f;
  }
  *(undefined8 **)(lVar7 + 8 + uVar12 * 0x10) = puVar6;
LAB_18026175f:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


