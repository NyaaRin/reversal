// 0x180219bd0  FUN_180219bd0
// size=590 thunk=false
// signature: undefined FUN_180219bd0()
// status: ok


void FUN_180219bd0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  undefined8 *local_40;
  undefined8 *puStack_38;
  longlong *local_30;
  
  puVar7 = auStack_78;
  puVar9 = (undefined8 *)*param_1;
  uVar4 = param_1[2] - (longlong)puVar9 >> 5;
  if (uVar4 < param_3) {
    if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar8 = 0x7ffffffffffffff;
    if ((uVar4 <= 0x7ffffffffffffff - (uVar4 >> 1)) &&
       (uVar8 = uVar4 + (uVar4 >> 1), uVar8 < param_3)) {
      uVar8 = param_3;
    }
    if (puVar9 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[1];
      for (; puVar9 != puVar5; puVar9 = puVar9 + 4) {
        FUN_18020e450(puVar9);
      }
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      puVar7 = auStack_78;
      if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xffffffffffffffe0U)) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar7 = auStack_78,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        pcVar2 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar2)(5);
        puVar7 = auStack_70;
      }
      *(undefined8 *)(puVar7 + -8) = 0x180219c8e;
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(undefined8 *)(puVar7 + -8) = 0x180219ca3;
    lVar3 = FUN_18020dbc0();
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = uVar8 * 0x20 + lVar3;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(longlong *)(puVar7 + 0x20) = lVar3;
    *(longlong *)(puVar7 + 0x28) = lVar3;
    *(longlong **)(puVar7 + 0x30) = param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined8 *)(puVar7 + -8) = 0x180219ceb;
      FUN_18016d4c0(lVar3,param_2);
      lVar3 = lVar3 + 0x20;
      *(longlong *)(puVar7 + 0x28) = lVar3;
      param_2 = param_2 + 4;
    }
    *(longlong *)(puVar7 + 0x20) = lVar3;
    param_1[1] = lVar3;
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    uVar4 = (longlong)puVar5 - (longlong)puVar9 >> 5;
    if (uVar4 < param_3) {
      if (puVar9 != puVar5) {
        do {
          if (puVar9 != param_2) {
            puVar5 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar5 = (undefined8 *)*param_2;
            }
            FUN_180212700(puVar9,puVar5,param_2[2]);
          }
          puVar9 = puVar9 + 4;
          param_2 = param_2 + 4;
          puVar5 = (undefined8 *)param_1[1];
        } while (puVar9 != puVar5);
      }
      local_40 = puVar5;
      local_30 = param_1;
      for (lVar3 = param_3 - uVar4; lVar3 != 0; lVar3 = lVar3 + -1) {
        puStack_38 = puVar5;
        FUN_18016d4c0(puVar5,param_2);
        puVar5 = puVar5 + 4;
        param_2 = param_2 + 4;
      }
    }
    else {
      puVar5 = puVar9 + param_3 * 4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar9 != param_2) {
          puVar6 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar6 = (undefined8 *)*param_2;
          }
          FUN_180212700(puVar9,puVar6,param_2[2]);
        }
        puVar9 = puVar9 + 4;
        param_2 = param_2 + 4;
      }
      puVar9 = (undefined8 *)param_1[1];
      for (puVar6 = puVar5; puVar6 != puVar9; puVar6 = puVar6 + 4) {
        FUN_18020e450(puVar6);
      }
    }
    param_1[1] = (longlong)puVar5;
  }
  return;
}


