// 0x180229690  FUN_180229690
// size=615 thunk=false
// signature: undefined FUN_180229690()
// status: ok


longlong FUN_180229690(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
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
  
  puVar9 = auStack_d8;
  puVar10 = auStack_d8;
  lVar12 = *param_1;
  lVar8 = (param_1[1] - lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar8 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (param_1[2] - lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar6 = 0x276276276276276 - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    local_68 = lVar8 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar6 = local_68;
    if (local_68 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 < 0x276276276276277) {
      uVar7 = uVar6 * 0x68;
      if (uVar7 == 0) {
        uVar7 = 0;
        puVar10 = auStack_d8;
      }
      else if (uVar7 < 0x1000) {
        uVar7 = FUN_1802d8350();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_1802298f3;
        lVar8 = FUN_1802d8350(uVar7 + 0x27);
        if (lVar8 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar8 = (*pcVar1)(5);
          puVar9 = auStack_d0;
        }
        uVar7 = lVar8 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar8;
        puVar10 = puVar9;
      }
      lVar2 = (param_2 - lVar12) / 0x68;
      uVar11 = lVar2 * 0x68 + uVar7;
      local_48 = uVar11 + 0x68;
      *(undefined8 *)(puVar10 + -8) = 0x1802297bb;
      local_60 = param_1;
      local_58 = uVar7;
      local_50 = uVar6;
      local_40 = local_48;
      FUN_180210160(uVar11,param_3);
      lVar12 = param_1[1];
      lVar8 = *param_1;
      local_48 = uVar11;
      local_b8 = uVar7;
      uVar11 = uVar7;
      plVar5 = param_1;
      uVar3 = uVar7;
      if (param_2 == lVar12) {
        for (; local_a0 = plVar5, local_b0 = uVar3, uVar3 = uVar11, uStack_a8 = uVar11,
            uVar4 = local_80, lVar8 != lVar12; lVar8 = lVar8 + 0x68) {
          *(undefined8 *)(puVar10 + -8) = 0x1802297fb;
          FUN_180210160(uVar11,lVar8);
          uVar11 = uVar11 + 0x68;
          uVar3 = local_b0;
          plVar5 = local_a0;
        }
      }
      else {
        for (; local_88 = plVar5, local_98 = uVar11, uStack_90 = local_b8, lVar8 != param_2;
            lVar8 = lVar8 + 0x68) {
          *(undefined8 *)(puVar10 + -8) = 0x18022983d;
          FUN_180210160(local_b8,lVar8);
          local_b8 = local_b8 + 0x68;
          uVar11 = local_98;
          plVar5 = local_88;
        }
        uVar11 = lVar2 * 0x68 + 0x68 + uVar7;
        lVar12 = param_1[1];
        uVar3 = local_b0;
        local_98 = local_b8;
        local_80 = uVar11;
        uVar4 = uVar11;
        uStack_78 = uVar11;
        local_70 = param_1;
        local_48 = uVar7;
        if (param_2 != lVar12) {
          do {
            *(undefined8 *)(puVar10 + -8) = 0x18022989b;
            uStack_78 = uVar11;
            FUN_180210160(uVar11,param_2);
            uVar11 = uVar11 + 0x68;
            param_2 = param_2 + 0x68;
            uVar3 = local_b0;
            uVar4 = uVar11;
            uStack_78 = uVar11;
          } while (param_2 != lVar12);
        }
      }
      local_80 = uVar4;
      local_b0 = uVar3;
      local_58 = 0;
      *(undefined8 *)(puVar10 + -8) = 0x1802298ce;
      local_b8 = uVar11;
      FUN_180238ca0(param_1,uVar7,local_68,uVar6);
      return uVar7 + lVar2 * 0x68;
    }
  }
LAB_1802298f3:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


