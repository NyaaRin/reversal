// 0x18021a7b0  FUN_18021a7b0
// size=384 thunk=false
// signature: undefined FUN_18021a7b0()
// status: ok


longlong * FUN_18021a7b0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  void *_Memory;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  void *unaff_RSI;
  longlong *_Dst;
  void *_Dst_00;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar7 = auStack_58;
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (7 < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    return param_1;
  }
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  _Dst_00 = (void *)0x0;
  uVar5 = param_3 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_18021a926;
    uVar5 = (uVar6 + 1) * 2;
    if (uVar5 != 0) goto LAB_18021a875;
LAB_18021a8ae:
    param_1[3] = uVar6;
    param_1[2] = param_3;
    memcpy(_Dst_00,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst_00) = 0;
    if (uVar2 < 8) goto LAB_18021a91b;
    _Memory = (void *)*param_1;
    if (0xfff < uVar2 * 2 + 2) {
      if ((ulonglong)((longlong)_Memory + (-8 - (longlong)*(void **)((longlong)_Memory + -8))) <
          0x20) {
        free(*(void **)((longlong)_Memory + -8));
        *param_1 = (longlong)_Dst_00;
        return param_1;
      }
      goto LAB_18021a90c;
    }
  }
  else {
    uVar5 = 0xfffffffffffffffe;
LAB_18021a875:
    if (uVar5 < 0x1000) {
      _Dst_00 = (void *)FUN_1802d8350();
      goto LAB_18021a8ae;
    }
    if (uVar5 + 0x27 <= uVar5) {
LAB_18021a926:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar4 = FUN_1802d8350(uVar5 + 0x27);
    _Dst_00 = unaff_RSI;
    if (lVar4 != 0) {
      _Dst_00 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst_00 - 8) = lVar4;
      goto LAB_18021a8ae;
    }
LAB_18021a90c:
    pcVar3 = (code *)swi(0x29);
    _Memory = (void *)(*pcVar3)(5);
    puVar7 = auStack_50;
  }
  *(undefined8 *)(puVar7 + -8) = 0x18021a91b;
  free(_Memory);
LAB_18021a91b:
  *param_1 = (longlong)_Dst_00;
  return param_1;
}


