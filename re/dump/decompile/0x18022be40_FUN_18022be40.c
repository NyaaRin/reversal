// 0x18022be40  FUN_18022be40
// size=300 thunk=false
// signature: undefined FUN_18022be40()
// status: ok


void FUN_18022be40(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Memory;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *unaff_RDI;
  undefined8 local_res18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)((longlong)(param_1[1] - *param_1) >> 3)) {
    FUN_180214d00(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_18022bf67:
                    /* WARNING: Subroutine does not return */
    FUN_180012fe0();
  }
  uVar2 = param_2 * 8;
  if (uVar2 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_18022bed3:
    pvVar3 = (void *)*param_1;
    lVar5 = (longlong)(param_1[2] - (longlong)pvVar3) >> 3;
    if (lVar5 == 0) goto LAB_18022bf1d;
    _Memory = pvVar3;
    puVar6 = auStack_38;
    if ((0xfff < (ulonglong)(lVar5 * 8)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8), puVar6 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) goto LAB_18022bf0e;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_1802d8350(uVar2);
      goto LAB_18022bed3;
    }
    if (uVar2 + 0x27 <= uVar2) goto LAB_18022bf67;
    lVar5 = FUN_1802d8350();
    if (lVar5 != 0) {
      unaff_RDI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar5;
      goto LAB_18022bed3;
    }
LAB_18022bf0e:
    pcVar4 = (code *)swi(0x29);
    _Memory = (void *)(*pcVar4)(5);
    puVar6 = auStack_30;
  }
  *(undefined8 *)(puVar6 + -8) = 0x18022bf1d;
  free(_Memory);
LAB_18022bf1d:
  puVar1 = unaff_RDI + param_2;
  *param_1 = (ulonglong)unaff_RDI;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  for (; unaff_RDI != puVar1; unaff_RDI = unaff_RDI + 1) {
    *unaff_RDI = param_3;
  }
  return;
}


