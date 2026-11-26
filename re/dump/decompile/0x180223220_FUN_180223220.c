// 0x180223220  FUN_180223220
// size=504 thunk=false
// signature: undefined FUN_180223220()
// status: ok


void FUN_180223220(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  void *_Dst;
  longlong lVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [72];
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  if (0x1642c8590b21642 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  lVar10 = param_1[1];
  lVar1 = *param_1;
  uVar5 = (param_1[2] - lVar1 >> 3) * -0x2c8590b21642c859;
  uVar3 = 0x1642c8590b21642 - (uVar5 >> 1);
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar3 = param_2;
    if ((param_2 <= uVar5) && (uVar3 = uVar5, 0x1642c8590b21642 < uVar5)) {
LAB_180223414:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar5 = uVar3 * 0xb8;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
      puVar9 = auStack_88;
      goto LAB_1802232f8;
    }
    if (uVar5 < 0x1000) {
      _Dst = (void *)FUN_1802d8350(uVar5);
      goto LAB_1802232f8;
    }
    uVar6 = uVar5 + 0x27;
    if (uVar6 <= uVar5) goto LAB_180223414;
  }
  else {
    uVar3 = 0x1642c8590b21642;
    uVar6 = 0xffffffffffffff97;
    uVar5 = 0xffffffffffffff70;
  }
  lVar4 = FUN_1802d8350(uVar6);
  if (lVar4 == 0) {
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
    puVar8 = auStack_80;
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
  puVar9 = puVar8;
LAB_1802232f8:
  lVar10 = lVar10 - lVar1 >> 3;
  pvVar7 = (void *)(lVar10 * 8 + (longlong)_Dst);
  *(longlong **)(puVar9 + 0x20) = param_1;
  *(void **)(puVar9 + 0x28) = _Dst;
  *(ulonglong *)(puVar9 + 0x30) = uVar3;
  *(void **)(puVar9 + 0x38) = pvVar7;
  *(void **)(puVar9 + 0x40) = pvVar7;
  for (lVar10 = param_2 + lVar10 * 0x2c8590b21642c859; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined8 *)(puVar9 + -8) = 0x180223350;
    memset(pvVar7,0,0xb8);
    *(undefined4 *)((longlong)pvVar7 + 0x14) = 0x7fc00000;
    *(undefined4 *)((longlong)pvVar7 + 0x10) = 0x7fc00000;
    *(undefined4 *)((longlong)pvVar7 + 0xc) = 0x7fc00000;
    *(undefined4 *)((longlong)pvVar7 + 8) = 0x7fc00000;
    pvVar7 = (void *)((longlong)pvVar7 + 0xb8);
  }
  *(void **)(puVar9 + 0x40) = pvVar7;
  pvVar7 = (void *)*param_1;
  lVar10 = param_1[1];
  *(undefined8 *)(puVar9 + -8) = 0x180223384;
  memmove(_Dst,pvVar7,lVar10 - (longlong)pvVar7);
  *(undefined8 *)(puVar9 + 0x28) = 0;
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    _Memory = pvVar7;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar7 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar9 = puVar9 + 8;
    }
    *(undefined8 *)(puVar9 + -8) = 0x1802233dd;
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(param_2 * 0xb8 + (longlong)_Dst);
  param_1[2] = uVar5 + (longlong)_Dst;
  return;
}


