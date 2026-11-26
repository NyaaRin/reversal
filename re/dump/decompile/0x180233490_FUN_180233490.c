// 0x180233490  FUN_180233490
// size=732 thunk=false
// signature: undefined FUN_180233490()
// status: ok


longlong * FUN_180233490(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *plStack_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  
  puVar10 = auStack_c8;
  puVar9 = auStack_c8;
  lVar7 = (longlong)DAT_1803e9ba0 - (longlong)DAT_1803e9b98 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = (longlong)DAT_1803e9ba8 - (longlong)DAT_1803e9b98 >> 3;
  if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
    lVar13 = (longlong)param_2 - (longlong)DAT_1803e9b98;
    uVar1 = lVar7 + 1;
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar11 = uVar1;
    if (uVar1 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 < 0x2000000000000000) {
      uVar5 = uVar11 * 8;
      plVar12 = (longlong *)0x0;
      if (uVar5 != 0) {
        if (uVar5 < 0x1000) {
          plVar12 = (longlong *)FUN_1802d8350(uVar5);
          puVar10 = auStack_c8;
        }
        else {
          if (uVar5 + 0x27 <= uVar5) goto LAB_180233768;
          lVar7 = FUN_1802d8350();
          if (lVar7 == 0) {
            pcVar4 = (code *)swi(0x29);
            lVar7 = (*pcVar4)(5);
            puVar9 = auStack_c0;
          }
          plVar12 = (longlong *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          plVar12[-1] = lVar7;
          puVar10 = puVar9;
        }
      }
      plVar2 = plVar12 + (lVar13 >> 3);
      local_40 = plVar2 + 1;
      local_60 = &DAT_1803e9b98;
      lVar7 = *param_3;
      *param_3 = 0;
      *plVar2 = lVar7;
      plVar6 = DAT_1803e9ba0;
      if (param_2 == DAT_1803e9ba0) {
        local_98 = &DAT_1803e9b98;
        local_a8 = plVar12;
        for (plVar8 = DAT_1803e9b98; plStack_a0 = local_a8, local_48 = plVar2, plVar8 != plVar6;
            plVar8 = plVar8 + 1) {
          lVar7 = *plVar8;
          *plVar8 = 0;
          *local_a8 = lVar7;
          local_a8 = local_a8 + 1;
        }
      }
      else {
        local_80 = &DAT_1803e9b98;
        local_90 = plVar12;
        plVar8 = DAT_1803e9ba0;
        for (plVar6 = DAT_1803e9b98; DAT_1803e9ba0 = plVar8, plVar6 != param_2; plVar6 = plVar6 + 1)
        {
          lVar7 = *plVar6;
          *plVar6 = 0;
          *local_90 = lVar7;
          local_90 = local_90 + 1;
          plVar8 = DAT_1803e9ba0;
        }
        local_68 = &DAT_1803e9b98;
        local_78 = local_40;
        for (; plStack_88 = local_90, plStack_70 = local_78, local_48 = plVar12, param_2 != plVar8;
            param_2 = param_2 + 1) {
          lVar7 = *param_2;
          *param_2 = 0;
          *local_78 = lVar7;
          local_78 = local_78 + 1;
        }
      }
      plVar8 = DAT_1803e9ba0;
      local_58 = 0;
      local_50 = uVar11;
      plVar6 = DAT_1803e9b98;
      if (DAT_1803e9b98 != (longlong *)0x0) {
        for (; plVar6 != plVar8; plVar6 = plVar6 + 1) {
          puVar3 = (undefined8 *)*plVar6;
          if (puVar3 != (undefined8 *)0x0) {
            pcVar4 = *(code **)*puVar3;
            *(undefined8 *)(puVar10 + -8) = 0x1802336d2;
            (*pcVar4)(puVar3,1);
          }
        }
        plVar6 = DAT_1803e9b98;
        if (0xfff < (ulonglong)(((longlong)DAT_1803e9ba8 - (longlong)DAT_1803e9b98 >> 3) * 8)) {
          plVar6 = (longlong *)DAT_1803e9b98[-1];
          plVar8 = (longlong *)((longlong)DAT_1803e9b98 + (-8 - (longlong)plVar6));
          if ((longlong *)0x1f < plVar8) {
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar10 = puVar10 + 8;
            plVar6 = plVar8;
          }
        }
        *(undefined8 *)(puVar10 + -8) = 0x180233727;
        free(plVar6);
      }
      DAT_1803e9b98 = plVar12;
      DAT_1803e9ba0 = plVar12 + uVar1;
      DAT_1803e9ba8 = plVar12 + uVar11;
      return plVar2;
    }
  }
LAB_180233768:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


