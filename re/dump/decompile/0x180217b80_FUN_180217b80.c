// 0x180217b80  FUN_180217b80
// size=292 thunk=false
// signature: undefined FUN_180217b80()
// status: ok


void FUN_180217b80(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  if (param_2 != 0) {
    puVar7 = auStack_68;
    puVar8 = auStack_68;
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    param_2 = param_2 * 0x30;
    if (param_2 == 0) {
      uVar4 = 0;
      puVar8 = auStack_68;
    }
    else if (param_2 < 0x1000) {
      uVar4 = FUN_1802d8350(param_2);
    }
    else {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_180012fe0();
      }
      lVar3 = FUN_1802d8350();
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)();
        puVar7 = auStack_60;
      }
      uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar5;
      puVar8 = puVar7;
    }
    *param_1 = uVar4;
    param_1[1] = uVar4;
    param_1[2] = uVar4 + param_2;
    *(ulonglong **)(puVar8 + 0x40) = param_1;
    puVar6 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)*param_4;
    *(undefined8 *)(puVar8 + 0x28) = 0;
    *(undefined8 *)(puVar8 + 0x30) = 0;
    *(undefined8 *)(puVar8 + 0x38) = 0;
    *(undefined4 **)(puVar8 + 0x28) = puVar6;
    *(undefined4 **)(puVar8 + 0x30) = puVar6;
    *(ulonglong **)(puVar8 + 0x38) = param_1;
    for (puVar9 = DAT_1803edc50; puVar9 != puVar1; puVar9 = puVar9 + 0xc) {
      *(undefined4 **)(puVar8 + 0x20) = puVar6;
      *puVar6 = *puVar9;
      *(undefined8 *)(puVar8 + -8) = 0x180217c59;
      FUN_18016d4c0(puVar6 + 2,puVar9 + 2);
      puVar6[10] = puVar9[10];
      puVar6 = puVar6 + 0xc;
      *(undefined4 **)(puVar8 + 0x30) = puVar6;
    }
    *(undefined4 **)(puVar8 + 0x28) = puVar6;
    *(undefined4 **)(puVar8 + 0x20) = puVar6;
    param_1[1] = (ulonglong)puVar6;
    *(undefined8 *)(puVar8 + 0x40) = 0;
  }
  return;
}


