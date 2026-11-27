// 0x180262470  FUN_180262470
// size=514 thunk=false
// signature: undefined FUN_180262470()
// status: ok


undefined8 * FUN_180262470(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar9 = auStack_88;
  puVar8 = auStack_88;
  lVar6 = *param_1;
  lVar3 = (param_1[1] - lVar6 >> 5) * -0x5555555555555555;
  uVar10 = 0x2aaaaaaaaaaaaaa;
  if (lVar3 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar6 >> 5) * -0x5555555555555555;
  uVar4 = 0x2aaaaaaaaaaaaaa - (uVar5 >> 1);
  puVar7 = (undefined8 *)0x0;
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x2aaaaaaaaaaaaaa < uVar10) {
LAB_18026266e:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar5 = uVar10 * 0x60;
    if (uVar5 == 0) goto LAB_180262555;
    if (uVar5 < 0x1000) {
      puVar7 = (undefined8 *)FUN_1802d8350();
      puVar9 = auStack_88;
      goto LAB_180262555;
    }
    uVar4 = uVar5 + 0x27;
    if (uVar4 <= uVar5) goto LAB_18026266e;
  }
  else {
    uVar4 = 0xffffffffffffffe7;
  }
  lVar3 = FUN_1802d8350(uVar4);
  if (lVar3 == 0) {
    pcVar2 = (code *)swi(0x29);
    lVar3 = (*pcVar2)(5);
    puVar8 = auStack_80;
  }
  puVar7 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
  puVar7[-1] = lVar3;
  puVar9 = puVar8;
LAB_180262555:
  puVar11 = puVar7 + ((param_2 - lVar6) / 0x60) * 0xc;
  puVar12 = puVar11 + 0xc;
  *(longlong **)(puVar9 + 0x20) = param_1;
  *(undefined8 **)(puVar9 + 0x28) = puVar7;
  *(ulonglong *)(puVar9 + 0x30) = uVar10;
  *(undefined8 **)(puVar9 + 0x38) = puVar12;
  *(undefined8 **)(puVar9 + 0x40) = puVar12;
  *(undefined8 **)(puVar9 + 0x48) = puVar11;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 4) = 0x1020001;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  *(undefined8 **)(puVar9 + 0x38) = puVar11;
  lVar6 = param_1[1];
  if (param_2 == lVar6) {
    param_2 = *param_1;
    puVar12 = puVar7;
  }
  else {
    lVar6 = *param_1;
    *(undefined8 *)(puVar9 + -8) = 0x180262615;
    FUN_180264b50(lVar6,param_2,puVar7,param_1);
    *(undefined8 **)(puVar9 + 0x38) = puVar7;
    lVar6 = param_1[1];
  }
  *(undefined8 *)(puVar9 + -8) = 0x18026262c;
  FUN_180264b50(param_2,lVar6,puVar12,param_1);
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined8 *)(puVar9 + -8) = 0x180262642;
  FUN_180266720(param_1,puVar7,uVar1,uVar10);
  *(undefined8 *)(puVar9 + -8) = 0x18026264d;
  FUN_180266680(puVar9 + 0x20);
  return puVar11;
}


