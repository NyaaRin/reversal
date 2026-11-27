// 0x180221dd0  FUN_180221dd0
// size=795 thunk=false
// signature: undefined FUN_180221dd0()
// status: ok


ulonglong FUN_180221dd0(undefined8 param_1,void *param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined8 *local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  puVar9 = auStack_d8;
  puVar10 = auStack_d8;
  lVar7 = ((longlong)DAT_1803fcc10 - (longlong)DAT_1803fcc08 >> 4) * -0x71c71c71c71c71c7;
  if (lVar7 == 0x1c71c71c71c71c7) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar3 = (DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) * -0x71c71c71c71c71c7;
  uVar2 = 0x1c71c71c71c71c7 - (uVar3 >> 1);
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    lVar12 = (longlong)param_2 - (longlong)DAT_1803fcc08;
    uVar2 = lVar7 + 1;
    uVar3 = uVar3 + (uVar3 >> 1);
    uVar6 = uVar2;
    if (uVar2 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar6 < 0x1c71c71c71c71c8) {
      uVar3 = uVar6 * 0x90;
      if (uVar3 == 0) {
        uVar11 = 0;
        puVar10 = auStack_d8;
      }
      else if (uVar3 < 0x1000) {
        uVar11 = FUN_1802d8350(uVar3);
      }
      else {
        if (uVar3 + 0x27 <= uVar3) goto LAB_1802220e7;
        lVar7 = FUN_1802d8350();
        if (lVar7 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar7 = (*pcVar1)(5);
          puVar9 = auStack_d0;
        }
        uVar11 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar11 - 8) = lVar7;
        puVar10 = puVar9;
      }
      uVar4 = (lVar12 / 0x90) * 0x90 + uVar11;
      uVar5 = uVar4 + 0x90;
      puVar14 = &DAT_1803fcc08;
      local_68 = &DAT_1803fcc08;
      *(undefined8 *)(puVar10 + -8) = 0x180221f15;
      local_70 = uVar4;
      local_60 = uVar11;
      local_58 = uVar6;
      local_50 = uVar5;
      local_48 = uVar5;
      FUN_18023a090(uVar4,param_3);
      local_50 = uVar4;
      uVar6 = uVar11;
      uVar4 = uVar11;
      pvVar8 = DAT_1803fcc08;
      if (param_2 == DAT_1803fcc10) {
        uVar5 = uVar11;
        pvVar13 = DAT_1803fcc10;
        local_b8 = uVar11;
        uStack_b0 = uVar11;
        local_a8 = puVar14;
        uVar4 = local_88;
        if (DAT_1803fcc08 != DAT_1803fcc10) {
          do {
            *(undefined8 *)(puVar10 + -8) = 0x180221f55;
            uStack_b0 = uVar5;
            FUN_18023a090();
            uVar5 = uVar5 + 0x90;
            pvVar8 = (void *)((longlong)pvVar8 + 0x90);
            uVar6 = uVar5;
            uStack_b0 = uVar5;
            uVar4 = local_88;
          } while (pvVar8 != pvVar13);
        }
      }
      else {
        for (; local_90 = puVar14, local_a0 = uVar4, uStack_98 = uVar6, pvVar8 != param_2;
            pvVar8 = (void *)((longlong)pvVar8 + 0x90)) {
          *(undefined8 *)(puVar10 + -8) = 0x180221f96;
          FUN_18023a090();
          uVar6 = uVar6 + 0x90;
          uVar4 = local_a0;
          puVar14 = local_90;
        }
        *(undefined8 *)(puVar10 + -8) = 0x180221fb9;
        local_a0 = uVar6;
        FUN_180214c90(uVar6,uVar6);
        local_78 = &DAT_1803fcc08;
        pvVar8 = DAT_1803fcc10;
        uVar6 = local_b8;
        local_88 = uVar5;
        uVar4 = uVar5;
        uStack_80 = uVar5;
        local_50 = uVar11;
        if (param_2 != DAT_1803fcc10) {
          do {
            *(undefined8 *)(puVar10 + -8) = 0x180221ffb;
            uStack_80 = uVar5;
            FUN_18023a090(uVar5,param_2);
            uVar5 = uVar5 + 0x90;
            param_2 = (void *)((longlong)param_2 + 0x90);
            uVar6 = local_b8;
            uVar4 = uVar5;
            uStack_80 = uVar5;
          } while (param_2 != pvVar8);
        }
      }
      local_88 = uVar4;
      local_b8 = uVar6;
      *(undefined8 *)(puVar10 + -8) = 0x180222021;
      FUN_180214c90(uVar5,uVar5);
      local_60 = 0;
      if (DAT_1803fcc08 != (void *)0x0) {
        *(undefined8 *)(puVar10 + -8) = 0x180222041;
        FUN_180214c90(DAT_1803fcc08,DAT_1803fcc10);
        pvVar8 = DAT_1803fcc08;
        if ((0xfff < (ulonglong)((DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) << 4)) &&
           (pvVar8 = *(void **)((longlong)DAT_1803fcc08 + -8),
           0x1f < (ulonglong)((longlong)DAT_1803fcc08 + (-8 - (longlong)pvVar8)))) {
          pvVar8 = (void *)0x5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar10 = puVar10 + 8;
        }
        *(undefined8 *)(puVar10 + -8) = 0x18022209e;
        free(pvVar8);
      }
      DAT_1803fcc08 = (void *)uVar11;
      DAT_1803fcc10 = (void *)(uVar2 * 0x90 + uVar11);
      DAT_1803fcc18 = uVar3 + uVar11;
      return local_70;
    }
  }
LAB_1802220e7:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


