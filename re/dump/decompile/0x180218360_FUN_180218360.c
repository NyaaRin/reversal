// 0x180218360  FUN_180218360
// size=361 thunk=false
// signature: undefined FUN_180218360()
// status: ok


void FUN_180218360(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [80];
  
  puVar8 = auStack_68;
  pvVar4 = (void *)param_1[1];
  lVar3 = *param_1;
  uVar7 = (longlong)pvVar4 - lVar3;
  if (param_2 < uVar7) {
    param_1[1] = lVar3 + param_2;
  }
  else if (uVar7 < param_2) {
    uVar5 = param_1[2] - lVar3;
    if (uVar5 < param_2) {
      uVar9 = 0x7fffffffffffffff;
      if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      uVar6 = uVar5 >> 1;
      if (uVar5 <= 0x7fffffffffffffff - uVar6) goto LAB_1802183eb;
      uVar5 = 0x8000000000000026;
      puVar8 = auStack_68;
      while( true ) {
        *(undefined8 *)(puVar8 + -8) = 0x1802183df;
        lVar3 = FUN_1802d8350(uVar5);
        if (lVar3 != 0) break;
        uVar5 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar8 = puVar8 + 8;
LAB_1802183eb:
        uVar9 = uVar5 + uVar6;
        if (uVar5 + uVar6 < param_2) {
          uVar9 = param_2;
        }
        if (uVar9 == 0) {
          pvVar4 = (void *)0x0;
          goto LAB_180218430;
        }
        if (uVar9 < 0x1000) {
          *(undefined8 *)(puVar8 + -8) = 0x18021842d;
          pvVar4 = (void *)FUN_1802d8350(uVar9);
          goto LAB_180218430;
        }
        uVar5 = uVar9 + 0x27;
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar8 + -8) = &UNK_1802184ca;
          FUN_180012fe0();
        }
      }
      pvVar4 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar4 - 8) = lVar3;
LAB_180218430:
      pvVar1 = (void *)(uVar7 + (longlong)pvVar4);
      *(longlong **)(puVar8 + 0x20) = param_1;
      *(void **)(puVar8 + 0x28) = pvVar4;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      *(void **)(puVar8 + 0x38) = pvVar1;
      *(void **)(puVar8 + 0x40) = pvVar1;
      *(undefined8 *)(puVar8 + -8) = 0x18021845e;
      memset(pvVar1,0,param_2 - uVar7);
      *(ulonglong *)(puVar8 + 0x40) = (longlong)pvVar1 + (param_2 - uVar7);
      pvVar1 = (void *)*param_1;
      lVar3 = param_1[1];
      *(undefined8 *)(puVar8 + -8) = 0x180218475;
      memmove(pvVar4,pvVar1,lVar3 - (longlong)pvVar1);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x18021848f;
      FUN_18022c3f0(param_1,pvVar4,param_2,uVar9);
    }
    else {
      memset(pvVar4,0,param_2 - uVar7);
      param_1[1] = (param_2 - uVar7) + (longlong)pvVar4;
    }
  }
  return;
}


