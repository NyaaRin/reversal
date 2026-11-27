// 0x18023e400  FUN_18023e400
// size=371 thunk=false
// signature: undefined FUN_18023e400()
// status: ok


void FUN_18023e400(longlong *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  void *_Src;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  void *_Dst;
  int *_Dst_00;
  longlong lVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar5 = auStack_78;
  puVar6 = auStack_78;
  if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  lVar8 = *param_1;
  uVar4 = param_1[2] - lVar8 >> 2;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) &&
     ((uVar4 = uVar4 + (uVar4 >> 1), uVar7 = param_2, uVar4 < param_2 ||
      (uVar7 = uVar4, uVar4 < 0x4000000000000000)))) {
    lVar1 = param_1[1];
    uVar4 = uVar7 * 4;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
      puVar6 = auStack_78;
    }
    else if (uVar4 < 0x1000) {
      _Dst = (void *)FUN_1802d8350();
    }
    else {
      if (uVar4 + 0x27 <= uVar4) goto LAB_18023e56f;
      lVar3 = FUN_1802d8350(uVar4 + 0x27);
      if (lVar3 == 0) {
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)(5);
        puVar5 = auStack_70;
      }
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
      puVar6 = puVar5;
    }
    lVar8 = lVar1 - lVar8 >> 2;
    _Dst_00 = (int *)((longlong)_Dst + lVar8 * 4);
    *(longlong **)(puVar6 + 0x20) = param_1;
    *(void **)(puVar6 + 0x28) = _Dst;
    *(ulonglong *)(puVar6 + 0x30) = uVar7;
    *(int **)(puVar6 + 0x38) = _Dst_00;
    *(int **)(puVar6 + 0x40) = _Dst_00;
    lVar8 = param_2 - lVar8;
    if (*param_3 == 0) {
      *(undefined8 *)(puVar6 + -8) = 0x18023e506;
      memset(_Dst_00,0,lVar8 * 4);
      _Dst_00 = _Dst_00 + lVar8;
    }
    else {
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        *_Dst_00 = *param_3;
        _Dst_00 = _Dst_00 + 1;
      }
    }
    *(int **)(puVar6 + 0x40) = _Dst_00;
    _Src = (void *)*param_1;
    lVar8 = param_1[1];
    *(undefined8 *)(puVar6 + -8) = 0x18023e535;
    memmove(_Dst,_Src,lVar8 - (longlong)_Src);
    *(undefined8 *)(puVar6 + 0x28) = 0;
    *(undefined8 *)(puVar6 + -8) = 0x18023e54f;
    FUN_180239a50(param_1,_Dst,param_2,uVar7);
    return;
  }
LAB_18023e56f:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


