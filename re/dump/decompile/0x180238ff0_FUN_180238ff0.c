// 0x180238ff0  FUN_180238ff0
// size=588 thunk=false
// signature: undefined FUN_180238ff0()
// status: ok


undefined8 * FUN_180238ff0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(param_1 + 0x18);
    puVar3 = (undefined8 *)param_2[1];
    lVar9 = param_2[1];
    puVar12 = param_2 + 2;
    if (0xf < (ulonglong)param_2[5]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    uVar8 = 0xcbf29ce484222325;
    uVar7 = 0;
    if (param_2[4] != 0) {
      do {
        uVar8 = (uVar8 ^ *(byte *)((longlong)puVar12 + uVar7)) * 0x100000001b3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulonglong)param_2[4]);
    }
    plVar10 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar8) * 0x10 + lVar2);
    puVar12 = (undefined8 *)*plVar10;
    puVar4 = (undefined8 *)plVar10[1];
    puVar5 = (undefined8 *)*param_2;
    FUN_180233d30();
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    puVar6 = param_2;
    while (puVar11 = puVar5, puVar6 != puVar4) {
      if (puVar11 == param_3) {
        if (puVar12 == param_2) {
          *plVar10 = (longlong)puVar11;
        }
        goto LAB_18023921c;
      }
      puVar5 = (undefined8 *)*puVar11;
      FUN_180233d30();
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      puVar6 = puVar11;
    }
    if (puVar12 == param_2) {
      *plVar10 = lVar1;
      lVar9 = lVar1;
    }
    plVar10[1] = lVar9;
    while (puVar11 != param_3) {
      puVar12 = puVar11 + 2;
      if (0xf < (ulonglong)puVar11[5]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      uVar7 = 0xcbf29ce484222325;
      uVar8 = 0;
      if (puVar11[4] != 0) {
        do {
          uVar7 = (uVar7 ^ *(byte *)((longlong)puVar12 + uVar8)) * 0x100000001b3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)puVar11[4]);
      }
      uVar7 = uVar7 & *(ulonglong *)(param_1 + 0x30);
      plVar10 = (longlong *)(lVar2 + uVar7 * 0x10);
      lVar9 = lVar2 + uVar7 * 0x10;
      puVar12 = *(undefined8 **)(lVar9 + 8);
      puVar4 = (undefined8 *)*puVar11;
      FUN_180233d30();
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      puVar5 = puVar11;
      while (puVar11 = puVar4, puVar5 != puVar12) {
        if (puVar11 == param_3) {
          *plVar10 = (longlong)puVar11;
          goto LAB_18023921c;
        }
        puVar4 = (undefined8 *)*puVar11;
        FUN_180233d30();
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        puVar5 = puVar11;
      }
      *plVar10 = lVar1;
      *(longlong *)(lVar9 + 8) = lVar1;
    }
LAB_18023921c:
    *puVar3 = puVar11;
    puVar11[1] = puVar3;
  }
  return param_3;
}


