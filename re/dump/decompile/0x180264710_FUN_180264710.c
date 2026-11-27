// 0x180264710  FUN_180264710
// size=618 thunk=false
// signature: undefined FUN_180264710()
// status: ok


undefined8 * FUN_180264710(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar11 = auStack_88;
  lVar9 = *param_1;
  lVar6 = (param_1[1] - lVar9 >> 5) * -0x5555555555555555;
  uVar13 = 0x2aaaaaaaaaaaaaa;
  if (lVar6 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = lVar6 + 1;
  uVar8 = (param_1[2] - lVar9 >> 5) * -0x5555555555555555;
  uVar7 = 0x2aaaaaaaaaaaaaa - (uVar8 >> 1);
  puVar10 = (undefined8 *)0x0;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar8 + (uVar8 >> 1);
    uVar13 = uVar1;
    if (uVar1 <= uVar8) {
      uVar13 = uVar8;
    }
    if (0x2aaaaaaaaaaaaaa < uVar13) {
LAB_180264976:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar8 = uVar13 * 0x60;
    puVar12 = auStack_88;
    if (uVar8 == 0) goto LAB_1802647fb;
    if (uVar8 < 0x1000) {
      puVar10 = (undefined8 *)FUN_1802d8350();
      puVar12 = auStack_88;
      goto LAB_1802647fb;
    }
    uVar7 = uVar8 + 0x27;
    if (uVar7 <= uVar8) goto LAB_180264976;
  }
  else {
    uVar7 = 0xffffffffffffffe7;
  }
  lVar6 = FUN_1802d8350(uVar7);
  if (lVar6 == 0) {
    pcVar5 = (code *)swi(0x29);
    lVar6 = (*pcVar5)(5);
    puVar11 = auStack_80;
  }
  puVar10 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
  puVar10[-1] = lVar6;
  puVar12 = puVar11;
LAB_1802647fb:
  puVar15 = puVar10 + ((param_2 - lVar9) / 0x60) * 0xc;
  puVar14 = puVar15 + 0xc;
  *(longlong **)(puVar12 + 0x20) = param_1;
  *(undefined8 **)(puVar12 + 0x28) = puVar10;
  *(ulonglong *)(puVar12 + 0x30) = uVar13;
  *(undefined8 **)(puVar12 + 0x38) = puVar14;
  *(undefined8 **)(puVar12 + 0x40) = puVar14;
  *(undefined8 **)(puVar12 + 0x48) = puVar15;
  uVar2 = param_3[2];
  param_3[2] = 0;
  uVar3 = param_3[1];
  param_3[1] = 0;
  uVar4 = *param_3;
  *param_3 = 0;
  *puVar15 = uVar4;
  puVar15[1] = uVar3;
  puVar15[2] = uVar2;
  puVar15[3] = param_3[3];
  *(undefined1 *)(puVar15 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)((longlong)puVar15 + 0x21) = *(undefined1 *)((longlong)param_3 + 0x21);
  *(undefined1 *)((longlong)puVar15 + 0x22) = *(undefined1 *)((longlong)param_3 + 0x22);
  *(undefined1 *)((longlong)puVar15 + 0x23) = *(undefined1 *)((longlong)param_3 + 0x23);
  puVar15[5] = param_3[5];
  puVar15[6] = param_3[6];
  puVar15[7] = param_3[7];
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[8] = param_3[8];
  puVar15[9] = param_3[9];
  param_3[8] = 0;
  param_3[9] = 0;
  puVar15[10] = param_3[10];
  puVar15[0xb] = param_3[0xb];
  *(undefined8 **)(puVar12 + 0x38) = puVar15;
  lVar9 = param_1[1];
  if (param_2 == lVar9) {
    param_2 = *param_1;
    puVar14 = puVar10;
  }
  else {
    lVar9 = *param_1;
    *(undefined8 *)(puVar12 + -8) = 0x180264919;
    FUN_180264b50(lVar9,param_2,puVar10,param_1);
    *(undefined8 **)(puVar12 + 0x38) = puVar10;
    lVar9 = param_1[1];
  }
  *(undefined8 *)(puVar12 + -8) = 0x180264930;
  FUN_180264b50(param_2,lVar9,puVar14,param_1);
  *(undefined8 *)(puVar12 + 0x28) = 0;
  *(undefined8 *)(puVar12 + -8) = 0x18026494a;
  FUN_180266720(param_1,puVar10,uVar1,uVar13);
  *(undefined8 *)(puVar12 + -8) = 0x180264955;
  FUN_180266680(puVar12 + 0x20);
  return puVar15;
}


