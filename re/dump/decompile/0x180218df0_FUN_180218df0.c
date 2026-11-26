// 0x180218df0  FUN_180218df0
// size=780 thunk=false
// signature: undefined FUN_180218df0()
// status: ok


void FUN_180218df0(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 *local_68;
  undefined4 *local_48;
  undefined4 *puStack_40;
  undefined8 *local_38;
  
  puVar3 = DAT_1803fcc40;
  puVar7 = auStack_88;
  uVar4 = DAT_1803fcc48 - (longlong)DAT_1803fcc38 >> 5;
  if (uVar4 < param_3) {
    if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar9 = 0x7ffffffffffffff;
    if ((uVar4 <= 0x7ffffffffffffff - (uVar4 >> 1)) &&
       (uVar9 = uVar4 + (uVar4 >> 1), uVar9 < param_3)) {
      uVar9 = param_3;
    }
    puVar5 = DAT_1803fcc38;
    if (DAT_1803fcc38 != (undefined4 *)0x0) {
      for (; local_68 = puVar5, puVar5 != puVar3; puVar5 = puVar5 + 8) {
        FUN_18020c270(puVar5 + 2);
      }
      puVar3 = DAT_1803fcc38;
      puVar7 = auStack_88;
      if (0xfff < (DAT_1803fcc48 - (longlong)DAT_1803fcc38 & 0xffffffffffffffe0U)) {
        puVar3 = *(undefined4 **)(DAT_1803fcc38 + -2);
        puVar5 = (undefined4 *)((longlong)DAT_1803fcc38 + (-8 - (longlong)puVar3));
        puVar7 = auStack_88;
        if ((undefined4 *)0x1f < puVar5) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar3 = puVar5;
          puVar7 = auStack_80;
        }
      }
      *(undefined8 *)(puVar7 + -8) = 0x180218ed1;
      free(puVar3);
      DAT_1803fcc38 = (undefined4 *)0x0;
      DAT_1803fcc40 = (undefined4 *)0x0;
      DAT_1803fcc48 = 0;
    }
    *(undefined8 *)(puVar7 + -8) = 0x180218ef9;
    FUN_180238ad0(&DAT_1803fcc38,uVar9);
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(undefined4 **)(puVar7 + 0x28) = DAT_1803fcc38;
    *(undefined4 **)(puVar7 + 0x30) = DAT_1803fcc38;
    *(undefined4 ***)(puVar7 + 0x38) = &DAT_1803fcc38;
    puVar3 = DAT_1803fcc38;
    if (param_3 != 0) {
      do {
        *(undefined8 *)(puVar7 + -8) = 0x180218f30;
        FUN_180233130(puVar7 + 0x28,param_2);
        param_2 = param_2 + 8;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      puVar3 = *(undefined4 **)(puVar7 + 0x30);
    }
    *(undefined4 **)(puVar7 + 0x28) = puVar3;
    *(undefined4 **)(puVar7 + 0x20) = puVar3;
  }
  else {
    uVar4 = (longlong)DAT_1803fcc40 - (longlong)DAT_1803fcc38 >> 5;
    if (uVar4 < param_3) {
      if (DAT_1803fcc38 != DAT_1803fcc40) {
        plVar10 = (longlong *)(param_2 + 2);
        puVar3 = DAT_1803fcc38;
        do {
          *puVar3 = *param_2;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
          *(undefined1 *)((longlong)puVar3 + 5) = *(undefined1 *)((longlong)param_2 + 5);
          if ((longlong *)(puVar3 + 2) != plVar10) {
            FUN_180219100(puVar3 + 2,*plVar10,(plVar10[1] - *plVar10 >> 4) * -0x3333333333333333);
          }
          puVar3 = puVar3 + 8;
          param_2 = param_2 + 8;
          plVar10 = plVar10 + 4;
        } while (puVar3 != DAT_1803fcc40);
      }
      local_38 = &DAT_1803fcc38;
      local_48 = DAT_1803fcc40;
      puStack_40 = DAT_1803fcc40;
      for (lVar8 = param_3 - uVar4; puVar3 = puStack_40, lVar8 != 0; lVar8 = lVar8 + -1) {
        FUN_180233130(&local_48,param_2);
        param_2 = param_2 + 8;
      }
    }
    else {
      puVar3 = DAT_1803fcc38 + param_3 * 8;
      puVar5 = puVar3;
      puVar2 = DAT_1803fcc40;
      if (param_3 != 0) {
        plVar10 = (longlong *)(param_2 + 2);
        puVar6 = DAT_1803fcc38;
        do {
          *puVar6 = *param_2;
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_2 + 1);
          *(undefined1 *)((longlong)puVar6 + 5) = *(undefined1 *)((longlong)param_2 + 5);
          if ((longlong *)(puVar6 + 2) != plVar10) {
            FUN_180219100(puVar6 + 2,*plVar10,(plVar10[1] - *plVar10 >> 4) * -0x3333333333333333);
          }
          puVar6 = puVar6 + 8;
          param_2 = param_2 + 8;
          plVar10 = plVar10 + 4;
          param_3 = param_3 - 1;
          puVar2 = DAT_1803fcc40;
        } while (param_3 != 0);
      }
      for (; puVar6 = DAT_1803fcc40, puVar5 != DAT_1803fcc40; puVar5 = puVar5 + 8) {
        DAT_1803fcc40 = puVar2;
        local_68 = puVar5;
        FUN_18020c270(puVar5 + 2);
        puVar2 = DAT_1803fcc40;
        DAT_1803fcc40 = puVar6;
      }
    }
  }
  DAT_1803fcc40 = puVar3;
  return;
}


