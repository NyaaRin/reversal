// 0x180214990  FUN_180214990
// size=673 thunk=false
// signature: undefined FUN_180214990()
// status: ok


void FUN_180214990(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *_Memory;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar12 = auStack_68;
  puVar14 = (undefined4 *)*param_1;
  uVar9 = (param_1[2] - (longlong)puVar14 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (param_3 <= uVar9) {
    puVar15 = (undefined4 *)param_1[1];
    lVar8 = (longlong)puVar15 - (longlong)puVar14 >> 3;
    if ((ulonglong)(lVar8 * 0x4ec4ec4ec4ec4ec5) < param_3) {
      if (puVar14 != puVar15) {
        lVar2 = *param_2;
        do {
          uVar9 = param_2[1];
          FUN_18021ee00(puVar14,*(undefined8 *)
                                 (*(longlong *)(lVar2 + 8) +
                                 (*(longlong *)(lVar2 + 0x10) - 1U & uVar9) * 8));
          puVar15 = (undefined4 *)param_1[1];
          puVar14 = puVar14 + 0x1a;
          param_2[1] = uVar9 + 1;
        } while (puVar14 != puVar15);
      }
      local_48 = (undefined4)*param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = (undefined4)param_2[1];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      lVar8 = FUN_180221a80(&local_48,param_3 + lVar8 * -0x4ec4ec4ec4ec4ec5,puVar15,param_1);
      param_1[1] = lVar8;
    }
    else {
      lVar8 = *param_2;
      uVar9 = param_2[1];
      puVar15 = puVar14 + param_3 * 0x1a;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        puVar11 = *(undefined4 **)
                   (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar9) * 8);
        plVar10 = (longlong *)(puVar11 + 2);
        *puVar14 = *puVar11;
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar11 + 1);
        if ((longlong *)(puVar14 + 2) != plVar10) {
          if (0xf < *(ulonglong *)(puVar11 + 8)) {
            plVar10 = (longlong *)*plVar10;
          }
          FUN_180212700(puVar14 + 2,plVar10,*(undefined8 *)(puVar11 + 6));
        }
        puVar14[10] = puVar11[10];
        puVar14[0xb] = puVar11[0xb];
        *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
        if (puVar14 + 0xe != puVar11 + 0xe) {
          lVar2 = *(longlong *)(puVar11 + 0xe);
          FUN_180219bd0(puVar14 + 0xe,lVar2,*(longlong *)(puVar11 + 0x10) - lVar2 >> 5);
        }
        FUN_18020ca40(puVar14 + 0x14,puVar11 + 0x14);
        puVar14 = puVar14 + 0x1a;
        uVar9 = uVar9 + 1;
      }
      puVar14 = (undefined4 *)param_1[1];
      for (puVar11 = puVar15; puVar11 != puVar14; puVar11 = puVar11 + 0x1a) {
        FUN_18006b910(puVar11);
      }
      param_1[1] = (longlong)puVar15;
    }
    return;
  }
  if (0x276276276276276 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = 0x276276276276276 - (uVar9 >> 1);
  uVar13 = 0x276276276276276;
  if ((uVar9 < uVar6 || uVar9 - uVar6 == 0) && (uVar13 = uVar9 + (uVar9 >> 1), uVar13 < param_3)) {
    uVar13 = param_3;
  }
  if (puVar14 != (undefined4 *)0x0) {
    puVar15 = (undefined4 *)param_1[1];
    for (; puVar14 != puVar15; puVar14 = puVar14 + 0x1a) {
      FUN_18006b910(puVar14);
    }
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    puVar12 = auStack_68;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar12 = auStack_68,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar12 = auStack_60;
    }
    *(undefined8 *)(puVar12 + -8) = 0x180214a69;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *(undefined8 *)(puVar12 + -8) = 0x180214a7e;
  lVar7 = FUN_18022d9c0();
  lVar8 = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  lVar2 = param_2[1];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_1 = lVar7;
  *(int *)(puVar12 + 0x20) = (int)lVar8;
  *(undefined4 *)(puVar12 + 0x24) = uVar4;
  *(int *)(puVar12 + 0x28) = (int)lVar2;
  *(undefined4 *)(puVar12 + 0x2c) = uVar5;
  param_1[1] = lVar7;
  param_1[2] = uVar13 * 0x68 + lVar7;
  *(undefined8 *)(puVar12 + -8) = 0x180214aac;
  lVar8 = FUN_180221a80(puVar12 + 0x20,param_3,lVar7,param_1);
  param_1[1] = lVar8;
  return;
}


