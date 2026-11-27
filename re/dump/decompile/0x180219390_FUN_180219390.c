// 0x180219390  FUN_180219390
// size=271 thunk=false
// signature: undefined FUN_180219390()
// status: ok


void FUN_180219390(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4)

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
    if (0x276276276276276 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    param_2 = param_2 * 0x68;
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
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(ulonglong *)(puVar5 + 0x20) = uVar3;
    *(ulonglong *)(puVar5 + 0x28) = uVar3;
    *(ulonglong **)(puVar5 + 0x30) = param_1;
    for (lVar6 = DAT_1803e9b08; lVar6 != lVar2; lVar6 = lVar6 + 0x68) {
      *(undefined8 *)(puVar5 + -8) = 0x18021945b;
      FUN_18023cb70(uVar3,lVar6);
      uVar3 = uVar3 + 0x68;
      *(ulonglong *)(puVar5 + 0x28) = uVar3;
    }
    *(ulonglong *)(puVar5 + 0x20) = uVar3;
    *(ulonglong *)(puVar5 + 0x38) = uVar3;
    param_1[1] = uVar3;
    *(undefined8 *)(puVar5 + 0x40) = 0;
  }
  return;
}


