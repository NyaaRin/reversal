// 0x180215fd0  FUN_180215fd0
// size=508 thunk=false
// signature: undefined FUN_180215fd0()
// status: ok


void FUN_180215fd0(undefined8 param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  size_t _Size;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  puVar6 = auStack_38;
  lVar3 = DAT_1803e9aa8 - (longlong)DAT_1803e9a98 >> 4;
  uVar4 = lVar3 * -0x5555555555555555;
  if (param_3 <= uVar4) {
    lVar3 = (longlong)DAT_1803e9aa0 - (longlong)DAT_1803e9a98 >> 4;
    if (param_3 <= (ulonglong)(lVar3 * -0x5555555555555555)) {
      pvVar7 = (void *)(param_3 * 0x30 + (longlong)DAT_1803e9a98);
      memmove(DAT_1803e9a98,param_2,param_3 * 0x30);
      DAT_1803e9aa0 = pvVar7;
      return;
    }
    memmove(DAT_1803e9a98,param_2,lVar3 * 0x10);
    pvVar7 = DAT_1803e9aa0;
    _Size = (param_3 + lVar3 * 0x5555555555555555) * 0x30;
    memmove(DAT_1803e9aa0,(void *)(lVar3 * 0x10 + (longlong)param_2),_Size);
    DAT_1803e9aa0 = (void *)(_Size + (longlong)pvVar7);
    return;
  }
  if (0x555555555555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar2 = 0x555555555555555 - (uVar4 >> 1);
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar4 < param_3) {
      uVar4 = param_3;
    }
  }
  else {
    uVar4 = 0x555555555555555;
  }
  if (DAT_1803e9a98 == (void *)0x0) {
LAB_18021608c:
    if (0x555555555555555 < uVar4) {
LAB_1802161c2:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar4 = uVar4 * 0x30;
    if (uVar4 == 0) {
      pvVar7 = (void *)0x0;
      puVar6 = auStack_38;
      goto LAB_1802160e6;
    }
    if (uVar4 < 0x1000) {
      pvVar7 = (void *)FUN_1802d8350(uVar4);
      goto LAB_1802160e6;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_1802161c2;
    lVar3 = FUN_1802d8350();
    if (lVar3 == 0) goto LAB_1802160c6;
  }
  else {
    pvVar7 = DAT_1803e9a98;
    if (((ulonglong)(lVar3 << 4) < 0x1000) ||
       (pvVar7 = *(void **)((longlong)DAT_1803e9a98 + -8),
       (ulonglong)((longlong)DAT_1803e9a98 + (-8 - (longlong)pvVar7)) < 0x20)) {
      free(pvVar7);
      DAT_1803e9aa8 = 0;
      DAT_1803e9a98 = (void *)0x0;
      DAT_1803e9aa0 = (void *)0x0;
      goto LAB_18021608c;
    }
LAB_1802160c6:
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar5 = auStack_30;
  }
  pvVar7 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)pvVar7 - 8) = lVar3;
  puVar6 = puVar5;
LAB_1802160e6:
  DAT_1803e9aa8 = uVar4 + (longlong)pvVar7;
  *(undefined8 *)(puVar6 + -8) = 0x180216115;
  DAT_1803e9a98 = pvVar7;
  DAT_1803e9aa0 = pvVar7;
  memmove(pvVar7,param_2,param_3 * 0x30);
  DAT_1803e9aa0 = (void *)(param_3 * 0x30 + (longlong)pvVar7);
  return;
}


