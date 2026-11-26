// 0x180224360  FUN_180224360
// size=518 thunk=false
// signature: undefined FUN_180224360()
// status: ok


longlong FUN_180224360(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong local_78;
  undefined8 local_70;
  
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  local_70 = param_3;
  local_78 = param_2;
  uVar7 = *param_1;
  lVar5 = (longlong)(param_1[1] - uVar7) >> 5;
  if (lVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = (longlong)(param_1[2] - uVar7) >> 5;
  if (uVar4 <= 0x7ffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar5 + 1;
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 < 0x800000000000000) {
      uVar4 = uVar6 * 0x20;
      if (uVar4 == 0) {
        uVar10 = 0;
        puVar9 = auStack_98;
      }
      else if (uVar4 < 0x1000) {
        uVar10 = FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180224562;
        lVar5 = FUN_1802d8350();
        if (lVar5 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar5 = (*pcVar3)(5);
          puVar8 = auStack_90;
        }
        uVar10 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar5;
        puVar9 = puVar8;
      }
      lVar12 = (longlong)(param_2 - uVar7) >> 5;
      lVar5 = lVar12 * 0x20 + uVar10;
      uVar7 = lVar5 + 0x20;
      *(ulonglong **)(puVar9 + 0x30) = param_1;
      *(ulonglong *)(puVar9 + 0x38) = uVar10;
      *(ulonglong *)(puVar9 + 0x40) = uVar6;
      *(ulonglong *)(puVar9 + 0x48) = uVar7;
      *(ulonglong *)(puVar9 + 0x50) = uVar7;
      *(longlong *)(puVar9 + 0x58) = lVar5;
      *(undefined8 *)(puVar9 + -8) = 0x180224470;
      FUN_18020e540(lVar5,*(undefined8 *)(puVar9 + 0x28));
      *(longlong *)(puVar9 + 0x48) = lVar5;
      uVar6 = param_1[1];
      uVar11 = *(ulonglong *)(puVar9 + 0x20);
      if (uVar11 == uVar6) {
        uVar11 = *param_1;
        uVar7 = uVar10;
      }
      else {
        uVar6 = *param_1;
        *(undefined8 *)(puVar9 + -8) = 0x18022449d;
        FUN_1802321a0(uVar6,uVar11,uVar10,param_1);
        *(ulonglong *)(puVar9 + 0x48) = uVar10;
        uVar6 = param_1[1];
      }
      *(undefined8 *)(puVar9 + -8) = 0x1802244b4;
      FUN_1802321a0(uVar11,uVar6,uVar7,param_1);
      *(undefined8 *)(puVar9 + 0x38) = 0;
      uVar7 = *param_1;
      if (uVar7 != 0) {
        uVar6 = param_1[1];
        *(ulonglong *)(puVar9 + 0x20) = uVar7;
        while (uVar7 != uVar6) {
          *(undefined8 *)(puVar9 + -8) = 0x1802244db;
          FUN_18021e290(uVar7);
          uVar7 = uVar7 + 0x20;
          *(ulonglong *)(puVar9 + 0x20) = uVar7;
        }
        pvVar2 = (void *)*param_1;
        _Memory = pvVar2;
        if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0)) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          pcVar3 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar3)(5);
          puVar9 = puVar9 + 8;
        }
        *(undefined8 *)(puVar9 + -8) = 0x180224526;
        free(_Memory);
      }
      *param_1 = uVar10;
      param_1[1] = uVar1 * 0x20 + uVar10;
      param_1[2] = uVar4 + uVar10;
      return lVar12 * 0x20 + uVar10;
    }
  }
LAB_180224562:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


