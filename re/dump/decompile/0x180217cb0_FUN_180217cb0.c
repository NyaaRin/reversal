// 0x180217cb0  FUN_180217cb0
// size=697 thunk=false
// signature: undefined FUN_180217cb0()
// status: ok


undefined8 * FUN_180217cb0(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

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
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar8 = (undefined8 *)(uVar9 & DAT_1803fa7e0);
  puVar5 = *(undefined8 **)(DAT_1803fa7c8 + 8 + (longlong)puVar8 * 0x10);
  puVar10 = DAT_1803fa7b8;
  if (puVar5 != DAT_1803fa7b8) {
    puVar8 = *(undefined8 **)(DAT_1803fa7c8 + (longlong)puVar8 * 0x10);
    iVar1 = *(int *)(puVar5 + 2);
    puVar10 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar10;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 == puVar8) break;
      puVar10 = (undefined8 *)puVar10[1];
      iVar1 = *(int *)(puVar10 + 2);
    }
  }
  if (DAT_1803fa7c0 == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_1802d8350(0x20,puVar8,DAT_1803fa7c8,param_4,&DAT_1803fa7b8,0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  *(undefined4 *)(puVar5 + 3) = 0xffffffff;
  uVar4 = DAT_1803fa7e8;
  if (DAT_1803fa7b0 < (float)(DAT_1803fa7c0 + 1) / (float)DAT_1803fa7e8) {
    fVar12 = ceilf((float)(DAT_1803fa7c0 + 1) / DAT_1803fa7b0);
    lVar6 = 0;
    if ((DAT_180381300 <= fVar12) && (fVar12 = fVar12 - DAT_180381300, fVar12 < DAT_180381300)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar6)) {
      uVar7 = (longlong)fVar12 + lVar6;
    }
    uVar11 = uVar4;
    if ((uVar4 < uVar7) && ((0x1ff < uVar4 || (uVar11 = uVar4 * 8, uVar4 * 8 < uVar7)))) {
      uVar11 = uVar7;
    }
    FUN_1802380e0(uVar7,uVar11);
    puVar8 = *(undefined8 **)(DAT_1803fa7c8 + 8 + (DAT_1803fa7e0 & uVar9) * 0x10);
    puVar10 = DAT_1803fa7b8;
    if (puVar8 != DAT_1803fa7b8) {
      iVar1 = *(int *)(puVar8 + 2);
      puVar10 = puVar8;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar10 == *(undefined8 **)(DAT_1803fa7c8 + (DAT_1803fa7e0 & uVar9) * 0x10))
        goto LAB_180217ef8;
        puVar10 = (undefined8 *)puVar10[1];
        iVar1 = *(int *)(puVar10 + 2);
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_180217ef8:
  puVar8 = (undefined8 *)puVar10[1];
  DAT_1803fa7c0 = DAT_1803fa7c0 + 1;
  *puVar5 = puVar10;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar10[1] = puVar5;
  lVar6 = DAT_1803fa7c8;
  uVar9 = DAT_1803fa7e0 & uVar9;
  puVar2 = *(undefined8 **)(DAT_1803fa7c8 + uVar9 * 0x10);
  if (puVar2 == DAT_1803fa7b8) {
    *(undefined8 **)(DAT_1803fa7c8 + uVar9 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(DAT_1803fa7c8 + uVar9 * 0x10) = puVar5;
      goto LAB_180217f5c;
    }
    if (*(undefined8 **)(DAT_1803fa7c8 + 8 + uVar9 * 0x10) != puVar8) goto LAB_180217f5c;
  }
  *(undefined8 **)(lVar6 + 8 + uVar9 * 0x10) = puVar5;
LAB_180217f5c:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


