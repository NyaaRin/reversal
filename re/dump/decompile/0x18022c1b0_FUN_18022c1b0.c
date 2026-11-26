// 0x18022c1b0  FUN_18022c1b0
// size=311 thunk=false
// signature: undefined FUN_18022c1b0()
// status: ok


void FUN_18022c1b0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  void *pvVar1;
  code *pcVar2;
  void *_Memory;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 *unaff_RDI;
  undefined8 *puVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = (undefined8 *)*param_1;
  lVar3 = (longlong)param_1[1] - (longlong)puVar6;
  if (param_2 <= (ulonglong)(lVar3 >> 3)) {
    uVar4 = lVar3 + 7U >> 3;
    if ((undefined8 *)param_1[1] < puVar6) {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      return;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = param_3;
      puVar6 = puVar6 + 1;
    }
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_18022c2e2:
                    /* WARNING: Subroutine does not return */
    FUN_180012fe0();
  }
  uVar4 = param_2 * 8;
  if (uVar4 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_18022c23e:
    pvVar1 = (void *)*param_1;
    lVar3 = (longlong)(param_1[2] - (longlong)pvVar1) >> 3;
    if (lVar3 == 0) goto LAB_18022c288;
    _Memory = pvVar1;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(lVar3 * 8)) &&
       (_Memory = *(void **)((longlong)pvVar1 - 8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) goto LAB_18022c279;
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_1802d8350(uVar4);
      goto LAB_18022c23e;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_18022c2e2;
    lVar3 = FUN_1802d8350();
    if (lVar3 != 0) {
      unaff_RDI = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar3;
      goto LAB_18022c23e;
    }
LAB_18022c279:
    pcVar2 = (code *)swi(0x29);
    _Memory = (void *)(*pcVar2)(5);
    puVar5 = auStack_30;
  }
  *(undefined8 *)(puVar5 + -8) = 0x18022c288;
  free(_Memory);
LAB_18022c288:
  puVar6 = unaff_RDI + param_2;
  *param_1 = (ulonglong)unaff_RDI;
  param_1[1] = (ulonglong)puVar6;
  param_1[2] = (ulonglong)puVar6;
  for (; unaff_RDI != puVar6; unaff_RDI = unaff_RDI + 1) {
    *unaff_RDI = param_3;
  }
  return;
}


