// 0x180265cb0  FUN_180265cb0
// size=615 thunk=false
// signature: undefined FUN_180265cb0()
// status: ok


undefined8 * FUN_180265cb0(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  
  bVar2 = *param_3;
  uVar14 = ((ulonglong)bVar2 ^ 0xcbf29ce484222325) * 0x100000001b3;
  uVar12 = uVar14 & *(ulonglong *)(param_1 + 0xc);
  lVar9 = *(longlong *)(param_1 + 6);
  puVar8 = *(undefined8 **)(lVar9 + 8 + uVar12 * 0x10);
  pfVar1 = param_1 + 2;
  puVar11 = *(undefined8 **)pfVar1;
  uVar13 = uVar12;
  if (puVar8 != puVar11) {
    uVar13 = uVar12 * 2;
    bVar3 = *(byte *)(puVar8 + 2);
    puVar11 = puVar8;
    while( true ) {
      if (bVar2 == bVar3) {
        *param_2 = puVar11;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar11 == *(undefined8 **)(lVar9 + uVar12 * 0x10)) break;
      puVar11 = (undefined8 *)puVar11[1];
      bVar3 = *(byte *)(puVar11 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar7 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar7)();
    return puVar8;
  }
  puVar8 = (undefined8 *)FUN_1802d8350(0x18,bVar2,uVar13,lVar9,pfVar1,0);
  *(byte *)(puVar8 + 2) = *param_3;
  uVar13 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar13) {
    fVar15 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar9 = 0;
    if ((DAT_180381300 <= fVar15) && (fVar15 = fVar15 - DAT_180381300, fVar15 < DAT_180381300)) {
      lVar9 = -0x8000000000000000;
    }
    uVar12 = 8;
    if (8 < (ulonglong)((longlong)fVar15 + lVar9)) {
      uVar12 = (longlong)fVar15 + lVar9;
    }
    uVar10 = uVar13;
    if ((uVar13 < uVar12) && ((0x1ff < uVar13 || (uVar10 = uVar13 * 8, uVar13 * 8 < uVar12)))) {
      uVar10 = uVar12;
    }
    FUN_180266cf0(param_1,uVar10);
    puVar5 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar11 = *(undefined8 **)pfVar1;
    if (puVar5 != puVar11) {
      cVar4 = *(char *)(puVar5 + 2);
      puVar11 = puVar5;
      while (*(char *)(puVar8 + 2) != cVar4) {
        if (puVar11 ==
            *(undefined8 **)
             (*(longlong *)(param_1 + 6) + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
        goto LAB_180265eb1;
        puVar11 = (undefined8 *)puVar11[1];
        cVar4 = *(char *)(puVar11 + 2);
      }
      puVar11 = (undefined8 *)*puVar11;
    }
  }
LAB_180265eb1:
  puVar5 = (undefined8 *)puVar11[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar8 = puVar11;
  puVar8[1] = puVar5;
  *puVar5 = puVar8;
  puVar11[1] = puVar8;
  lVar9 = *(longlong *)(param_1 + 6);
  uVar14 = *(ulonglong *)(param_1 + 0xc) & uVar14;
  puVar6 = *(undefined8 **)(lVar9 + uVar14 * 0x10);
  if (puVar6 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar9 + uVar14 * 0x10) = puVar8;
  }
  else {
    if (puVar6 == puVar11) {
      *(undefined8 **)(lVar9 + uVar14 * 0x10) = puVar8;
      goto LAB_180265f0a;
    }
    if (*(undefined8 **)(lVar9 + 8 + uVar14 * 0x10) != puVar5) goto LAB_180265f0a;
  }
  *(undefined8 **)(lVar9 + 8 + uVar14 * 0x10) = puVar8;
LAB_180265f0a:
  *param_2 = puVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


