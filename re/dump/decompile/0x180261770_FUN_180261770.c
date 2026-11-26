// 0x180261770  FUN_180261770
// size=395 thunk=false
// signature: undefined FUN_180261770()
// status: ok


void FUN_180261770(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  puVar6 = auStack_68;
  puVar7 = auStack_68;
  lVar4 = param_1[1];
  lVar5 = *param_1;
  uVar8 = lVar4 - lVar5 >> 4;
  if (param_2 < uVar8) {
    lVar5 = param_2 * 0x10 + lVar5;
    FUN_18022a400(lVar5,lVar4);
    param_1[1] = lVar5;
  }
  else if (uVar8 < param_2) {
    uVar3 = param_1[2] - lVar5 >> 4;
    if (uVar3 < param_2) {
      if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      if ((0xfffffffffffffff - (uVar3 >> 1) < uVar3) ||
         ((uVar3 = uVar3 + (uVar3 >> 1), uVar9 = param_2, param_2 <= uVar3 &&
          (uVar9 = uVar3, 0xfffffffffffffff < uVar3)))) {
LAB_1802618f1:
                    /* WARNING: Subroutine does not return */
        FUN_180012fe0();
      }
      uVar3 = uVar9 * 0x10;
      if (uVar3 == 0) {
        uVar3 = 0;
        puVar7 = auStack_68;
      }
      else if (uVar3 < 0x1000) {
        uVar3 = FUN_1802d8350();
      }
      else {
        if (uVar3 + 0x27 <= uVar3) goto LAB_1802618f1;
        lVar4 = FUN_1802d8350(uVar3 + 0x27);
        if (lVar4 == 0) {
          pcVar1 = (code *)swi(0x29);
          lVar4 = (*pcVar1)(5);
          puVar6 = auStack_60;
        }
        uVar3 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar4;
        puVar7 = puVar6;
      }
      lVar4 = uVar8 * 0x10 + uVar3;
      *(longlong **)(puVar7 + 0x20) = param_1;
      *(ulonglong *)(puVar7 + 0x28) = uVar3;
      *(ulonglong *)(puVar7 + 0x30) = uVar9;
      *(longlong *)(puVar7 + 0x38) = lVar4;
      *(longlong *)(puVar7 + 0x40) = lVar4;
      *(undefined8 *)(puVar7 + -8) = 0x180261893;
      uVar2 = FUN_180264500(lVar4,param_2 - uVar8,param_1);
      *(undefined8 *)(puVar7 + 0x40) = uVar2;
      lVar4 = param_1[1];
      lVar5 = *param_1;
      *(undefined8 *)(puVar7 + -8) = 0x1802618aa;
      FUN_180265c30(lVar5,lVar4,uVar3,param_1);
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + -8) = 0x1802618c4;
      FUN_180266550(param_1,uVar3,param_2,uVar9);
    }
    else {
      lVar4 = FUN_180264500(lVar4,param_2 - uVar8,param_1);
      param_1[1] = lVar4;
    }
  }
  return;
}


