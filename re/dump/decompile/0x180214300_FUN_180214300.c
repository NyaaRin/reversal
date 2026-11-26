// 0x180214300  FUN_180214300
// size=385 thunk=false
// signature: undefined FUN_180214300()
// status: ok


undefined8 * FUN_180214300(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    lVar12 = (longlong)puVar2 - *param_1 >> 5;
    if (lVar12 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar1 = lVar12 + 1;
    uVar8 = param_1[2] - *param_1 >> 5;
    uVar11 = 0x7ffffffffffffff;
    if ((uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) &&
       (uVar11 = (uVar8 >> 1) + uVar8, uVar11 < uVar1)) {
      uVar11 = uVar1;
    }
    puVar6 = (undefined8 *)FUN_18020dbc0(uVar8,uVar11);
    puVar7 = puVar6 + lVar12 * 4;
    puVar18 = puVar7 + 4;
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar13 = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)puVar7 = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)puVar7 + 4) = uVar3;
    *(undefined4 *)(puVar7 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uVar5;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 3);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
    *(undefined4 *)(puVar7 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar5;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = (undefined8 *)*param_1;
    puVar14 = puVar6;
    plVar15 = param_1;
    puVar16 = puVar6;
    uVar8 = uVar11;
    puVar17 = puVar7;
    if (puVar2 != puVar10) {
      puVar17 = puVar18;
      FUN_180229ca0(puVar9,puVar2,puVar6,param_1,param_1,puVar6,uVar11,puVar7,puVar18);
      puVar10 = (undefined8 *)param_1[1];
      puVar9 = puVar2;
      puVar14 = puVar18;
      puVar17 = puVar6;
      puVar18 = puVar17;
    }
    FUN_180229ca0(puVar9,puVar10,puVar14,param_1,plVar15,puVar16,uVar8,puVar17,puVar18);
    FUN_18022e9d0(param_1,puVar6,uVar1,uVar11,plVar15,uVar13);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar13 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar13;
    uVar13 = param_2[3];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar13;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
  }
  return puVar7;
}


