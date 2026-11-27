// 0x180233770  FUN_180233770
// size=732 thunk=false
// signature: undefined FUN_180233770()
// status: ok


undefined8 * FUN_180233770(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *_Memory;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  puVar10 = auStack_c8;
  puVar9 = auStack_c8;
  lVar7 = (longlong)DAT_1803eb448 - (longlong)DAT_1803eb440 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = (longlong)DAT_1803eb450 - (longlong)DAT_1803eb440 >> 3;
  if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
    lVar13 = (longlong)param_2 - (longlong)DAT_1803eb440;
    uVar1 = lVar7 + 1;
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar11 = uVar1;
    if (uVar1 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 < 0x2000000000000000) {
      uVar5 = uVar11 * 8;
      puVar12 = (undefined8 *)0x0;
      if (uVar5 != 0) {
        if (uVar5 < 0x1000) {
          puVar12 = (undefined8 *)FUN_1802d8350(uVar5);
          puVar10 = auStack_c8;
        }
        else {
          if (uVar5 + 0x27 <= uVar5) goto LAB_180233a48;
          lVar7 = FUN_1802d8350();
          if (lVar7 == 0) {
            pcVar4 = (code *)swi(0x29);
            lVar7 = (*pcVar4)(5);
            puVar9 = auStack_c0;
          }
          puVar12 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          puVar12[-1] = lVar7;
          puVar10 = puVar9;
        }
      }
      puVar2 = puVar12 + (lVar13 >> 3);
      local_40 = puVar2 + 1;
      local_60 = &DAT_1803eb440;
      uVar3 = *param_3;
      *param_3 = 0;
      *puVar2 = uVar3;
      puVar6 = DAT_1803eb448;
      if (param_2 == DAT_1803eb448) {
        local_98 = &DAT_1803eb440;
        local_a8 = puVar12;
        for (puVar8 = DAT_1803eb440; puStack_a0 = local_a8, local_48 = puVar2, puVar8 != puVar6;
            puVar8 = puVar8 + 1) {
          uVar3 = *puVar8;
          *puVar8 = 0;
          *local_a8 = uVar3;
          local_a8 = local_a8 + 1;
        }
      }
      else {
        local_80 = &DAT_1803eb440;
        local_90 = puVar12;
        puVar8 = DAT_1803eb448;
        for (puVar6 = DAT_1803eb440; DAT_1803eb448 = puVar8, puVar6 != param_2; puVar6 = puVar6 + 1)
        {
          uVar3 = *puVar6;
          *puVar6 = 0;
          *local_90 = uVar3;
          local_90 = local_90 + 1;
          puVar8 = DAT_1803eb448;
        }
        local_68 = &DAT_1803eb440;
        local_78 = local_40;
        for (; puStack_88 = local_90, puStack_70 = local_78, local_48 = puVar12, param_2 != puVar8;
            param_2 = param_2 + 1) {
          uVar3 = *param_2;
          *param_2 = 0;
          *local_78 = uVar3;
          local_78 = local_78 + 1;
        }
      }
      puVar8 = DAT_1803eb448;
      local_58 = 0;
      local_50 = uVar11;
      puVar6 = DAT_1803eb440;
      if (DAT_1803eb440 != (undefined8 *)0x0) {
        for (; puVar6 != puVar8; puVar6 = puVar6 + 1) {
          _Memory = (void *)*puVar6;
          if (_Memory != (void *)0x0) {
            *(undefined8 *)(puVar10 + -8) = 0x1802339b2;
            free(_Memory);
          }
        }
        puVar6 = DAT_1803eb440;
        if (0xfff < (ulonglong)(((longlong)DAT_1803eb450 - (longlong)DAT_1803eb440 >> 3) * 8)) {
          puVar6 = (undefined8 *)DAT_1803eb440[-1];
          puVar8 = (undefined8 *)((longlong)DAT_1803eb440 + (-8 - (longlong)puVar6));
          if ((undefined8 *)0x1f < puVar8) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar10 = puVar10 + 8;
            puVar6 = puVar8;
          }
        }
        *(undefined8 *)(puVar10 + -8) = 0x180233a07;
        free(puVar6);
      }
      DAT_1803eb440 = puVar12;
      DAT_1803eb448 = puVar12 + uVar1;
      DAT_1803eb450 = puVar12 + uVar11;
      return puVar2;
    }
  }
LAB_180233a48:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


