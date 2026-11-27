// 0x1802055d0  FUN_1802055d0
// size=326 thunk=false
// signature: undefined FUN_1802055d0()
// status: ok


undefined8 * FUN_1802055d0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)param_1[2]) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar2 + 4);
    return puVar2;
  }
  lVar8 = (longlong)puVar2 - *param_1 >> 5;
  if (lVar8 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = lVar8 + 1;
  uVar4 = param_1[2] - *param_1 >> 5;
  uVar7 = 0x7ffffffffffffff;
  if ((uVar4 <= 0x7ffffffffffffff - (uVar4 >> 1)) && (uVar7 = uVar4 + (uVar4 >> 1), uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  puVar3 = (undefined8 *)FUN_18020dbc0(uVar4,uVar7);
  puVar9 = puVar3 + lVar8 * 4;
  puVar15 = puVar9 + 4;
  *puVar9 = 0;
  puVar9[1] = 0;
  uVar10 = 0;
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  puVar6 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  puVar11 = puVar3;
  plVar12 = param_1;
  puVar13 = puVar3;
  uVar4 = uVar7;
  puVar14 = puVar9;
  if (puVar2 != puVar6) {
    puVar14 = puVar15;
    FUN_180229ca0(puVar5,puVar2,puVar3,param_1,param_1,puVar3,uVar7,puVar9,puVar15);
    puVar6 = (undefined8 *)param_1[1];
    puVar5 = puVar2;
    puVar11 = puVar15;
    puVar14 = puVar3;
    puVar15 = puVar14;
  }
  FUN_180229ca0(puVar5,puVar6,puVar11,param_1,plVar12,puVar13,uVar4,puVar14,puVar15);
  FUN_18022e9d0(param_1,puVar3,uVar1,uVar7,plVar12,uVar10);
  return puVar9;
}


