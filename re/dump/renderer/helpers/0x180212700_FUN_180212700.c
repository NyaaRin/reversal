// 180212700  FUN_180212700
// signature: undefined FUN_180212700()
// status: ok


longlong * FUN_180212700(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Memory;
  undefined1 *puVar7;
  longlong *_Dst;
  ulonglong uVar8;
  void *unaff_R14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (0xf < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
    return param_1;
  }
  uVar8 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar6 = param_3 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar6;
    if (uVar6 < uVar1) {
      uVar8 = uVar1;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 == 0) {
      unaff_R14 = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar6 = uVar8 + 0x28;
        if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        goto LAB_1802127bb;
      }
      unaff_R14 = (void *)FUN_1802d8350(uVar1);
    }
LAB_1802127de:
    param_1[2] = param_3;
    param_1[3] = uVar8;
    memcpy(unaff_R14,param_2,param_3);
    *(undefined1 *)((longlong)unaff_R14 + param_3) = 0;
    if (uVar2 < 0x10) goto LAB_180212838;
    pvVar3 = (void *)*param_1;
    _Memory = pvVar3;
    puVar7 = auStack_48;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8), puVar7 = auStack_48,
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) goto LAB_180212826;
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_1802127bb:
    lVar5 = FUN_1802d8350(uVar6);
    if (lVar5 != 0) {
      unaff_R14 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_R14 - 8) = lVar5;
      goto LAB_1802127de;
    }
LAB_180212826:
    _Memory = (void *)0x5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
    puVar7 = auStack_40;
  }
  *(undefined8 *)(puVar7 + -8) = 0x180212838;
  free(_Memory);
LAB_180212838:
  *param_1 = (longlong)unaff_R14;
  return param_1;
}


