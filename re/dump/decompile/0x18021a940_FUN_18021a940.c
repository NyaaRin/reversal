// 0x18021a940  FUN_18021a940
// size=310 thunk=false
// signature: undefined FUN_18021a940()
// status: ok


void FUN_18021a940(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar5 = auStack_38;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  puVar8 = (undefined2 *)0x0;
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    uVar2 = param_3;
    puVar6 = param_1;
    if (param_3 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar6 = 0;
        puVar6 = (undefined8 *)((longlong)puVar6 + 2);
      }
    }
    *(undefined2 *)((longlong)param_1 + param_3 * 2) = 0;
    return;
  }
  uVar2 = param_3 | 7;
  if (uVar2 < 0x7fffffffffffffff) goto LAB_18021a9df;
  uVar4 = 0xfffffffffffffffe;
  puVar5 = auStack_38;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar5 + -8) = 0x18021aa27;
      puVar8 = (undefined2 *)FUN_1802d8350();
      goto LAB_18021aa30;
    }
    if (uVar4 + 0x27 <= uVar4) {
LAB_18021aa6c:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_18021aa71;
      FUN_180012fe0();
    }
    *(undefined8 *)(puVar5 + -8) = 0x18021a9d3;
    lVar3 = FUN_1802d8350(uVar4 + 0x27);
    if (lVar3 != 0) {
      puVar8 = (undefined2 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar8 + -4) = lVar3;
      goto LAB_18021aa30;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
LAB_18021a9df:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_18021aa6c;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
LAB_18021aa30:
      *param_1 = puVar8;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      puVar7 = puVar8;
      for (uVar2 = param_3; uVar4 = param_3, uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      do {
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar8[param_3] = 0;
      return;
    }
  } while( true );
}


