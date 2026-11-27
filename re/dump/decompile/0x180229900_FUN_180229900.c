// 0x180229900  FUN_180229900
// size=703 thunk=false
// signature: undefined FUN_180229900()
// status: ok


undefined4 * FUN_180229900(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined4 *puStack_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  ulonglong local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  
  puVar8 = auStack_d8;
  puVar9 = auStack_d8;
  lVar5 = (DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar5 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = (DAT_1803e9b18 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar3 = 0x276276276276276 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    lVar6 = param_2 - DAT_1803e9b08;
    uVar3 = lVar5 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar11 = uVar3;
    if (uVar3 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x276276276276277) {
      uVar4 = uVar11 * 0x68;
      if (uVar4 == 0) {
        puVar12 = (undefined4 *)0x0;
        puVar9 = auStack_d8;
      }
      else if (uVar4 < 0x1000) {
        puVar12 = (undefined4 *)FUN_1802d8350();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180229bbb;
        lVar5 = FUN_1802d8350(uVar4 + 0x27);
        if (lVar5 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar5 = (*pcVar1)(5);
          puVar8 = auStack_d0;
        }
        puVar12 = (undefined4 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar12 + -2) = lVar5;
        puVar9 = puVar8;
      }
      puVar7 = puVar12 + (lVar6 / 0x68) * 0x1a;
      puVar10 = puVar7 + 0x1a;
      local_60 = &DAT_1803e9b08;
      *puVar7 = *param_3;
      *(undefined8 *)(puVar9 + -8) = 0x180229a41;
      local_b8 = puVar7;
      local_68 = puVar7;
      local_58 = puVar12;
      local_50 = uVar11;
      local_48 = puVar10;
      local_40 = puVar10;
      FUN_18016d4c0(puVar7 + 2,param_3 + 2);
      *(undefined8 *)(puVar9 + -8) = 0x180229a4f;
      FUN_18020d910(puVar7 + 10,param_3 + 10);
      *(undefined1 *)(puVar7 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      *(undefined1 *)((longlong)puVar7 + 0x41) = *(undefined1 *)((longlong)param_3 + 0x41);
      *(undefined1 *)((longlong)puVar7 + 0x42) = *(undefined1 *)((longlong)param_3 + 0x42);
      *(undefined8 *)(puVar9 + -8) = 0x180229a72;
      FUN_18016d4c0(puVar7 + 0x12,param_3 + 0x12);
      lVar5 = DAT_1803e9b10;
      local_48 = puVar7;
      if (param_2 == DAT_1803e9b10) {
        local_a0 = &DAT_1803e9b08;
        puVar10 = puVar12;
        local_b0 = puVar12;
        for (lVar6 = DAT_1803e9b08; puVar2 = puVar10, puStack_a8 = puVar10, puVar7 = local_80,
            lVar6 != lVar5; lVar6 = lVar6 + 0x68) {
          *(undefined8 *)(puVar9 + -8) = 0x180229abd;
          FUN_180210160(puVar10,lVar6);
          puVar10 = puVar10 + 0x1a;
        }
      }
      else {
        local_88 = &DAT_1803e9b08;
        puVar7 = puVar12;
        local_98 = puVar12;
        lVar6 = DAT_1803e9b10;
        for (lVar5 = DAT_1803e9b08; DAT_1803e9b10 = lVar6, puStack_90 = puVar7, lVar5 != param_2;
            lVar5 = lVar5 + 0x68) {
          *(undefined8 *)(puVar9 + -8) = 0x180229b0b;
          FUN_180210160(puVar7,lVar5);
          puVar7 = puVar7 + 0x1a;
          lVar6 = DAT_1803e9b10;
        }
        local_70 = &DAT_1803e9b08;
        local_b8 = puVar7;
        puVar2 = local_b0;
        local_98 = puVar7;
        local_80 = puVar10;
        puVar7 = puVar10;
        puStack_78 = puVar10;
        local_48 = puVar12;
        if (param_2 != lVar6) {
          do {
            *(undefined8 *)(puVar9 + -8) = 0x180229b5f;
            puStack_78 = puVar10;
            FUN_180210160(puVar10,param_2);
            puVar10 = puVar10 + 0x1a;
            param_2 = param_2 + 0x68;
            puVar2 = local_b0;
            puVar7 = puVar10;
            puStack_78 = puVar10;
          } while (param_2 != lVar6);
        }
      }
      local_80 = puVar7;
      local_b0 = puVar2;
      local_58 = (undefined4 *)0x0;
      *(undefined8 *)(puVar9 + -8) = 0x180229b95;
      local_b8 = puVar10;
      FUN_180238ca0(&DAT_1803e9b08,puVar12,uVar3,uVar11);
      return local_68;
    }
  }
LAB_180229bbb:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


