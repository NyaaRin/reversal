// 0x18020aa50  FUN_18020aa50
// size=351 thunk=false
// signature: undefined FUN_18020aa50()
// status: ok


ulonglong * FUN_18020aa50(ulonglong *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  puVar9 = auStack_68;
  puVar8 = auStack_68;
  uVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = (longlong)DAT_1803edc28 - (longlong)DAT_1803edc20 >> 3;
  uVar4 = lVar3 * -0x3333333333333333;
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar4 = lVar3 * 8;
    if (uVar4 != 0) {
      if (uVar4 < 0x1000) {
        uVar6 = FUN_1802d8350(uVar4);
        puVar9 = auStack_68;
      }
      else {
        if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar5 = FUN_1802d8350();
        lVar3 = lVar5;
        if (lVar5 == 0) {
          lVar3 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar5 = (*pcVar1)();
          puVar8 = auStack_60;
        }
        uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar3;
        puVar9 = puVar8;
      }
    }
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6 + uVar4;
    puVar2 = DAT_1803edc28;
    *(ulonglong **)(puVar9 + 0x40) = param_1;
    puVar7 = (undefined4 *)*param_1;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined4 **)(puVar9 + 0x28) = puVar7;
    *(undefined4 **)(puVar9 + 0x30) = puVar7;
    *(ulonglong **)(puVar9 + 0x38) = param_1;
    for (puVar10 = DAT_1803edc20; puVar10 != puVar2; puVar10 = puVar10 + 10) {
      *(undefined4 **)(puVar9 + 0x20) = puVar7;
      *puVar7 = *puVar10;
      *(undefined8 *)(puVar9 + -8) = 0x18020ab66;
      FUN_18016d4c0(puVar7 + 2,puVar10 + 2);
      puVar7 = puVar7 + 10;
      *(undefined4 **)(puVar9 + 0x30) = puVar7;
    }
    *(undefined4 **)(puVar9 + 0x28) = puVar7;
    *(undefined4 **)(puVar9 + 0x20) = puVar7;
    param_1[1] = (ulonglong)puVar7;
    *(undefined8 *)(puVar9 + 0x40) = 0;
  }
  return param_1;
}


