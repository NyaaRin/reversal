// 0x180210e30  FUN_180210e30
// size=368 thunk=false
// signature: undefined FUN_180210e30()
// status: ok


undefined8 * FUN_180210e30(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    lVar11 = (longlong)puVar2 - *param_1 >> 5;
    if (lVar11 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar1 = lVar11 + 1;
    uVar7 = param_1[2] - *param_1 >> 5;
    uVar10 = 0x7ffffffffffffff;
    if ((uVar7 <= 0x7ffffffffffffff - (uVar7 >> 1)) &&
       (uVar10 = uVar7 + (uVar7 >> 1), uVar10 < uVar1)) {
      uVar10 = uVar1;
    }
    puVar5 = (undefined8 *)FUN_18020dbc0(uVar7,uVar10);
    puVar6 = puVar5 + lVar11 * 4;
    uVar3 = *param_3;
    uVar4 = *param_2;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    plVar13 = param_1;
    puVar14 = puVar5;
    uVar7 = uVar10;
    puVar16 = puVar6 + 4;
    FUN_18001d080(puVar6,uVar4,uVar3);
    puVar9 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    puVar12 = puVar5;
    puVar15 = puVar6;
    if (puVar2 != puVar9) {
      FUN_180229ca0(puVar8,puVar2,puVar5,param_1,param_3,param_2,plVar13,puVar14,uVar7,puVar6,
                    puVar16);
      puVar9 = (undefined8 *)param_1[1];
      puVar8 = puVar2;
      puVar12 = puVar6 + 4;
      puVar15 = puVar5;
    }
    FUN_180229ca0(puVar8,puVar9,puVar12,param_1,param_3,param_2,plVar13,puVar14,uVar7,puVar15,
                  puVar16);
    FUN_18022e9d0(param_1,puVar5,uVar1,uVar10);
  }
  else {
    uVar3 = *param_3;
    uVar4 = *param_2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    FUN_18001d080(puVar2,uVar4,uVar3);
    puVar6 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar6 + 4);
  }
  return puVar6;
}


