// 0x180263250  FUN_180263250
// size=536 thunk=false
// signature: undefined FUN_180263250()
// status: ok


ulonglong * FUN_180263250(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  bool bVar16;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  
  puVar11 = param_1;
  if (param_1 != param_2) {
    while (puVar11 = puVar11 + 6, puVar11 != param_2) {
      uVar5 = *puVar11;
      uVar6 = puVar11[1];
      uVar1 = puVar11[3];
      uVar7 = puVar11[2];
      uVar8 = puVar11[3];
      uVar2 = puVar11[1];
      uVar9 = puVar11[4];
      uVar10 = puVar11[5];
      local_90 = uVar5;
      uStack_88 = uVar6;
      local_80 = uVar7;
      uStack_78 = uVar8;
      local_70 = uVar9;
      bVar16 = uVar5 < uVar7;
      if (uVar5 == uVar7) {
        bVar16 = uVar2 < uVar1;
      }
      uVar3 = param_1[2];
      puVar12 = &local_80;
      if (bVar16) {
        puVar12 = &local_90;
      }
      uVar4 = *param_1;
      bVar16 = uVar4 < uVar3;
      if (uVar4 == uVar3) {
        bVar16 = param_1[1] < param_1[3];
      }
      puVar13 = param_1;
      if (!bVar16) {
        puVar13 = param_1 + 2;
        uVar4 = uVar3;
      }
      bVar16 = *puVar12 < uVar4;
      if (*puVar12 == uVar4) {
        bVar16 = puVar12[1] < puVar13[1];
      }
      puVar12 = puVar11;
      if (bVar16) {
        uStack_68 = uVar10;
        memmove((void *)((longlong)puVar11 + (0x30 - ((longlong)puVar11 - (longlong)param_1))),
                param_1,(longlong)puVar11 - (longlong)param_1);
        *param_1 = uVar5;
        param_1[1] = uVar6;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
        param_1[4] = uVar9;
        param_1[5] = uVar10;
      }
      else {
        while( true ) {
          puVar13 = puVar12 + -6;
          bVar16 = uVar5 < uVar7;
          if (uVar5 == uVar7) {
            bVar16 = uVar2 < uVar1;
          }
          uVar3 = puVar12[-4];
          puVar14 = &local_80;
          if (bVar16) {
            puVar14 = &local_90;
          }
          uVar4 = *puVar13;
          bVar16 = uVar4 < uVar3;
          if (uVar4 == uVar3) {
            bVar16 = puVar12[-5] < puVar12[-3];
          }
          puVar15 = puVar13;
          if (!bVar16) {
            puVar15 = puVar12 + -4;
            uVar4 = uVar3;
          }
          bVar16 = *puVar14 < uVar4;
          if (*puVar14 == uVar4) {
            bVar16 = puVar14[1] < puVar15[1];
          }
          if (!bVar16) break;
          *puVar12 = *puVar13;
          puVar12[1] = puVar12[-5];
          puVar12[2] = puVar12[-4];
          puVar12[3] = puVar12[-3];
          puVar12[4] = puVar12[-2];
          puVar12[5] = puVar12[-1];
          puVar12 = puVar13;
        }
        *puVar12 = uVar5;
        puVar12[1] = uVar6;
        puVar12[2] = uVar7;
        puVar12[3] = uVar8;
        puVar12[4] = uVar9;
        puVar12[5] = uVar10;
      }
    }
  }
  return param_2;
}


