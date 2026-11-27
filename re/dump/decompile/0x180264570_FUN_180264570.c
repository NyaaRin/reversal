// 0x180264570  FUN_180264570
// size=414 thunk=false
// signature: undefined FUN_180264570()
// status: ok


undefined8 * FUN_180264570(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar7 = auStack_88;
  puVar8 = auStack_88;
  lVar5 = *param_1;
  lVar11 = param_1[1] - lVar5 >> 4;
  if (lVar11 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = param_1[2] - lVar5 >> 4;
  if (uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar11 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (uVar10 < 0x1000000000000000) {
      uVar4 = uVar10 * 0x10;
      if (uVar4 == 0) {
        puVar6 = (undefined8 *)0x0;
        puVar8 = auStack_88;
      }
      else if (uVar4 < 0x1000) {
        puVar6 = (undefined8 *)FUN_1802d8350();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_18026470a;
        lVar11 = FUN_1802d8350(uVar4 + 0x27);
        if (lVar11 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar11 = (*pcVar3)(5);
          puVar7 = auStack_80;
        }
        puVar6 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        puVar6[-1] = lVar11;
        puVar8 = puVar7;
      }
      puVar12 = (undefined8 *)((param_2 - lVar5 & 0xfffffffffffffff0U) + (longlong)puVar6);
      puVar9 = puVar12 + 2;
      *(longlong **)(puVar8 + 0x20) = param_1;
      *(undefined8 **)(puVar8 + 0x28) = puVar6;
      *(ulonglong *)(puVar8 + 0x30) = uVar10;
      *(undefined8 **)(puVar8 + 0x38) = puVar9;
      *(undefined8 **)(puVar8 + 0x40) = puVar9;
      *puVar12 = 0;
      puVar12[1] = 0;
      if (param_3[1] != 0) {
        LOCK();
        piVar2 = (int *)(param_3[1] + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *puVar12 = *param_3;
      puVar12[1] = param_3[1];
      *(undefined8 **)(puVar8 + 0x38) = puVar12;
      lVar5 = param_1[1];
      if (param_2 == lVar5) {
        param_2 = *param_1;
        puVar9 = puVar6;
      }
      else {
        lVar5 = *param_1;
        *(undefined8 *)(puVar8 + -8) = 0x1802646b7;
        FUN_180265c30(lVar5,param_2,puVar6,param_1);
        *(undefined8 **)(puVar8 + 0x38) = puVar6;
        lVar5 = param_1[1];
      }
      *(undefined8 *)(puVar8 + -8) = 0x1802646ce;
      FUN_180265c30(param_2,lVar5,puVar9,param_1);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x1802646e8;
      FUN_180266550(param_1,puVar6,uVar1,uVar10);
      return puVar12;
    }
  }
LAB_18026470a:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


