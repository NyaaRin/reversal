// 0x1802155b0  FUN_1802155b0
// size=645 thunk=false
// signature: undefined FUN_1802155b0()
// status: ok


undefined8 * FUN_1802155b0(float *param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar12 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar9 = (undefined8 *)(uVar12 & *(ulonglong *)(param_1 + 0xc));
  lVar7 = *(longlong *)(param_1 + 6);
  puVar6 = *(undefined8 **)(lVar7 + 8 + (longlong)puVar9 * 0x10);
  pfVar1 = param_1 + 2;
  puVar10 = *(undefined8 **)pfVar1;
  if (puVar6 != puVar10) {
    puVar9 = *(undefined8 **)(lVar7 + (longlong)puVar9 * 0x10);
    iVar2 = *(int *)(puVar6 + 2);
    puVar10 = puVar6;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar9) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar2 = *(int *)(puVar10 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar5 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar5)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_1802d8350(0x18,puVar9,lVar7,param_4,pfVar1,0);
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
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
    uVar11 = uVar3;
    if ((uVar3 < uVar8) && ((0x1ff < uVar3 || (uVar11 = uVar3 * 8, uVar3 * 8 < uVar8)))) {
      uVar11 = uVar8;
    }
    FUN_180236430(param_1,uVar11);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar10 = *(undefined8 **)pfVar1;
    if (puVar9 != puVar10) {
      iVar2 = *(int *)(puVar9 + 2);
      puVar10 = puVar9;
      while (*(int *)(puVar6 + 2) != iVar2) {
        if (puVar10 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_1802157d3;
        puVar10 = (undefined8 *)puVar10[1];
        iVar2 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_1802157d3:
  puVar9 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar10;
  puVar6[1] = puVar9;
  *puVar9 = puVar6;
  puVar10[1] = puVar6;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar4 = *(undefined8 **)(lVar7 + uVar12 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar7 + uVar12 * 0x10) = puVar6;
  }
  else {
    if (puVar4 == puVar10) {
      *(undefined8 **)(lVar7 + uVar12 * 0x10) = puVar6;
      goto LAB_180215828;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar12 * 0x10) != puVar9) goto LAB_180215828;
  }
  *(undefined8 **)(lVar7 + 8 + uVar12 * 0x10) = puVar6;
LAB_180215828:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


