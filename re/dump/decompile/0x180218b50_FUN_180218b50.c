// 0x180218b50  FUN_180218b50
// size=313 thunk=false
// signature: undefined FUN_180218b50()
// status: ok


void FUN_180218b50(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  if (param_2 != 0) {
    puVar4 = auStack_68;
    puVar5 = auStack_68;
    if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    param_2 = param_2 * 0x40;
    if (param_2 == 0) {
      uVar3 = 0;
      puVar5 = auStack_68;
    }
    else if (param_2 < 0x1000) {
      uVar3 = FUN_1802d8350(param_2);
    }
    else {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_180012fe0();
      }
      lVar6 = FUN_1802d8350();
      lVar2 = lVar6;
      if (lVar6 == 0) {
        lVar2 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar6 = (*pcVar1)();
        puVar4 = auStack_60;
      }
      uVar3 = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar3 - 8) = lVar2;
      puVar5 = puVar4;
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + param_2;
    *(ulonglong **)(puVar5 + 0x40) = param_1;
    uVar3 = *param_1;
    lVar2 = *param_4;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(ulonglong *)(puVar5 + 0x28) = uVar3;
    *(ulonglong *)(puVar5 + 0x30) = uVar3;
    *(ulonglong **)(puVar5 + 0x38) = param_1;
    for (lVar6 = DAT_1803e9b20; lVar6 != lVar2; lVar6 = lVar6 + 0x40) {
      *(ulonglong *)(puVar5 + 0x20) = uVar3;
      *(undefined8 *)(puVar5 + -8) = 0x180218c30;
      FUN_18016d4c0(uVar3,lVar6);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
      *(undefined8 *)(puVar5 + -8) = 0x180218c44;
      FUN_18020d910(uVar3 + 0x28,lVar6 + 0x28);
      uVar3 = uVar3 + 0x40;
      *(ulonglong *)(puVar5 + 0x30) = uVar3;
    }
    *(ulonglong *)(puVar5 + 0x28) = uVar3;
    *(ulonglong *)(puVar5 + 0x20) = uVar3;
    param_1[1] = uVar3;
    *(undefined8 *)(puVar5 + 0x40) = 0;
  }
  return;
}


