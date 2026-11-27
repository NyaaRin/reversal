// 0x18022ca00  FUN_18022ca00
// size=399 thunk=false
// signature: undefined FUN_18022ca00()
// status: ok


void FUN_18022ca00(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  pvVar5 = DAT_180400a10;
  if (0x249249249249249 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (DAT_180400a18 - (longlong)DAT_180400a08 >> 4) * 0x6db6db6db6db6db7;
  uVar3 = 0x249249249249249 - (uVar7 >> 1);
  if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
    uVar7 = uVar7 + (uVar7 >> 1);
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
  }
  else {
    uVar7 = 0x249249249249249;
  }
  pvVar2 = DAT_180400a08;
  if (DAT_180400a08 == (void *)0x0) {
LAB_18022cb0c:
    if (0x249249249249249 < uVar7) {
LAB_18022cb8b:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar3 = uVar7 * 0x70;
    if (uVar3 == 0) {
      DAT_180400a08 = (void *)0x0;
      goto LAB_18022cb5a;
    }
    if (uVar3 < 0x1000) {
      DAT_180400a08 = (void *)FUN_1802d8350(uVar3);
      goto LAB_18022cb5a;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_18022cb8b;
    lVar4 = FUN_1802d8350();
    lVar6 = lVar4;
    if (lVar4 == 0) goto LAB_18022cb3d;
  }
  else {
    for (; pvVar2 != pvVar5; pvVar2 = (void *)((longlong)pvVar2 + 0x70)) {
      FUN_18020e450((longlong)pvVar2 + 0x28);
      FUN_18020e450((longlong)pvVar2 + 8);
    }
    pvVar5 = DAT_180400a08;
    if ((ulonglong)((DAT_180400a18 - (longlong)DAT_180400a08 >> 4) * 0x10) < 0x1000) {
LAB_18022caf1:
      free(pvVar5);
      DAT_180400a08 = (void *)0x0;
      DAT_180400a10 = (void *)0x0;
      DAT_180400a18 = 0;
      goto LAB_18022cb0c;
    }
    pvVar5 = *(void **)((longlong)DAT_180400a08 + -8);
    uVar3 = (longlong)DAT_180400a08 + (-8 - (longlong)pvVar5);
    if (uVar3 < 0x20) goto LAB_18022caf1;
LAB_18022cb3d:
    lVar6 = 5;
    pcVar1 = (code *)swi(0x29);
    lVar4 = (*pcVar1)();
  }
  DAT_180400a08 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)DAT_180400a08 - 8) = lVar6;
LAB_18022cb5a:
  DAT_180400a10 = DAT_180400a08;
  DAT_180400a18 = (longlong)DAT_180400a08 + uVar3;
  return;
}


