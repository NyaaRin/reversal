// 18016d4c0  FUN_18016d4c0
// signature: undefined FUN_18016d4c0()
// status: ok


undefined8 * FUN_18016d4c0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  undefined1 *puVar7;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar7 = auStack_38;
  *param_1 = 0;
  param_1[1] = 0;
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (uVar1 < 0x10) {
    param_1[2] = uVar1;
    param_1[3] = 0xf;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar4 = uVar1 | 0xf;
  if (uVar4 < 0x8000000000000000) goto LAB_18016d55b;
  uVar5 = 0x8000000000000027;
  puVar7 = auStack_38;
  uVar4 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar7 + -8) = 0x18016d54c;
    lVar6 = FUN_1802d8350(uVar5);
    if (lVar6 != 0) break;
    pcVar2 = (code *)swi(0x29);
    uVar4 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_18016d55b:
    if (uVar4 < 0x16) {
      uVar4 = 0x16;
    }
    if (uVar4 == 0xffffffffffffffff) goto LAB_18016d59f;
    if (uVar4 + 1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x18016d59f;
      _Dst = (void *)FUN_1802d8350();
      goto LAB_18016d59f;
    }
    uVar5 = uVar4 + 0x28;
    if (uVar5 <= uVar4 + 1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_18016d5d5;
      FUN_180012fe0();
    }
  }
  _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar6;
LAB_18016d59f:
  *param_1 = _Dst;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(undefined8 *)(puVar7 + -8) = 0x18016d5b9;
  memcpy(_Dst,param_2,uVar1 + 1);
  return param_1;
}


