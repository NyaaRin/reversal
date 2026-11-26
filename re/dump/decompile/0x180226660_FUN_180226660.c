// 0x180226660  FUN_180226660
// size=603 thunk=false
// signature: undefined FUN_180226660()
// status: ok


longlong FUN_180226660(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong *local_88;
  ulonglong local_80;
  ulonglong uStack_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40;
  
  puVar10 = auStack_d8;
  puVar11 = auStack_d8;
  lVar12 = *param_1;
  lVar9 = (param_1[1] - lVar12 >> 4) * 0x6db6db6db6db6db7;
  if (lVar9 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (param_1[2] - lVar12 >> 4) * 0x6db6db6db6db6db7;
  uVar6 = 0x249249249249249 - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    local_68 = lVar9 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar6 = local_68;
    if (local_68 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 < 0x24924924924924a) {
      uVar7 = uVar6 * 0x70;
      if (uVar7 == 0) {
        uVar7 = 0;
        puVar11 = auStack_d8;
      }
      else if (uVar7 < 0x1000) {
        uVar7 = FUN_1802d8350();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_1802268b7;
        lVar9 = FUN_1802d8350(uVar7 + 0x27);
        if (lVar9 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar9 = (*pcVar1)(5);
          puVar10 = auStack_d0;
        }
        uVar7 = lVar9 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar9;
        puVar11 = puVar10;
      }
      lVar2 = (param_2 - lVar12) / 0x70;
      uVar8 = lVar2 * 0x70 + uVar7;
      local_48 = uVar8 + 0x70;
      *(undefined8 *)(puVar11 + -8) = 0x18022678f;
      local_60 = param_1;
      local_58 = uVar7;
      local_50 = uVar6;
      local_40 = local_48;
      FUN_1800fa860(uVar8,param_3);
      lVar12 = param_1[1];
      lVar9 = *param_1;
      local_48 = uVar8;
      local_b8 = uVar7;
      uVar8 = uVar7;
      plVar5 = param_1;
      if (param_2 == lVar12) {
        uVar3 = uVar7;
        local_b0 = uVar7;
        uStack_a8 = uVar7;
        local_a0 = param_1;
        uVar4 = local_80;
        if (lVar9 != lVar12) {
          do {
            *(undefined8 *)(puVar11 + -8) = 0x1802267ca;
            uStack_a8 = uVar8;
            FUN_1800fa860(uVar8);
            uVar8 = uVar8 + 0x70;
            lVar9 = lVar9 + 0x70;
            uVar3 = uVar8;
            uStack_a8 = uVar8;
            uVar4 = local_80;
          } while (lVar9 != lVar12);
        }
      }
      else {
        for (; local_88 = plVar5, local_98 = uVar8, uStack_90 = local_b8, lVar9 != param_2;
            lVar9 = lVar9 + 0x70) {
          *(undefined8 *)(puVar11 + -8) = 0x180226809;
          FUN_1800fa860(local_b8);
          local_b8 = local_b8 + 0x70;
          uVar8 = local_98;
          plVar5 = local_88;
        }
        uVar8 = lVar2 * 0x70 + 0x70 + uVar7;
        lVar12 = param_1[1];
        uVar3 = local_b0;
        local_98 = local_b8;
        local_80 = uVar8;
        uVar4 = uVar8;
        uStack_78 = uVar8;
        local_70 = param_1;
        local_48 = uVar7;
        if (param_2 != lVar12) {
          do {
            *(undefined8 *)(puVar11 + -8) = 0x18022685f;
            uStack_78 = uVar8;
            FUN_1800fa860(uVar8,param_2);
            uVar8 = uVar8 + 0x70;
            param_2 = param_2 + 0x70;
            uVar3 = local_b0;
            uVar4 = uVar8;
            uStack_78 = uVar8;
          } while (param_2 != lVar12);
        }
      }
      local_80 = uVar4;
      local_b0 = uVar3;
      local_58 = 0;
      *(undefined8 *)(puVar11 + -8) = 0x180226892;
      local_b8 = uVar8;
      FUN_180237fc0(param_1,uVar7,local_68,uVar6);
      return uVar7 + lVar2 * 0x70;
    }
  }
LAB_1802268b7:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


