// 0x18020a0c0  FUN_18020a0c0
// size=589 thunk=false
// signature: undefined FUN_18020a0c0()
// status: ok


void FUN_18020a0c0(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  puVar6 = DAT_1803edd38;
  lVar7 = DAT_1803edd40 - (longlong)DAT_1803edd30 >> 2;
  uVar8 = lVar7 * 0x6db6db6db6db6db7;
  if (param_2 <= uVar8) {
    lVar7 = (longlong)DAT_1803edd38 - (longlong)DAT_1803edd30 >> 2;
    puVar3 = DAT_1803edd30;
    if ((ulonglong)(lVar7 * 0x6db6db6db6db6db7) < param_2) {
      for (; puVar3 != puVar6; puVar3 = (undefined8 *)((longlong)puVar3 + 0x1c)) {
        uVar2 = param_3[1];
        *puVar3 = *param_3;
        puVar3[1] = uVar2;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_3 + 2);
        *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_3 + 3);
      }
      for (lVar7 = param_2 + lVar7 * -0x6db6db6db6db6db7; lVar7 != 0; lVar7 = lVar7 + -1) {
        uVar2 = param_3[1];
        *DAT_1803edd38 = *param_3;
        DAT_1803edd38[1] = uVar2;
        uVar2 = *(undefined8 *)((longlong)param_3 + 0x14);
        *(undefined8 *)((longlong)DAT_1803edd38 + 0xc) = *(undefined8 *)((longlong)param_3 + 0xc);
        *(undefined8 *)((longlong)DAT_1803edd38 + 0x14) = uVar2;
        DAT_1803edd38 = (undefined8 *)((longlong)DAT_1803edd38 + 0x1c);
      }
    }
    else {
      DAT_1803edd38 = (undefined8 *)(param_2 * 0x1c + (longlong)DAT_1803edd30);
      puVar6 = DAT_1803edd30;
      if (DAT_1803edd30 != DAT_1803edd38) {
        do {
          uVar2 = param_3[1];
          *puVar6 = *param_3;
          puVar6[1] = uVar2;
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_3 + 2);
          *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_3 + 3);
          puVar6 = (undefined8 *)((longlong)puVar6 + 0x1c);
        } while (puVar6 != DAT_1803edd38);
        return;
      }
    }
    return;
  }
  if (0x924924924924924 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = 0x924924924924924 - (uVar8 >> 1);
  if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
    uVar8 = uVar8 + (uVar8 >> 1);
    if (uVar8 < param_2) {
      uVar8 = param_2;
    }
  }
  else {
    uVar8 = 0x924924924924924;
  }
  if (DAT_1803edd30 == (undefined8 *)0x0) {
LAB_18020a184:
    if (0x924924924924924 < uVar8) {
LAB_18020a303:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar8 = uVar8 * 0x1c;
    if (uVar8 == 0) {
      DAT_1803edd38 = (undefined8 *)0x0;
      goto LAB_18020a1da;
    }
    if (uVar8 < 0x1000) {
      DAT_1803edd38 = (undefined8 *)FUN_1802d8350(uVar8);
      goto LAB_18020a1da;
    }
    if (uVar8 + 0x27 <= uVar8) goto LAB_18020a303;
    lVar5 = FUN_1802d8350();
    lVar7 = lVar5;
    if (lVar5 == 0) goto LAB_18020a1bd;
  }
  else {
    puVar6 = DAT_1803edd30;
    if (((ulonglong)(lVar7 * 4) < 0x1000) ||
       (puVar6 = (undefined8 *)DAT_1803edd30[-1],
       (ulonglong)((longlong)DAT_1803edd30 + (-8 - (longlong)puVar6)) < 0x20)) {
      free(puVar6);
      DAT_1803edd40 = 0;
      DAT_1803edd30 = (undefined8 *)0x0;
      DAT_1803edd38 = (undefined8 *)0x0;
      goto LAB_18020a184;
    }
LAB_18020a1bd:
    lVar7 = 5;
    pcVar1 = (code *)swi(0x29);
    lVar5 = (*pcVar1)();
  }
  DAT_1803edd38 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  DAT_1803edd38[-1] = lVar7;
LAB_18020a1da:
  DAT_1803edd40 = uVar8 + (longlong)DAT_1803edd38;
  DAT_1803edd30 = DAT_1803edd38;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar2 = param_3[1];
    *DAT_1803edd38 = *param_3;
    DAT_1803edd38[1] = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_3 + 0x14);
    *(undefined8 *)((longlong)DAT_1803edd38 + 0xc) = *(undefined8 *)((longlong)param_3 + 0xc);
    *(undefined8 *)((longlong)DAT_1803edd38 + 0x14) = uVar2;
    DAT_1803edd38 = (undefined8 *)((longlong)DAT_1803edd38 + 0x1c);
  }
  return;
}


