// 0x180226370  FUN_180226370
// size=619 thunk=false
// signature: undefined FUN_180226370()
// status: ok


longlong FUN_180226370(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Memory;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  undefined8 local_70;
  
  puVar9 = auStack_98;
  puVar10 = auStack_98;
  local_70 = param_3;
  uVar8 = *param_1;
  lVar6 = ((longlong)(param_1[1] - uVar8) >> 4) * -0x5555555555555555;
  if (lVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar5 = ((longlong)(param_1[2] - uVar8) >> 4) * -0x5555555555555555;
  uVar4 = 0x555555555555555 - (uVar5 >> 1);
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar4 = lVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar12 = uVar4;
    if (uVar4 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 < 0x555555555555556) {
      uVar5 = uVar12 * 0x30;
      if (uVar5 == 0) {
        uVar11 = 0;
        puVar10 = auStack_98;
      }
      else if (uVar5 < 0x1000) {
        uVar11 = FUN_1802d8350(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_1802265d7;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar9 = auStack_90;
        }
        uVar11 = lVar6 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar11 - 8) = lVar6;
        puVar10 = puVar9;
      }
      lVar6 = (longlong)(param_2 - uVar8) / 6 + ((longlong)(param_2 - uVar8) >> 0x3f);
      lVar6 = (lVar6 >> 3) - (lVar6 >> 0x3f);
      puVar7 = (undefined4 *)(lVar6 * 0x30 + uVar11);
      puVar1 = puVar7 + 0xc;
      *(undefined4 **)(puVar10 + 0x20) = puVar1;
      *(ulonglong **)(puVar10 + 0x30) = param_1;
      *(ulonglong *)(puVar10 + 0x38) = uVar11;
      *(ulonglong *)(puVar10 + 0x40) = uVar12;
      *(undefined4 **)(puVar10 + 0x48) = puVar1;
      *(undefined4 **)(puVar10 + 0x50) = puVar1;
      *(undefined4 **)(puVar10 + 0x58) = puVar7;
      puVar1 = *(undefined4 **)(puVar10 + 0x28);
      *puVar7 = *puVar1;
      *(undefined8 *)(puVar10 + -8) = 0x1802264bb;
      FUN_18016d4c0(puVar7 + 2,puVar1 + 2);
      puVar7[10] = puVar1[10];
      *(undefined4 **)(puVar10 + 0x48) = puVar7;
      uVar8 = param_1[1];
      if (param_2 == uVar8) {
        param_2 = *param_1;
        uVar12 = uVar11;
      }
      else {
        uVar8 = *param_1;
        *(undefined8 *)(puVar10 + -8) = 0x1802264e7;
        FUN_180232980(uVar8,param_2,uVar11,param_1);
        *(ulonglong *)(puVar10 + 0x48) = uVar11;
        uVar8 = param_1[1];
        uVar12 = *(ulonglong *)(puVar10 + 0x20);
      }
      *(undefined8 *)(puVar10 + -8) = 0x180226500;
      FUN_180232980(param_2,uVar8,uVar12,param_1);
      *(undefined8 *)(puVar10 + 0x38) = 0;
      uVar8 = *param_1;
      if (uVar8 != 0) {
        uVar12 = param_1[1];
        *(ulonglong *)(puVar10 + 0x20) = uVar8;
        while (uVar8 != uVar12) {
          *(undefined8 *)(puVar10 + -8) = 0x180226529;
          FUN_18020e450(uVar8 + 8);
          uVar8 = uVar8 + 0x30;
          *(ulonglong *)(puVar10 + 0x20) = uVar8;
        }
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar2) >> 4) << 4)) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar10 = puVar10 + 8;
        }
        *(undefined8 *)(puVar10 + -8) = 0x18022658d;
        free(_Memory);
      }
      *param_1 = uVar11;
      param_1[1] = uVar4 * 0x30 + uVar11;
      param_1[2] = uVar5 + uVar11;
      return lVar6 * 0x30 + uVar11;
    }
  }
LAB_1802265d7:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


