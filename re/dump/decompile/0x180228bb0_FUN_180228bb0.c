// 0x180228bb0  FUN_180228bb0
// size=548 thunk=false
// signature: undefined FUN_180228bb0()
// status: ok


longlong FUN_180228bb0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  void *pvVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *_Memory;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar7 = auStack_88;
  puVar8 = auStack_88;
  local_68 = param_3;
  uVar6 = *param_1;
  lVar5 = ((longlong)(param_1[1] - uVar6) >> 4) * -0x71c71c71c71c71c7;
  if (lVar5 == 0x1c71c71c71c71c7) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = ((longlong)(param_1[2] - uVar6) >> 4) * -0x71c71c71c71c71c7;
  uVar3 = 0x1c71c71c71c71c7 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar5 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar11 = uVar3;
    if (uVar3 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1c71c71c71c71c8) {
      uVar4 = uVar11 * 0x90;
      if (uVar4 == 0) {
        uVar9 = 0;
        puVar8 = auStack_88;
      }
      else if (uVar4 < 0x1000) {
        uVar9 = FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180228dd0;
        lVar5 = FUN_1802d8350();
        if (lVar5 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar5 = (*pcVar2)(5);
          puVar7 = auStack_80;
        }
        uVar9 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar9 - 8) = lVar5;
        puVar8 = puVar7;
      }
      lVar5 = ((longlong)(param_2 - uVar6) / 0x90) * 0x90 + uVar9;
      uVar10 = lVar5 + 0x90;
      *(ulonglong **)(puVar8 + 0x28) = param_1;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      *(ulonglong *)(puVar8 + 0x38) = uVar11;
      *(ulonglong *)(puVar8 + 0x40) = uVar10;
      *(ulonglong *)(puVar8 + 0x48) = uVar10;
      *(undefined8 *)(puVar8 + -8) = 0x180228ce7;
      FUN_180232e30(-((longlong)(param_2 - uVar6) >> 0x3f),lVar5,*(undefined8 *)(puVar8 + 0x20));
      *(longlong *)(puVar8 + 0x40) = lVar5;
      uVar6 = param_1[1];
      if (param_2 == uVar6) {
        param_2 = *param_1;
        uVar10 = uVar9;
      }
      else {
        uVar6 = *param_1;
        *(undefined8 *)(puVar8 + -8) = 0x180228d0e;
        FUN_180232ed0(uVar6,param_2,uVar9,param_1);
        *(ulonglong *)(puVar8 + 0x40) = uVar9;
        uVar6 = param_1[1];
      }
      *(undefined8 *)(puVar8 + -8) = 0x180228d25;
      FUN_180232ed0(param_2,uVar6,uVar10,param_1);
      *(undefined8 *)(puVar8 + 0x30) = 0;
      uVar6 = *param_1;
      if (uVar6 != 0) {
        uVar11 = param_1[1];
        *(undefined8 *)(puVar8 + -8) = 0x180228d3f;
        FUN_18022a300(uVar6,uVar11);
        pvVar1 = (void *)*param_1;
        _Memory = pvVar1;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar1) >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x180228d95;
        free(_Memory);
      }
      *param_1 = uVar9;
      param_1[1] = uVar3 * 0x90 + uVar9;
      param_1[2] = uVar4 + uVar9;
      return lVar5;
    }
  }
LAB_180228dd0:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


