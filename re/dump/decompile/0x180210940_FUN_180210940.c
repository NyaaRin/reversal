// 0x180210940  FUN_180210940
// size=406 thunk=false
// signature: undefined FUN_180210940()
// status: ok


undefined8 * FUN_180210940(undefined8 param_1,char *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar2 = DAT_1803eb400;
  if (DAT_1803eb400 == DAT_1803eb408) {
    lVar9 = (longlong)DAT_1803eb400 - (longlong)DAT_1803eb3f8 >> 5;
    if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar1 = lVar9 + 1;
    uVar6 = (longlong)DAT_1803eb408 - (longlong)DAT_1803eb3f8 >> 5;
    uVar8 = 0x7ffffffffffffff;
    if ((uVar6 <= 0x7ffffffffffffff - (uVar6 >> 1)) && (uVar8 = (uVar6 >> 1) + uVar6, uVar8 < uVar1)
       ) {
      uVar8 = uVar1;
    }
    puVar4 = (undefined8 *)FUN_18020dbc0(uVar6,uVar8);
    puVar5 = puVar4 + lVar9 * 4;
    puVar11 = &DAT_1803eb3f8;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar12 = puVar4;
    uVar6 = uVar8;
    puVar14 = puVar5 + 4;
    sVar3 = strlen(param_2);
    FUN_18001d080(puVar5,param_2,sVar3);
    puVar7 = DAT_1803eb3f8;
    puVar10 = puVar4;
    puVar13 = puVar5;
    if (puVar2 != DAT_1803eb400) {
      FUN_180229ca0(DAT_1803eb3f8,puVar2,puVar4,&DAT_1803eb3f8,puVar11,puVar12,uVar6,puVar5,puVar14)
      ;
      puVar7 = puVar2;
      puVar10 = puVar5 + 4;
      puVar13 = puVar4;
    }
    FUN_180229ca0(puVar7,DAT_1803eb400,puVar10,&DAT_1803eb3f8,puVar11,puVar12,uVar6,puVar13,puVar14)
    ;
    FUN_18022e9d0(&DAT_1803eb3f8,puVar4,uVar1,uVar8,puVar11,0);
  }
  else {
    *DAT_1803eb400 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    sVar3 = strlen(param_2);
    FUN_18001d080(puVar2,param_2,sVar3);
    puVar5 = DAT_1803eb400;
    DAT_1803eb400 = DAT_1803eb400 + 4;
  }
  return puVar5;
}


