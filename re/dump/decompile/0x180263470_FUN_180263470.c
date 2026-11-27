// 0x180263470  FUN_180263470
// size=612 thunk=false
// signature: undefined FUN_180263470()
// status: ok


undefined8 * FUN_180263470(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar11 = auStack_88;
  puVar10 = auStack_88;
  lVar8 = *param_1;
  lVar7 = (param_1[1] - lVar8 >> 3) * -0x71c71c71c71c71c7;
  if (lVar7 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar6 = (param_1[2] - lVar8 >> 3) * -0x71c71c71c71c71c7;
  uVar5 = 0x38e38e38e38e38e - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar5 = lVar7 + 1;
    uVar6 = uVar6 + (uVar6 >> 1);
    uVar9 = uVar5;
    if (uVar5 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 < 0x38e38e38e38e38f) {
      uVar6 = uVar9 * 0x48;
      puVar12 = (undefined8 *)0x0;
      if (uVar6 != 0) {
        if (uVar6 < 0x1000) {
          puVar12 = (undefined8 *)FUN_1802d8350(uVar6);
          puVar11 = auStack_88;
        }
        else {
          if (uVar6 + 0x27 <= uVar6) goto LAB_1802636d0;
          lVar7 = FUN_1802d8350();
          if (lVar7 == 0) {
            pcVar4 = (code *)swi(0x29);
            lVar7 = (*pcVar4)(5);
            puVar10 = auStack_80;
          }
          puVar12 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          puVar12[-1] = lVar7;
          puVar11 = puVar10;
        }
      }
      lVar8 = (param_2 - lVar8) / 0x12 + (param_2 - lVar8 >> 0x3f);
      lVar7 = (lVar8 >> 2) - (lVar8 >> 0x3f);
      puVar1 = puVar12 + lVar7 * 9;
      puVar13 = puVar1 + 9;
      *(longlong **)(puVar11 + 0x28) = param_1;
      *(undefined8 **)(puVar11 + 0x30) = puVar12;
      *(ulonglong *)(puVar11 + 0x38) = uVar9;
      *(undefined8 **)(puVar11 + 0x40) = puVar13;
      *(undefined8 **)(puVar11 + 0x48) = puVar13;
      *(undefined8 **)(puVar11 + 0x20) = puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0xf;
      *(undefined1 *)(puVar1 + 5) = 0;
      *(undefined8 **)(puVar11 + 0x40) = puVar1;
      lVar8 = param_1[1];
      if (param_2 == lVar8) {
        param_2 = *param_1;
        puVar13 = puVar12;
      }
      else {
        lVar8 = *param_1;
        *(undefined8 *)(puVar11 + -8) = 0x1802635f0;
        FUN_180264c40(lVar8,param_2,puVar12,param_1);
        *(undefined8 **)(puVar11 + 0x40) = puVar12;
        lVar8 = param_1[1];
      }
      *(undefined8 *)(puVar11 + -8) = 0x180263607;
      FUN_180264c40(param_2,lVar8,puVar13,param_1);
      *(undefined8 *)(puVar11 + 0x30) = 0;
      lVar8 = *param_1;
      if (lVar8 != 0) {
        lVar2 = param_1[1];
        *(longlong *)(puVar11 + 0x20) = lVar8;
        while (lVar8 != lVar2) {
          *(undefined8 *)(puVar11 + -8) = 0x18026362b;
          FUN_18020e450(lVar8 + 0x28);
          lVar8 = lVar8 + 0x48;
          *(longlong *)(puVar11 + 0x20) = lVar8;
        }
        pvVar3 = (void *)*param_1;
        _Memory = pvVar3;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8)) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
          _Memory = (void *)0x5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar11 = puVar11 + 8;
        }
        *(undefined8 *)(puVar11 + -8) = 0x180263693;
        free(_Memory);
      }
      *param_1 = (longlong)puVar12;
      param_1[1] = (longlong)(puVar12 + uVar5 * 9);
      param_1[2] = (longlong)(puVar12 + uVar9 * 9);
      return puVar12 + lVar7 * 9;
    }
  }
LAB_1802636d0:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


