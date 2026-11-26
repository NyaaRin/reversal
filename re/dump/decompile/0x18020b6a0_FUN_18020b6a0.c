// 0x18020b6a0  FUN_18020b6a0
// size=351 thunk=false
// signature: undefined FUN_18020b6a0()
// status: ok


ulonglong * FUN_18020b6a0(ulonglong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  puVar7 = auStack_68;
  puVar6 = auStack_68;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = DAT_1803edc70 - DAT_1803edc68 >> 3;
  uVar3 = lVar2 * -0x3333333333333333;
  if (uVar3 != 0) {
    if (0x666666666666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar3 = lVar2 * 8;
    if (uVar3 != 0) {
      if (uVar3 < 0x1000) {
        uVar5 = FUN_1802d8350(uVar3);
        puVar7 = auStack_68;
      }
      else {
        if (uVar3 + 0x27 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar4 = FUN_1802d8350();
        lVar2 = lVar4;
        if (lVar4 == 0) {
          lVar2 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar4 = (*pcVar1)();
          puVar6 = auStack_60;
        }
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar2;
        puVar7 = puVar6;
      }
    }
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1[2] = uVar5 + uVar3;
    lVar4 = DAT_1803edc70;
    *(ulonglong **)(puVar7 + 0x40) = param_1;
    uVar3 = *param_1;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(ulonglong *)(puVar7 + 0x28) = uVar3;
    *(ulonglong *)(puVar7 + 0x30) = uVar3;
    *(ulonglong **)(puVar7 + 0x38) = param_1;
    for (lVar2 = DAT_1803edc68; lVar2 != lVar4; lVar2 = lVar2 + 0x28) {
      *(ulonglong *)(puVar7 + 0x20) = uVar3;
      *(undefined8 *)(puVar7 + -8) = 0x18020b7b0;
      FUN_18016d4c0(uVar3,lVar2);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      uVar3 = uVar3 + 0x28;
      *(ulonglong *)(puVar7 + 0x30) = uVar3;
    }
    *(ulonglong *)(puVar7 + 0x28) = uVar3;
    *(ulonglong *)(puVar7 + 0x20) = uVar3;
    param_1[1] = uVar3;
    *(undefined8 *)(puVar7 + 0x40) = 0;
  }
  return param_1;
}


