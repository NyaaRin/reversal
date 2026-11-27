// 0x18020a900  FUN_18020a900
// size=312 thunk=false
// signature: undefined FUN_18020a900()
// status: ok


ulonglong * FUN_18020a900(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  puVar8 = auStack_68;
  puVar7 = auStack_68;
  uVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = param_2[1];
  lVar9 = *param_2;
  uVar5 = lVar1 - lVar9 >> 5;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar5 = uVar5 * 0x20;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        uVar6 = FUN_1802d8350(uVar5);
        puVar8 = auStack_68;
      }
      else {
        if (uVar5 + 0x27 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar3 = FUN_1802d8350();
        lVar4 = lVar3;
        if (lVar3 == 0) {
          lVar4 = 5;
          pcVar2 = (code *)swi(0x29);
          lVar3 = (*pcVar2)();
          puVar7 = auStack_60;
        }
        uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar4;
        puVar8 = puVar7;
      }
    }
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6 + uVar5;
    *(ulonglong **)(puVar8 + 0x40) = param_1;
    uVar6 = *param_1;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    *(undefined8 *)(puVar8 + 0x30) = 0;
    *(undefined8 *)(puVar8 + 0x38) = 0;
    *(ulonglong *)(puVar8 + 0x28) = uVar6;
    *(ulonglong *)(puVar8 + 0x30) = uVar6;
    *(ulonglong **)(puVar8 + 0x38) = param_1;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x20) {
      *(ulonglong *)(puVar8 + 0x20) = uVar6;
      *(undefined8 *)(puVar8 + -8) = 0x18020a9f0;
      FUN_18020e540(uVar6,lVar9);
      uVar6 = uVar6 + 0x20;
      *(ulonglong *)(puVar8 + 0x30) = uVar6;
    }
    *(ulonglong *)(puVar8 + 0x28) = uVar6;
    *(ulonglong *)(puVar8 + 0x20) = uVar6;
    param_1[1] = uVar6;
    *(undefined8 *)(puVar8 + 0x40) = 0;
  }
  return param_1;
}


