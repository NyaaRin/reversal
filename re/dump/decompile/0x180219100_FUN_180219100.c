// 0x180219100  FUN_180219100
// size=650 thunk=false
// signature: undefined FUN_180219100()
// status: ok


void FUN_180219100(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  void *pvVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Memory;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 *local_48;
  
  puVar9 = auStack_68;
  puVar10 = (undefined8 *)*param_1;
  uVar5 = (param_1[2] - (longlong)puVar10 >> 4) * -0x3333333333333333;
  if (param_3 <= uVar5) {
    puVar6 = (undefined8 *)param_1[1];
    lVar4 = (longlong)puVar6 - (longlong)puVar10 >> 4;
    if ((ulonglong)(lVar4 * -0x3333333333333333) < param_3) {
      if (puVar10 != puVar6) {
        do {
          if (puVar10 != param_2) {
            puVar6 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar6 = (undefined8 *)*param_2;
            }
            FUN_180212700(puVar10,puVar6,param_2[2]);
          }
          plVar7 = param_2 + 4;
          if (puVar10 + 4 != plVar7) {
            if (0xf < (ulonglong)param_2[7]) {
              plVar7 = (longlong *)*plVar7;
            }
            FUN_180212700(puVar10 + 4,plVar7,param_2[6]);
          }
          puVar10[8] = param_2[8];
          *(undefined1 *)(puVar10 + 9) = *(undefined1 *)(param_2 + 9);
          puVar10 = puVar10 + 10;
          param_2 = param_2 + 10;
          puVar6 = (undefined8 *)param_1[1];
        } while (puVar10 != puVar6);
      }
      lVar4 = FUN_180229320(param_2,param_3 + lVar4 * 0x3333333333333333,puVar6,param_1);
      param_1[1] = lVar4;
      return;
    }
    puVar6 = puVar10 + param_3 * 10;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (puVar10 != param_2) {
        puVar8 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar8 = (undefined8 *)*param_2;
        }
        FUN_180212700(puVar10,puVar8,param_2[2]);
      }
      plVar7 = param_2 + 4;
      if (puVar10 + 4 != plVar7) {
        if (0xf < (ulonglong)param_2[7]) {
          plVar7 = (longlong *)*plVar7;
        }
        FUN_180212700(puVar10 + 4,plVar7,param_2[6]);
      }
      puVar10[8] = param_2[8];
      *(undefined1 *)(puVar10 + 9) = *(undefined1 *)(param_2 + 9);
      puVar10 = puVar10 + 10;
      param_2 = param_2 + 10;
    }
    puVar10 = (undefined8 *)param_1[1];
    for (puVar8 = puVar6; puVar8 != puVar10; puVar8 = puVar8 + 10) {
      local_48 = puVar8;
      FUN_18020e450(puVar8 + 4);
      FUN_18020e450(puVar8);
    }
    param_1[1] = (longlong)puVar6;
    return;
  }
  if (param_3 < 0x333333333333334) {
    uVar3 = 0x333333333333333 - (uVar5 >> 1);
    uVar11 = 0x333333333333333;
    if ((uVar5 < uVar3 || uVar5 - uVar3 == 0) && (uVar11 = uVar5 + (uVar5 >> 1), uVar11 < param_3))
    {
      uVar11 = param_3;
    }
    if (puVar10 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[1];
      for (; local_48 = puVar10, puVar10 != puVar6; puVar10 = puVar10 + 10) {
        FUN_18020e450(puVar10 + 4);
        FUN_18020e450(puVar10);
      }
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      puVar9 = auStack_68;
      if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar1 >> 4) << 4)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar9 = auStack_68,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        _Memory = (void *)0x5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar9 = auStack_60;
      }
      *(undefined8 *)(puVar9 + -8) = 0x1802191ef;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180219207;
    FUN_180238b60(param_1,uVar11);
    lVar4 = *param_1;
    *(undefined8 *)(puVar9 + -8) = 0x180219218;
    lVar4 = FUN_180229320(param_2,param_3,lVar4,param_1);
    param_1[1] = lVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020cc40();
}


