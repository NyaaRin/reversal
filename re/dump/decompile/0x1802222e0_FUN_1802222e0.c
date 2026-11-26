// 0x1802222e0  FUN_1802222e0
// size=537 thunk=false
// signature: undefined FUN_1802222e0()
// status: ok


longlong FUN_1802222e0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
  lVar5 = ((longlong)(param_1[1] - uVar6) >> 4) * 0x2e8ba2e8ba2e8ba3;
  if (lVar5 == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = ((longlong)(param_1[2] - uVar6) >> 4) * 0x2e8ba2e8ba2e8ba3;
  uVar3 = 0x1745d1745d1745d - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar5 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar9 = uVar3;
    if (uVar3 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x1745d1745d1745e) {
      uVar4 = uVar9 * 0xb0;
      if (uVar4 == 0) {
        uVar10 = 0;
        puVar8 = auStack_88;
      }
      else if (uVar4 < 0x1000) {
        uVar10 = FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1802224f5;
        lVar5 = FUN_1802d8350();
        if (lVar5 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar5 = (*pcVar2)(5);
          puVar7 = auStack_80;
        }
        uVar10 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar5;
        puVar8 = puVar7;
      }
      lVar5 = ((longlong)(param_2 - uVar6) / 0xb0) * 0xb0 + uVar10;
      uVar11 = lVar5 + 0xb0;
      *(ulonglong **)(puVar8 + 0x28) = param_1;
      *(ulonglong *)(puVar8 + 0x30) = uVar10;
      *(ulonglong *)(puVar8 + 0x38) = uVar9;
      *(ulonglong *)(puVar8 + 0x40) = uVar11;
      *(ulonglong *)(puVar8 + 0x48) = uVar11;
      *(undefined8 *)(puVar8 + -8) = 0x18022240e;
      FUN_180231d50(-((longlong)(param_2 - uVar6) >> 0x3f),lVar5,*(undefined8 *)(puVar8 + 0x20));
      *(longlong *)(puVar8 + 0x40) = lVar5;
      uVar6 = param_1[1];
      if (param_2 == uVar6) {
        param_2 = *param_1;
        uVar11 = uVar10;
      }
      else {
        uVar6 = *param_1;
        *(undefined8 *)(puVar8 + -8) = 0x180222435;
        FUN_180231e30(uVar6,param_2,uVar10,param_1);
        *(ulonglong *)(puVar8 + 0x40) = uVar10;
        uVar6 = param_1[1];
      }
      *(undefined8 *)(puVar8 + -8) = 0x18022244c;
      FUN_180231e30(param_2,uVar6,uVar11,param_1);
      *(undefined8 *)(puVar8 + 0x30) = 0;
      uVar6 = *param_1;
      if (uVar6 != 0) {
        uVar9 = param_1[1];
        *(undefined8 *)(puVar8 + -8) = 0x180222466;
        FUN_18022a210(uVar6,uVar9);
        pvVar1 = (void *)*param_1;
        _Memory = pvVar1;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar1) >> 4) * 0x10)) &&
           (_Memory = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1802224bb;
        free(_Memory);
      }
      *param_1 = uVar10;
      param_1[1] = uVar3 * 0xb0 + uVar10;
      param_1[2] = uVar4 + uVar10;
      return lVar5;
    }
  }
LAB_1802224f5:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


