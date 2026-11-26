// 0x180261900  FUN_180261900
// size=463 thunk=false
// signature: undefined FUN_180261900()
// status: ok


void FUN_180261900(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Memory;
  size_t _Size;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  pvVar7 = (void *)*param_1;
  uVar4 = (param_1[2] - (longlong)pvVar7 >> 4) * -0x5555555555555555;
  if (param_3 <= uVar4) {
    lVar3 = param_1[1] - (longlong)pvVar7 >> 4;
    if ((ulonglong)(lVar3 * -0x5555555555555555) < param_3) {
      memmove(pvVar7,param_2,lVar3 * 0x10);
      pvVar7 = (void *)param_1[1];
      _Size = (param_3 + lVar3 * 0x5555555555555555) * 0x30;
      memmove(pvVar7,(void *)(lVar3 * 0x10 + (longlong)param_2),_Size);
      pvVar7 = (void *)(_Size + (longlong)pvVar7);
    }
    else {
      memmove(pvVar7,param_2,param_3 * 0x30);
      pvVar7 = (void *)((longlong)pvVar7 + param_3 * 0x30);
    }
    goto LAB_180261ab0;
  }
  if (0x555555555555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar2 = 0x555555555555555 - (uVar4 >> 1);
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar4 + (uVar4 >> 1);
    if (uVar4 < param_3) {
      uVar4 = param_3;
    }
  }
  else {
    uVar4 = 0x555555555555555;
  }
  if (pvVar7 == (void *)0x0) {
LAB_1802619cc:
    if (0x555555555555555 < uVar4) {
LAB_180261ac5:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar4 = uVar4 * 0x30;
    if (uVar4 == 0) {
      pvVar7 = (void *)0x0;
      puVar6 = auStack_48;
    }
    else {
      if (0xfff < uVar4) {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180261ac5;
        lVar3 = FUN_1802d8350();
        if (lVar3 == 0) goto LAB_180261a06;
        goto LAB_180261a0d;
      }
      pvVar7 = (void *)FUN_1802d8350(uVar4);
    }
  }
  else {
    _Memory = pvVar7;
    if (((ulonglong)((param_1[2] - (longlong)pvVar7 >> 4) << 4) < 0x1000) ||
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)) < 0x20)) {
      free(_Memory);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_1802619cc;
    }
LAB_180261a06:
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar5 = auStack_40;
LAB_180261a0d:
    pvVar7 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar7 - 8) = lVar3;
    puVar6 = puVar5;
  }
  *param_1 = pvVar7;
  param_1[1] = pvVar7;
  param_1[2] = uVar4 + (longlong)pvVar7;
  *(undefined8 *)(puVar6 + -8) = 0x180261a4b;
  memmove(pvVar7,param_2,param_3 * 0x30);
  pvVar7 = (void *)(param_3 * 0x30 + (longlong)pvVar7);
LAB_180261ab0:
  param_1[1] = pvVar7;
  return;
}


