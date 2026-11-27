// 0x180210ae0  FUN_180210ae0
// size=382 thunk=false
// signature: undefined FUN_180210ae0()
// status: ok


undefined8 * FUN_180210ae0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)param_1[2]) {
    lVar11 = (longlong)puVar3 - *param_1 >> 5;
    if (lVar11 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar1 = lVar11 + 1;
    uVar8 = param_1[2] - *param_1 >> 5;
    uVar12 = 0x7ffffffffffffff;
    if ((uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) &&
       (uVar12 = uVar8 + (uVar8 >> 1), uVar12 < uVar1)) {
      uVar12 = uVar1;
    }
    puVar6 = (undefined8 *)FUN_18020dbc0(uVar8,uVar12);
    puVar7 = puVar6 + lVar11 * 4;
    puVar2 = puVar7 + 4;
    pcVar4 = (char *)*param_2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    plVar15 = param_1;
    puVar16 = puVar6;
    uVar8 = uVar12;
    puVar18 = puVar2;
    sVar5 = strlen(pcVar4);
    puVar14 = puVar7;
    FUN_18001d080(puVar7,pcVar4,sVar5);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = (undefined8 *)*param_1;
    puVar13 = puVar6;
    puVar17 = puVar7;
    if (puVar3 != puVar10) {
      FUN_180229ca0(puVar9,puVar3,puVar6,param_1,puVar14,plVar15,puVar16,uVar8,puVar7,puVar18);
      puVar10 = (undefined8 *)param_1[1];
      puVar9 = puVar3;
      puVar13 = puVar2;
      puVar17 = puVar6;
    }
    FUN_180229ca0(puVar9,puVar10,puVar13,param_1,puVar14,plVar15,puVar16,uVar8,puVar17,puVar18);
    FUN_18022e9d0(param_1,puVar6,uVar1,uVar12,puVar14,plVar15,0);
  }
  else {
    pcVar4 = (char *)*param_2;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    sVar5 = strlen(pcVar4);
    FUN_18001d080(puVar3,pcVar4,sVar5);
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
  }
  return puVar7;
}


